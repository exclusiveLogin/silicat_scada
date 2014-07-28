// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acRichTextUtils.pas' rev: 5.00

#ifndef acRichTextUtilsHPP
#define acRichTextUtilsHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acFormHelp.hpp>	// Pascal unit
#include <RichEdit.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acrichtextutils
{
//-- type declarations -------------------------------------------------------
typedef AnsiString acRichTextUtils__1[16];

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE Graphics::TColor COLOR_VALUES[16];
extern PACKAGE AnsiString COLOR_NAMES[16];
extern PACKAGE Acformhelp::TacFormHelp* __fastcall FindFormHelp(Classes::TComponent* From);
extern PACKAGE AnsiString __fastcall RichToTag(Comctrls::TRichEdit* RichEdit, char TAG_OPEN, char TAG_CLOSE
	);
extern PACKAGE void __fastcall TagToRich(AnsiString TagText, Comctrls::TRichEdit* RichEdit, char TAG_OPEN
	, char TAG_CLOSE);
extern PACKAGE AnsiString __fastcall DeleteAllTags(AnsiString Text, char TAG_OPEN, char TAG_CLOSE);
extern PACKAGE _charrange __fastcall GetSelection(Comctrls::TRichEdit* RichEdit);
extern PACKAGE void __fastcall SetSelection(Comctrls::TRichEdit* RichEdit, int MinPos, int MaxPos);
extern PACKAGE void __fastcall DrawRichText(Graphics::TBitmap* Bitmap, HDC BackgroundDC, Windows::TPoint 
	&ShiftPoint, AnsiString Text, Graphics::TFont* Font, Graphics::TColor BackgroundColor, Graphics::TColor 
	ShadowColor, bool PlainText, bool AdjustWidth, bool WrapWords, int MaxWidth, char TAG_OPEN, char TAG_CLOSE
	, int HorzMargin, int VertMargin, bool ShowFrame, bool ShowShadow);

}	/* namespace Acrichtextutils */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acrichtextutils;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acRichTextUtils
