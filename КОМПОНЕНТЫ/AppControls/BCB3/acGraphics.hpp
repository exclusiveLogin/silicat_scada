// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acGraphics.pas' rev: 3.00

#ifndef acGraphicsHPP
#define acGraphicsHPP
#include <SysUtils.hpp>
#include <Forms.hpp>
#include <Classes.hpp>
#include <Graphics.hpp>
#include <Controls.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acgraphics
{
//-- type declarations -------------------------------------------------------
struct FLASHWINFO
{
	int cbSize;
	HWND hwnd;
	int dwFlags;
	int uCount;
	int dwTimeout;
} ;

typedef FLASHWINFO  TFlashWInfo;

enum acGraphics__1 { afHorPositive, afHorNegative, afVerPositive, afVerNegative, afCenter, afSlide, 
	afBlend };

typedef Set<acGraphics__1, afHorPositive, afBlend>  TacWin2kAnimationFlags;

//-- var, const, procedure ---------------------------------------------------
#define IDC_LINKSELECT (char *)(0x7f89)
#define IDC_HANDWRITING (char *)(0x7f77)
#define crLinkSelect (short)(-151)
#define crHandwriting (short)(-152)
#define cr3dAppStart (short)(-153)
#define cr3dArrow (short)(-154)
#define cr3dArrowNE (short)(-155)
#define cr3dArrowScrollHorz (short)(-156)
#define cr3dArrowScrollVert (short)(-157)
#define cr3dArrowSize (short)(-158)
#define cr3dArrowResize (short)(-159)
#define cr3dArrowWarning (short)(-160)
#define cr3dCross (short)(-161)
#define cr3dDragSelection (short)(-162)
#define cr3dDragSelectionPlus (short)(-163)
#define cr3dHandwriting (short)(-164)
#define cr3dHelp (short)(-165)
#define cr3dHourGlass (short)(-166)
#define cr3dIBeam (short)(-167)
#define cr3dNo (short)(-168)
#define cr3dSize (short)(-169)
#define cr3dSizeNESW (short)(-170)
#define cr3dSizeNS (short)(-171)
#define cr3dSizeNWSE (short)(-172)
#define cr3dSizeWE (short)(-173)
#define cr3dTool (short)(-174)
#define cr3dUpArrow (short)(-175)
#define crArrowNE (short)(-176)
#define crArrowNW (short)(-177)
#define crArrowScrollHorz (short)(-178)
#define crArrowScrollVert (short)(-179)
#define crArrowSE (short)(-180)
#define crArrowSize (short)(-181)
#define crArrowResize (short)(-182)
#define crArrowSW (short)(-183)
#define crDragFile (short)(-184)
#define crDragFiles (short)(-185)
#define crDragSelection (short)(-186)
#define crDragSelectionPlus (short)(-187)
#define crHand (short)(-188)
#define crItBeam (short)(-189)
#define crPen (short)(-190)
#define crTool (short)(-191)
#define crZoomIn (short)(-192)
#define crZoomOut (short)(-193)
#define COLOR_HOTLIGHT (Byte)(26)
#define COLOR_GRADIENTACTIVECAPTION (Byte)(27)
#define COLOR_GRADIENTINACTIVECAPTION (Byte)(28)
#define clHotLight (Graphics::TColor)(-2147483622)
#define clGradientActiveCaption (Graphics::TColor)(-2147483621)
#define clGradientInactiveCaption (Graphics::TColor)(-2147483620)
#define clContextHelp (Graphics::TColor)(15663103)
#define clBrown (Graphics::TColor)(12432)
#define clOliveGreen (Graphics::TColor)(12336)
#define clDarkGreen (Graphics::TColor)(12288)
#define clDarkTeal (Graphics::TColor)(6303744)
#define clIndigo (Graphics::TColor)(9449520)
#define clNight (Graphics::TColor)(3158064)
#define clOrange (Graphics::TColor)(26879)
#define clBlueGray (Graphics::TColor)(9461856)
#define clLightOrange (Graphics::TColor)(39167)
#define clSeaGreen (Graphics::TColor)(6330416)
#define clLightBlue (Graphics::TColor)(16738352)
#define clMetal (Graphics::TColor)(9474192)
#define clGold (Graphics::TColor)(51455)
#define clSkyBlue (Graphics::TColor)(16762880)
#define clPlum (Graphics::TColor)(6303888)
#define clRose (Graphics::TColor)(13670655)
#define clTan (Graphics::TColor)(10537215)
#define clLightYellow (Graphics::TColor)(9502719)
#define clLightGreen (Graphics::TColor)(13696976)
#define clLightTurquoise (Graphics::TColor)(16777152)
#define clPaleBlue (Graphics::TColor)(16763024)
#define clLavender (Graphics::TColor)(16750784)
#define clCream (Graphics::TColor)(10930928)
#define clMoneyGreen (Graphics::TColor)(12639424)
#define aLWA_COLORKEY (Byte)(1)
#define aLWA_ALPHA (Byte)(2)
#define aWS_EX_LAYERED (int)(524288)
#define aWS_EX_TRANSPARENT (Byte)(32)
#define aFLASHW_STOP (Byte)(0)
#define aFLASHW_CAPTION (Byte)(1)
#define aFLASHW_TRAY (Byte)(2)
#define aFLASHW_ALL (Byte)(3)
#define aFLASHW_TIMER (Byte)(4)
#define aFLASHW_TIMERNOFG (Byte)(12)
#define aAW_HOR_POSITIVE (Byte)(1)
#define aAW_HOR_NEGATIVE (Byte)(2)
#define aAW_VER_POSITIVE (Byte)(4)
#define aAW_VER_NEGATIVE (Byte)(8)
#define aAW_CENTER (Byte)(16)
#define aAW_HIDE (int)(65536)
#define aAW_ACTIVATE (int)(131072)
#define aAW_SLIDE (int)(262144)
#define aAW_BLEND (int)(524288)
extern PACKAGE BOOL __fastcall AnimateWindow(HWND hWnd, int dwTime, int dwFlags);
extern PACKAGE BOOL __fastcall FlashWindowEx(FLASHWINFO &pfwi);
extern PACKAGE int __fastcall SetLayeredWindowAttributes(int hWnd, int crKey, Byte bAlpha, int dwFlags
	);
extern PACKAGE void __fastcall acMakeTranslucentWindow(int Wnd, Byte TransparencyRate);
extern PACKAGE void __fastcall acMakeOpaqueWindow(int Wnd);
extern PACKAGE void __fastcall acAnimateWindow(Forms::TForm* Form, Word Time, TacWin2kAnimationFlags 
	AnimationType, bool Open);
extern PACKAGE void __fastcall acFlashWindow(int Wnd, int Count, bool FlashTaskIcon);
extern PACKAGE bool __fastcall acIdentToCursor(const System::AnsiString Ident, int &Cursor);
extern PACKAGE System::AnsiString __fastcall acCursorToString(Controls::TCursor Cursor);
extern PACKAGE Controls::TCursor __fastcall acStringToCursor(const System::AnsiString S);
extern PACKAGE void __fastcall acGetCursorValues(Classes::TGetStrProc Proc);
extern PACKAGE System::AnsiString __fastcall acColorToString(Graphics::TColor Color);
extern PACKAGE Graphics::TColor __fastcall acStringToColor(const System::AnsiString S);
extern PACKAGE void __fastcall acGetColorValues(Classes::TGetStrProc Proc);
extern PACKAGE void __fastcall InitACGraphics(void);

}	/* namespace Acgraphics */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acgraphics;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acGraphics
