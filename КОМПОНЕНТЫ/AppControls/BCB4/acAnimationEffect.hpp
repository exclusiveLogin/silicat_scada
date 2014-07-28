// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acAnimationEffect.pas' rev: 4.00

#ifndef acAnimationEffectHPP
#define acAnimationEffectHPP

#pragma delphiheader begin
#pragma option push -w-
#include <acClasses.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acanimationeffect
{
//-- type declarations -------------------------------------------------------
#pragma pack(push, 4)
struct TMathPoint
{
	float X;
	float Y;
} ;
#pragma pack(pop)

#pragma pack(push, 4)
struct TMatrix
{
	float M11;
	float M12;
	float M13;
	float M21;
	float M22;
	float M23;
	float M31;
	float M32;
	float M33;
} ;
#pragma pack(pop)

#pragma pack(push, 4)
struct TSpikeData
{
	TMathPoint TriangleEnd[3][16];
	TMathPoint EndCenter[16];
	TMathPoint TriangleCenter[16];
	TMatrix MatrixCircle[16];
} ;
#pragma pack(pop)

#pragma option push -b-
enum TacAnimationType { atInit, atDraw, atErase };
#pragma option pop

#pragma option push -b-
enum TacAnimationEffectType { etRandom, etSpin, etVortex, etScatterGather, etSpike, etFireworks };
#pragma option pop

class DELPHICLASS TacAnimationEffect;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacAnimationEffect : public Acclasses::TacFormHookComponent 
{
	typedef Acclasses::TacFormHookComponent inherited;
	
private:
	bool FAnimateOnShow;
	bool FAnimateOnHide;
	Word FDelay;
	Byte FFrames;
	Byte FFireworkBlasts;
	TacAnimationEffectType FEffectType;
	Byte FSteps;
	Classes::TNotifyEvent FOnOpenEffect;
	Classes::TNotifyEvent FOnCloseEffect;
	bool FormVisible;
	HDC DrawDC;
	float EffectParam;
	TMatrix GlobalMatrix;
	TMathPoint FireworksData[256];
	int AfterImages;
	int TotalSteps;
	int Step;
	TMathPoint RightTop;
	TMathPoint Center;
	TSpikeData SpikeData;
	TacAnimationEffectType CurrentEffect;
	void __fastcall Animate(bool Open);
	void __fastcall AnimationSelect(TacAnimationType AnimationType);
	void __fastcall efSpinFrame(TacAnimationType AnimationType);
	void __fastcall efVortexFrames(TacAnimationType AnimationType);
	void __fastcall efScatterGatherFrames(TacAnimationType AnimationType);
	void __fastcall efSpikeFrames(TacAnimationType AnimationType);
	void __fastcall efFireworxFrames(TacAnimationType AnimationType);
	
protected:
	virtual void __fastcall MessageBefore(Messages::TMessage &Message, bool &Handled);
	
public:
	__fastcall virtual TacAnimationEffect(Classes::TComponent* aOwner);
	void __fastcall Open(void);
	void __fastcall Close(void);
	
__published:
	__property About ;
	__property bool AnimateOnShow = {read=FAnimateOnShow, write=FAnimateOnShow, nodefault};
	__property bool AnimateOnHide = {read=FAnimateOnHide, write=FAnimateOnHide, nodefault};
	__property Word Delay = {read=FDelay, write=FDelay, nodefault};
	__property Byte FireworkBlasts = {read=FFireworkBlasts, write=FFireworkBlasts, nodefault};
	__property Byte Frames = {read=FFrames, write=FFrames, nodefault};
	__property TacAnimationEffectType EffectType = {read=FEffectType, write=FEffectType, nodefault};
	__property Byte Steps = {read=FSteps, write=FSteps, nodefault};
	__property Classes::TNotifyEvent OnShowEffect = {read=FOnOpenEffect, write=FOnOpenEffect};
	__property Classes::TNotifyEvent OnCloseEffect = {read=FOnCloseEffect, write=FOnCloseEffect};
public:
		
	#pragma option push -w-inl
	/* TacFormHookComponent.KreateHook */ inline __fastcall TacAnimationEffect(Classes::TComponent* aOwner
		, Controls::TWinControl* aHookedObject) : Acclasses::TacFormHookComponent(aOwner, aHookedObject) { }
		
	#pragma option pop
	#pragma option push -w-inl
	/* TacFormHookComponent.Destroy */ inline __fastcall virtual ~TacAnimationEffect(void) { }
	#pragma option pop
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acanimationeffect */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acanimationeffect;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acAnimationEffect
