// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acDesktopWallpaper.pas' rev: 4.00

#ifndef acDesktopWallpaperHPP
#define acDesktopWallpaperHPP

#pragma delphiheader begin
#pragma option push -w-
#include <acClasses.hpp>	// Pascal unit
#include <Registry.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acdesktopwallpaper
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacDesktopWallpaper;
#pragma pack(push, 4)
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
	AnsiString __fastcall GetWallpaper();
	void __fastcall SetWallpaper(AnsiString Value);
	
public:
	void __fastcall SetDesktopWallpaper(AnsiString WallpaperFile, bool aStretch, bool aTile);
	void __fastcall RemoveWallpaper(void);
	
__published:
	__property About ;
	__property bool AutoFormat = {read=FAutoFormat, write=SetAutoFormat, nodefault};
	__property bool Tile = {read=GetTile, write=SetTile, nodefault};
	__property bool Stretch = {read=GetStretch, write=SetStretch, nodefault};
	__property AnsiString Wallpaper = {read=GetWallpaper, write=SetWallpaper};
public:
	#pragma option push -w-inl
	/* TacComponent.Create */ inline __fastcall virtual TacDesktopWallpaper(Classes::TComponent* aOwner
		) : Acclasses::TacComponent(aOwner) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TComponent.Destroy */ inline __fastcall virtual ~TacDesktopWallpaper(void) { }
	#pragma option pop
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acdesktopwallpaper */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acdesktopwallpaper;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acDesktopWallpaper
