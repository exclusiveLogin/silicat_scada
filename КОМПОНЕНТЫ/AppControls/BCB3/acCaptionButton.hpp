// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acCaptionButton.pas' rev: 3.00

#ifndef acCaptionButtonHPP
#define acCaptionButtonHPP
#include <acClasses.hpp>
#include <DsgnIntf.hpp>
#include <SysUtils.hpp>
#include <Commctrl.hpp>
#include <Menus.hpp>
#include <Forms.hpp>
#include <Graphics.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Accaptionbutton
{
//-- type declarations -------------------------------------------------------
typedef short TacBtnOrder;

enum acCaptionButton__1 { seBefore, seAfter };

typedef Set<acCaptionButton__1, seBefore, seAfter>  TacMenuSeparators;

class DELPHICLASS TacSystemMenu;
class DELPHICLASS TacCustomCaptionButton;
class DELPHICLASS TacACaptionButton;
class PASCALIMPLEMENTATION TacACaptionButton : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	TacCustomCaptionButton* CaptionButton;
	TacBtnOrder __fastcall GetBtnOrder(void);
	void __fastcall SetBtnOrder(const TacBtnOrder Value);
	Controls::TCursor __fastcall GetCursor(void);
	void __fastcall SetCursor(const Controls::TCursor Value);
	Controls::TCursor __fastcall GetCursorDown(void);
	void __fastcall SetCursorDown(const Controls::TCursor Value);
	bool __fastcall GetEnabled(void);
	void __fastcall SetEnabled(const bool Value);
	System::AnsiString __fastcall GetHint();
	void __fastcall SetHint(const System::AnsiString Value);
	int __fastcall GetSeparatorWidth(void);
	void __fastcall SetSeparatorWidth(const int Value);
	bool __fastcall GetShowHint(void);
	void __fastcall SetShowHint(const bool Value);
	bool __fastcall GetVisible(void);
	void __fastcall SetVisible(const bool Value);
	
public:
	__fastcall TacACaptionButton(TacCustomCaptionButton* aCaptionButton);
	
__published:
	__property TacBtnOrder BtnOrder = {read=GetBtnOrder, write=SetBtnOrder, nodefault};
	__property Controls::TCursor Cursor = {read=GetCursor, write=SetCursor, default=0};
	__property Controls::TCursor CursorDown = {read=GetCursorDown, write=SetCursorDown, nodefault};
	__property bool Enabled = {read=GetEnabled, write=SetEnabled, default=1};
	__property System::AnsiString Hint = {read=GetHint, write=SetHint};
	__property int SeparatorWidth = {read=GetSeparatorWidth, write=SetSeparatorWidth, default=0};
	__property bool ShowHint = {read=GetShowHint, write=SetShowHint, default=1};
	__property bool Visible = {read=GetVisible, write=SetVisible, nodefault};
public:
	/* TPersistent.Destroy */ __fastcall virtual ~TacACaptionButton(void) { }
	
};

class PASCALIMPLEMENTATION TacCustomCaptionButton : public Acclasses::TacHFormHookComponent 
{
	typedef Acclasses::TacHFormHookComponent inherited;
	
private:
	bool FAllowPress;
	TacBtnOrder FBtnOrder;
	TacACaptionButton* FCaptionButton;
	Controls::TCursor FCursor;
	Controls::TCursor FCursorDown;
	bool FDown;
	bool FEnabled;
	Graphics::TBitmap* FGlyph;
	Graphics::TBitmap* FGlyphDown;
	bool FGlyphTransparent;
	System::AnsiString FHint;
	Menus::TPopupMenu* FPopupMenu;
	Byte FSeparatorWidth;
	bool FShowHint;
	char FSign;
	Graphics::TFont* FSignFont;
	int FSignLeft;
	int FSignTop;
	TacSystemMenu* FSystemMenu;
	bool FVisible;
	Classes::TNotifyEvent FOnButtonClick;
	Classes::TNotifyEvent FOnMenuClick;
	Classes::TNotifyEvent FOnClick;
	Classes::TNotifyEvent FOnPressed;
	Classes::TNotifyEvent FOnReleased;
	bool TooltipReady;
	int uID;
	int PLACEMENT;
	bool MenuActive;
	bool ButtonCaptured;
	bool ButtonDown;
	Windows::TRect ButtonRect;
	tagTOOLINFOA ti;
	void __fastcall SetAllowPress(const bool Value);
	TacBtnOrder __fastcall GetBtnOrder(void);
	void __fastcall SetBtnOrder(const TacBtnOrder Value);
	void __fastcall SetDown(bool Value);
	void __fastcall SetEnabled(const bool Value);
	void __fastcall SetGlyph(const Graphics::TBitmap* Value);
	void __fastcall SetGlyphDown(const Graphics::TBitmap* Value);
	void __fastcall SetGlyphTransparent(const bool Value);
	void __fastcall SetHint(const System::AnsiString Value);
	void __fastcall SetPopupMenu(const Menus::TPopupMenu* Value);
	void __fastcall SetSeparatorWidth(const Byte Value);
	void __fastcall SetShowHint(const bool Value);
	void __fastcall SetSign(const char Value);
	void __fastcall SetSignFont(const Graphics::TFont* Value);
	void __fastcall SetSignLeft(const int Value);
	void __fastcall SetSignTop(const int Value);
	void __fastcall SetVisible(const bool Value);
	void __fastcall FontChanged(System::TObject* Sender);
	void __fastcall CreateTooltip(void);
	void __fastcall DestroyTooltip(void);
	void __fastcall SetToolTipInfo(void);
	void __fastcall RecalculatePlacements(bool Refresh);
	void __fastcall UpdateBtnOrder(TacBtnOrder Value);
	void __fastcall RefreshButtonState(bool DrawDown);
	
protected:
	virtual void __fastcall MessageBefore(Messages::TMessage &Message, bool &Handled);
	virtual void __fastcall MessageAfter(Messages::TMessage &Message);
	virtual void __fastcall FormRecreate(void);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation
		);
	virtual void __fastcall BeforeButtonClick(void);
	virtual void __fastcall ButtonClick(void);
	virtual void __fastcall BeforeMenuClick(void);
	virtual void __fastcall MenuClick(void);
	virtual void __fastcall Click(void);
	virtual void __fastcall Pressed(void);
	virtual void __fastcall Released(void);
	virtual void __fastcall Loaded(void);
	
public:
	__fastcall virtual TacCustomCaptionButton(Classes::TComponent* aOwner);
	__fastcall virtual ~TacCustomCaptionButton(void);
	void __fastcall RefreshButton(void);
	__property bool AllowPress = {read=FAllowPress, write=SetAllowPress, default=0};
	__property TacBtnOrder BtnOrder = {read=GetBtnOrder, write=SetBtnOrder, default=-1};
	__property TacACaptionButton* CaptionButton = {read=FCaptionButton, write=FCaptionButton};
	__property Controls::TCursor Cursor = {read=FCursor, write=FCursor, nodefault};
	__property Controls::TCursor CursorDown = {read=FCursorDown, write=FCursorDown, nodefault};
	__property bool Down = {read=FDown, write=SetDown, nodefault};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=1};
	__property Graphics::TBitmap* Glyph = {read=FGlyph, write=SetGlyph};
	__property Graphics::TBitmap* GlyphDown = {read=FGlyphDown, write=SetGlyphDown};
	__property bool GlyphTransparent = {read=FGlyphTransparent, write=SetGlyphTransparent, default=1};
	__property System::AnsiString Hint = {read=FHint, write=SetHint};
	__property Menus::TPopupMenu* PopupMenu = {read=FPopupMenu, write=SetPopupMenu};
	__property Byte SeparatorWidth = {read=FSeparatorWidth, write=SetSeparatorWidth, nodefault};
	__property bool ShowHint = {read=FShowHint, write=SetShowHint, nodefault};
	__property Graphics::TFont* SignFont = {read=FSignFont, write=SetSignFont};
	__property int SignLeft = {read=FSignLeft, write=SetSignLeft, nodefault};
	__property int SignTop = {read=FSignTop, write=SetSignTop, nodefault};
	__property char Sign = {read=FSign, write=SetSign, nodefault};
	__property TacSystemMenu* SystemMenu = {read=FSystemMenu, write=FSystemMenu};
	__property bool Visible = {read=FVisible, write=SetVisible, default=1};
	__property Classes::TNotifyEvent OnButtonClick = {read=FOnButtonClick, write=FOnButtonClick};
	__property Classes::TNotifyEvent OnMenuClick = {read=FOnMenuClick, write=FOnMenuClick};
	__property Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
	__property Classes::TNotifyEvent OnPressed = {read=FOnPressed, write=FOnPressed};
	__property Classes::TNotifyEvent OnReleased = {read=FOnReleased, write=FOnReleased};
public:
	/* TacFormHookComponent.KreateHook */ __fastcall TacCustomCaptionButton(Classes::TComponent* aOwner
		, Controls::TWinControl* aHookedObject) : Acclasses::TacHFormHookComponent(aOwner, aHookedObject) { }
		
	
};

class PASCALIMPLEMENTATION TacSystemMenu : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FApplyToMenu;
	System::AnsiString FCaption;
	Word FPosition;
	TacMenuSeparators FSeparators;
	TacCustomCaptionButton* CaptionButton;
	bool Used;
	void __fastcall SetApplyToMenu(const bool Value);
	void __fastcall SetCaption(const System::AnsiString Value);
	void __fastcall SetPosition(const Word Value);
	void __fastcall SetSeparators(const TacMenuSeparators Value);
	void __fastcall ApplyMenuItem(void);
	void __fastcall RemoveMenuItem(void);
	void __fastcall UpdateMenuItem(void);
	
public:
	__fastcall TacSystemMenu(TacCustomCaptionButton* aCaptionButton);
	__fastcall virtual ~TacSystemMenu(void);
	void __fastcall CheckMenuItem(const bool Checked);
	
__published:
	__property bool ApplyToMenu = {read=FApplyToMenu, write=SetApplyToMenu, nodefault};
	__property System::AnsiString Caption = {read=FCaption, write=SetCaption};
	__property Word Position = {read=FPosition, write=SetPosition, nodefault};
	__property TacMenuSeparators Separators = {read=FSeparators, write=SetSeparators, nodefault};
};

class DELPHICLASS TacCaptionButton;
class PASCALIMPLEMENTATION TacCaptionButton : public Accaptionbutton::TacCustomCaptionButton 
{
	typedef Accaptionbutton::TacCustomCaptionButton inherited;
	
__published:
	__property About ;
	__property AllowPress ;
	__property BtnOrder ;
	__property Cursor ;
	__property CursorDown ;
	__property Down ;
	__property Enabled ;
	__property Glyph ;
	__property GlyphDown ;
	__property GlyphTransparent ;
	__property Hint ;
	__property PopupMenu ;
	__property SeparatorWidth ;
	__property ShowHint ;
	__property SignFont ;
	__property SignLeft ;
	__property SignTop ;
	__property Sign ;
	__property SystemMenu ;
	__property Visible ;
	__property OnButtonClick ;
	__property OnMenuClick ;
	__property OnClick ;
	__property OnPressed ;
	__property OnReleased ;
public:
	/* TacCustomCaptionButton.Create */ __fastcall virtual TacCaptionButton(Classes::TComponent* aOwner
		) : Accaptionbutton::TacCustomCaptionButton(aOwner) { }
	/* TacCustomCaptionButton.Destroy */ __fastcall virtual ~TacCaptionButton(void) { }
	
public:
	/* TacFormHookComponent.KreateHook */ __fastcall TacCaptionButton(Classes::TComponent* aOwner, Controls::TWinControl* 
		aHookedObject) : Accaptionbutton::TacCustomCaptionButton(aOwner, aHookedObject) { }
	
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Accaptionbutton */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Accaptionbutton;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acCaptionButton
