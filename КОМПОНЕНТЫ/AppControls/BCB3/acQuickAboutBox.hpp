// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acQuickAboutBox.pas' rev: 3.00

#ifndef acQuickAboutBoxHPP
#define acQuickAboutBoxHPP
#include <acFormBackground.hpp>
#include <acClasses.hpp>
#include <Forms.hpp>
#include <Graphics.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acquickaboutbox
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacQuickAboutBoxGradientBackground;
class PASCALIMPLEMENTATION TacQuickAboutBoxGradientBackground : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	Graphics::TColor FColor1;
	Graphics::TColor FColor2;
	TacGradientDirection FDirection;
	bool FEnabled;
	
__published:
	__property Graphics::TColor Color1 = {read=FColor1, write=FColor1, default=-2147483633};
	__property Graphics::TColor Color2 = {read=FColor2, write=FColor2, default=-2147483626};
	__property Acformbackground::TacGradientDirection Direction = {read=FDirection, write=FDirection, default=1
		};
	__property bool Enabled = {read=FEnabled, write=FEnabled, default=1};
public:
	/* TPersistent.Destroy */ __fastcall virtual ~TacQuickAboutBoxGradientBackground(void) { }
	
public:
	/* TObject.Create */ __fastcall TacQuickAboutBoxGradientBackground(void) : Classes::TPersistent() { }
		
	
};

class DELPHICLASS TacQuickAboutBoxFormCursors;
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
	/* TPersistent.Destroy */ __fastcall virtual ~TacQuickAboutBoxFormCursors(void) { }
	
public:
	/* TObject.Create */ __fastcall TacQuickAboutBoxFormCursors(void) : Classes::TPersistent() { }
	
};

class DELPHICLASS TacQuickAboutBoxLocalization;
class PASCALIMPLEMENTATION TacQuickAboutBoxLocalization : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	System::AnsiString FstAbout;
	System::AnsiString FstOK;
	System::AnsiString FstRegister;
	System::AnsiString FstRegisteredTo;
	System::AnsiString FstUnregistered;
	
__published:
	__property System::AnsiString stAbout = {read=FstAbout, write=FstAbout};
	__property System::AnsiString stOK = {read=FstOK, write=FstOK};
	__property System::AnsiString stRegister = {read=FstRegister, write=FstRegister};
	__property System::AnsiString stRegisteredTo = {read=FstRegisteredTo, write=FstRegisteredTo};
	__property System::AnsiString stUnregistered = {read=FstUnregistered, write=FstUnregistered};
public:
		
	/* TPersistent.Destroy */ __fastcall virtual ~TacQuickAboutBoxLocalization(void) { }
	
public:
	/* TObject.Create */ __fastcall TacQuickAboutBoxLocalization(void) : Classes::TPersistent() { }
	
};

class DELPHICLASS TacQuickAboutBox;
class PASCALIMPLEMENTATION TacQuickAboutBox : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	bool FAnimationOnShow;
	bool FAnimationOnHide;
	Word FAnimationDelay;
	System::AnsiString FCaption;
	System::AnsiString FCopyright;
	TacQuickAboutBoxFormCursors* FCursors;
	TacQuickAboutBoxGradientBackground* FGradientBackground;
	System::AnsiString FDescription;
	Graphics::TColor FDescriptionColor;
	Graphics::TIcon* FIcon;
	TacQuickAboutBoxLocalization* FLocalization;
	bool FRegistered;
	System::AnsiString FRegisteredTo;
	System::AnsiString FRegistrationURL;
	bool FShareware;
	bool FShowBevels;
	bool FShowFrames;
	bool FShowHints;
	System::AnsiString FEmail;
	System::AnsiString FWebSite;
	int FWidth;
	void __fastcall SetIcon(Graphics::TIcon* Value);
	
public:
	System::AnsiString AddInfo;
	__fastcall virtual TacQuickAboutBox(Classes::TComponent* aOwner);
	__fastcall virtual ~TacQuickAboutBox(void);
	void __fastcall Execute(void);
	
__published:
	__property About ;
	__property bool AnimationOnShow = {read=FAnimationOnShow, write=FAnimationOnShow, default=1};
	__property bool AnimationOnHide = {read=FAnimationOnHide, write=FAnimationOnHide, default=1};
	__property Word AnimationDelay = {read=FAnimationDelay, write=FAnimationDelay, default=80};
	__property System::AnsiString Caption = {read=FCaption, write=FCaption};
	__property System::AnsiString Copyright = {read=FCopyright, write=FCopyright};
	__property TacQuickAboutBoxFormCursors* Cursors = {read=FCursors, write=FCursors};
	__property TacQuickAboutBoxGradientBackground* GradientBackground = {read=FGradientBackground, write=
		FGradientBackground};
	__property System::AnsiString Description = {read=FDescription, write=FDescription};
	__property Graphics::TColor DescriptionColor = {read=FDescriptionColor, write=FDescriptionColor, default=-2147483634
		};
	__property Graphics::TIcon* Icon = {read=FIcon, write=SetIcon};
	__property TacQuickAboutBoxLocalization* Localization = {read=FLocalization, write=FLocalization};
	__property bool Registered = {read=FRegistered, write=FRegistered, default=0};
	__property System::AnsiString RegisteredTo = {read=FRegisteredTo, write=FRegisteredTo};
	__property System::AnsiString RegistrationURL = {read=FRegistrationURL, write=FRegistrationURL};
	__property bool Shareware = {read=FShareware, write=FShareware, default=0};
	__property bool ShowBevels = {read=FShowBevels, write=FShowBevels, default=1};
	__property bool ShowFrames = {read=FShowFrames, write=FShowFrames, nodefault};
	__property bool ShowHints = {read=FShowHints, write=FShowHints, default=1};
	__property System::AnsiString Email = {read=FEmail, write=FEmail};
	__property System::AnsiString WebSite = {read=FWebSite, write=FWebSite};
	__property int Width = {read=FWidth, write=FWidth, default=260};
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acquickaboutbox */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acquickaboutbox;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acQuickAboutBox
