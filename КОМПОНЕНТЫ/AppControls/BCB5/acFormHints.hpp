// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acFormHints.pas' rev: 5.00

#ifndef acFormHintsHPP
#define acFormHintsHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acClasses.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acformhints
{
//-- type declarations -------------------------------------------------------
typedef Shortint TacTransparencyRate;

#pragma option push -b-
enum TacSimpleBiDiMode { bdLeftToRight, bdRightToLeft };
#pragma option pop

#pragma option push -b-
enum TacHintDirection { dUpRight, dUpLeft, dDownRight, dDownLeft };
#pragma option pop

#pragma option push -b-
enum TacTextAlignment { taNone, taLeft, taRight, taCenter };
#pragma option pop

typedef void __fastcall (__closure *TacOnShowHint)(System::TObject* Sender, Controls::TControl* HintControl
	, AnsiString Hint, bool &AllowShowHint, bool &ShowStandardHint);

class DELPHICLASS TacFormHints;
class PASCALIMPLEMENTATION TacFormHints : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	bool FActive;
	TacSimpleBiDiMode FBiDiMode;
	Graphics::TColor FColorBackground;
	Graphics::TColor FColorBorder;
	Graphics::TColor FColorShadow;
	TacHintDirection FDirection;
	Graphics::TFont* FFont;
	bool FRounded;
	Word FRoundRadius;
	bool FShowArrow;
	bool FShowShadow;
	TacTextAlignment FTextAlignment;
	bool FTransparent;
	TacTransparencyRate FTransparencyRate;
	TacOnShowHint FOnShowHint;
	void __fastcall SetActive(bool Value);
	void __fastcall SetFont(Graphics::TFont* Value);
	void __fastcall SetHintFont(void);
	void __fastcall OverFontChanged(System::TObject* Sender);
	
protected:
	virtual void __fastcall Loaded(void);
	
public:
	__fastcall virtual TacFormHints(Classes::TComponent* aOwner);
	__fastcall virtual ~TacFormHints(void);
	
__published:
	__property About ;
	__property bool Active = {read=FActive, write=SetActive, nodefault};
	__property TacSimpleBiDiMode BiDiMode = {read=FBiDiMode, write=FBiDiMode, nodefault};
	__property Graphics::TColor ColorBackground = {read=FColorBackground, write=FColorBackground, nodefault
		};
	__property Graphics::TColor ColorBorder = {read=FColorBorder, write=FColorBorder, nodefault};
	__property Graphics::TColor ColorShadow = {read=FColorShadow, write=FColorShadow, nodefault};
	__property TacHintDirection Direction = {read=FDirection, write=FDirection, nodefault};
	__property Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property bool Rounded = {read=FRounded, write=FRounded, nodefault};
	__property Word RoundRadius = {read=FRoundRadius, write=FRoundRadius, nodefault};
	__property bool ShowArrow = {read=FShowArrow, write=FShowArrow, nodefault};
	__property bool ShowShadow = {read=FShowShadow, write=FShowShadow, nodefault};
	__property TacTextAlignment TextAlignment = {read=FTextAlignment, write=FTextAlignment, nodefault};
		
	__property bool Transparent = {read=FTransparent, write=FTransparent, nodefault};
	__property TacTransparencyRate TransparencyRate = {read=FTransparencyRate, write=FTransparencyRate, 
		nodefault};
	__property TacOnShowHint OnShowHint = {read=FOnShowHint, write=FOnShowHint};
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acformhints */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acformhints;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acFormHints
