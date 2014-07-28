// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acRichTextUtils.pas' rev: 3.00

#ifndef acRichTextUtilsHPP
#define acRichTextUtilsHPP
#include <acFormHelp.hpp>
#include <RichEdit.hpp>
#include <SysUtils.hpp>
#include <Graphics.hpp>
#include <ComCtrls.hpp>
#include <Classes.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acrichtextutils
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE Graphics::TColor COLOR_VALUES[16];
extern PACKAGE System::AnsiString COLOR_NAMES[16];
extern PACKAGE Acformhelp::TacFormHelp* __fastcall FindFormHelp(Classes::TComponent* From);
extern PACKAGE System::AnsiString __fastcall RichToTag(Comctrls::TRichEdit* RichEdit, char TAG_OPEN, 
	char TAG_CLOSE);
extern PACKAGE void __fastcall TagToRich(System::AnsiString TagText, Comctrls::TRichEdit* RichEdit, 
	char TAG_OPEN, char TAG_CLOSE);
extern PACKAGE System::AnsiString __fastcall DeleteAllTags(System::AnsiString Text, char TAG_OPEN, char 
	TAG_CLOSE);
extern PACKAGE _charrange __fastcall GetSelection(Comctrls::TRichEdit* RichEdit);
extern PACKAGE void __fastcall SetSelection(Comctrls::TRichEdit* RichEdit, int MinPos, int MaxPos);
extern PACKAGE void __fastcall DrawRichText(Graphics::TBitmap* Bitmap, HDC BackgroundDC, tagPOINT &ShiftPoint
	, System::AnsiString Text, Graphics::TFont* Font, Graphics::TColor BackgroundColor, Graphics::TColor 
	ShadowColor, bool PlainText, bool AdjustWidth, bool WrapWords, int MaxWidth, char TAG_OPEN, char TAG_CLOSE
	, int HorzMargin, int VertMargin, bool ShowFrame, bool ShowShadow);

}	/* namespace Acrichtextutils */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acrichtextutils;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acRichTextUtils
