// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acClasses.pas' rev: 3.00

#ifndef acClassesHPP
#define acClassesHPP
#include <Forms.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acclasses
{
//-- type declarations -------------------------------------------------------
enum TacRegLocation { rlCurrentUser, rlLocalMachine };

typedef Set<char, 0, 255>  TCharSet;

class DELPHICLASS TacComponent;
class PASCALIMPLEMENTATION TacComponent : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	System::AnsiString FAbout;
	Controls::TWinControl* FParent;
	virtual void __fastcall SetParent(Controls::TWinControl* Value);
	virtual Forms::TForm* __fastcall GetParentForm(void);
	virtual void __fastcall SetParentForm(Forms::TForm* Value);
	
public:
	__property System::AnsiString About = {read=FAbout, write=FAbout, stored=false};
	__property Controls::TWinControl* Parent = {read=FParent, write=SetParent};
	__property Forms::TForm* ParentForm = {read=GetParentForm, write=SetParentForm};
	__fastcall virtual TacComponent(Classes::TComponent* aOwner);
public:
	/* TComponent.Destroy */ __fastcall virtual ~TacComponent(void) { }
	
};

class DELPHICLASS TacFormHookComponent;
class PASCALIMPLEMENTATION TacFormHookComponent : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	bool Hooked;
	bool FTopmost;
	int FParentHandle;
	void *FOldWndProc;
	void *FNewWndProc;
	void __fastcall HookWndProc(Messages::TMessage &Message);
	virtual void __fastcall SetParent(Controls::TWinControl* Value);
	int __fastcall GetWindowStyle(void);
	void __fastcall SetWindowStyle(int Value);
	int __fastcall GetWindowExStyle(void);
	void __fastcall SetWindowExStyle(int Value);
	bool __fastcall GetTopmost(void);
	void __fastcall SetTopmost(bool Value);
	
protected:
	virtual void __fastcall MessageBefore(Messages::TMessage &Message, bool &Handled);
	virtual void __fastcall MessageAfter(Messages::TMessage &Message);
	virtual void __fastcall FormRecreate(void);
	virtual int __fastcall GetParentHandle(void);
	virtual HMENU __fastcall GetSystemMenuHandle(void);
	
public:
	__fastcall virtual TacFormHookComponent(Classes::TComponent* aOwner);
	__fastcall TacFormHookComponent(Classes::TComponent* aOwner, Controls::TWinControl* aHookedObject);
		
	__fastcall virtual ~TacFormHookComponent(void);
	void __fastcall RefreshNCArea(void);
	__property int ParentHandle = {read=FParentHandle, nodefault};
	__property HMENU SystemMenuHandle = {read=GetSystemMenuHandle, nodefault};
	__property void * OldWndProc = {read=FOldWndProc};
	__property int WindowStyle = {read=GetWindowStyle, write=SetWindowStyle, nodefault};
	__property int WindowExStyle = {read=GetWindowExStyle, write=SetWindowExStyle, nodefault};
	__property bool Topmost = {read=GetTopmost, write=SetTopmost, nodefault};
	__property bool TopmostDesign = {read=FTopmost, nodefault};
};

class DELPHICLASS TacHFormHookComponent;
class PASCALIMPLEMENTATION TacHFormHookComponent : public Acclasses::TacFormHookComponent 
{
	typedef Acclasses::TacFormHookComponent inherited;
	
private:
	int FHandle;
	
protected:
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	
public:
	__fastcall virtual TacHFormHookComponent(Classes::TComponent* aOwner);
	__fastcall virtual ~TacHFormHookComponent(void);
	__property int Handle = {read=FHandle, nodefault};
public:
	/* TacFormHookComponent.KreateHook */ __fastcall TacHFormHookComponent(Classes::TComponent* aOwner, 
		Controls::TWinControl* aHookedObject) : Acclasses::TacFormHookComponent(aOwner, aHookedObject) { }
		
	
};

class DELPHICLASS TacAppHookComponent;
class PASCALIMPLEMENTATION TacAppHookComponent : public Acclasses::TacHFormHookComponent 
{
	typedef Acclasses::TacHFormHookComponent inherited;
	
private:
	bool AppHooked;
	void *OldAppWndProc;
	void *NewAppWndProc;
	void __fastcall HookAppMessages(void);
	void __fastcall UnhookAppMessages(void);
	void __fastcall HookAppProc(Messages::TMessage &Message);
	
protected:
	virtual void __fastcall AppMessageBefore(Messages::TMessage &Message, bool &Handled);
	virtual void __fastcall AppMessageAfter(Messages::TMessage &Message);
	
public:
	__fastcall virtual TacAppHookComponent(Classes::TComponent* aOwner);
	__fastcall virtual ~TacAppHookComponent(void);
public:
	/* TacFormHookComponent.KreateHook */ __fastcall TacAppHookComponent(Classes::TComponent* aOwner, Controls::TWinControl* 
		aHookedObject) : Acclasses::TacHFormHookComponent(aOwner, aHookedObject) { }
	
};

//-- var, const, procedure ---------------------------------------------------
#define UM_RECREATENOTIFY (Word)(1325)
#define WM_FORMCAPTIONCHANGED (Word)(14937)
#define WM_SYSTEMMENUCHANGED (Word)(14944)
#define WM_WHATSTHIS (Word)(14945)
#define WM_TOPMOSTCHANGEDNOTIFY (Word)(14946)
#define WM_APPBARNOTIFY (Word)(14947)
#define WM_TRAYICONNOTIFY (Word)(14948)
#define WM_RECREATENOTIFY (Word)(14949)
extern PACKAGE int MouseKeys[2];
extern PACKAGE int UMRNotify;
#define SOwnerMustBeForm "Owner must be a Form!"

}	/* namespace Acclasses */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acclasses;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acClasses
