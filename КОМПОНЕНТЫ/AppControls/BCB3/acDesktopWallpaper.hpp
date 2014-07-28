// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acDesktopWallpaper.pas' rev: 3.00

#ifndef acDesktopWallpaperHPP
#define acDesktopWallpaperHPP
#include <acClasses.hpp>
#include <Registry.hpp>
#include <SysUtils.hpp>
#include <Forms.hpp>
#include <Classes.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acdesktopwallpaper
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacDesktopWallpaper;
class PASCALIMPLEMENTATION TacDesktopWallpaper : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	bool FAutoFormat;
	void __fastcall SetAppearance(bool aStretch, bool aTile);
	void __fastcall SetAutoAppearance(void);
	void __fastcall RefreshWallpaper(void);
	void __fastcall SetAutoFormat(bool Value);
	bool __fastcall GetTile(void);
	void __fastcall SetTile(bool Value);
	bool __fastcall GetStretch(void);
	void __fastcall SetStretch(bool Value);
	System::AnsiString __fastcall GetWallpaper();
	void __fastcall SetWallpaper(System::AnsiString Value);
	
public:
	void __fastcall SetDesktopWallpaper(System::AnsiString WallpaperFile, bool aStretch, bool aTile);
	void __fastcall RemoveWallpaper(void);
	
__published:
	__property About ;
	__property bool AutoFormat = {read=FAutoFormat, write=SetAutoFormat, nodefault};
	__property bool Tile = {read=GetTile, write=SetTile, nodefault};
	__property bool Stretch = {read=GetStretch, write=SetStretch, nodefault};
	__property System::AnsiString Wallpaper = {read=GetWallpaper, write=SetWallpaper};
public:
	/* TacComponent.Create */ __fastcall virtual TacDesktopWallpaper(Classes::TComponent* aOwner) : Acclasses::
		TacComponent(aOwner) { }
	
public:
	/* TComponent.Destroy */ __fastcall virtual ~TacDesktopWallpaper(void) { }
	
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acdesktopwallpaper */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acdesktopwallpaper;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acDesktopWallpaper
