// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/String_TypeCode_Static.h"
#include "TypeCodeFactoryC.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// TAO_IDL - Generated from
// be\be_visitor_typecode/objref_typecode.cpp:76

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_CORBA_TypeCodeFactory (
    CORBA::tk_local_interface,
    "IDL:omg.org/CORBA/TypeCodeFactory:1.0",
    "TypeCodeFactory");

namespace CORBA
{
  ::CORBA::TypeCode_ptr const _tc_TypeCodeFactory =
    &_tao_tc_CORBA_TypeCodeFactory;
}



// TAO_IDL - Generated from
// be\be_visitor_interface/any_op_cs.cpp:50

namespace TAO
{
  template<>
  CORBA::Boolean
  Any_Impl_T<CORBA::TypeCodeFactory>::to_object (
      CORBA::Object_ptr &_tao_elem
    ) const
  {
    _tao_elem = CORBA::Object::_duplicate (this->value_);
    return true;
  }
}

namespace TAO
{
  template<>
  CORBA::Boolean
  Any_Impl_T<CORBA::TypeCodeFactory>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  CORBA::Boolean
  Any_Impl_T<CORBA::TypeCodeFactory>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    CORBA::TypeCodeFactory_ptr _tao_elem
  )
{
  CORBA::TypeCodeFactory_ptr _tao_objptr =
    CORBA::TypeCodeFactory::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    CORBA::TypeCodeFactory_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<CORBA::TypeCodeFactory>::insert (
      _tao_any,
      CORBA::TypeCodeFactory::_tao_any_destructor,
      CORBA::_tc_TypeCodeFactory,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    CORBA::TypeCodeFactory_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<CORBA::TypeCodeFactory>::extract (
        _tao_any,
        CORBA::TypeCodeFactory::_tao_any_destructor,
        CORBA::_tc_TypeCodeFactory,
        _tao_elem
      );
}

TAO_END_VERSIONED_NAMESPACE_DECL
