// $Id$

// ===========================================================
//
// = LIBRARY
//    TAO/tests/Simple/chat
//
// = FILENAME
//    Broadcaster_i.cpp
//
// = DESCRIPTION
//   Implementation of the Broadcaster_i class. This class is the servant
//   object for the chat server.
//
// = AUTHOR
//    Pradeep Gore <pradeep@cs.wustl.edu>
//
// ===========================================================

#include "Broadcaster_i.h"

int
Broadcaster_i::Receiver_Data::operator == (const Broadcaster_i::Receiver_Data &receiver_data) const
{
  // The <_is_equivalent> function checks if the _var and _ptr objects
  // are the same.  NOTE: this call might not behave well on other
  // ORBs since <_is_equivalent> isn't guaranteed to differentiate
  // object references.
  return this->receiver_->_is_equivalent (receiver_data.receiver_.in ())
    && this->nickname_ == receiver_data.nickname_;
}

Broadcaster_i::Broadcaster_i (void)
{
  // No-op
}

Broadcaster_i::~Broadcaster_i (void)
{
  // No-op
}

void
Broadcaster_i::add (Receiver_ptr receiver,
                    const char *nickname,
                    CORBA::Environment &TAO_TRY_ENV)
  ACE_THROW_SPEC ((
      CORBA::SystemException,
      Broadcaster::CannotAdd
    ))
{
  Broadcaster_i::Receiver_Data receiver_data;

  // Store the client information.
  receiver_data.receiver_ = Receiver::_duplicate (receiver);
  receiver_data.nickname_ = nickname;

  // Insert the Receiver reference to the set
  if (receiver_set_.insert (receiver_data) == -1)
    TAO_TRY_ENV.exception (new Broadcaster::CannotAdd
                           ("failed to add to the receiver set\n"));

  // Tell everyone which person just joined the chat.
  ACE_CString broadcast_string =
    ACE_CString ("**** ")
    + ACE_CString (nickname)
    + ACE_CString (" has joined the chat ****\n");

  TAO_TRY
    {
      this->broadcast (broadcast_string.fast_rep (),
		       TAO_TRY_ENV);
      TAO_CHECK_ENV;
    }
  TAO_CATCHANY
    {
      TAO_TRY_ENV.print_exception ("Broadcaster_i::add\t\n");
    }
  TAO_ENDTRY;
}

void
Broadcaster_i::remove (Receiver_ptr receiver,
                       CORBA::Environment &TAO_TRY_ENV)
  ACE_THROW_SPEC ((
      CORBA::SystemException,
      Broadcaster::CannotRemove
    ))
{
  Broadcaster_i::Receiver_Data receiver_data_to_remove;

  // Go through the list of <Receiver_Data> to find which registered client
  // wants to be removed.
  for (RECEIVER_SET_ITERATOR iter = this->receiver_set_.begin ();
       iter != this->receiver_set_.end ();
       iter++)
    {
      // The <_is_equivalent> function checks if the _var and _ptr objects
      // are the same.  NOTE: this call might not behave well on other
      // ORBs since <_is_equivalent> isn't guaranteed to differentiate
      // object references.
      if ((*iter).receiver_.in ()->_is_equivalent (receiver) == 1)
        {
          receiver_data_to_remove = *iter;
          break;
        }
    }

  // Remove the reference from our list.
  if (this->receiver_set_.remove (receiver_data_to_remove) == -1)
    TAO_TRY_ENV.exception(new Broadcaster::CannotRemove
                          ("failed to remove from receiver set\n"));

  // Tell everyone, which person left the chat.
  ACE_CString broadcast_string = "**** "
    + receiver_data_to_remove.nickname_
    + " left the chat"
    + " ****\n";

  this->broadcast (broadcast_string.fast_rep (),
                   TAO_TRY_ENV);
}

void
Broadcaster_i::say (Receiver_ptr receiver,
                    const char *text,
                    CORBA::Environment &T)
 ACE_THROW_SPEC ((
      CORBA::SystemException
    ))
{
  TAO_TRY
    {
      ACE_CString sender_nickname ("Sender Unknown");

      // Find the nickname for this receiver.

      for (RECEIVER_SET_ITERATOR iter = this->receiver_set_.begin ();
           iter != this->receiver_set_.end ();
           iter++)
        {
           // The <_is_equivalent> function checks if the _var and
           // _ptr objects are the same.  NOTE: this call might not
           // behave well on other ORBs since <_is_equivalent> isn't
           // guaranteed to differentiate object references.
          if ((*iter).receiver_.in ()->_is_equivalent (receiver) == 1)
	    sender_nickname = (*iter).nickname_;
        }

      // Broadcast the message to all registered clients
      ACE_CString broadcast_string ("[" + sender_nickname + "] " + text);

      this->broadcast (broadcast_string.fast_rep (),
                       TAO_TRY_ENV);
      TAO_CHECK_ENV;
    }
  TAO_CATCHANY
    {
      TAO_TRY_ENV.print_exception ("Broadcaster_i::say\t\n");
    }
  TAO_ENDTRY;
}

void
Broadcaster_i::broadcast (const char *text,
                          CORBA::Environment &)
{
  // Broadcast the message to all registered clients.

  for (RECEIVER_SET_ITERATOR iter = this->receiver_set_.begin ();
       iter != this->receiver_set_.end ();
       iter++)
    {
      TAO_TRY
        {
          (*iter).receiver_->message (text,
                                      TAO_TRY_ENV);
	  TAO_CHECK_ENV;
        }
      TAO_CATCHANY
        {
          TAO_TRY_ENV.print_exception ("Failed to send a message\n");
        }
      TAO_ENDTRY;
    }
}

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)
template class ACE_Unbounded_Set<Broadcaster_i::Receiver_Data>;
template class ACE_Unbounded_Set_Iterator<Broadcaster_i::Receiver_Data>;
template class ACE_Node<Broadcaster_i::Receiver_Data>;
#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)
#pragma instantiate ACE_Unbounded_Set<Broadcaster_i::Receiver_Data>
#pragma instantiate ACE_Unbounded_Set_Iterator<Broadcaster_i::Receiver_Data>
#pragma instantiate ACE_Node<Broadcaster_i::Receiver_Data>
#endif /* ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA */
