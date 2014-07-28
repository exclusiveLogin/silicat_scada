// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acShortcut.pas' rev: 3.00

#ifndef acShortcutHPP
#define acShortcutHPP
#include <Menus.hpp>
#include <acClasses.hpp>
#include <Graphics.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acshortcut
{
//-- type declarations -------------------------------------------------------
enum TacShortcutRunAs { raNormal, raMinimized, raMaximized };

class DELPHICLASS TacShortcut;
class PASCALIMPLEMENTATION TacShortcut : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	System::AnsiString FFileName;
	Menus::TShortCut FHotKey;
	System::AnsiString FIconLocation;
	int FIconIndex;
	System::AnsiString FLinkTarget;
	System::AnsiString FParameters;
	System::AnsiString FShortDescription;
	System::AnsiString FWorkingDirectory;
	TacShortcutRunAs FRunAs;
	Graphics::TIcon* FLargeIcon;
	Graphics::TIcon* FSmallIcon;
	void __fastcall SetFileName(const System::AnsiString Value);
	void __fastcall SetIcon(Graphics::TIcon* Value);
	
public:
	__fastcall virtual TacShortcut(Classes::TComponent* aOwner);
	__fastcall virtual ~TacShortcut(void);
	bool __fastcall SaveToFile(const System::AnsiString FileName);
	bool __fastcall LoadFromFile(const System::AnsiString FileName);
	
__published:
	__property About ;
	__property System::AnsiString FILENAME = {read=FFileName, write=SetFileName, stored=false};
	__property Menus::TShortCut HotKey = {read=FHotKey, write=FHotKey, stored=false, nodefault};
	__property System::AnsiString IconLocation = {read=FIconLocation, write=FIconLocation, stored=false
		};
	__property int IconIndex = {read=FIconIndex, write=FIconIndex, stored=false, nodefault};
	__property System::AnsiString LinkTarget = {read=FLinkTarget, write=FLinkTarget, stored=false};
	__property System::AnsiString Parameters = {read=FParameters, write=FParameters, stored=false};
	__property System::AnsiString ShortDescription = {read=FShortDescription, write=FShortDescription, 
		stored=false};
	__property System::AnsiString WorkingDirectory = {read=FWorkingDirectory, write=FWorkingDirectory, 
		stored=false};
	__property TacShortcutRunAs RunAs = {read=FRunAs, write=FRunAs, stored=false, nodefault};
	__property Graphics::TIcon* LargeIcon = {read=FLargeIcon, write=SetIcon, stored=false};
	__property Graphics::TIcon* SmallIcon = {read=FSmallIcon, write=SetIcon, stored=false};
};

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE Word __fastcall ShortCutToHotKey(Menus::TShortCut ShortCut);
extern PACKAGE Menus::TShortCut __fastcall HotKeyToShortCut(Word HotKey);

}	/* namespace Acshortcut */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acshortcut;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acShortcut
