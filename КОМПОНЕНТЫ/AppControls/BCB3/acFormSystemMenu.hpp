// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acFormSystemMenu.pas' rev: 3.00

#ifndef acFormSystemMenuHPP
#define acFormSystemMenuHPP
#include <acClasses.hpp>
#include <Menus.hpp>
#include <Forms.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acformsystemmenu
{
//-- type declarations -------------------------------------------------------
enum TacSystemMenuItemState { isActive, isHidden, isDisabled };

enum TacSystemMenuStdItems { smiRestore, smiMove, smiSize, smiMinimize, smiMaximize, smiClose, smiMDINext, 
	smiSeparator };

class DELPHICLASS TacFormSystemMenuItems;
class DELPHICLASS TacFormSystemMenu;
class DELPHICLASS TacFormSystemMenuHook;
class PASCALIMPLEMENTATION TacFormSystemMenuHook : public Acclasses::TacFormHookComponent 
{
	typedef Acclasses::TacFormHookComponent inherited;
	
protected:
	virtual void __fastcall MessageBefore(Messages::TMessage &Message, bool &Handled);
public:
	/* TacFormHookComponent.Create */ __fastcall virtual TacFormSystemMenuHook(Classes::TComponent* aOwner
		) : Acclasses::TacFormHookComponent(aOwner) { }
	/* TacFormHookComponent.KreateHook */ __fastcall TacFormSystemMenuHook(Classes::TComponent* aOwner, 
		Controls::TWinControl* aHookedObject) : Acclasses::TacFormHookComponent(aOwner, aHookedObject) { }
		
	/* TacFormHookComponent.Destroy */ __fastcall virtual ~TacFormSystemMenuHook(void) { }
	
};

class PASCALIMPLEMENTATION TacFormSystemMenu : public Menus::TPopupMenu 
{
	typedef Menus::TPopupMenu inherited;
	
private:
	System::AnsiString FAbout;
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
	__property System::AnsiString About = {read=FAbout, write=FAbout, stored=false};
	__property bool Active = {read=FActive, write=SetActive, default=1};
	__property Word InsertPosition = {read=FInsertPosition, write=FInsertPosition, nodefault};
	__property TacFormSystemMenuItems* SysItems = {read=FSysItems, write=FSysItems};
};

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
		
	/* TPersistent.Destroy */ __fastcall virtual ~TacFormSystemMenuItems(void) { }
	
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acformsystemmenu */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acformsystemmenu;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acFormSystemMenu
