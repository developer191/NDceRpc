

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Mon Jul 29 19:57:36 2013
 */
/* Compiler settings for ErrorHandling.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __ErrorHandling_h_h__
#define __ErrorHandling_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ErrorHandling_INTERFACE_DEFINED__
#define __ErrorHandling_INTERFACE_DEFINED__

/* interface ErrorHandling */
/* [explicit_handle][version][uuid] */ 

/* [comm_status] */ error_status_t Do( 
    /* [in] */ handle_t hBinding,
    /* [fault_status][out] */ error_status_t *fault_s);



extern RPC_IF_HANDLE ErrorHandling_v0_1_c_ifspec;
extern RPC_IF_HANDLE ErrorHandling_v0_1_s_ifspec;
#endif /* __ErrorHandling_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


