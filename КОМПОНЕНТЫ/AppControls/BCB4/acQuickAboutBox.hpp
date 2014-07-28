// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acQuickAboutBox.pas' rev: 4.00

#ifndef acQuickAboutBoxHPP
#define acQuickAboutBoxHPP

#pragma delphiheader begin
#pragma option push -w-
#include <acFormBackground.hpp>	// Pascal unit
#include <acClasses.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acquickaboutbox
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacQuickAboutBoxGradientBackground;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacQuickAboutBoxGradientBackground : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	Graphics::TColor FColor1;
	Graphics::TColor FColor2;
	Acformbackground::TacGradientDirection FDirection;
	bool FEnabled;
	
__published:
	__property Graphics::TColor Color1 = {read=FColor1, write=FColor1, default=-2147483633};
	__property Graphics::TColor Color2 = {read=FColor2, write=FColor2, default=-2147483626};
	__property Acformbackground::TacGradientDirection Direction = {read=FDirection, write=FDirection, default=1
		};
	__property bool Enabled = {read=FEnabled, write=FEnabled, default=1};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacQuickAboutBoxGradientBackground(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TacQuickAboutBoxGradientBackground(void) : Classes::TPersistent(
		) { }
	#pragma option pop
	
};

#pragma pack(pop)

class DELPHICLASS TacQuickAboutBoxFormCursors;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacQuickAboutBoxFormCursors : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	Controls::TCursor FCaption;
	Controls::TCursor FClient;
	Controls::TCursor FBorder;
	Controls::TCursor FBtnClose;
	Controls::TCursor FButtons;
	Controls::TCursor FLinks;
	
__published:
	__property Controls::TCursor Caption = {read=FCaption, write=FCaption, nodefault};
	__property Controls::TCursor Client = {read=FClient, write=FClient, nodefault};
	__property Controls::TCursor Border = {read=FBorder, write=FBorder, nodefault};
	__property Controls::TCursor BtnClose = {read=FBtnClose, write=FBtnClose, nodefault};
	__property Controls::TCursor Buttons = {read=FButtons, write=FButtons, nodefault};
	__property Controls::TCursor Links = {read=FLinks, write=FLinks, nodefault};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacQuickAboutBoxFormCursors(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TacQuickAboutBoxFormCursors(void) : Classes::TPersistent() { }
		
	#pragma option pop
	
};

#pragma pack(pop)

class DELPHICLASS TacQuickAboutBoxLocalization;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacQuickAboutBoxLocalization : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	AnsiString FstAbout;
	AnsiString FstOK;
	AnsiString FstRegister;
	AnsiString FstRegisteredTo;
	AnsiString FstUnregistered;
	
__published:
	__property AnsiString stAbout = {read=FstAbout, write=FstAbout};
	__property AnsiString stOK = {read=FstOK, write=FstOK};
	__property AnsiString stRegister = {read=FstRegister, write=FstRegister};
	__property AnsiString stRegisteredTo = {read=FstRegisteredTo, write=FstRegisteredTo};
	__property AnsiString stUnregistered = {read=FstUnregistered, write=FstUnregistered};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacQuickAboutBoxLocalization(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TacQuickAboutBoxLocalization(void) : Classes::TPersistent() { }
		
	#pragma option pop
	
};

#pragma pack(pop)

class DELPHICLASS TacQuickAboutBox;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacQuickAboutBox : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	bool FAnimationOnShow;
	bool FAnimationOnHide;
	Word FAnimationDelay;
	AnsiString FCaption;
	AnsiString FCopyright;
	TacQuickAboutBoxFormCursors* FCursors;
	TacQuickAboutBoxGradientBackground* FGradientBackground;
	AnsiString FDescription;
	Graphics::TColor FDescriptionColor;
	Graphics::TIcon* FIcon;
	TacQuickAboutBoxLocalization* FLocalization;
	bool FRegistered;
	AnsiString FRegisteredTo;
	AnsiString FRegistrationURL;
	bool FShareware;
	bool FShowBevels;
	bool FShowFrames;
	bool FShowHints;
	AnsiString FEmail;
	AnsiString FWebSite;
	int FWidth;
	void __fastcall SetIcon(Graphics::TIcon* Value);
	
public:
	AnsiString AddInfo;
	__fastcall virtual TacQuickAboutBox(Classes::TComponent* aOwner);
	__fastcall virtual ~TacQuickAboutBox(void);
	void __fastcall Execute(void);
	
__published:
	__property About ;
	__property bool AnimationOnShow = {read=FAnimationOnShow, write=FAnimationOnShow, default=1};
	__property bool AnimationOnHide = {read=FAnimationOnHide, write=FAnimationOnHide, default=1};
	__property Word AnimationDelay = {read=FAnimationDelay, write=FAnimationDelay, default=80};
	__property AnsiString Caption = {read=FCaption, write=FCaption};
	__property AnsiString Copyright = {read=FCopyright, write=FCopyright};
	__property TacQuickAboutBoxFormCursors* Cursors = {read=FCursors, write=FCursors};
	__property TacQuickAboutBoxGradientBackground* GradientBackground = {read=FGradientBackground, write=
		FGradientBackground};
	__property AnsiString Description = {read=FDescription, write=FDescription};
	__property Graphics::TColor DescriptionColor = {read=FDescriptionColor, write=FDescriptionColor, default=-2147483634
		};
	__property Graphics::TIcon* Icon = {read=FIcon, write=SetIcon};
	__property TacQuickAboutBoxLocalization* Localization = {read=FLocalization, write=FLocalization};
	__property bool Registered = {read=FRegistered, write=FRegistered, default=0};
	__property AnsiString RegisteredTo = {read=FRegisteredTo, write=FRegisteredTo};
	__property AnsiString RegistrationURL = {read=FRegistrationURL, write=FRegistrationURL};
	__property bool Shareware = {read=FShareware, write=FShareware, default=0};
	__property bool ShowBevels = {read=FShowBevels, write=FShowBevels, default=1};
	__property bool ShowFrames = {read=FShowFrames, write=FShowFrames, nodefault};
	__property bool ShowHints = {read=FShowHints, write=FShowHints, default=1};
	__property AnsiString Email = {read=FEmail, write=FEmail};
	__property AnsiString WebSite = {read=FWebSite, write=FWebSite};
	__property int Width = {read=FWidth, write=FWidth, default=260};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acquickaboutbox */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acquickaboutbox;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acQuickAboutBox
