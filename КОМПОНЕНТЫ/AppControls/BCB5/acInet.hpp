// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acInet.pas' rev: 5.00

#ifndef acInetHPP
#define acInetHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acinet
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE bool __fastcall SockConnect(int &SOCK, const AnsiString Host, const int Port);
extern PACKAGE void __fastcall SockDisconnect(int &SOCK);
extern PACKAGE bool __fastcall IsOnline(void);
extern PACKAGE AnsiString __fastcall IPToStr(int IP);
extern PACKAGE int __fastcall StrToIP(AnsiString Host);

}	/* namespace Acinet */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acinet;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acInet
