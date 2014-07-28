// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acAnimationEffect.pas' rev: 3.00

#ifndef acAnimationEffectHPP
#define acAnimationEffectHPP
#include <acClasses.hpp>
#include <Forms.hpp>
#include <Classes.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acanimationeffect
{
//-- type declarations -------------------------------------------------------
struct TMathPoint
{
	float X;
	float Y;
} ;

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

struct TSpikeData
{
	TMathPoint TriangleEnd[3][16];
	TMathPoint EndCenter[16];
	TMathPoint TriangleCenter[16];
	TMatrix MatrixCircle[16];
} ;

enum TacAnimationType { atInit, atDraw, atErase };

enum TacAnimationEffectType { etRandom, etSpin, etVortex, etScatterGather, etSpike, etFireworks };

class DELPHICLASS TacAnimationEffect;
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
		
	/* TacFormHookComponent.KreateHook */ __fastcall TacAnimationEffect(Classes::TComponent* aOwner, Controls::TWinControl* 
		aHookedObject) : Acclasses::TacFormHookComponent(aOwner, aHookedObject) { }
	/* TacFormHookComponent.Destroy */ __fastcall virtual ~TacAnimationEffect(void) { }
	
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acanimationeffect */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acanimationeffect;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acAnimationEffect
