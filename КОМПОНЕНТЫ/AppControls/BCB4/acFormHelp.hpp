// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acFormHelp.pas' rev: 4.00

#ifndef acFormHelpHPP
#define acFormHelpHPP

#pragma delphiheader begin
#pragma option push -w-
#include <acGraphics.hpp>	// Pascal unit
#include <acCaptionButton.hpp>	// Pascal unit
#include <acClasses.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acformhelp
{
//-- type declarations -------------------------------------------------------
typedef Word TacFormHelpPopupWidth;

typedef void __fastcall (__closure *TacFormHelpOnShowEvent)(System::TObject* Sender, Controls::TControl* 
	HelpControl, AnsiString &HelpMessage);

typedef void __fastcall (__closure *TacFormHelpOnHideEvent)(System::TObject* Sender, Controls::TControl* 
	HelpControl);

typedef void __fastcall (__closure *TacWhatsThisEvent)(System::TObject* Sender, Controls::TControl* 
	HelpControl, const Windows::TPoint &MousePos, bool &ShowPopup, bool &ShowHelp);

class DELPHICLASS TacWhatsThis;
class DELPHICLASS TacFormHelp;
class DELPHICLASS TacFormHelpMargins;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacFormHelpMargins : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	Byte FHorizontal;
	Byte FVertical;
	
public:
	__fastcall TacFormHelpMargins(void);
	
__published:
	__property Byte Horizontal = {read=FHorizontal, write=FHorizontal, default=10};
	__property Byte Vertical = {read=FVertical, write=FVertical, default=4};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacFormHelpMargins(void) { }
	#pragma option pop
	
};

#pragma pack(pop)

#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacFormHelp : public Accaptionbutton::TacCustomCaptionButton 
{
	typedef Accaptionbutton::TacCustomCaptionButton inherited;
	
private:
	bool FActive;
	bool FAdjustPopupWidth;
	Word FDelayInterval;
	Graphics::TColor FColor;
	Graphics::TColor FShadowColor;
	Controls::TCursor FCursor;
	Graphics::TFont* FFont;
	TacFormHelpMargins* FMargins;
	bool FParentFont;
	bool FPlainText;
	TacFormHelpPopupWidth FPopupWidth;
	bool FShowShadow;
	char FTagOpen;
	char FTagClose;
	bool FUseF1;
	TacWhatsThis* FWhatsThis;
	Classes::TNotifyEvent FOnButtonClick;
	TacFormHelpOnShowEvent FOnShow;
	TacFormHelpOnHideEvent FOnHide;
	TacWhatsThisEvent FOnWhatsThis;
	System::TObject* ToolButton;
	bool AwaitingForHelp;
	bool RefreshAfterClick;
	HMENU WhatsThisMenu;
	Controls::TControl* WhatsThisControl;
	bool MenuEntered;
	bool SystemMenuClicked;
	bool __fastcall GetHelpControl(Controls::TControl* &Control);
	Controls::TControl* __fastcall GetControlFromPoint(const Windows::TPoint &Point);
	void __fastcall CheckToolbarButton(System::TObject* Button, bool Down);
	void __fastcall OnWhatsThisMenuClick(System::TObject* Sender);
	void __fastcall OnWhatsThisControlClick(System::TObject* Sender);
	void __fastcall CorrectFont(void);
	HIDESBASE void __fastcall FontChanged(System::TObject* Sender);
	Controls::TCursor __fastcall GetCursorHelp(void);
	void __fastcall SetCursorHelp(Controls::TCursor Value);
	void __fastcall SetFont(Graphics::TFont* Value);
	void __fastcall SetParentFont(bool Value);
	
protected:
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation
		);
	virtual void __fastcall MessageBefore(Messages::TMessage &Message, bool &Handled);
	virtual void __fastcall MessageAfter(Messages::TMessage &Message);
	virtual void __fastcall BeforeMenuClick(void);
	virtual void __fastcall Pressed(void);
	virtual void __fastcall DoShowHelp(Controls::TControl* HelpControl, const Windows::TPoint &ShowPoint
		, AnsiString Help);
	
public:
	__fastcall virtual TacFormHelp(Classes::TComponent* aOwner);
	__fastcall virtual ~TacFormHelp(void);
	void __fastcall InvokeHelpPointer(void);
	void __fastcall ShowHelp(const AnsiString Help);
	void __fastcall ShowHelpFromPoint(const Windows::TPoint &ShowPoint, const AnsiString Help);
	void __fastcall ShowHelpFromControl(Controls::TControl* Control);
	
__published:
	__property About ;
	__property CaptionButton ;
	__property SystemMenu ;
	__property bool Active = {read=FActive, write=FActive, default=1};
	__property bool AdjustPopupWidth = {read=FAdjustPopupWidth, write=FAdjustPopupWidth, default=1};
	__property Word DelayInterval = {read=FDelayInterval, write=FDelayInterval, nodefault};
	__property Graphics::TColor Color = {read=FColor, write=FColor, default=15663103};
	__property Controls::TCursor Cursor = {read=FCursor, write=FCursor, nodefault};
	__property Controls::TCursor CursorHelp = {read=GetCursorHelp, write=SetCursorHelp, nodefault};
	__property Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property TacFormHelpMargins* Margins = {read=FMargins, write=FMargins};
	__property bool ParentFont = {read=FParentFont, write=SetParentFont, nodefault};
	__property bool PlainText = {read=FPlainText, write=FPlainText, default=0};
	__property TacFormHelpPopupWidth PopupWidth = {read=FPopupWidth, write=FPopupWidth, default=300};
	__property Graphics::TColor ShadowColor = {read=FShadowColor, write=FShadowColor, default=0};
	__property bool ShowShadow = {read=FShowShadow, write=FShowShadow, default=1};
	__property char TagOpen = {read=FTagOpen, write=FTagOpen, default=91};
	__property char TagClose = {read=FTagClose, write=FTagClose, default=93};
	__property bool UseF1 = {read=FUseF1, write=FUseF1, default=1};
	__property TacWhatsThis* WhatsThis = {read=FWhatsThis, write=FWhatsThis};
	__property Classes::TNotifyEvent OnButtonClick = {read=FOnButtonClick, write=FOnButtonClick};
	__property TacFormHelpOnShowEvent OnShow = {read=FOnShow, write=FOnShow};
	__property TacFormHelpOnHideEvent OnHide = {read=FOnHide, write=FOnHide};
	__property TacWhatsThisEvent OnWhatsThis = {read=FOnWhatsThis, write=FOnWhatsThis};
public:
	#pragma option push -w-inl
	/* TacFormHookComponent.KreateHook */ inline __fastcall TacFormHelp(Classes::TComponent* aOwner, Controls::TWinControl* 
		aHookedObject) : Accaptionbutton::TacCustomCaptionButton(aOwner, aHookedObject) { }
	#pragma option pop
	
};

#pragma pack(pop)

#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacWhatsThis : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FEnabled;
	AnsiString FCaption;
	Classes::TComponent* FMenuItem;
	Classes::TComponent* FToolbarButton;
	TacFormHelp* FormHelp;
	void __fastcall SetEnabled(bool Value);
	void __fastcall SetMenuItem(Classes::TComponent* Value);
	void __fastcall SetToolbarButton(Classes::TComponent* Value);
	
public:
	__fastcall TacWhatsThis(TacFormHelp* aFormHelp);
	
__published:
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=1};
	__property AnsiString Caption = {read=FCaption, write=FCaption};
	__property Classes::TComponent* MenuItem = {read=FMenuItem, write=SetMenuItem};
	__property Classes::TComponent* ToolbarButton = {read=FToolbarButton, write=SetToolbarButton};
public:
		
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacWhatsThis(void) { }
	#pragma option pop
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const char DEFAULT_TAG_OPEN = '\x5b';
static const char DEFAULT_TAG_CLOSE = '\x5d';
static const Word DEFAULT_POPUP_WIDTH = 0x12c;
static const Graphics::TColor DEFAULT_POPUP_COLOR = 0xeeffff;
static const int DEFAULT_SHADOW_COLOR = 0x0;
static const Shortint DEFAULT_MARGIN_HORZ = 0xa;
static const Shortint DEFAULT_MARGIN_VERT = 0x4;
extern PACKAGE int __stdcall MouseCallbackProc(int nCode, int wParam, int lParam);

}	/* namespace Acformhelp */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acformhelp;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acFormHelp
