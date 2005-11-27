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

#include "RTScheduler.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Enum_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/Sequence_TypeCode_Static.h"
#include "tao/AnyTypeCode/String_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// TAO_IDL - Generated from
// be\be_visitor_typecode/objref_typecode.cpp:76

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_RTScheduling_ThreadAction (
    CORBA::tk_local_interface,
    "IDL:RTScheduling/ThreadAction:1.0",
    "ThreadAction");

namespace RTScheduling
{
  ::CORBA::TypeCode_ptr const _tc_ThreadAction =
    &_tao_tc_RTScheduling_ThreadAction;
}



// TAO_IDL - Generated from
// be\be_visitor_typecode/enum_typecode.cpp:34

static char const * const _tao_enumerators_RTScheduling_DistributableThread_DT_State[] =
  {
    "ACTIVE",
    "CANCELLED"

  };

static TAO::TypeCode::Enum<char const *,
                           char const * const *,
                           TAO::Null_RefCount_Policy>
  _tao_tc_RTScheduling_DistributableThread_DT_State (
    "IDL:RTScheduling/DistributableThread/DT_State:1.0",
    "DT_State",
    _tao_enumerators_RTScheduling_DistributableThread_DT_State,
    2);

::CORBA::TypeCode_ptr const RTScheduling::DistributableThread::_tc_DT_State =
  &_tao_tc_RTScheduling_DistributableThread_DT_State;

// TAO_IDL - Generated from
// be\be_visitor_typecode/objref_typecode.cpp:76

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_RTScheduling_DistributableThread (
    CORBA::tk_local_interface,
    "IDL:RTScheduling/DistributableThread:1.0",
    "DistributableThread");

namespace RTScheduling
{
  ::CORBA::TypeCode_ptr const _tc_DistributableThread =
    &_tao_tc_RTScheduling_DistributableThread;
}



// TAO_IDL - Generated from
// be\be_visitor_typecode/struct_typecode.cpp:87

static TAO::TypeCode::Struct_Field<char const *, CORBA::TypeCode_ptr const *> const * const _tao_fields_RTScheduling_Current_UNSUPPORTED_SCHEDULING_DISCIPLINE = 0;
static TAO::TypeCode::Struct<char const *,
                      CORBA::TypeCode_ptr const *,
                      TAO::TypeCode::Struct_Field<char const *, CORBA::TypeCode_ptr const *> const *,
                      TAO::Null_RefCount_Policy>
  _tao_tc_RTScheduling_Current_UNSUPPORTED_SCHEDULING_DISCIPLINE (
    CORBA::tk_except,
    "IDL:RTScheduling/Current/UNSUPPORTED_SCHEDULING_DISCIPLINE:1.0",
    "UNSUPPORTED_SCHEDULING_DISCIPLINE",
    _tao_fields_RTScheduling_Current_UNSUPPORTED_SCHEDULING_DISCIPLINE,
    0);

::CORBA::TypeCode_ptr const RTScheduling::Current::_tc_UNSUPPORTED_SCHEDULING_DISCIPLINE =
  &_tao_tc_RTScheduling_Current_UNSUPPORTED_SCHEDULING_DISCIPLINE;

// TAO_IDL - Generated from
// be\be_visitor_typecode/alias_typecode.cpp:50



// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:937


#ifndef _TAO_TYPECODE_RTScheduling_Current_IdType_GUARD
#define _TAO_TYPECODE_RTScheduling_Current_IdType_GUARD
namespace TAO
{
  namespace TypeCode
  {
    TAO::TypeCode::Sequence< ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
      RTScheduling_Current_IdType_0 (
        CORBA::tk_sequence,
        &CORBA::_tc_octet,
        0U);

    ::CORBA::TypeCode_ptr const tc_RTScheduling_Current_IdType_0 =
      &RTScheduling_Current_IdType_0;

  }
}


#endif /* _TAO_TYPECODE_RTScheduling_Current_IdType_GUARD */

static TAO::TypeCode::Alias<char const *,
                            CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_RTScheduling_Current_IdType (
    CORBA::tk_alias,
    "IDL:RTScheduling/Current/IdType:1.0",
    "IdType",
    &TAO::TypeCode::tc_RTScheduling_Current_IdType_0);

::CORBA::TypeCode_ptr const RTScheduling::Current::_tc_IdType =
  &_tao_tc_RTScheduling_Current_IdType;

// TAO_IDL - Generated from
// be\be_visitor_typecode/alias_typecode.cpp:50



// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:937


#ifndef _TAO_TYPECODE_RTScheduling_Current_NameList_GUARD
#define _TAO_TYPECODE_RTScheduling_Current_NameList_GUARD
namespace TAO
{
  namespace TypeCode
  {
    TAO::TypeCode::Sequence< ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
      RTScheduling_Current_NameList_0 (
        CORBA::tk_sequence,
        &CORBA::_tc_string,
        0U);

    ::CORBA::TypeCode_ptr const tc_RTScheduling_Current_NameList_0 =
      &RTScheduling_Current_NameList_0;

  }
}


#endif /* _TAO_TYPECODE_RTScheduling_Current_NameList_GUARD */

static TAO::TypeCode::Alias<char const *,
                            CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_RTScheduling_Current_NameList (
    CORBA::tk_alias,
    "IDL:RTScheduling/Current/NameList:1.0",
    "NameList",
    &TAO::TypeCode::tc_RTScheduling_Current_NameList_0);

::CORBA::TypeCode_ptr const RTScheduling::Current::_tc_NameList =
  &_tao_tc_RTScheduling_Current_NameList;

// TAO_IDL - Generated from
// be\be_visitor_typecode/objref_typecode.cpp:76

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_RTScheduling_Current (
    CORBA::tk_local_interface,
    "IDL:RTScheduling/Current:1.0",
    "Current");

namespace RTScheduling
{
  ::CORBA::TypeCode_ptr const _tc_Current =
    &_tao_tc_RTScheduling_Current;
}



// TAO_IDL - Generated from
// be\be_visitor_typecode/objref_typecode.cpp:76

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_RTScheduling_ResourceManager (
    CORBA::tk_local_interface,
    "IDL:RTScheduling/ResourceManager:1.0",
    "ResourceManager");

namespace RTScheduling
{
  ::CORBA::TypeCode_ptr const _tc_ResourceManager =
    &_tao_tc_RTScheduling_ResourceManager;
}



// TAO_IDL - Generated from
// be\be_visitor_typecode/struct_typecode.cpp:87

static TAO::TypeCode::Struct_Field<char const *, CORBA::TypeCode_ptr const *> const * const _tao_fields_RTScheduling_Scheduler_INCOMPATIBLE_SCHEDULING_DISCIPLINES = 0;
static TAO::TypeCode::Struct<char const *,
                      CORBA::TypeCode_ptr const *,
                      TAO::TypeCode::Struct_Field<char const *, CORBA::TypeCode_ptr const *> const *,
                      TAO::Null_RefCount_Policy>
  _tao_tc_RTScheduling_Scheduler_INCOMPATIBLE_SCHEDULING_DISCIPLINES (
    CORBA::tk_except,
    "IDL:RTScheduling/Scheduler/INCOMPATIBLE_SCHEDULING_DISCIPLINES:1.0",
    "INCOMPATIBLE_SCHEDULING_DISCIPLINES",
    _tao_fields_RTScheduling_Scheduler_INCOMPATIBLE_SCHEDULING_DISCIPLINES,
    0);

::CORBA::TypeCode_ptr const RTScheduling::Scheduler::_tc_INCOMPATIBLE_SCHEDULING_DISCIPLINES =
  &_tao_tc_RTScheduling_Scheduler_INCOMPATIBLE_SCHEDULING_DISCIPLINES;

// TAO_IDL - Generated from
// be\be_visitor_typecode/objref_typecode.cpp:76

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_RTScheduling_Scheduler (
    CORBA::tk_local_interface,
    "IDL:RTScheduling/Scheduler:1.0",
    "Scheduler");

namespace RTScheduling
{
  ::CORBA::TypeCode_ptr const _tc_Scheduler =
    &_tao_tc_RTScheduling_Scheduler;
}

TAO_END_VERSIONED_NAMESPACE_DECL
