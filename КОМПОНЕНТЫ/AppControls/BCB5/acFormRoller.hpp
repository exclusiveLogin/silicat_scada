// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acFormRoller.pas' rev: 5.00

#ifndef acFormRollerHPP
#define acFormRollerHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acClasses.hpp>	// Pascal unit
#include <acCaptionButton.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

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
	AnsiString FHintRollUp;
	AnsiString FHintRollDown;
	Word FRemainHeight;
	bool FRollUp;
	TacFormRollerChangedEvent FOnRollerChanged;
	bool DisallowModifications;
	int OldHeight;
	HRGN WinRegion;
	Graphics::TBitmap* FGlyphUp;
	Graphics::TBitmap* FGlyphDown;
	void __fastcall SetHintRollUp(const AnsiString Value);
	void __fastcall SetHintRollDown(const AnsiString Value);
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
	__property AnsiString HintRollUp = {read=FHintRollUp, write=SetHintRollUp};
	__property AnsiString HintRollDown = {read=FHintRollDown, write=SetHintRollDown};
	__property Word RemainHeight = {read=FRemainHeight, write=SetRemainHeight, nodefault};
	__property bool RollUp = {read=FRollUp, write=SetRollUp, nodefault};
	__property TacFormRollerChangedEvent OnRollerChanged = {read=FOnRollerChanged, write=FOnRollerChanged
		};
public:
	#pragma option push -w-inl
	/* TacFormHookComponent.KreateHook */ inline __fastcall TacFormRoller(Classes::TComponent* aOwner, 
		Controls::TWinControl* aHookedObject) : Accaptionbutton::TacCustomCaptionButton(aOwner, aHookedObject
		) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acformroller */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acformroller;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acFormRoller
