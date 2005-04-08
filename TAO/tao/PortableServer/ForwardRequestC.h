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

#ifndef _TAO_IDL_ORIG_FORWARDREQUESTC_H_
#define _TAO_IDL_ORIG_FORWARDREQUESTC_H_

#include /**/ "ace/pre.h"


#include "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "portableserver_export.h"
#include "tao/ORB.h"
#include "tao/Environment.h"
#include "tao/Object.h"

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

#if (TAO_HAS_MINIMUM_POA == 0)

// TAO_IDL - Generated from
// be\be_visitor_module/module_ch.cpp:48

namespace PortableServer
{

  // TAO_IDL - Generated from
  // be\be_visitor_exception/exception_ch.cpp:51

#if !defined (_PORTABLESERVER_FORWARDREQUEST_CH_)
#define _PORTABLESERVER_FORWARDREQUEST_CH_

  class TAO_PortableServer_Export ForwardRequest : public CORBA::UserException
  {
  public:

    CORBA::Object_var forward_reference;
    ForwardRequest (void);
    ForwardRequest (const ForwardRequest &);
    ~ForwardRequest (void);

    ForwardRequest &operator= (const ForwardRequest &);

    static void _tao_any_destructor (void *);

    static ForwardRequest *_downcast (CORBA::Exception *);
    static const ForwardRequest *_downcast (CORBA::Exception const *);

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
    // be\be_visitor_exception/exception_ctor.cpp:66

    ForwardRequest (
        const CORBA::Object_ptr  _tao_forward_reference
      );

    // TAO_IDL - Generated from
    // be\be_visitor_exception/exception_ch.cpp:127

    virtual CORBA::TypeCode_ptr _tao_type (void) const;
  };

  // TAO_IDL - Generated from
  // be\be_visitor_typecode/typecode_decl.cpp:44

  extern TAO_PortableServer_Export ::CORBA::TypeCode_ptr const _tc_ForwardRequest;

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be\be_visitor_module/module_ch.cpp:66

} // module PortableServer

// TAO_IDL - Generated from
// be\be_visitor_traits.cpp:59

// Traits specializations.
namespace TAO
{
}

// TAO_IDL - Generated from
// be\be_visitor_exception/any_op_ch.cpp:52

TAO_PortableServer_Export void operator<<= (CORBA::Any &, const PortableServer::ForwardRequest &); // copying version
TAO_PortableServer_Export void operator<<= (CORBA::Any &, PortableServer::ForwardRequest*); // noncopying version
TAO_PortableServer_Export CORBA::Boolean operator>>= (const CORBA::Any &, PortableServer::ForwardRequest *&); // deprecated
TAO_PortableServer_Export CORBA::Boolean operator>>= (const CORBA::Any &, const PortableServer::ForwardRequest *&);

// TAO_IDL - Generated from
// be\be_visitor_exception/cdr_op_ch.cpp:52

TAO_PortableServer_Export CORBA::Boolean operator<< (TAO_OutputCDR &, const PortableServer::ForwardRequest &);
TAO_PortableServer_Export CORBA::Boolean operator>> (TAO_InputCDR &, PortableServer::ForwardRequest &);

// TAO_IDL - Generated from
// be\be_codegen.cpp:955

#endif /* TAO_HAS_MINIMUM_CORBA == 0 */

#if defined(_MSC_VER)
#pragma warning(pop)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option pop
#endif /* __BORLANDC__ */

#include /**/ "ace/post.h"

#endif /* ifndef */


