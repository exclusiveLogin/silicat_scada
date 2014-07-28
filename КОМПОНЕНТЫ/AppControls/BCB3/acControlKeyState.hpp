// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acControlKeyState.pas' rev: 3.00

#ifndef acControlKeyStateHPP
#define acControlKeyStateHPP
#include <acClasses.hpp>
#include <Forms.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Accontrolkeystate
{
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TacControlKeyStateEvent)(System::TObject* Sender, bool stOn);

class DELPHICLASS TacControlKeyState;
class PASCALIMPLEMENTATION TacControlKeyState : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	TacControlKeyStateEvent FOnControl;
	TacControlKeyStateEvent FOnShift;
	TacControlKeyStateEvent FOnCapsLock;
	TacControlKeyStateEvent FOnNumLock;
	TacControlKeyStateEvent FOnScrollLock;
	TacControlKeyStateEvent FOnInsert;
	Byte KeyState[256];
	Forms::TMessageEvent FOnOldAppMessage;
	Classes::TNotifyEvent FOnOldActive;
	bool __fastcall GetControl(void);
	void __fastcall SetControl(bool Value);
	bool __fastcall GetShift(void);
	void __fastcall SetShift(bool Value);
	bool __fastcall GetCapsLock(void);
	void __fastcall SetCapsLock(bool Value);
	bool __fastcall GetNumLock(void);
	void __fastcall SetNumLock(bool Value);
	bool __fastcall GetScrollLock(void);
	void __fastcall SetScrollLock(bool Value);
	bool __fastcall GetInsert(void);
	void __fastcall SetInsert(bool Value);
	bool __fastcall GetState(int Ctrl);
	void __fastcall SetState(int Ctrl, bool stOn);
	void __fastcall AppMessage(tagMSG &Msg, bool &Handled);
	void __fastcall AppActive(System::TObject* Sender);
	void __fastcall FireEvents(void);
	
protected:
	virtual void __fastcall Loaded(void);
	
public:
	__fastcall virtual TacControlKeyState(Classes::TComponent* aOwner);
	__fastcall virtual ~TacControlKeyState(void);
	
__published:
	__property About ;
	__property bool Control = {read=GetControl, write=SetControl, nodefault};
	__property bool Shift = {read=GetShift, write=SetShift, nodefault};
	__property bool CapsLock = {read=GetCapsLock, write=SetCapsLock, nodefault};
	__property bool NumLock = {read=GetNumLock, write=SetNumLock, nodefault};
	__property bool ScrollLock = {read=GetScrollLock, write=SetScrollLock, nodefault};
	__property bool Insert = {read=GetInsert, write=SetInsert, nodefault};
	__property TacControlKeyStateEvent OnControl = {read=FOnControl, write=FOnControl};
	__property TacControlKeyStateEvent OnShift = {read=FOnShift, write=FOnShift};
	__property TacControlKeyStateEvent OnCapsLock = {read=FOnCapsLock, write=FOnCapsLock};
	__property TacControlKeyStateEvent OnNumLock = {read=FOnNumLock, write=FOnNumLock};
	__property TacControlKeyStateEvent OnScrollLock = {read=FOnScrollLock, write=FOnScrollLock};
	__property TacControlKeyStateEvent OnInsert = {read=FOnInsert, write=FOnInsert};
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Accontrolkeystate */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Accontrolkeystate;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acControlKeyState
