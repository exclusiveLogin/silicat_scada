// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acPropUtils.pas' rev: 5.00

#ifndef acPropUtilsHPP
#define acPropUtilsHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <Classes.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acproputils
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE bool __fastcall SetPropIntegerValue(System::TObject* Obj, const AnsiString PropName, 
	int Value);
extern PACKAGE bool __fastcall SetPropBooleanValue(System::TObject* Obj, const AnsiString PropName, 
	bool Value);
extern PACKAGE bool __fastcall SetPropNotifyEventValue(System::TObject* Obj, const AnsiString PropName
	, Classes::TNotifyEvent Value);

}	/* namespace Acproputils */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acproputils;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acPropUtils
