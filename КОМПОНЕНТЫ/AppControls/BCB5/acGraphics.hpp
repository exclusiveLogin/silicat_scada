// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acGraphics.pas' rev: 5.00

#ifndef acGraphicsHPP
#define acGraphicsHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <SysUtils.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acgraphics
{
//-- type declarations -------------------------------------------------------
#pragma pack(push, 1)
struct TacColorQuad
{
	Byte Red;
	Byte Green;
	Byte Blue;
	Byte Alpha;
} ;
#pragma pack(pop)

struct FLASHWINFO
{
	unsigned cbSize;
	HWND hwnd;
	unsigned dwFlags;
	unsigned uCount;
	unsigned dwTimeout;
} ;

typedef FLASHWINFO  TFlashWInfo;

#pragma option push -b-
enum acGraphics__1 { afHorPositive, afHorNegative, afVerPositive, afVerNegative, afCenter, afSlide, 
	afBlend };
#pragma option pop

typedef Set<acGraphics__1, afHorPositive, afBlend>  TacWin2kAnimationFlags;

//-- var, const, procedure ---------------------------------------------------
#define IDC_LINKSELECT (char *)(0x7f89)
#define IDC_HANDWRITING (char *)(0x7f77)
static const short crLinkSelect = 0xffffff69;
static const short crHandwriting = 0xffffff68;
static const short cr3dAppStart = 0xffffff67;
static const short cr3dArrow = 0xffffff66;
static const short cr3dArrowNE = 0xffffff65;
static const short cr3dArrowScrollHorz = 0xffffff64;
static const short cr3dArrowScrollVert = 0xffffff63;
static const short cr3dArrowSize = 0xffffff62;
static const short cr3dArrowResize = 0xffffff61;
static const short cr3dArrowWarning = 0xffffff60;
static const short cr3dCross = 0xffffff5f;
static const short cr3dDragSelection = 0xffffff5e;
static const short cr3dDragSelectionPlus = 0xffffff5d;
static const short cr3dHandwriting = 0xffffff5c;
static const short cr3dHelp = 0xffffff5b;
static const short cr3dHourGlass = 0xffffff5a;
static const short cr3dIBeam = 0xffffff59;
static const short cr3dNo = 0xffffff58;
static const short cr3dSize = 0xffffff57;
static const short cr3dSizeNESW = 0xffffff56;
static const short cr3dSizeNS = 0xffffff55;
static const short cr3dSizeNWSE = 0xffffff54;
static const short cr3dSizeWE = 0xffffff53;
static const short cr3dTool = 0xffffff52;
static const short cr3dUpArrow = 0xffffff51;
static const short crArrowNE = 0xffffff50;
static const short crArrowNW = 0xffffff4f;
static const short crArrowScrollHorz = 0xffffff4e;
static const short crArrowScrollVert = 0xffffff4d;
static const short crArrowSE = 0xffffff4c;
static const short crArrowSize = 0xffffff4b;
static const short crArrowResize = 0xffffff4a;
static const short crArrowSW = 0xffffff49;
static const short crDragFile = 0xffffff48;
static const short crDragFiles = 0xffffff47;
static const short crDragSelection = 0xffffff46;
static const short crDragSelectionPlus = 0xffffff45;
static const short crHand = 0xffffff44;
static const short crItBeam = 0xffffff43;
static const short crPen = 0xffffff42;
static const short crTool = 0xffffff41;
static const short crZoomIn = 0xffffff40;
static const short crZoomOut = 0xffffff3f;
static const Graphics::TColor clHotLight = 0x8000001a;
static const Graphics::TColor clGradientActiveCaption = 0x8000001b;
static const Graphics::TColor clGradientInactiveCaption = 0x8000001c;
static const Graphics::TColor clContextHelp = 0xeeffff;
static const Graphics::TColor clBrown = 0x3090;
static const Graphics::TColor clOliveGreen = 0x3030;
static const Graphics::TColor clDarkGreen = 0x3000;
static const Graphics::TColor clDarkTeal = 0x603000;
static const Graphics::TColor clIndigo = 0x903030;
static const Graphics::TColor clNight = 0x303030;
static const Graphics::TColor clOrange = 0x68ff;
static const Graphics::TColor clBlueGray = 0x906060;
static const Graphics::TColor clLightOrange = 0x98ff;
static const Graphics::TColor clSeaGreen = 0x609830;
static const Graphics::TColor clLightBlue = 0xff6830;
static const Graphics::TColor clMetal = 0x909090;
static const Graphics::TColor clGold = 0xc8ff;
static const Graphics::TColor clSkyBlue = 0xffc800;
static const Graphics::TColor clPlum = 0x603090;
static const Graphics::TColor clRose = 0xd098ff;
static const Graphics::TColor clTan = 0xa0c8ff;
static const Graphics::TColor clLightYellow = 0x90ffff;
static const Graphics::TColor clLightGreen = 0xd0ffd0;
static const Graphics::TColor clLightTurquoise = 0xffffc0;
static const Graphics::TColor clPaleBlue = 0xffc890;
static const Graphics::TColor clLavender = 0xff98c0;
static const Graphics::TColor clCream = 0xa6caf0;
static const Graphics::TColor clMoneyGreen = 0xc0dcc0;
static const Shortint aLWA_COLORKEY = 0x1;
static const Shortint aLWA_ALPHA = 0x2;
static const int aWS_EX_LAYERED = 0x80000;
static const Shortint aWS_EX_TRANSPARENT = 0x20;
static const Shortint aFLASHW_STOP = 0x0;
static const Shortint aFLASHW_CAPTION = 0x1;
static const Shortint aFLASHW_TRAY = 0x2;
static const Shortint aFLASHW_ALL = 0x3;
static const Shortint aFLASHW_TIMER = 0x4;
static const Shortint aFLASHW_TIMERNOFG = 0xc;
static const Shortint aAW_HOR_POSITIVE = 0x1;
static const Shortint aAW_HOR_NEGATIVE = 0x2;
static const Shortint aAW_VER_POSITIVE = 0x4;
static const Shortint aAW_VER_NEGATIVE = 0x8;
static const Shortint aAW_CENTER = 0x10;
static const int aAW_HIDE = 0x10000;
static const int aAW_ACTIVATE = 0x20000;
static const int aAW_SLIDE = 0x40000;
static const int aAW_BLEND = 0x80000;
extern PACKAGE BOOL __fastcall AnimateWindow(HWND hWnd, unsigned dwTime, unsigned dwFlags);
extern PACKAGE BOOL __fastcall FlashWindowEx(FLASHWINFO &pfwi);
extern PACKAGE int __fastcall SetLayeredWindowAttributes(unsigned hWnd, unsigned crKey, Byte bAlpha, 
	int dwFlags);
extern PACKAGE void __fastcall acMakeTranslucentWindow(unsigned Wnd, Byte TransparencyRate);
extern PACKAGE void __fastcall acMakeOpaqueWindow(unsigned Wnd);
extern PACKAGE void __fastcall acAnimateWindow(Forms::TForm* Form, Word Time, TacWin2kAnimationFlags 
	AnimationType, bool Open);
extern PACKAGE void __fastcall acFlashWindow(unsigned Wnd, int Count, bool FlashTaskIcon);
extern PACKAGE bool __fastcall acIdentToCursor(const AnsiString Ident, int &Cursor);
extern PACKAGE AnsiString __fastcall acCursorToString(Controls::TCursor Cursor);
extern PACKAGE Controls::TCursor __fastcall acStringToCursor(const AnsiString S);
extern PACKAGE void __fastcall acGetCursorValues(Classes::TGetStrProc Proc);
extern PACKAGE AnsiString __fastcall acColorToString(Graphics::TColor Color);
extern PACKAGE Graphics::TColor __fastcall acStringToColor(const AnsiString S);
extern PACKAGE void __fastcall acGetColorValues(Classes::TGetStrProc Proc);
extern PACKAGE void __fastcall InitACGraphics(void);

}	/* namespace Acgraphics */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acgraphics;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acGraphics
