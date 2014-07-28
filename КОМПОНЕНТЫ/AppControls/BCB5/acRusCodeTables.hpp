// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acRusCodeTables.pas' rev: 5.00

#ifndef acRusCodeTablesHPP
#define acRusCodeTablesHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acruscodetables
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE AnsiString __fastcall DOSToKOI(AnsiString St);
extern PACKAGE AnsiString __fastcall DOSToWin(AnsiString St);
extern PACKAGE AnsiString __fastcall WinToDOS(AnsiString St);
extern PACKAGE AnsiString __fastcall WinToKOI(AnsiString St);
extern PACKAGE AnsiString __fastcall KOIToDOS(AnsiString St);
extern PACKAGE AnsiString __fastcall KOIToWin(AnsiString St);

}	/* namespace Acruscodetables */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acruscodetables;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acRusCodeTables
