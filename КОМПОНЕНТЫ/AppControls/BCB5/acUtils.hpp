// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acUtils.pas' rev: 5.00

#ifndef acUtilsHPP
#define acUtilsHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <Classes.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acutils
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacSplitStrSide { LEFT, RIGHT };
#pragma option pop

typedef Set<TacSplitStrSide, LEFT, RIGHT>  TacSplitStrSides;

#pragma option push -b-
enum TacOSVersion { osUnknown, os95, os95OSR2, os98, os98SE, osNT3, osNT4, os2K, osME };
#pragma option pop

//-- var, const, procedure ---------------------------------------------------
#define HTTPPrefix "http://"
extern PACKAGE void __fastcall SplitStr(AnsiString SubStr, AnsiString Str, AnsiString &FirstPart, AnsiString 
	&SecondPart, TacSplitStrSide MainSide, TacSplitStrSides LeaveSeparatorOn);
extern PACKAGE void __fastcall SplitFilenameAndParams(AnsiString &FileName, AnsiString &Params);
extern PACKAGE void __fastcall ParseURL(const AnsiString URL, AnsiString &Protocol, AnsiString &HostName
	, AnsiString &ObjectName, int &PortNumber);
extern PACKAGE bool __fastcall IsValidEmail(AnsiString Email);
extern PACKAGE void __fastcall RunControlPanel(int CmdShow);
extern PACKAGE void __fastcall RunCPL(const AnsiString FileName, int CmdShow);
extern PACKAGE bool __fastcall OpenWithDlg(const AnsiString FileName);
extern PACKAGE void __fastcall RepaintScreen(void);
extern PACKAGE void __fastcall MinimizeAll(void);
extern PACKAGE void __fastcall RestoreAll(void);
extern PACKAGE AnsiString __fastcall DecToHex(int aValue);
extern PACKAGE int __fastcall HexToDec(const AnsiString aValue);
extern PACKAGE AnsiString __fastcall DecToBin(int aValue);
extern PACKAGE int __fastcall BinToDec(const AnsiString aValue);
extern PACKAGE Extended __fastcall IntToExt(unsigned Int);
extern PACKAGE Extended __fastcall Int2x32ToExt(unsigned IntHi, unsigned IntLo);
extern PACKAGE AnsiString __fastcall GetExecutableByExtension(const AnsiString Extension);
extern PACKAGE void __fastcall OpenURL(AnsiString URL, bool InNewWindow);
extern PACKAGE void __fastcall ComposeEmail(AnsiString Address, const AnsiString Name, const AnsiString 
	Subject, const AnsiString Message, const AnsiString CC, const AnsiString BCC);
extern PACKAGE unsigned __fastcall GetSystemImageList(int Size);
extern PACKAGE TacOSVersion __fastcall GetOS(void);
extern PACKAGE bool __fastcall IsNT(void);
extern PACKAGE bool __fastcall IsWin2k(void);
extern PACKAGE int __fastcall GetCPUSpeed(void);
extern PACKAGE bool __fastcall IsScreenSaverRunning(void);
extern PACKAGE AnsiString __fastcall GetTempDir();
extern PACKAGE AnsiString __fastcall GetSystemDir();
extern PACKAGE AnsiString __fastcall GetWindowsDir();
extern PACKAGE AnsiString __fastcall GetEnvironmentString(const AnsiString St);
extern PACKAGE unsigned __fastcall GetFileVersion(const AnsiString FileName);
extern PACKAGE void __fastcall Sound(Word Hz);
extern PACKAGE void __fastcall NoSound(void);
extern PACKAGE void __fastcall Delay(Word MSec);
extern PACKAGE bool __fastcall DirectoryExists(const AnsiString DirName);
extern PACKAGE bool __fastcall DirectoryEmpty(const AnsiString DirName);
extern PACKAGE Extended __fastcall ExtractFileSize(const AnsiString FileName);
extern PACKAGE AnsiString __fastcall FileSizeToStr(const AnsiString FileName, const AnsiString Bytes
	, const AnsiString Kb, const AnsiString Mb);
extern PACKAGE AnsiString __fastcall GetKeyName(int lParam);
extern PACKAGE Classes::TShiftState __fastcall GetShiftState(void);
extern PACKAGE Byte __fastcall PercentsOf(Extended Entire, Extended Part);
extern PACKAGE void __fastcall StartScreenSaver(void);

}	/* namespace Acutils */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acutils;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acUtils
