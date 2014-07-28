// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acMIMEUtils.pas' rev: 4.00

#ifndef acMIMEUtilsHPP
#define acMIMEUtilsHPP

#pragma delphiheader begin
#pragma option push -w-
#include <Classes.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acmimeutils
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE AnsiString __fastcall Base64Encode(const AnsiString S);
extern PACKAGE AnsiString __fastcall GenerateAttachBoundary(char Salt);
extern PACKAGE AnsiString __fastcall GetMIMEType(AnsiString EXT);
extern PACKAGE bool __fastcall AttachFile(const AnsiString FileName, const AnsiString Boundary, bool 
	IsEmbedded, bool DoEncoding, Classes::TStream* Stream);
extern PACKAGE void __fastcall PutToStream(const Classes::TStream* Stream, const AnsiString St);
extern PACKAGE void __fastcall SplitEmailEntries(AnsiString SourceStr, const Classes::TStringList* OutputStrList
	);
extern PACKAGE AnsiString __fastcall GetPrintableEmailEntries(AnsiString SourceStr);
extern PACKAGE void __fastcall ExtractRecipients(AnsiString Recipients, Classes::TStringList* Names, 
	Classes::TStringList* Addresses);

}	/* namespace Acmimeutils */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acmimeutils;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acMIMEUtils
