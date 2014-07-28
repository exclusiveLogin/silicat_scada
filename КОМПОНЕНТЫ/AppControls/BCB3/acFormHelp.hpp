// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acFormHelp.pas' rev: 3.00

#ifndef acFormHelpHPP
#define acFormHelpHPP
#include <acGraphics.hpp>
#include <acCaptionButton.hpp>
#include <acClasses.hpp>
#include <Menus.hpp>
#include <Forms.hpp>
#include <SysUtils.hpp>
#include <Graphics.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acformhelp
{
//-- type declarations -------------------------------------------------------
typedef Word TacFormHelpPopupWidth;

typedef void __fastcall (__closure *TacFormHelpOnShowEvent)(System::TObject* Sender, Controls::TControl* 
	HelpControl, System::AnsiString &HelpMessage);

typedef void __fastcall (__closure *TacFormHelpOnHideEvent)(System::TObject* Sender, Controls::TControl* 
	HelpControl);

typedef void __fastcall (__closure *TacWhatsThisEvent)(System::TObject* Sender, Controls::TControl* 
	HelpControl, const tagPOINT &MousePos, bool &ShowPopup, bool &ShowHelp);

class DELPHICLASS TacWhatsThis;
class DELPHICLASS TacFormHelp;
class DELPHICLASS TacFormHelpMargins;
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
	/* TPersistent.Destroy */ __fastcall virtual ~TacFormHelpMargins(void) { }
	
};

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
	Controls::TControl* __fastcall GetControlFromPoint(const tagPOINT &Point);
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
	virtual void __fastcall DoShowHelp(Controls::TControl* HelpControl, const tagPOINT &ShowPoint, System::AnsiString 
		Help);
	
public:
	__fastcall virtual TacFormHelp(Classes::TComponent* aOwner);
	__fastcall virtual ~TacFormHelp(void);
	void __fastcall InvokeHelpPointer(void);
	void __fastcall ShowHelp(const System::AnsiString Help);
	void __fastcall ShowHelpFromPoint(const tagPOINT &ShowPoint, const System::AnsiString Help);
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
	/* TacFormHookComponent.KreateHook */ __fastcall TacFormHelp(Classes::TComponent* aOwner, Controls::TWinControl* 
		aHookedObject) : Accaptionbutton::TacCustomCaptionButton(aOwner, aHookedObject) { }
	
};

class PASCALIMPLEMENTATION TacWhatsThis : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FEnabled;
	System::AnsiString FCaption;
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
	__property System::AnsiString Caption = {read=FCaption, write=FCaption};
	__property Classes::TComponent* MenuItem = {read=FMenuItem, write=SetMenuItem};
	__property Classes::TComponent* ToolbarButton = {read=FToolbarButton, write=SetToolbarButton};
public:
		
	/* TPersistent.Destroy */ __fastcall virtual ~TacWhatsThis(void) { }
	
};

//-- var, const, procedure ---------------------------------------------------
#define DEFAULT_TAG_OPEN (char)(91)
#define DEFAULT_TAG_CLOSE (char)(93)
#define DEFAULT_POPUP_WIDTH (Word)(300)
#define DEFAULT_POPUP_COLOR (Graphics::TColor)(15663103)
#define DEFAULT_SHADOW_COLOR (int)(0)
#define DEFAULT_MARGIN_HORZ (Byte)(10)
#define DEFAULT_MARGIN_VERT (Byte)(4)
extern PACKAGE int __stdcall MouseCallbackProc(int nCode, int wParam, int lParam);

}	/* namespace Acformhelp */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acformhelp;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acFormHelp
