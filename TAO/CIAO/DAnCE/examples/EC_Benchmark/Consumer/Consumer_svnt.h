// $Id$
//
// ****              Code generated by the                 ****
// ****  Component Integrated ACE ORB (CIAO) CIDL Compiler ****
// CIAO has been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// CIDL Compiler has been developed by:
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about CIAO is available at:
//    http://www.dre.vanderbilt.edu/CIAO

#ifndef CIAO_GLUE_SESSION_CONSUMER_SVNT_H
#define CIAO_GLUE_SESSION_CONSUMER_SVNT_H

#include /**/ "ace/pre.h"

#include "ConsumerEC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "ciao/Container_Base.h"
#include "ciao/Servant_Impl_T.h"
#include "ciao/Context_Impl_T.h"
#include "ciao/Home_Servant_Impl_T.h"
#include "ace/Active_Map_Manager_T.h"

#include "ConsumerS.h"

namespace Consumer_Impl
{
  namespace CIAO_GLUE_EC_Benchmark
  {
    class Consumer_Servant;

    class CONSUMER_SVNT_Export Consumer_Context
      : public virtual CIAO::Context_Impl<
          ::EC_Benchmark::CCM_Consumer_Context,
          Consumer_Servant,
          ::EC_Benchmark::Consumer,
          ::EC_Benchmark::Consumer_var
        >
    {
      public:
      // We will allow the servant glue code we generate to access our state.
      friend class Consumer_Servant;

      /// Hack for VC6.
      typedef CIAO::Context_Impl<
          ::EC_Benchmark::CCM_Consumer_Context,
          Consumer_Servant,
          ::EC_Benchmark::Consumer,
          ::EC_Benchmark::Consumer_var
        > ctx_svnt_base;

      Consumer_Context (
      ::Components::CCMHome_ptr home,
      ::CIAO::Session_Container *c,
      Consumer_Servant *sv);

      virtual ~Consumer_Context (void);

      // Operations for Consumer receptacles and event sources,
      // defined in ::EC_Benchmark::CCM_Consumer_Context.

      // CIAO-specific.

      static Consumer_Context *
      _narrow (
      ::Components::SessionContext_ptr p
      ACE_ENV_ARG_DECL_WITH_DEFAULTS);

      protected:
      // Methods that manage this component's connections and consumers.

      protected:
    };
  }

  namespace CIAO_GLUE_EC_Benchmark
  {
    class CONSUMER_SVNT_Export Consumer_Servant
      : public virtual CIAO::Servant_Impl<
          POA_EC_Benchmark::Consumer,
          ::EC_Benchmark::CCM_Consumer,
          ::EC_Benchmark::CCM_Consumer_var,
          Consumer_Context
        >
    {
      public:
      /// Hack for VC6.
      typedef CIAO::Servant_Impl<
          POA_EC_Benchmark::Consumer,
          ::EC_Benchmark::CCM_Consumer,
          ::EC_Benchmark::CCM_Consumer_var,
          Consumer_Context
        > comp_svnt_base;

      Consumer_Servant (
      ::EC_Benchmark::CCM_Consumer_ptr executor,
      ::Components::CCMHome_ptr home,
      ::CIAO::Session_Container *c);

      virtual ~Consumer_Servant (void);

      virtual void
      set_attributes (
      const ::Components::ConfigValues &descr
      ACE_ENV_ARG_DECL);

      // Supported operations.

      // Public port operations.

      // Servant class for the timeout consumer.
      class CONSUMER_SVNT_Export TimeOutConsumer_timeout_Servant
      : public virtual POA_EC_Benchmark::TimeOutConsumer,
      public virtual PortableServer::RefCountServantBase
      {
        public:
        TimeOutConsumer_timeout_Servant (
        ::EC_Benchmark::CCM_Consumer_ptr executor,
        ::EC_Benchmark::CCM_Consumer_Context_ptr c);

        virtual ~TimeOutConsumer_timeout_Servant (void);

        virtual void
        push_TimeOut (
        ::EC_Benchmark::TimeOut *evt
        ACE_ENV_ARG_DECL_WITH_DEFAULTS)
        ACE_THROW_SPEC ((CORBA::SystemException));

        // Inherited from ::Components::EventConsumerBase.
        virtual void
        push_event (::Components::EventBase *ev
        ACE_ENV_ARG_DECL_WITH_DEFAULTS)
        ACE_THROW_SPEC ((
        ::CORBA::SystemException,
        ::Components::BadEventType));

        // Get component implementation.
        virtual CORBA::Object_ptr
        _get_component (
        ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
        ACE_THROW_SPEC ((CORBA::SystemException));

        protected:
        ::EC_Benchmark::CCM_Consumer_var
        executor_;

        ::EC_Benchmark::CCM_Consumer_Context_var
        ctx_;
      };

      virtual ::EC_Benchmark::TimeOutConsumer_ptr
      get_consumer_timeout (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException));

      // Component attribute operations.

      // Operations for Receptacles interface.

      virtual ::Components::Cookie *
      connect (
      const char *name,
      CORBA::Object_ptr connection
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((
      ::CORBA::SystemException,
      ::Components::InvalidName,
      ::Components::InvalidConnection,
      ::Components::AlreadyConnected,
      ::Components::ExceededConnectionLimit));

      virtual CORBA::Object_ptr
      disconnect (
      const char *name,
      ::Components::Cookie *ck
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((
      ::CORBA::SystemException,
      ::Components::InvalidName,
      ::Components::InvalidConnection,
      ::Components::CookieRequired,
      ::Components::NoConnection));

      // Operations for Events interface.

      virtual ::Components::Cookie *
      subscribe (
      const char *publisher_name,
      ::Components::EventConsumerBase_ptr subscriber
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((
      ::CORBA::SystemException,
      ::Components::InvalidName,
      ::Components::InvalidConnection,
      ::Components::ExceededConnectionLimit));

      virtual ::Components::EventConsumerBase_ptr
      unsubscribe (
      const char *publisher_name,
      ::Components::Cookie *ck
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((
      ::CORBA::SystemException,
      ::Components::InvalidName,
      ::Components::InvalidConnection));

      virtual void
      connect_consumer (
      const char *emitter_name,
      ::Components::EventConsumerBase_ptr consumer
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((
      ::CORBA::SystemException,
      ::Components::InvalidName,
      ::Components::AlreadyConnected,
      ::Components::InvalidConnection));

      // CIAO specific operations on the servant 
      CORBA::Object_ptr
      get_facet_executor (const char *name
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((
      ::CORBA::SystemException));

      private:

      ::EC_Benchmark::TimeOutConsumer_var
      consumes_timeout_;

      private:

      void
      populate_port_tables (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException));

      ::Components::EventConsumerBase_ptr
      get_consumer_timeout_i (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException));
    };
  }

  namespace CIAO_GLUE_EC_Benchmark
  {
    class CONSUMER_SVNT_Export ConsumerHome_Servant
      : public virtual CIAO::Home_Servant_Impl<
          POA_EC_Benchmark::ConsumerHome,
          ::EC_Benchmark::CCM_ConsumerHome,
          ::EC_Benchmark::CCM_ConsumerHome_var,
          ::EC_Benchmark::Consumer,
          ::EC_Benchmark::Consumer_var,
          ::EC_Benchmark::CCM_Consumer,
          ::EC_Benchmark::CCM_Consumer_var,
          Consumer_Servant
        >
    {
      public:
      /// Hack for VC6.
      typedef CIAO::Home_Servant_Impl<
          POA_EC_Benchmark::ConsumerHome,
          ::EC_Benchmark::CCM_ConsumerHome,
          ::EC_Benchmark::CCM_ConsumerHome_var,
          ::EC_Benchmark::Consumer,
          ::EC_Benchmark::Consumer_var,
          ::EC_Benchmark::CCM_Consumer,
          ::EC_Benchmark::CCM_Consumer_var,
          Consumer_Servant
        > home_svnt_base;

      ConsumerHome_Servant (
      ::EC_Benchmark::CCM_ConsumerHome_ptr exe,
      ::CIAO::Session_Container *c);

      virtual ~ConsumerHome_Servant (void);

      // Home operations.

      // Home factory and finder operations.

      // Attribute operations.
    };

    extern "C" CONSUMER_SVNT_Export ::PortableServer::Servant
    createConsumerHome_Servant (
    ::Components::HomeExecutorBase_ptr p,
    CIAO::Session_Container *c
    ACE_ENV_ARG_DECL_WITH_DEFAULTS);
  }
}

#include /**/ "ace/post.h"

#endif /* CIAO_GLUE_SESSION_CONSUMER_SVNT_H */

