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

#ifndef CIAO_GLUE_SESSION_BMDEVICE_SVNT_H
#define CIAO_GLUE_SESSION_BMDEVICE_SVNT_H

#include /**/ "ace/pre.h"

#include "BMDeviceEC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "ciao/Container_Base.h"
#include "ciao/Servant_Impl_T.h"
#include "ciao/Context_Impl_T.h"
#include "ciao/Home_Servant_Impl_T.h"
#include "ace/Active_Map_Manager_T.h"

#include "../BasicSPS.h"
#include "BMDeviceS.h"

namespace BMDevice_Impl
{
  namespace CIAO_GLUE_BasicSP
  {
    template <typename T>
    class ReadData_Servant_T
    : public virtual POA_BasicSP::ReadData,
    public virtual PortableServer::RefCountServantBase
    {
      public:
      ReadData_Servant_T (
      ::BasicSP::CCM_ReadData_ptr executor,
      ::Components::CCMContext_ptr ctx);

      virtual ~ReadData_Servant_T (void);

      virtual char *
      get_data (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException));

      // Get component implementation.
      virtual CORBA::Object_ptr
      _get_component (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException));


      protected:
      // Facet executor.
      ::BasicSP::CCM_ReadData_var executor_;

      // Context object.
      ::Components::CCMContext_var ctx_;
    };

    typedef BMDEVICE_SVNT_Export ReadData_Servant_T<int> ReadData_Servant;
  }

  namespace CIAO_GLUE_BasicSP
  {
    class BMDevice_Servant;

    class BMDEVICE_SVNT_Export BMDevice_Context
      : public virtual CIAO::Context_Impl<
          ::BasicSP::CCM_BMDevice_Context,
          BMDevice_Servant,
          ::BasicSP::BMDevice,
          ::BasicSP::BMDevice_var
        >
    {
      public:
      // We will allow the servant glue code we generate to access our state.
      friend class BMDevice_Servant;

      /// Hack for VC6.
      typedef CIAO::Context_Impl<
          ::BasicSP::CCM_BMDevice_Context,
          BMDevice_Servant,
          ::BasicSP::BMDevice,
          ::BasicSP::BMDevice_var
        > ctx_svnt_base;

      BMDevice_Context (
      ::Components::CCMHome_ptr home,
      ::CIAO::Session_Container *c,
      BMDevice_Servant *sv);

      virtual ~BMDevice_Context (void);

      // Operations for BMDevice receptacles and event sources,
      // defined in ::BasicSP::CCM_BMDevice_Context.

      virtual void
      push_data_available (
      ::BasicSP::DataAvailable *ev
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException));

      // CIAO-specific.

      static BMDevice_Context *
      _narrow (
      ::Components::SessionContext_ptr p
      ACE_ENV_ARG_DECL_WITH_DEFAULTS);

      protected:
      // Methods that manage this component's connections and consumers.

      virtual ::Components::Cookie *
      subscribe_data_available (
      ::BasicSP::DataAvailableConsumer_ptr c
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((
      ::CORBA::SystemException,
      ::Components::ExceededConnectionLimit));

      virtual ::BasicSP::DataAvailableConsumer_ptr
      unsubscribe_data_available (
      ::Components::Cookie *ck
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((
      ::CORBA::SystemException,
      ::Components::InvalidConnection));

      protected:
      ACE_Active_Map_Manager<
      ::BasicSP::DataAvailableConsumer_var>
      ciao_publishes_data_available_map_;
    };
  }

  namespace CIAO_GLUE_BasicSP
  {
    class BMDEVICE_SVNT_Export BMDevice_Servant
      : public virtual CIAO::Servant_Impl<
          POA_BasicSP::BMDevice,
          ::BasicSP::CCM_BMDevice,
          ::BasicSP::CCM_BMDevice_var,
          BMDevice_Context
        >
    {
      public:
      /// Hack for VC6.
      typedef CIAO::Servant_Impl<
          POA_BasicSP::BMDevice,
          ::BasicSP::CCM_BMDevice,
          ::BasicSP::CCM_BMDevice_var,
          BMDevice_Context
        > comp_svnt_base;

      BMDevice_Servant (
      ::BasicSP::CCM_BMDevice_ptr executor,
      ::Components::CCMHome_ptr home,
      ::CIAO::Session_Container *c);

      virtual ~BMDevice_Servant (void);

      virtual void
      set_attributes (
      const ::Components::ConfigValues &descr
      ACE_ENV_ARG_DECL);

      // Supported operations.
      /*
      virtual void
      component_UUID (
      const char * new_component_UUID
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException));

      virtual CIAO::CONNECTION_ID
      component_UUID (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException));
*/
      // Public port operations.

      virtual ::BasicSP::ReadData_ptr
      provide_data_read (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException));

      virtual ::Components::Cookie *
      subscribe_data_available (
      ::BasicSP::DataAvailableConsumer_ptr c
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((
      ::CORBA::SystemException,
      ::Components::ExceededConnectionLimit));

      virtual ::BasicSP::DataAvailableConsumer_ptr
      unsubscribe_data_available (
      ::Components::Cookie *ck
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((
      ::CORBA::SystemException,
      ::Components::InvalidConnection));

      // Servant class for the timeout consumer.
      class BMDEVICE_SVNT_Export TimeOutConsumer_timeout_Servant
      : public virtual POA_BasicSP::TimeOutConsumer,
      public virtual PortableServer::RefCountServantBase
      {
        public:
        TimeOutConsumer_timeout_Servant (
        ::BasicSP::CCM_BMDevice_ptr executor,
        ::BasicSP::CCM_BMDevice_Context_ptr c);

        virtual ~TimeOutConsumer_timeout_Servant (void);

        virtual void
        push_TimeOut (
        ::BasicSP::TimeOut *evt
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
        ::BasicSP::CCM_BMDevice_var
        executor_;

        ::BasicSP::CCM_BMDevice_Context_var
        ctx_;
      };

      virtual ::BasicSP::TimeOutConsumer_ptr
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

      ::BasicSP::ReadData_var
      provide_data_read_;

      ::BasicSP::TimeOutConsumer_var
      consumes_timeout_;

      //ACE_CString component_UUID_;

      private:

      void
      populate_port_tables (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException));

      ::CORBA::Object_ptr
      provide_data_read_i (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException));

      ::Components::EventConsumerBase_ptr
      get_consumer_timeout_i (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException));
    };
  }

  namespace CIAO_GLUE_BasicSP
  {
    class BMDEVICE_SVNT_Export BMDeviceHome_Servant
      : public virtual CIAO::Home_Servant_Impl<
          POA_BasicSP::BMDeviceHome,
          ::BasicSP::CCM_BMDeviceHome,
          ::BasicSP::CCM_BMDeviceHome_var,
          ::BasicSP::BMDevice,
          ::BasicSP::BMDevice_var,
          ::BasicSP::CCM_BMDevice,
          ::BasicSP::CCM_BMDevice_var,
          BMDevice_Servant
        >
    {
      public:
      /// Hack for VC6.
      typedef CIAO::Home_Servant_Impl<
          POA_BasicSP::BMDeviceHome,
          ::BasicSP::CCM_BMDeviceHome,
          ::BasicSP::CCM_BMDeviceHome_var,
          ::BasicSP::BMDevice,
          ::BasicSP::BMDevice_var,
          ::BasicSP::CCM_BMDevice,
          ::BasicSP::CCM_BMDevice_var,
          BMDevice_Servant
        > home_svnt_base;

      BMDeviceHome_Servant (
      ::BasicSP::CCM_BMDeviceHome_ptr exe,
      ::CIAO::Session_Container *c);

      virtual ~BMDeviceHome_Servant (void);

      // Home operations.

      // Home factory and finder operations.

      // Attribute operations.
    };

    extern "C" BMDEVICE_SVNT_Export ::PortableServer::Servant
    createBMDeviceHome_Servant (
    ::Components::HomeExecutorBase_ptr p,
    CIAO::Session_Container *c
    ACE_ENV_ARG_DECL_WITH_DEFAULTS);
  }
}

#include /**/ "ace/post.h"

#endif /* CIAO_GLUE_SESSION_BMDEVICE_SVNT_H */

