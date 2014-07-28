// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'UFCCrypt.pas' rev: 5.00

#ifndef UFCCryptHPP
#define UFCCryptHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Ufccrypt
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE AnsiString __fastcall Crypt(AnsiString Key, AnsiString Salt);

}	/* namespace Ufccrypt */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Ufccrypt;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// UFCCrypt
