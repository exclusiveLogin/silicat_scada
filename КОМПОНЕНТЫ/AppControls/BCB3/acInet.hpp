// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acInet.pas' rev: 3.00

#ifndef acInetHPP
#define acInetHPP
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acinet
{
//-- type declarations -------------------------------------------------------
#pragma pack(push, 1)
struct SunB
{
	char s_b1;
	char s_b2;
	char s_b3;
	char s_b4;
} ;
#pragma pack(pop)

#pragma pack(push, 1)
struct SunW
{
	Word s_w1;
	Word s_w2;
} ;
#pragma pack(pop)

struct in_addr
{
	
	union
	{
		int S_addr;
		SunW S_un_w;
		SunB S_un_b;
		
	};
} ;

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE bool __fastcall SockConnect(int &SOCK, const System::AnsiString Host, const int Port)
	;
extern PACKAGE void __fastcall SockDisconnect(int &SOCK);
extern PACKAGE bool __fastcall IsOnline(void);
extern PACKAGE System::AnsiString __fastcall IPToStr(int IP);
extern PACKAGE int __fastcall StrToIP(System::AnsiString Host);

}	/* namespace Acinet */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acinet;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acInet
