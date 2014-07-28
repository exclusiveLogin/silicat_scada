// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acFormPlacementSaver.pas' rev: 3.00

#ifndef acFormPlacementSaverHPP
#define acFormPlacementSaverHPP
#include <acClasses.hpp>
#include <Registry.hpp>
#include <Forms.hpp>
#include <Classes.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acformplacementsaver
{
//-- type declarations -------------------------------------------------------
enum acFormPlacementSaver__1 { saveOnClose, saveOnMoveResize };

typedef Set<acFormPlacementSaver__1, saveOnClose, saveOnMoveResize>  TacFormPlacementOptions;

typedef void __fastcall (__closure *TacFormPlacementSaverEvent)(System::TObject* Sender, Registry::TRegistry* 
	Reg);

class DELPHICLASS TacFormPlacementSaver;
class PASCALIMPLEMENTATION TacFormPlacementSaver : public Acclasses::TacAppHookComponent 
{
	typedef Acclasses::TacAppHookComponent inherited;
	
private:
	bool FEnabled;
	TacRegLocation FRegLocation;
	System::AnsiString FRegKey;
	bool FRestoreFormSize;
	TacFormPlacementOptions FOptions;
	TacFormPlacementSaverEvent FOnLoadSettings;
	TacFormPlacementSaverEvent FOnSaveSettings;
	void __fastcall SetRegLocation(Acclasses::TacRegLocation Value);
	void __fastcall SetRegKey(System::AnsiString Value);
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
	__property System::AnsiString RegKey = {read=FRegKey, write=SetRegKey};
	__property bool RestoreFormSize = {read=FRestoreFormSize, write=FRestoreFormSize, default=1};
	__property TacFormPlacementOptions Options = {read=FOptions, write=FOptions, nodefault};
	__property TacFormPlacementSaverEvent OnLoadSettings = {read=FOnLoadSettings, write=FOnLoadSettings
		};
	__property TacFormPlacementSaverEvent OnSaveSettings = {read=FOnSaveSettings, write=FOnSaveSettings
		};
public:
	/* TacAppHookComponent.Destroy */ __fastcall virtual ~TacFormPlacementSaver(void) { }
	
public:
	/* TacFormHookComponent.KreateHook */ __fastcall TacFormPlacementSaver(Classes::TComponent* aOwner, 
		Controls::TWinControl* aHookedObject) : Acclasses::TacAppHookComponent(aOwner, aHookedObject) { }
	
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acformplacementsaver */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acformplacementsaver;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acFormPlacementSaver
