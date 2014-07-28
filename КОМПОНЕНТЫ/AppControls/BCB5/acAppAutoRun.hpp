// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acAppAutoRun.pas' rev: 5.00

#ifndef acAppAutoRunHPP
#define acAppAutoRunHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acClasses.hpp>	// Pascal unit
#include <acCaptionButton.hpp>	// Pascal unit
#include <Registry.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acappautorun
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacAutoRunLogonNotice;
class PASCALIMPLEMENTATION TacAutoRunLogonNotice : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	AnsiString FCaption;
	bool FEnabled;
	AnsiString FText;
	void __fastcall SetCaption(AnsiString Value);
	void __fastcall SetEnabled(bool Value);
	void __fastcall SetText(AnsiString Value);
	void __fastcall SetLogonNotice(void);
	
__published:
	__property AnsiString Caption = {read=FCaption, write=SetCaption};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, nodefault};
	__property AnsiString Text = {read=FText, write=SetText};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacAutoRunLogonNotice(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TacAutoRunLogonNotice(void) : Classes::TPersistent() { }
	#pragma option pop
	
};


#pragma option push -b-
enum TacAutoRunFor { rfCurrentUser, rfLocalMachine, rfService };
#pragma option pop

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
	AnsiString __fastcall AutoRunAppTitle();
	AnsiString __fastcall AutoRunExeName();
	
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
	#pragma option push -w-inl
	/* TacFormHookComponent.KreateHook */ inline __fastcall TacAppAutoRun(Classes::TComponent* aOwner, 
		Controls::TWinControl* aHookedObject) : Accaptionbutton::TacCustomCaptionButton(aOwner, aHookedObject
		) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
#define AutoRunIdentifier "/autorun"

}	/* namespace Acappautorun */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acappautorun;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acAppAutoRun
