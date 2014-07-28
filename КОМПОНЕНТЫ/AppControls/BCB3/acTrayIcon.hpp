// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acTrayIcon.pas' rev: 3.00

#ifndef acTrayIconHPP
#define acTrayIconHPP
#include <acClasses.hpp>
#include <acCaptionButton.hpp>
#include <ShellAPI.hpp>
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

namespace Actrayicon
{
//-- type declarations -------------------------------------------------------
struct TWin2kNotifyIconData
{
	int cbSize;
	HWND Wnd;
	int uID;
	int uFlags;
	int uCallbackMessage;
	HICON hIcon;
	char szTip[128];
	int dwState;
	int dwStateMask;
	char szInfo[256];
	int uTimeOut;
	char szInfoTitle[64];
	int dwInfoFlags;
} ;

enum acTrayIcon__1 { oHideOnRestore, oMinimizeToTray, oOneClickRestore, oDblClickRestore, oShowAtDesignTime, 
	oShowMenuOnLeftClick };

typedef Set<acTrayIcon__1, oHideOnRestore, oShowMenuOnLeftClick>  TacTrayIconOptions;

enum TacWin2kInfoIcon { iiNone, iiInfo, iiWarning, iiError };

class DELPHICLASS TacWin2kInfoBalloon;
class PASCALIMPLEMENTATION TacWin2kInfoBalloon : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FEnabled;
	TacWin2kInfoIcon FIcon;
	System::AnsiString FText;
	System::AnsiString FTitle;
	Word FTimeout;
	
__published:
	__property bool Enabled = {read=FEnabled, write=FEnabled, nodefault};
	__property System::AnsiString Text = {read=FText, write=FText};
	__property System::AnsiString Title = {read=FTitle, write=FTitle};
	__property Word Timeout = {read=FTimeout, write=FTimeout, nodefault};
	__property TacWin2kInfoIcon Icon = {read=FIcon, write=FIcon, nodefault};
public:
	/* TPersistent.Destroy */ __fastcall virtual ~TacWin2kInfoBalloon(void) { }
	
public:
	/* TObject.Create */ __fastcall TacWin2kInfoBalloon(void) : Classes::TPersistent() { }
	
};

class DELPHICLASS TacTrayIcon;
class PASCALIMPLEMENTATION TacTrayIcon : public Accaptionbutton::TacCustomCaptionButton 
{
	typedef Accaptionbutton::TacCustomCaptionButton inherited;
	
private:
	bool FAnimate;
	Word FAnimateInterval;
	System::AnsiString FHint;
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
	HIDESBASE void __fastcall SetHint(const System::AnsiString Value);
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
	__property System::AnsiString Hint = {read=FHint, write=SetHint};
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
	/* TacFormHookComponent.KreateHook */ __fastcall TacTrayIcon(Classes::TComponent* aOwner, Controls::TWinControl* 
		aHookedObject) : Accaptionbutton::TacCustomCaptionButton(aOwner, aHookedObject) { }
	
};

//-- var, const, procedure ---------------------------------------------------
#define DEF_ANIMATE_INTERVAL (Byte)(200)

}	/* namespace Actrayicon */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Actrayicon;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acTrayIcon
