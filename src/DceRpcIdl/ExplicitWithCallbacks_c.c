

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Sat Jul 27 21:10:20 2013
 */
/* Compiler settings for ExplicitWithCallbacks.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#include <string.h>

#include "ExplicitWithCallbacks_h.h"

#define TYPE_FORMAT_STRING_SIZE   7                                 
#define PROC_FORMAT_STRING_SIZE   99                                
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _ExplicitWithCallbacks_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ExplicitWithCallbacks_MIDL_TYPE_FORMAT_STRING;

typedef struct _ExplicitWithCallbacks_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ExplicitWithCallbacks_MIDL_PROC_FORMAT_STRING;

typedef struct _ExplicitWithCallbacks_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ExplicitWithCallbacks_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const ExplicitWithCallbacks_MIDL_TYPE_FORMAT_STRING ExplicitWithCallbacks__MIDL_TypeFormatString;
extern const ExplicitWithCallbacks_MIDL_PROC_FORMAT_STRING ExplicitWithCallbacks__MIDL_ProcFormatString;
extern const ExplicitWithCallbacks_MIDL_EXPR_FORMAT_STRING ExplicitWithCallbacks__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: ExplicitWithCallbacks, ver. 0.1,
   GUID={0x78FF0D6E,0x10E5,0x4885,{0xB1,0xC0,0x89,0xC6,0x57,0x0E,0xBD,0x03}} */


extern const MIDL_SERVER_INFO ExplicitWithCallbacks_ServerInfo;


extern const RPC_DISPATCH_TABLE ExplicitWithCallbacks_v0_1_DispatchTable;

static const RPC_CLIENT_INTERFACE ExplicitWithCallbacks___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x78FF0D6E,0x10E5,0x4885,{0xB1,0xC0,0x89,0xC6,0x57,0x0E,0xBD,0x03}},{0,1}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&ExplicitWithCallbacks_v0_1_DispatchTable,
    0,
    0,
    0,
    &ExplicitWithCallbacks_ServerInfo,
    0x04000000
    };
RPC_IF_HANDLE ExplicitWithCallbacks_v0_1_c_ifspec = (RPC_IF_HANDLE)& ExplicitWithCallbacks___RpcClientInterface;

extern const MIDL_STUB_DESC ExplicitWithCallbacks_StubDesc;

static RPC_BINDING_HANDLE ExplicitWithCallbacks__MIDL_AutoBindHandle;


void AsyncAttach( 
    /* [in] */ handle_t hBinding,
    /* [string][in] */ wchar_t *szOutput)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ExplicitWithCallbacks_StubDesc,
                  (PFORMAT_STRING) &ExplicitWithCallbacks__MIDL_ProcFormatString.Format[0],
                  ( unsigned char * )&hBinding);
    
}


void Request( 
    /* [in] */ handle_t hBinding,
    /* [string][in] */ wchar_t *szOutput)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ExplicitWithCallbacks_StubDesc,
                  (PFORMAT_STRING) &ExplicitWithCallbacks__MIDL_ProcFormatString.Format[34],
                  ( unsigned char * )&hBinding);
    
}


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const ExplicitWithCallbacks_MIDL_PROC_FORMAT_STRING ExplicitWithCallbacks__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure AsyncAttach */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0x1,		/* 1 */
/* 20 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hBinding */

/* 28 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 30 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 32 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Procedure Request */


	/* Parameter szOutput */

/* 34 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 36 */	NdrFcLong( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0x1 ),	/* 1 */
/* 42 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 44 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 46 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x0 ),	/* 0 */
/* 52 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0x1,		/* 1 */
/* 54 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hBinding */

/* 62 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 64 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 66 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Procedure CallClient */


	/* Parameter szOutput */

/* 68 */	0x34,		/* FC_CALLBACK_HANDLE */
			0x48,		/* Old Flags:  */
/* 70 */	NdrFcLong( 0x0 ),	/* 0 */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */
/* 76 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 78 */	NdrFcShort( 0x0 ),	/* 0 */
/* 80 */	NdrFcShort( 0x0 ),	/* 0 */
/* 82 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0x1,		/* 1 */
/* 84 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szOutput */

/* 92 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 94 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 96 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

			0x0
        }
    };

static const ExplicitWithCallbacks_MIDL_TYPE_FORMAT_STRING ExplicitWithCallbacks__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  4 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const unsigned short ExplicitWithCallbacks_FormatStringOffsetTable[] =
    {
    0,
    34,
    };


static const unsigned short _callbackExplicitWithCallbacks_FormatStringOffsetTable[] =
    {
    68
    };


static const MIDL_STUB_DESC ExplicitWithCallbacks_StubDesc = 
    {
    (void *)& ExplicitWithCallbacks___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &ExplicitWithCallbacks__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    ExplicitWithCallbacks__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x700022b, /* MIDL Version 7.0.555 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

static const RPC_DISPATCH_FUNCTION ExplicitWithCallbacks_table[] =
    {
    NdrServerCall2,
    0
    };
static const RPC_DISPATCH_TABLE ExplicitWithCallbacks_v0_1_DispatchTable = 
    {
    1,
    (RPC_DISPATCH_FUNCTION*)ExplicitWithCallbacks_table
    };

static const SERVER_ROUTINE ExplicitWithCallbacks_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)CallClient
    };

static const MIDL_SERVER_INFO ExplicitWithCallbacks_ServerInfo = 
    {
    &ExplicitWithCallbacks_StubDesc,
    ExplicitWithCallbacks_ServerRoutineTable,
    ExplicitWithCallbacks__MIDL_ProcFormatString.Format,
    _callbackExplicitWithCallbacks_FormatStringOffsetTable,
    0,
    0,
    0,
    0};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/
