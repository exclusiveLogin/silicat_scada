// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acPropUtils.pas' rev: 3.00

#ifndef acPropUtilsHPP
#define acPropUtilsHPP
#include <Classes.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acproputils
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE bool __fastcall SetPropIntegerValue(System::TObject* Obj, const System::AnsiString PropName
	, int Value);
extern PACKAGE bool __fastcall SetPropBooleanValue(System::TObject* Obj, const System::AnsiString PropName
	, bool Value);
extern PACKAGE bool __fastcall SetPropNotifyEventValue(System::TObject* Obj, const System::AnsiString 
	PropName, Classes::TNotifyEvent Value);

}	/* namespace Acproputils */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acproputils;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acPropUtils
