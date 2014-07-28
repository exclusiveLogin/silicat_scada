// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acFormPlacementSaver.pas' rev: 4.00

#ifndef acFormPlacementSaverHPP
#define acFormPlacementSaverHPP

#pragma delphiheader begin
#pragma option push -w-
#include <acClasses.hpp>	// Pascal unit
#include <Registry.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acformplacementsaver
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum acFormPlacementSaver__1 { saveOnClose, saveOnMoveResize };
#pragma option pop

typedef Set<acFormPlacementSaver__1, saveOnClose, saveOnMoveResize>  TacFormPlacementOptions;

typedef void __fastcall (__closure *TacFormPlacementSaverEvent)(System::TObject* Sender, Registry::TRegistry* 
	Reg);

class DELPHICLASS TacFormPlacementSaver;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacFormPlacementSaver : public Acclasses::TacAppHookComponent 
{
	typedef Acclasses::TacAppHookComponent inherited;
	
private:
	bool FEnabled;
	Acclasses::TacRegLocation FRegLocation;
	AnsiString FRegKey;
	bool FRestoreFormSize;
	TacFormPlacementOptions FOptions;
	TacFormPlacementSaverEvent FOnLoadSettings;
	TacFormPlacementSaverEvent FOnSaveSettings;
	void __fastcall SetRegLocation(Acclasses::TacRegLocation Value);
	void __fastcall SetRegKey(AnsiString Value);
	void __fastcall DoSave(Registry::TRegistry* Reg);
	
protected:
	virtual void __fastcall AppMessageBefore(Messages::TMessage &Message, bool &Handled);
	virtual void __fastcall MessageBefore(Messages::TMessage &Message, bool &Handled);
	virtual void __fastcall Loaded(void);
	
public:
	__fastcall virtual TacFormPlacementSaver(Classes::TComponent* aOwner);
	void __fastcall Save(void);
	
__published:
	__property About ;
	__property bool Enabled = {read=FEnabled, write=FEnabled, default=1};
	__property Acclasses::TacRegLocation RegLocation = {read=FRegLocation, write=SetRegLocation, nodefault
		};
	__property AnsiString RegKey = {read=FRegKey, write=SetRegKey};
	__property bool RestoreFormSize = {read=FRestoreFormSize, write=FRestoreFormSize, default=1};
	__property TacFormPlacementOptions Options = {read=FOptions, write=FOptions, nodefault};
	__property TacFormPlacementSaverEvent OnLoadSettings = {read=FOnLoadSettings, write=FOnLoadSettings
		};
	__property TacFormPlacementSaverEvent OnSaveSettings = {read=FOnSaveSettings, write=FOnSaveSettings
		};
public:
	#pragma option push -w-inl
	/* TacAppHookComponent.Destroy */ inline __fastcall virtual ~TacFormPlacementSaver(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TacFormHookComponent.KreateHook */ inline __fastcall TacFormPlacementSaver(Classes::TComponent* 
		aOwner, Controls::TWinControl* aHookedObject) : Acclasses::TacAppHookComponent(aOwner, aHookedObject
		) { }
	#pragma option pop
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acformplacementsaver */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acformplacementsaver;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acFormPlacementSaver
