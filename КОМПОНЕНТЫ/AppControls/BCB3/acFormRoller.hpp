// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acFormRoller.pas' rev: 3.00

#ifndef acFormRollerHPP
#define acFormRollerHPP
#include <acClasses.hpp>
#include <acCaptionButton.hpp>
#include <Forms.hpp>
#include <Graphics.hpp>
#include <Classes.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acformroller
{
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TacFormRollerChangedEvent)(System::TObject* Sender, bool RollUp)
	;

typedef Shortint TacFormRollerAnimateSpeed;

class DELPHICLASS TacFormRoller;
class PASCALIMPLEMENTATION TacFormRoller : public Accaptionbutton::TacCustomCaptionButton 
{
	typedef Accaptionbutton::TacCustomCaptionButton inherited;
	
private:
	bool FAnimate;
	TacFormRollerAnimateSpeed FAnimateSpeed;
	System::AnsiString FHintRollUp;
	System::AnsiString FHintRollDown;
	Word FRemainHeight;
	bool FRollUp;
	TacFormRollerChangedEvent FOnRollerChanged;
	bool DisallowModifications;
	int OldHeight;
	HRGN WinRegion;
	Graphics::TBitmap* FGlyphUp;
	Graphics::TBitmap* FGlyphDown;
	void __fastcall SetHintRollUp(const System::AnsiString Value);
	void __fastcall SetHintRollDown(const System::AnsiString Value);
	void __fastcall SetRemainHeight(const Word Value);
	void __fastcall SetRollUp(const bool Value);
	int __fastcall GetRollUpHeight(void);
	void __fastcall PaintRollUp(void);
	
protected:
	virtual void __fastcall MessageAfter(Messages::TMessage &Message);
	virtual void __fastcall FormRecreate(void);
	virtual void __fastcall Click(void);
	
public:
	__fastcall virtual TacFormRoller(Classes::TComponent* aOwner);
	__fastcall virtual ~TacFormRoller(void);
	
__published:
	__property About ;
	__property CaptionButton ;
	__property SystemMenu ;
	__property bool Animate = {read=FAnimate, write=FAnimate, nodefault};
	__property TacFormRollerAnimateSpeed AnimateSpeed = {read=FAnimateSpeed, write=FAnimateSpeed, nodefault
		};
	__property System::AnsiString HintRollUp = {read=FHintRollUp, write=SetHintRollUp};
	__property System::AnsiString HintRollDown = {read=FHintRollDown, write=SetHintRollDown};
	__property Word RemainHeight = {read=FRemainHeight, write=SetRemainHeight, nodefault};
	__property bool RollUp = {read=FRollUp, write=SetRollUp, nodefault};
	__property TacFormRollerChangedEvent OnRollerChanged = {read=FOnRollerChanged, write=FOnRollerChanged
		};
public:
	/* TacFormHookComponent.KreateHook */ __fastcall TacFormRoller(Classes::TComponent* aOwner, Controls::TWinControl* 
		aHookedObject) : Accaptionbutton::TacCustomCaptionButton(aOwner, aHookedObject) { }
	
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acformroller */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acformroller;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acFormRoller
