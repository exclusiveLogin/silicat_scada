// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acFormBackground.pas' rev: 5.00

#ifndef acFormBackgroundHPP
#define acFormBackgroundHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acClasses.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acformbackground
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacGradientDirection { gdVertical, gdHorizontal, gdCentral };
#pragma option pop

#pragma option push -b-
enum TacFormBackgroundKind { bkPicture, bkGradient };
#pragma option pop

#pragma option push -b-
enum TacFormBackgroundPictureStyle { bsTile, bsStretch, bsZigzag, bsCenter };
#pragma option pop

class DELPHICLASS TacFormBackground;
class PASCALIMPLEMENTATION TacFormBackground : public Acclasses::TacFormHookComponent 
{
	typedef Acclasses::TacFormHookComponent inherited;
	
private:
	bool FActive;
	Graphics::TColor FGradientColor1;
	Graphics::TColor FGradientColor2;
	TacGradientDirection FGradientDirection;
	Graphics::TPicture* FPicture;
	TacFormBackgroundPictureStyle FPictureStyle;
	TacFormBackgroundKind FKind;
	Graphics::TCanvas* FCanvas;
	bool BackgroundBusy;
	void __fastcall SetActive(bool Value);
	void __fastcall SetGradientColor1(Graphics::TColor Value);
	void __fastcall SetGradientColor2(Graphics::TColor Value);
	void __fastcall SetGradientDirection(TacGradientDirection Value);
	void __fastcall SetKind(TacFormBackgroundKind Value);
	void __fastcall SetPicture(Graphics::TPicture* Value);
	void __fastcall SetPictureStyle(TacFormBackgroundPictureStyle Value);
	void __fastcall PictureChanged(System::TObject* Sender);
	void __fastcall InvalidateForm(void);
	
protected:
	virtual void __fastcall MessageBefore(Messages::TMessage &Message, bool &Handled);
	virtual void __fastcall MessageAfter(Messages::TMessage &Message);
	virtual void __fastcall FormRecreate(void);
	
public:
	__fastcall virtual TacFormBackground(Classes::TComponent* aOwner);
	__fastcall virtual ~TacFormBackground(void);
	
__published:
	__property About ;
	__property bool Active = {read=FActive, write=SetActive, default=1};
	__property Graphics::TColor GradientColor1 = {read=FGradientColor1, write=SetGradientColor1, default=16711680
		};
	__property Graphics::TColor GradientColor2 = {read=FGradientColor2, write=SetGradientColor2, default=0
		};
	__property TacGradientDirection GradientDirection = {read=FGradientDirection, write=SetGradientDirection
		, default=0};
	__property TacFormBackgroundKind Kind = {read=FKind, write=SetKind, default=0};
	__property Graphics::TPicture* Picture = {read=FPicture, write=SetPicture};
	__property TacFormBackgroundPictureStyle PictureStyle = {read=FPictureStyle, write=SetPictureStyle, 
		default=0};
public:
	#pragma option push -w-inl
	/* TacFormHookComponent.KreateHook */ inline __fastcall TacFormBackground(Classes::TComponent* aOwner
		, Controls::TWinControl* aHookedObject) : Acclasses::TacFormHookComponent(aOwner, aHookedObject) { }
		
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acformbackground */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acformbackground;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acFormBackground
