// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acFormSystemMenu.pas' rev: 4.00

#ifndef acFormSystemMenuHPP
#define acFormSystemMenuHPP

#pragma delphiheader begin
#pragma option push -w-
#include <acClasses.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acformsystemmenu
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacSystemMenuItemState { isActive, isHidden, isDisabled };
#pragma option pop

#pragma option push -b-
enum TacSystemMenuStdItems { smiRestore, smiMove, smiSize, smiMinimize, smiMaximize, smiClose, smiMDINext, 
	smiSeparator };
#pragma option pop

class DELPHICLASS TacFormSystemMenuItems;
class DELPHICLASS TacFormSystemMenu;
class DELPHICLASS TacFormSystemMenuHook;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacFormSystemMenuHook : public Acclasses::TacFormHookComponent 
{
	typedef Acclasses::TacFormHookComponent inherited;
	
protected:
	virtual void __fastcall MessageBefore(Messages::TMessage &Message, bool &Handled);
public:
	#pragma option push -w-inl
	/* TacFormHookComponent.Create */ inline __fastcall virtual TacFormSystemMenuHook(Classes::TComponent* 
		aOwner) : Acclasses::TacFormHookComponent(aOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacFormHookComponent.KreateHook */ inline __fastcall TacFormSystemMenuHook(Classes::TComponent* 
		aOwner, Controls::TWinControl* aHookedObject) : Acclasses::TacFormHookComponent(aOwner, aHookedObject
		) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacFormHookComponent.Destroy */ inline __fastcall virtual ~TacFormSystemMenuHook(void) { }
	#pragma option pop
	
};

#pragma pack(pop)

#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacFormSystemMenu : public Menus::TPopupMenu 
{
	typedef Menus::TPopupMenu inherited;
	
private:
	AnsiString FAbout;
	bool FActive;
	Word FInsertPosition;
	TacFormSystemMenuItems* FSysItems;
	Forms::TForm* ParentForm;
	TacFormSystemMenuHook* FFormHook;
	void __fastcall SetActive(bool Value);
	HMENU __fastcall GetSystemMenuHandle(void);
	int __fastcall GetWindowStyle(void);
	void __fastcall SetWindowStyle(int Value);
	
protected:
	virtual void __fastcall Loaded(void);
	virtual void __fastcall InsertMenu(void);
	
public:
	__fastcall virtual TacFormSystemMenu(Classes::TComponent* aOwner);
	__fastcall virtual ~TacFormSystemMenu(void);
	virtual void __fastcall RefreshNCArea(void);
	virtual void __fastcall RestoreDefaultMenu(void);
	virtual void __fastcall UpdateSystemMenu(void);
	__property HMENU SystemMenuHandle = {read=GetSystemMenuHandle, nodefault};
	__property int WindowStyle = {read=GetWindowStyle, write=SetWindowStyle, nodefault};
	
__published:
	__property AnsiString About = {read=FAbout, write=FAbout, stored=false};
	__property bool Active = {read=FActive, write=SetActive, default=1};
	__property Word InsertPosition = {read=FInsertPosition, write=FInsertPosition, nodefault};
	__property TacFormSystemMenuItems* SysItems = {read=FSysItems, write=FSysItems};
};

#pragma pack(pop)

#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacFormSystemMenuItems : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	TacSystemMenuItemState FStdItem[8];
	TacFormSystemMenu* SysMenu;
	void __fastcall SetRestore(TacSystemMenuItemState Value);
	void __fastcall SetMove(TacSystemMenuItemState Value);
	void __fastcall SetSize(TacSystemMenuItemState Value);
	void __fastcall SetMinimize(TacSystemMenuItemState Value);
	void __fastcall SetMaximize(TacSystemMenuItemState Value);
	void __fastcall SetSeparator(TacSystemMenuItemState Value);
	void __fastcall SetClose(TacSystemMenuItemState Value);
	void __fastcall SetMDINext(TacSystemMenuItemState Value);
	
public:
	__fastcall TacFormSystemMenuItems(TacFormSystemMenu* aSystemMenu);
	
__published:
	__property TacSystemMenuItemState Restore = {read=FStdItem[4], write=SetRestore, nodefault};
	__property TacSystemMenuItemState Move = {read=FStdItem[5], write=SetMove, nodefault};
	__property TacSystemMenuItemState Size = {read=FStdItem[6], write=SetSize, nodefault};
	__property TacSystemMenuItemState Minimize = {read=FStdItem[7], write=SetMinimize, nodefault};
	__property TacSystemMenuItemState Maximize = {read=FStdItem[8], write=SetMaximize, nodefault};
	__property TacSystemMenuItemState Separator = {read=FStdItem[11], write=SetSeparator, nodefault};
	__property TacSystemMenuItemState Close = {read=FStdItem[9], write=SetClose, nodefault};
	__property TacSystemMenuItemState MDINext = {read=FStdItem[10], write=SetMDINext, nodefault};
public:
		
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacFormSystemMenuItems(void) { }
	#pragma option pop
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acformsystemmenu */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acformsystemmenu;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acFormSystemMenu
