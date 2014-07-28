// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acShortcut.pas' rev: 4.00

#ifndef acShortcutHPP
#define acShortcutHPP

#pragma delphiheader begin
#pragma option push -w-
#include <acClasses.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acshortcut
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacShortcutRunAs { raNormal, raMinimized, raMaximized };
#pragma option pop

class DELPHICLASS TacShortcut;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacShortcut : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	AnsiString FFileName;
	Classes::TShortCut FHotKey;
	AnsiString FIconLocation;
	int FIconIndex;
	AnsiString FLinkTarget;
	AnsiString FParameters;
	AnsiString FShortDescription;
	AnsiString FWorkingDirectory;
	TacShortcutRunAs FRunAs;
	Graphics::TIcon* FLargeIcon;
	Graphics::TIcon* FSmallIcon;
	void __fastcall SetFileName(const AnsiString Value);
	void __fastcall SetIcon(Graphics::TIcon* Value);
	
public:
	__fastcall virtual TacShortcut(Classes::TComponent* aOwner);
	__fastcall virtual ~TacShortcut(void);
	bool __fastcall SaveToFile(const AnsiString FileName);
	bool __fastcall LoadFromFile(const AnsiString FileName);
	
__published:
	__property About ;
	__property AnsiString FILENAME = {read=FFileName, write=SetFileName, stored=false};
	__property Classes::TShortCut HotKey = {read=FHotKey, write=FHotKey, stored=false, nodefault};
	__property AnsiString IconLocation = {read=FIconLocation, write=FIconLocation, stored=false};
	__property int IconIndex = {read=FIconIndex, write=FIconIndex, stored=false, nodefault};
	__property AnsiString LinkTarget = {read=FLinkTarget, write=FLinkTarget, stored=false};
	__property AnsiString Parameters = {read=FParameters, write=FParameters, stored=false};
	__property AnsiString ShortDescription = {read=FShortDescription, write=FShortDescription, stored=false
		};
	__property AnsiString WorkingDirectory = {read=FWorkingDirectory, write=FWorkingDirectory, stored=false
		};
	__property TacShortcutRunAs RunAs = {read=FRunAs, write=FRunAs, stored=false, nodefault};
	__property Graphics::TIcon* LargeIcon = {read=FLargeIcon, write=SetIcon, stored=false};
	__property Graphics::TIcon* SmallIcon = {read=FSmallIcon, write=SetIcon, stored=false};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE Word __fastcall ShortCutToHotKey(Classes::TShortCut ShortCut);
extern PACKAGE Classes::TShortCut __fastcall HotKeyToShortCut(Word HotKey);

}	/* namespace Acshortcut */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acshortcut;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acShortcut
