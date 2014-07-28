// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acTrayIcon.pas' rev: 4.00

#ifndef acTrayIconHPP
#define acTrayIconHPP

#pragma delphiheader begin
#pragma option push -w-
#include <acClasses.hpp>	// Pascal unit
#include <acCaptionButton.hpp>	// Pascal unit
#include <ShellAPI.hpp>	// Pascal unit
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

namespace Actrayicon
{
//-- type declarations -------------------------------------------------------
#pragma pack(push, 4)
struct TWin2kNotifyIconData
{
	unsigned cbSize;
	HWND Wnd;
	unsigned uID;
	unsigned uFlags;
	unsigned uCallbackMessage;
	HICON hIcon;
	char szTip[128];
	unsigned dwState;
	unsigned dwStateMask;
	char szInfo[256];
	unsigned uTimeOut;
	char szInfoTitle[64];
	unsigned dwInfoFlags;
} ;
#pragma pack(pop)

#pragma option push -b-
enum acTrayIcon__1 { oHideOnRestore, oMinimizeToTray, oOneClickRestore, oDblClickRestore, oShowAtDesignTime, 
	oShowMenuOnLeftClick };
#pragma option pop

typedef Set<acTrayIcon__1, oHideOnRestore, oShowMenuOnLeftClick>  TacTrayIconOptions;

#pragma option push -b-
enum TacWin2kInfoIcon { iiNone, iiInfo, iiWarning, iiError };
#pragma option pop

class DELPHICLASS TacWin2kInfoBalloon;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacWin2kInfoBalloon : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FEnabled;
	TacWin2kInfoIcon FIcon;
	AnsiString FText;
	AnsiString FTitle;
	Word FTimeout;
	
__published:
	__property bool Enabled = {read=FEnabled, write=FEnabled, nodefault};
	__property AnsiString Text = {read=FText, write=FText};
	__property AnsiString Title = {read=FTitle, write=FTitle};
	__property Word Timeout = {read=FTimeout, write=FTimeout, nodefault};
	__property TacWin2kInfoIcon Icon = {read=FIcon, write=FIcon, nodefault};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacWin2kInfoBalloon(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TacWin2kInfoBalloon(void) : Classes::TPersistent() { }
	#pragma option pop
	
};

#pragma pack(pop)

class DELPHICLASS TacTrayIcon;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacTrayIcon : public Accaptionbutton::TacCustomCaptionButton 
{
	typedef Accaptionbutton::TacCustomCaptionButton inherited;
	
private:
	bool FAnimate;
	Word FAnimateInterval;
	AnsiString FHint;
	Graphics::TIcon* FIcon;
	Controls::TImageList* FImageList;
	int FImageIndex;
	TacTrayIconOptions FOptions;
	Menus::TPopupMenu* FPopupMenu;
	Menus::TMenuItem* FPopupMenuRestoreItem;
	Menus::TMenuItem* FPopupMenuTrayMinimizeItem;
	bool FShowHint;
	bool FVisible;
	TacWin2kInfoBalloon* FWin2kInfoBalloon;
	Classes::TNotifyEvent FOnAnimate;
	Classes::TNotifyEvent FOnMinimize;
	Controls::TMouseMoveEvent FOnMouseMove;
	Controls::TMouseEvent FOnMouseDown;
	Controls::TMouseEvent FOnMouseUp;
	Classes::TNotifyEvent FOnClick;
	Classes::TNotifyEvent FOnDblClick;
	Classes::TNotifyEvent FOnPopupMenu;
	Classes::TNotifyEvent FOnRestore;
	Classes::TNotifyEvent FOnShow;
	Classes::TNotifyEvent FOnHide;
	void *OldAppProc;
	void *NewAppProc;
	TWin2kNotifyIconData FNotifyIconData;
	Graphics::TIcon* CurrentIcon;
	bool Pressed;
	Classes::TNotifyEvent PrevPopupMenuRestoreItemClick;
	Classes::TNotifyEvent PrevPopupMenuTrayMinimizeItemClick;
	void __fastcall SetAnimate(const bool Value);
	void __fastcall SetAnimateInterval(const Word Value);
	HIDESBASE void __fastcall SetHint(const AnsiString Value);
	void __fastcall SetIcon(const Graphics::TIcon* Value);
	void __fastcall SetImageList(const Controls::TImageList* Value);
	void __fastcall SetImageIndex(const int Value);
	void __fastcall SetOptions(const TacTrayIconOptions Value);
	void __fastcall SetPopupMenuRestoreItem(const Menus::TMenuItem* Value);
	void __fastcall SetPopupMenuTrayMinimizeItem(const Menus::TMenuItem* Value);
	HIDESBASE void __fastcall SetShowHint(const bool Value);
	HIDESBASE void __fastcall SetVisible(const bool Value);
	void __fastcall PrepareTrayIconData(bool ShowBalloon);
	void __fastcall AddToTray(void);
	void __fastcall DeleteFromTray(void);
	void __fastcall SetIconByImage(void);
	void __fastcall ShowPopup(void);
	void __fastcall Update(void);
	void __fastcall UpdateTimer(void);
	void __fastcall PopupMenuRestoreItemClick(System::TObject* Sender);
	void __fastcall PopupMenuTrayMinimizeItemClick(System::TObject* Sender);
	void __fastcall HookApp(void);
	void __fastcall UnhookApp(void);
	virtual void __fastcall HookAppProc(Messages::TMessage &Message);
	
protected:
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Notification(Classes::TComponent* aComponent, Classes::TOperation Operation
		);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	virtual void __fastcall Click(void);
	
public:
	__fastcall virtual TacTrayIcon(Classes::TComponent* aOwner);
	__fastcall virtual ~TacTrayIcon(void);
	virtual void __fastcall MinimizeToTray(void);
	virtual void __fastcall RestoreFromTray(void);
	virtual void __fastcall ShowInfoBalloon(void);
	
__published:
	__property About ;
	__property CaptionButton ;
	__property SystemMenu ;
	__property bool Animate = {read=FAnimate, write=SetAnimate, nodefault};
	__property Word AnimateInterval = {read=FAnimateInterval, write=SetAnimateInterval, default=200};
	__property AnsiString Hint = {read=FHint, write=SetHint};
	__property Graphics::TIcon* Icon = {read=FIcon, write=SetIcon};
	__property Controls::TImageList* ImageList = {read=FImageList, write=SetImageList};
	__property int ImageIndex = {read=FImageIndex, write=SetImageIndex, nodefault};
	__property TacTrayIconOptions Options = {read=FOptions, write=SetOptions, default=24};
	__property Menus::TPopupMenu* PopupMenu = {read=FPopupMenu, write=FPopupMenu};
	__property Menus::TMenuItem* PopupMenuRestoreItem = {read=FPopupMenuRestoreItem, write=SetPopupMenuRestoreItem
		};
	__property Menus::TMenuItem* PopupMenuTrayMinimizeItem = {read=FPopupMenuTrayMinimizeItem, write=SetPopupMenuTrayMinimizeItem
		};
	__property bool ShowHint = {read=FShowHint, write=SetShowHint, nodefault};
	__property bool Visible = {read=FVisible, write=SetVisible, nodefault};
	__property TacWin2kInfoBalloon* Win2kInfoBalloon = {read=FWin2kInfoBalloon, write=FWin2kInfoBalloon
		};
	__property Classes::TNotifyEvent OnAnimate = {read=FOnAnimate, write=FOnAnimate};
	__property Classes::TNotifyEvent OnMinimize = {read=FOnMinimize, write=FOnMinimize};
	__property Controls::TMouseMoveEvent OnMouseMove = {read=FOnMouseMove, write=FOnMouseMove};
	__property Controls::TMouseEvent OnMouseDown = {read=FOnMouseDown, write=FOnMouseDown};
	__property Controls::TMouseEvent OnMouseUp = {read=FOnMouseUp, write=FOnMouseUp};
	__property Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
	__property Classes::TNotifyEvent OnDblClick = {read=FOnDblClick, write=FOnDblClick};
	__property Classes::TNotifyEvent OnPopupMenu = {read=FOnPopupMenu, write=FOnPopupMenu};
	__property Classes::TNotifyEvent OnRestore = {read=FOnRestore, write=FOnRestore};
	__property Classes::TNotifyEvent OnShow = {read=FOnShow, write=FOnShow};
	__property Classes::TNotifyEvent OnHide = {read=FOnHide, write=FOnHide};
public:
	#pragma option push -w-inl
	/* TacFormHookComponent.KreateHook */ inline __fastcall TacTrayIcon(Classes::TComponent* aOwner, Controls::TWinControl* 
		aHookedObject) : Accaptionbutton::TacCustomCaptionButton(aOwner, aHookedObject) { }
	#pragma option pop
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const Byte DEF_ANIMATE_INTERVAL = 0xc8;

}	/* namespace Actrayicon */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Actrayicon;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acTrayIcon
