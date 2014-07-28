// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acAppAutoRun.pas' rev: 3.00

#ifndef acAppAutoRunHPP
#define acAppAutoRunHPP
#include <acClasses.hpp>
#include <acCaptionButton.hpp>
#include <Registry.hpp>
#include <Forms.hpp>
#include <Graphics.hpp>
#include <Classes.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acappautorun
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacAutoRunLogonNotice;
class PASCALIMPLEMENTATION TacAutoRunLogonNotice : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	System::AnsiString FCaption;
	bool FEnabled;
	System::AnsiString FText;
	void __fastcall SetCaption(System::AnsiString Value);
	void __fastcall SetEnabled(bool Value);
	void __fastcall SetText(System::AnsiString Value);
	void __fastcall SetLogonNotice(void);
	
__published:
	__property System::AnsiString Caption = {read=FCaption, write=SetCaption};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, nodefault};
	__property System::AnsiString Text = {read=FText, write=SetText};
public:
	/* TPersistent.Destroy */ __fastcall virtual ~TacAutoRunLogonNotice(void) { }
	
public:
	/* TObject.Create */ __fastcall TacAutoRunLogonNotice(void) : Classes::TPersistent() { }
	
};

enum TacAutoRunFor { rfCurrentUser, rfLocalMachine, rfService };

typedef void __fastcall (__closure *TacAppAutoRunButtonClickEvent)(System::TObject* Sender, bool AutoRun
	);

class DELPHICLASS TacAppAutoRun;
class PASCALIMPLEMENTATION TacAppAutoRun : public Accaptionbutton::TacCustomCaptionButton 
{
	typedef Accaptionbutton::TacCustomCaptionButton inherited;
	
private:
	bool FAutoRun;
	TacAutoRunLogonNotice* FLogonNotice;
	TacAutoRunFor FRunFor;
	bool FRunOnce;
	Classes::TNotifyEvent FOnAutoRun;
	TacAppAutoRunButtonClickEvent FOnButtonClick;
	Graphics::TBitmap* FGlyphEnabled;
	Graphics::TBitmap* FGlyphDisabled;
	void __fastcall SetAutoRun(bool Value);
	void __fastcall SetRunFor(TacAutoRunFor Value);
	void __fastcall SetRunOnce(bool Value);
	void __fastcall OpenRegKey(Registry::TRegistry* Reg, TacAutoRunFor RunFor, bool RunOnce);
	void __fastcall ModifyRegValue(bool NewAutoRun, TacAutoRunFor NewRunFor, bool NewRunOnce);
	System::AnsiString __fastcall AutoRunAppTitle();
	System::AnsiString __fastcall AutoRunExeName();
	
protected:
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Click(void);
	
public:
	__fastcall virtual TacAppAutoRun(Classes::TComponent* aOwner);
	__fastcall virtual ~TacAppAutoRun(void);
	
__published:
	__property About ;
	__property CaptionButton ;
	__property SystemMenu ;
	__property bool AutoRun = {read=FAutoRun, write=SetAutoRun, nodefault};
	__property TacAutoRunLogonNotice* LogonNotice = {read=FLogonNotice, write=FLogonNotice};
	__property TacAutoRunFor RunFor = {read=FRunFor, write=SetRunFor, nodefault};
	__property bool RunOnce = {read=FRunOnce, write=SetRunOnce, nodefault};
	__property Classes::TNotifyEvent OnAutoRun = {read=FOnAutoRun, write=FOnAutoRun};
	__property TacAppAutoRunButtonClickEvent OnButtonClick = {read=FOnButtonClick, write=FOnButtonClick
		};
public:
	/* TacFormHookComponent.KreateHook */ __fastcall TacAppAutoRun(Classes::TComponent* aOwner, Controls::TWinControl* 
		aHookedObject) : Accaptionbutton::TacCustomCaptionButton(aOwner, aHookedObject) { }
	
};

//-- var, const, procedure ---------------------------------------------------
#define AutoRunIdentifier "/autorun"

}	/* namespace Acappautorun */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acappautorun;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acAppAutoRun
