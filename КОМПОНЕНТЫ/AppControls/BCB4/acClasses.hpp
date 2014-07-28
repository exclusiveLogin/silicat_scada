// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acClasses.pas' rev: 4.00

#ifndef acClassesHPP
#define acClassesHPP

#pragma delphiheader begin
#pragma option push -w-
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acclasses
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacRegLocation { rlCurrentUser, rlLocalMachine };
#pragma option pop

typedef Set<char, 0, 255>  TCharSet;

class DELPHICLASS TacComponent;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacComponent : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	AnsiString FAbout;
	Controls::TWinControl* FParent;
	virtual void __fastcall SetParent(Controls::TWinControl* Value);
	virtual Forms::TForm* __fastcall GetParentForm(void);
	virtual void __fastcall SetParentForm(Forms::TForm* Value);
	
public:
	__property AnsiString About = {read=FAbout, write=FAbout, stored=false};
	__property Controls::TWinControl* Parent = {read=FParent, write=SetParent};
	__property Forms::TForm* ParentForm = {read=GetParentForm, write=SetParentForm};
	__fastcall virtual TacComponent(Classes::TComponent* aOwner);
public:
	#pragma option push -w-inl
	/* TComponent.Destroy */ inline __fastcall virtual ~TacComponent(void) { }
	#pragma option pop
	
};

#pragma pack(pop)

class DELPHICLASS TacFormHookComponent;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacFormHookComponent : public TacComponent 
{
	typedef TacComponent inherited;
	
private:
	bool Hooked;
	bool FTopmost;
	unsigned FParentHandle;
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
	virtual unsigned __fastcall GetParentHandle(void);
	virtual HMENU __fastcall GetSystemMenuHandle(void);
	
public:
	__fastcall virtual TacFormHookComponent(Classes::TComponent* aOwner);
	__fastcall TacFormHookComponent(Classes::TComponent* aOwner, Controls::TWinControl* aHookedObject);
		
	__fastcall virtual ~TacFormHookComponent(void);
	void __fastcall RefreshNCArea(void);
	__property unsigned ParentHandle = {read=FParentHandle, nodefault};
	__property HMENU SystemMenuHandle = {read=GetSystemMenuHandle, nodefault};
	__property void * OldWndProc = {read=FOldWndProc};
	__property int WindowStyle = {read=GetWindowStyle, write=SetWindowStyle, nodefault};
	__property int WindowExStyle = {read=GetWindowExStyle, write=SetWindowExStyle, nodefault};
	__property bool Topmost = {read=GetTopmost, write=SetTopmost, nodefault};
	__property bool TopmostDesign = {read=FTopmost, nodefault};
};

#pragma pack(pop)

class DELPHICLASS TacHFormHookComponent;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacHFormHookComponent : public TacFormHookComponent 
{
	typedef TacFormHookComponent inherited;
	
private:
	unsigned FHandle;
	
protected:
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	
public:
	__fastcall virtual TacHFormHookComponent(Classes::TComponent* aOwner);
	__fastcall virtual ~TacHFormHookComponent(void);
	__property unsigned Handle = {read=FHandle, nodefault};
public:
	#pragma option push -w-inl
	/* TacFormHookComponent.KreateHook */ inline __fastcall TacHFormHookComponent(Classes::TComponent* 
		aOwner, Controls::TWinControl* aHookedObject) : TacFormHookComponent(aOwner, aHookedObject) { }
	#pragma option pop
	
};

#pragma pack(pop)

class DELPHICLASS TacAppHookComponent;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacAppHookComponent : public TacHFormHookComponent 
{
	typedef TacHFormHookComponent inherited;
	
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
	#pragma option push -w-inl
	/* TacFormHookComponent.KreateHook */ inline __fastcall TacAppHookComponent(Classes::TComponent* aOwner
		, Controls::TWinControl* aHookedObject) : TacHFormHookComponent(aOwner, aHookedObject) { }
	#pragma option pop
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const Word UM_RECREATENOTIFY = 0x52d;
static const Word WM_FORMCAPTIONCHANGED = 0x3a59;
static const Word WM_SYSTEMMENUCHANGED = 0x3a60;
static const Word WM_WHATSTHIS = 0x3a61;
static const Word WM_TOPMOSTCHANGEDNOTIFY = 0x3a62;
static const Word WM_APPBARNOTIFY = 0x3a63;
static const Word WM_TRAYICONNOTIFY = 0x3a64;
static const Word WM_RECREATENOTIFY = 0x3a65;
extern PACKAGE int MouseKeys[2];
extern PACKAGE int UMRNotify;
#define SOwnerMustBeForm "Owner must be a Form!"

}	/* namespace Acclasses */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acclasses;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acClasses
