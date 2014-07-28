// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acWin2kEffects.pas' rev: 5.00

#ifndef acWin2kEffectsHPP
#define acWin2kEffectsHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acGraphics.hpp>	// Pascal unit
#include <acClasses.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acwin2keffects
{
//-- type declarations -------------------------------------------------------
typedef Shortint TacWin2kTranslucentRate;

class DELPHICLASS TacWin2kAnimation;
class PASCALIMPLEMENTATION TacWin2kAnimation : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FEnabled;
	Acgraphics::TacWin2kAnimationFlags FFlags;
	Word FTime;
	
__published:
	__property bool Enabled = {read=FEnabled, write=FEnabled, nodefault};
	__property Acgraphics::TacWin2kAnimationFlags Flags = {read=FFlags, write=FFlags, nodefault};
	__property Word Time = {read=FTime, write=FTime, default=200};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacWin2kAnimation(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TacWin2kAnimation(void) : Classes::TPersistent() { }
	#pragma option pop
	
};


class DELPHICLASS TacWin2kEffects;
class PASCALIMPLEMENTATION TacWin2kEffects : public Acclasses::TacFormHookComponent 
{
	typedef Acclasses::TacFormHookComponent inherited;
	
private:
	TacWin2kAnimation* FAnimateOnShow;
	TacWin2kAnimation* FAnimateOnHide;
	Word FFlashCount;
	bool FFlashTaskIcon;
	TacWin2kTranslucentRate FTranslucentRate;
	bool FTranslucent;
	void __fastcall DoTranslucent(bool Value);
	void __fastcall SetTranslucent(bool Value);
	void __fastcall SetTranslucentRate(TacWin2kTranslucentRate Value);
	
protected:
	virtual void __fastcall MessageBefore(Messages::TMessage &Message, bool &Handled);
	virtual void __fastcall FormRecreate(void);
	
public:
	__fastcall virtual TacWin2kEffects(Classes::TComponent* aOwner);
	__fastcall virtual ~TacWin2kEffects(void);
	void __fastcall Flash(void);
	
__published:
	__property About ;
	__property TacWin2kAnimation* AnimateOnShow = {read=FAnimateOnShow, write=FAnimateOnShow};
	__property TacWin2kAnimation* AnimateOnHide = {read=FAnimateOnHide, write=FAnimateOnHide};
	__property Word FlashCount = {read=FFlashCount, write=FFlashCount, default=4};
	__property bool FlashTaskIcon = {read=FFlashTaskIcon, write=FFlashTaskIcon, default=1};
	__property TacWin2kTranslucentRate TranslucentRate = {read=FTranslucentRate, write=SetTranslucentRate
		, default=50};
	__property bool Translucent = {read=FTranslucent, write=SetTranslucent, nodefault};
public:
	#pragma option push -w-inl
	/* TacFormHookComponent.KreateHook */ inline __fastcall TacWin2kEffects(Classes::TComponent* aOwner
		, Controls::TWinControl* aHookedObject) : Acclasses::TacFormHookComponent(aOwner, aHookedObject) { }
		
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acwin2keffects */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acwin2keffects;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acWin2kEffects
