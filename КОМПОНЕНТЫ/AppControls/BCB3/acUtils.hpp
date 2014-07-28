// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acUtils.pas' rev: 3.00

#ifndef acUtilsHPP
#define acUtilsHPP
#include <Classes.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acutils
{
//-- type declarations -------------------------------------------------------
enum TacSplitStrSide { LEFT, RIGHT };

typedef Set<TacSplitStrSide, LEFT, RIGHT>  TacSplitStrSides;

enum acUtils__1 { rfReplaceAll, rfIgnoreCase };

typedef Set<acUtils__1, rfReplaceAll, rfIgnoreCase>  TReplaceFlags;

enum TacOSVersion { osUnknown, os95, os95OSR2, os98, os98SE, osNT3, osNT4, os2K, osME };

//-- var, const, procedure ---------------------------------------------------
#define HTTPPrefix "http://"
extern PACKAGE System::AnsiString __fastcall IncludeTrailingBackslash(const System::AnsiString St);
extern PACKAGE System::AnsiString __fastcall ExcludeTrailingBackslash(const System::AnsiString St);
extern PACKAGE void __fastcall SplitStr(System::AnsiString SubStr, System::AnsiString Str, System::AnsiString 
	&FirstPart, System::AnsiString &SecondPart, TacSplitStrSide MainSide, TacSplitStrSides LeaveSeparatorOn
	);
extern PACKAGE void __fastcall SplitFilenameAndParams(System::AnsiString &FileName, System::AnsiString 
	&Params);
extern PACKAGE void __fastcall ParseURL(const System::AnsiString URL, System::AnsiString &Protocol, 
	System::AnsiString &HostName, System::AnsiString &ObjectName, int &PortNumber);
extern PACKAGE System::AnsiString __fastcall StringReplace(const System::AnsiString S, const System::AnsiString 
	OldPattern, const System::AnsiString NewPattern, TReplaceFlags Flags);
extern PACKAGE bool __fastcall IsValidEmail(System::AnsiString Email);
extern PACKAGE void __fastcall RunControlPanel(int CmdShow);
extern PACKAGE void __fastcall RunCPL(const System::AnsiString FileName, int CmdShow);
extern PACKAGE bool __fastcall OpenWithDlg(const System::AnsiString FileName);
extern PACKAGE void __fastcall RepaintScreen(void);
extern PACKAGE void __fastcall MinimizeAll(void);
extern PACKAGE void __fastcall RestoreAll(void);
extern PACKAGE System::AnsiString __fastcall DecToHex(int aValue);
extern PACKAGE int __fastcall HexToDec(const System::AnsiString aValue);
extern PACKAGE System::AnsiString __fastcall DecToBin(int aValue);
extern PACKAGE int __fastcall BinToDec(const System::AnsiString aValue);
extern PACKAGE Extended __fastcall IntToExt(int Int);
extern PACKAGE Extended __fastcall Int2x32ToExt(int IntHi, int IntLo);
extern PACKAGE System::AnsiString __fastcall GetExecutableByExtension(const System::AnsiString Extension
	);
extern PACKAGE void __fastcall OpenURL(System::AnsiString URL, bool InNewWindow);
extern PACKAGE void __fastcall ComposeEmail(System::AnsiString Address, const System::AnsiString Name
	, const System::AnsiString Subject, const System::AnsiString Message, const System::AnsiString CC, 
	const System::AnsiString BCC);
extern PACKAGE int __fastcall GetSystemImageList(int Size);
extern PACKAGE TacOSVersion __fastcall GetOS(void);
extern PACKAGE bool __fastcall IsNT(void);
extern PACKAGE bool __fastcall IsWin2k(void);
extern PACKAGE int __fastcall GetCPUSpeed(void);
extern PACKAGE bool __fastcall IsScreenSaverRunning(void);
extern PACKAGE System::AnsiString __fastcall GetTempDir();
extern PACKAGE System::AnsiString __fastcall GetSystemDir();
extern PACKAGE System::AnsiString __fastcall GetWindowsDir();
extern PACKAGE System::AnsiString __fastcall GetEnvironmentString(const System::AnsiString St);
extern PACKAGE int __fastcall GetFileVersion(const System::AnsiString FileName);
extern PACKAGE void __fastcall Sound(Word Hz);
extern PACKAGE void __fastcall NoSound(void);
extern PACKAGE void __fastcall Delay(Word MSec);
extern PACKAGE bool __fastcall DirectoryExists(const System::AnsiString DirName);
extern PACKAGE bool __fastcall DirectoryEmpty(const System::AnsiString DirName);
extern PACKAGE Extended __fastcall ExtractFileSize(const System::AnsiString FileName);
extern PACKAGE System::AnsiString __fastcall FileSizeToStr(const System::AnsiString FileName, const 
	System::AnsiString Bytes, const System::AnsiString Kb, const System::AnsiString Mb);
extern PACKAGE System::AnsiString __fastcall GetKeyName(int lParam);
extern PACKAGE Classes::TShiftState __fastcall GetShiftState(void);
extern PACKAGE Byte __fastcall PercentsOf(Extended Entire, Extended Part);
extern PACKAGE void __fastcall StartScreenSaver(void);

}	/* namespace Acutils */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acutils;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acUtils
