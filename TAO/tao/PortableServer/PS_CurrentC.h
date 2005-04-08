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

// TAO_IDL - Generated from
// be\be_codegen.cpp:153

#ifndef _TAO_IDL_ORIG_PS_CURRENTC_H_
#define _TAO_IDL_ORIG_PS_CURRENTC_H_

#include /**/ "ace/pre.h"


#include "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "portableserver_export.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Environment.h"
#include "tao/Object.h"
#include "tao/Objref_VarOut_T.h"

#include "tao/PortableServer/PS_ForwardC.h"
#include "tao/CurrentC.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_PortableServer_Export

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option push -w-rvl -w-rch -w-ccc -w-inl
#endif /* __BORLANDC__ */

// TAO_IDL - Generated from
// be\be_visitor_module/module_ch.cpp:48

namespace PortableServer
{
  
  // TAO_IDL - Generated from
  // be\be_interface.cpp:598

#if !defined (_PORTABLESERVER_CURRENT__VAR_OUT_CH_)
#define _PORTABLESERVER_CURRENT__VAR_OUT_CH_
  
  class Current;
  typedef Current *Current_ptr;
  
  typedef
    TAO_Objref_Var_T<
        Current
      >
    Current_var;
  
  typedef
    TAO_Objref_Out_T<
        Current
      >
    Current_out;

#endif /* end #if !defined */
  
  // TAO_IDL - Generated from
  // be\be_visitor_interface/interface_ch.cpp:54

#if !defined (_PORTABLESERVER_CURRENT_CH_)
#define _PORTABLESERVER_CURRENT_CH_
  
  class TAO_PortableServer_Export Current
    : public virtual ::CORBA::Current
  {
  public:
    typedef Current_ptr _ptr_type;
    typedef Current_var _var_type;
    
    // The static operations.
    static Current_ptr _duplicate (Current_ptr obj);
    
    static void _tao_release (Current_ptr obj);
    
    static Current_ptr _narrow (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    static Current_ptr _unchecked_narrow (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    static Current_ptr _nil (void)
    {
      return static_cast<Current_ptr> (0);
    }
    
    static void _tao_any_destructor (void *);
    
    // TAO_IDL - Generated from
    // be\be_visitor_exception/exception_ch.cpp:51

#if !defined (_PORTABLESERVER_CURRENT_NOCONTEXT_CH_)
#define _PORTABLESERVER_CURRENT_NOCONTEXT_CH_
    
    class TAO_PortableServer_Export NoContext : public CORBA::UserException
    {
    public:
      
      NoContext (void);
      NoContext (const NoContext &);
      ~NoContext (void);

      NoContext &operator= (const NoContext &);
      
      static void _tao_any_destructor (void *);
      
      static NoContext *_downcast (CORBA::Exception *);
      static const NoContext *_downcast (CORBA::Exception const *);
      
      static CORBA::Exception *_alloc (void);
      
      virtual CORBA::Exception *_tao_duplicate (void) const;

      virtual void _raise (void) const;

      virtual void _tao_encode (
          TAO_OutputCDR &
          ACE_ENV_ARG_DECL
        ) const;
      
      virtual void _tao_decode (
          TAO_InputCDR &
          ACE_ENV_ARG_DECL
        );
      
      // TAO_IDL - Generated from
      // be\be_visitor_exception/exception_ch.cpp:127
      
      virtual CORBA::TypeCode_ptr _tao_type (void) const;
    };
    
    // TAO_IDL - Generated from
    // be\be_visitor_typecode/typecode_decl.cpp:44
    
    static ::CORBA::TypeCode_ptr const _tc_NoContext;

#endif /* end #if !defined */
    
    // TAO_IDL - Generated from
    // be\be_visitor_operation/operation_ch.cpp:46
    
    virtual ::PortableServer::POA_ptr get_POA (
        ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::PortableServer::Current::NoContext
      )) = 0;
    
    // TAO_IDL - Generated from
    // be\be_visitor_operation/operation_ch.cpp:46
    
    virtual ::PortableServer::ObjectId * get_object_id (
        ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::PortableServer::Current::NoContext
      )) = 0;
    
    // TAO_IDL - Generated from
    // be\be_visitor_operation/operation_ch.cpp:46
    
    virtual ::PortableServer::Servant get_servant (
        ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::PortableServer::Current::NoContext
      )) = 0;
    
    // TAO_IDL - Generated from
    // be\be_visitor_interface/interface_ch.cpp:210
    
    virtual CORBA::Boolean _is_a (
        const char *type_id
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    virtual const char* _interface_repository_id (void) const;
    virtual CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    Current (void);
    
    virtual ~Current (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    Current (const Current &);
    
    void operator= (const Current &);
  };

#endif /* end #if !defined */
  
  // TAO_IDL - Generated from
  // be\be_visitor_typecode/typecode_decl.cpp:44
  
  extern TAO_PortableServer_Export ::CORBA::TypeCode_ptr const _tc_Current;

// TAO_IDL - Generated from
// be\be_visitor_module/module_ch.cpp:66

} // module PortableServer

// TAO_IDL - Generated from
// be\be_visitor_traits.cpp:59

// Traits specializations.
namespace TAO
{

#if !defined (_PORTABLESERVER_CURRENT__TRAITS_CH_)
#define _PORTABLESERVER_CURRENT__TRAITS_CH_
  
  template<>
  struct TAO_PortableServer_Export Objref_Traits< ::PortableServer::Current>
  {
    static ::PortableServer::Current_ptr duplicate (
        ::PortableServer::Current_ptr
      );
    static void release (
        ::PortableServer::Current_ptr
      );
    static ::PortableServer::Current_ptr nil (void);
    static CORBA::Boolean marshal (
        ::PortableServer::Current_ptr p,
        TAO_OutputCDR & cdr
      );
  };

#endif /* end #if !defined */
}

// TAO_IDL - Generated from
// be\be_visitor_interface/any_op_ch.cpp:52

TAO_PortableServer_Export void operator<<= (CORBA::Any &, PortableServer::Current_ptr); // copying
TAO_PortableServer_Export void operator<<= (CORBA::Any &, PortableServer::Current_ptr *); // non-copying
TAO_PortableServer_Export CORBA::Boolean operator>>= (const CORBA::Any &, PortableServer::Current_ptr &);

// TAO_IDL - Generated from
// be\be_visitor_exception/any_op_ch.cpp:52

TAO_PortableServer_Export void operator<<= (CORBA::Any &, const PortableServer::Current::NoContext &); // copying version
TAO_PortableServer_Export void operator<<= (CORBA::Any &, PortableServer::Current::NoContext*); // noncopying version
TAO_PortableServer_Export CORBA::Boolean operator>>= (const CORBA::Any &, PortableServer::Current::NoContext *&); // deprecated
TAO_PortableServer_Export CORBA::Boolean operator>>= (const CORBA::Any &, const PortableServer::Current::NoContext *&);

// TAO_IDL - Generated from
// be\be_codegen.cpp:955

#if defined(_MSC_VER)
#pragma warning(pop)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option pop
#endif /* __BORLANDC__ */

#include /**/ "ace/post.h"

#endif /* ifndef */


