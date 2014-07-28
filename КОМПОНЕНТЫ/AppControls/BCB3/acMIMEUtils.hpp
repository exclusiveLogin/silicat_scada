// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acMIMEUtils.pas' rev: 3.00

#ifndef acMIMEUtilsHPP
#define acMIMEUtilsHPP
#include <Classes.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acmimeutils
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE System::AnsiString __fastcall Base64Encode(const System::AnsiString S);
extern PACKAGE System::AnsiString __fastcall GenerateAttachBoundary(char Salt);
extern PACKAGE System::AnsiString __fastcall GetMIMEType(System::AnsiString EXT);
extern PACKAGE bool __fastcall AttachFile(const System::AnsiString FileName, const System::AnsiString 
	Boundary, bool IsEmbedded, bool DoEncoding, Classes::TStream* Stream);
extern PACKAGE void __fastcall PutToStream(const Classes::TStream* Stream, const System::AnsiString 
	St);
extern PACKAGE void __fastcall SplitEmailEntries(System::AnsiString SourceStr, const Classes::TStringList* 
	OutputStrList);
extern PACKAGE System::AnsiString __fastcall GetPrintableEmailEntries(System::AnsiString SourceStr);
	
extern PACKAGE void __fastcall ExtractRecipients(System::AnsiString Recipients, Classes::TStringList* 
	Names, Classes::TStringList* Addresses);

}	/* namespace Acmimeutils */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acmimeutils;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acMIMEUtils
