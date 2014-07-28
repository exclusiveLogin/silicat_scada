// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acAppBar.pas' rev: 4.00

#ifndef acAppBarHPP
#define acAppBarHPP

#pragma delphiheader begin
#pragma option push -w-
#include <acClasses.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acappbar
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacAppBarPersistent;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacAppBarPersistent : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FEnabled;
	
public:
	__fastcall TacAppBarPersistent(void);
	
__published:
	__property bool Enabled = {read=FEnabled, write=FEnabled, default=1};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacAppBarPersistent(void) { }
	#pragma option pop
	
};

#pragma pack(pop)

class DELPHICLASS TacAppBarDocking;
class DELPHICLASS TacAppBar;
#pragma option push -b-
enum TacAppBarPlacement { bpLeft, bpTop, bpRight, bpBottom, bpFloat };
#pragma option pop

typedef Set<TacAppBarPlacement, bpLeft, bpFloat>  TacAppBarEdges;

class DELPHICLASS TacAppBarFloatRestrictions;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacAppBarFloatRestrictions : public TacAppBarPersistent 
{
	typedef TacAppBarPersistent inherited;
	
private:
	TacAppBar* AppBar;
	Word FMaxWidth;
	Word FMaxHeight;
	Word FMinWidth;
	Word FMinHeight;
	void __fastcall SetMaxWidth(Word Value);
	void __fastcall SetMaxHeight(Word Value);
	void __fastcall SetMinWidth(Word Value);
	void __fastcall SetMinHeight(Word Value);
	void __fastcall UpdateFloatRestrictions(void);
	
public:
	__fastcall TacAppBarFloatRestrictions(TacAppBar* aAppBar);
	
__published:
	__property Enabled ;
	__property Word MaxWidth = {read=FMaxWidth, write=SetMaxWidth, default=0};
	__property Word MaxHeight = {read=FMaxHeight, write=SetMaxHeight, default=0};
	__property Word MinWidth = {read=FMinWidth, write=SetMinWidth, default=0};
	__property Word MinHeight = {read=FMinHeight, write=SetMinHeight, default=0};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacAppBarFloatRestrictions(void) { }
	#pragma option pop
	
};

#pragma pack(pop)

class DELPHICLASS TacAppBarRegistrySaver;
#pragma option push -b-
enum TacAppBarRestoreProperty { rpAllowedEdges, rpFormSize, rpDocking, rpFloatRestrictions, rpSizing, 
	rpSliding };
#pragma option pop

typedef Set<TacAppBarRestoreProperty, rpAllowedEdges, rpSliding>  TacAppBarRestoreProperties;

#pragma option push -b-
enum acAppBar__6 { saveOnClose, saveOnMoveResize };
#pragma option pop

typedef Set<acAppBar__6, saveOnClose, saveOnMoveResize>  TacAppBarRegOptions;

#pragma option push -b-
enum TacAppBarStorageType { useRegistry, useIniFile };
#pragma option pop

#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacAppBarRegistrySaver : public TacAppBarPersistent 
{
	typedef TacAppBarPersistent inherited;
	
private:
	TacAppBar* AppBar;
	AnsiString FIniFileName;
	AnsiString FIniSection;
	Acclasses::TacRegLocation FRegLocation;
	AnsiString FRegKey;
	TacAppBarRestoreProperties FRestoreProperties;
	TacAppBarRegOptions FOptions;
	TacAppBarStorageType FStorage;
	void __fastcall SetRegLocation(Acclasses::TacRegLocation Value);
	void __fastcall SetRegKey(AnsiString Value);
	
public:
	__fastcall TacAppBarRegistrySaver(TacAppBar* aAppBar);
	void __fastcall Load(void);
	void __fastcall Save(void);
	
__published:
	__property Enabled ;
	__property AnsiString IniFileName = {read=FIniFileName, write=FIniFileName};
	__property AnsiString IniSection = {read=FIniSection, write=FIniSection};
	__property Acclasses::TacRegLocation RegLocation = {read=FRegLocation, write=SetRegLocation, default=0
		};
	__property AnsiString RegKey = {read=FRegKey, write=SetRegKey};
	__property TacAppBarRestoreProperties RestoreProperties = {read=FRestoreProperties, write=FRestoreProperties
		, default=54};
	__property TacAppBarRegOptions Options = {read=FOptions, write=FOptions, default=1};
	__property TacAppBarStorageType Storage = {read=FStorage, write=FStorage, default=0};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacAppBarRegistrySaver(void) { }
	#pragma option pop
	
};

#pragma pack(pop)

class DELPHICLASS TacAppBarSizing;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacAppBarSizing : public TacAppBarPersistent 
{
	typedef TacAppBarPersistent inherited;
	
private:
	Word FHorizontalIncrement;
	Word FVerticalIncrement;
	
public:
	__fastcall TacAppBarSizing(void);
	
__published:
	__property Word HorizontalIncrement = {read=FHorizontalIncrement, write=FHorizontalIncrement, default=1
		};
	__property Word VerticalIncrement = {read=FVerticalIncrement, write=FVerticalIncrement, default=1};
		
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacAppBarSizing(void) { }
	#pragma option pop
	
};

#pragma pack(pop)

class DELPHICLASS TacAppBarSliding;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacAppBarSliding : public TacAppBarPersistent 
{
	typedef TacAppBarPersistent inherited;
	
private:
	Word FSlideTime;
	
public:
	__fastcall TacAppBarSliding(void);
	
__published:
	__property Word SlideTime = {read=FSlideTime, write=FSlideTime, default=200};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacAppBarSliding(void) { }
	#pragma option pop
	
};

#pragma pack(pop)

#pragma option push -b-
enum TacAppBarShowBehavior { sbOnFloat, sbShowAlways, sbHideAlways };
#pragma option pop

typedef void __fastcall (__closure *TacAppBarDockedEvent)(System::TObject* Sender, TacAppBarPlacement 
	NewPlacement);

typedef void __fastcall (__closure *TacAppBarDockingEvent)(System::TObject* Sender, TacAppBarPlacement 
	&NewPlacement);

typedef void __fastcall (__closure *TacAppBarHidingEvent)(System::TObject* Sender, bool &AllowOperation
	);

typedef void __fastcall (__closure *TacAppBarFullScreenAppEvent)(System::TObject* Sender, bool Open)
	;

typedef void __fastcall (__closure *TacAppBarWindowArrangeEvent)(System::TObject* Sender, bool Beginning
	);

#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacAppBar : public Acclasses::TacAppHookComponent 
{
	typedef Acclasses::TacAppHookComponent inherited;
	
private:
	TacAppBarEdges FAllowedEdges;
	bool FAutoHide;
	TacAppBarDocking* FDocking;
	TacAppBarFloatRestrictions* FFloatRestrictions;
	TacAppBarPlacement FLastDockingPlace;
	TacAppBarPlacement FPlacement;
	TacAppBarRegistrySaver* FRegistrySaver;
	TacAppBarSizing* FSizing;
	TacAppBarSliding* FSliding;
	TacAppBarShowBehavior FTaskIcon;
	TacAppBarShowBehavior FTitleBar;
	Classes::TNotifyEvent FOnActivate;
	Classes::TNotifyEvent FOnDeactivate;
	Classes::TNotifyEvent FOnClick;
	Classes::TNotifyEvent FOnDblClick;
	TacAppBarDockedEvent FOnDocked;
	TacAppBarDockingEvent FOnDocking;
	TacAppBarDockedEvent FOnDockMove;
	Classes::TNotifyEvent FOnExitSizeMove;
	TacAppBarHidingEvent FOnHiding;
	TacAppBarHidingEvent FOnUnhiding;
	TacAppBarFullScreenAppEvent FOnFullScreenApp;
	Classes::TNotifyEvent FOnOtherAppBarPosChanged;
	Classes::TNotifyEvent FOnUnableToAutoHide;
	TacAppBarWindowArrangeEvent FOnWindowArrange;
	bool FAutoHideVisible;
	bool FRegistered;
	bool FMoved;
	bool FLostFocus;
	TacAppBarPlacement FProposedPlacement;
	Windows::TRect FFloatRect;
	Windows::TRect FMovingRect;
	bool FFullScreenAppOpen;
	bool __fastcall GetAlwaysOnTop(void);
	void __fastcall SetAlwaysOnTop(bool Value);
	void __fastcall SetAutoHide(bool Value);
	TacAppBarPlacement __fastcall GetPlacement(void);
	void __fastcall SetPlacement(TacAppBarPlacement Value);
	void __fastcall SetTaskIcon(TacAppBarShowBehavior Value);
	void __fastcall SetTitleBar(TacAppBarShowBehavior Value);
	void __fastcall GetProposedRect(TacAppBarPlacement ProposedPlacement, Windows::TRect &rcProposed);
	bool __fastcall AdjustLocationForAutoHide(bool Show, Windows::TRect &rc);
	void __fastcall SlideWindow(Windows::TRect &rcEnd);
	void __fastcall SetWindowRect(const Windows::TRect &Rect);
	Windows::TSmallPoint __fastcall GetMessagePosition(void);
	void __fastcall ChangeWindowStyle(bool Moving, TacAppBarPlacement ProposedPlacement);
	bool __fastcall CanHideUnhide(void);
	void __fastcall DoShowHiddenAppBar(bool Show);
	void __fastcall RegisterAppBar(void);
	void __fastcall UnregisterAppBar(void);
	void __fastcall UpdateTimer(void);
	void __fastcall UpdateTaskIcon(void);
	unsigned __fastcall AppBarMessage(int abMessage, TacAppBarPlacement abPlacement, int lParam, bool bRect
		, Windows::TRect &rc);
	unsigned __fastcall AppBarMessage1(int abMessage);
	unsigned __fastcall AppBarMessage2(int abMessage, TacAppBarPlacement abPlacement);
	unsigned __fastcall AppBarMessage3(int abMessage, TacAppBarPlacement abPlacement, int lParam);
	unsigned __fastcall AppBarMessage4(int abMessage, TacAppBarPlacement abPlacement, int lParam, Windows::TRect 
		&rc);
	
protected:
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	virtual void __fastcall AppMessageBefore(Messages::TMessage &Message, bool &Handled);
	virtual void __fastcall MessageBefore(Messages::TMessage &Message, bool &Handled);
	virtual void __fastcall MessageAfter(Messages::TMessage &Message);
	virtual void __fastcall Loaded(void);
	
public:
	__fastcall virtual TacAppBar(Classes::TComponent* aOwner);
	__fastcall virtual ~TacAppBar(void);
	virtual void __fastcall UpdateBar(void);
	void __fastcall ShowHiddenAppBar(bool Show);
	bool __fastcall IsMouseOverAppBar(void);
	__property bool AutoHideVisible = {read=FAutoHideVisible, nodefault};
	
__published:
	__property About ;
	__property TacAppBarEdges AllowedEdges = {read=FAllowedEdges, write=FAllowedEdges, default=31};
	__property bool AlwaysOnTop = {read=GetAlwaysOnTop, write=SetAlwaysOnTop, default=1};
	__property bool AutoHide = {read=FAutoHide, write=SetAutoHide, default=0};
	__property TacAppBarDocking* Docking = {read=FDocking, write=FDocking};
	__property TacAppBarFloatRestrictions* FloatRestrictions = {read=FFloatRestrictions, write=FFloatRestrictions
		};
	__property TacAppBarPlacement LastDockingPlace = {read=FLastDockingPlace, write=FLastDockingPlace, 
		default=1};
	__property TacAppBarPlacement Placement = {read=GetPlacement, write=SetPlacement, default=4};
	__property TacAppBarRegistrySaver* RegistrySaver = {read=FRegistrySaver, write=FRegistrySaver};
	__property TacAppBarSizing* Sizing = {read=FSizing, write=FSizing};
	__property TacAppBarSliding* Sliding = {read=FSliding, write=FSliding};
	__property TacAppBarShowBehavior TaskIcon = {read=FTaskIcon, write=SetTaskIcon, default=0};
	__property TacAppBarShowBehavior TitleBar = {read=FTitleBar, write=SetTitleBar, default=0};
	__property Classes::TNotifyEvent OnActivate = {read=FOnActivate, write=FOnActivate};
	__property Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
	__property Classes::TNotifyEvent OnDblClick = {read=FOnDblClick, write=FOnDblClick};
	__property Classes::TNotifyEvent OnDeactivate = {read=FOnDeactivate, write=FOnDeactivate};
	__property TacAppBarDockedEvent OnDocked = {read=FOnDocked, write=FOnDocked};
	__property TacAppBarDockingEvent OnDocking = {read=FOnDocking, write=FOnDocking};
	__property TacAppBarDockedEvent OnDockMove = {read=FOnDockMove, write=FOnDockMove};
	__property Classes::TNotifyEvent OnExitSizeMove = {read=FOnExitSizeMove, write=FOnExitSizeMove};
	__property TacAppBarFullScreenAppEvent OnFullScreenApp = {read=FOnFullScreenApp, write=FOnFullScreenApp
		};
	__property Classes::TNotifyEvent OnOtherAppBarPosChanged = {read=FOnOtherAppBarPosChanged, write=FOnOtherAppBarPosChanged
		};
	__property Classes::TNotifyEvent OnUnableToAutoHide = {read=FOnUnableToAutoHide, write=FOnUnableToAutoHide
		};
	__property TacAppBarWindowArrangeEvent OnWindowArrange = {read=FOnWindowArrange, write=FOnWindowArrange
		};
	__property TacAppBarHidingEvent OnHiding = {read=FOnHiding, write=FOnHiding};
	__property TacAppBarHidingEvent OnUnhiding = {read=FOnUnhiding, write=FOnUnhiding};
public:
	#pragma option push -w-inl
	/* TacFormHookComponent.KreateHook */ inline __fastcall TacAppBar(Classes::TComponent* aOwner, Controls::TWinControl* 
		aHookedObject) : Acclasses::TacAppHookComponent(aOwner, aHookedObject) { }
	#pragma option pop
	
};

#pragma pack(pop)

#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacAppBarDocking : public TacAppBarPersistent 
{
	typedef TacAppBarPersistent inherited;
	
private:
	Word FHeight;
	Word FWidth;
	Word FMaxHeight;
	Word FMaxWidth;
	Word FMinHeight;
	Word FMinWidth;
	TacAppBar* AppBar;
	void __fastcall SetHeight(Word Value);
	void __fastcall SetWidth(Word Value);
	
public:
	__fastcall TacAppBarDocking(TacAppBar* aAppBar);
	
__published:
	__property Word Height = {read=FHeight, write=SetHeight, default=32};
	__property Word Width = {read=FWidth, write=SetWidth, default=32};
	__property Word MaxHeight = {read=FMaxHeight, write=FMaxHeight, default=300};
	__property Word MaxWidth = {read=FMaxWidth, write=FMaxWidth, default=400};
	__property Word MinHeight = {read=FMinHeight, write=FMinHeight, default=0};
	__property Word MinWidth = {read=FMinWidth, write=FMinWidth, default=0};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacAppBarDocking(void) { }
	#pragma option pop
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const Byte DEFAULT_SLIDE_TIME = 0xc8;
static const Word DEFAULT_DOCK_MAXWIDTH = 0x190;
static const Word DEFAULT_DOCK_MAXHEIGHT = 0x12c;
static const Shortint DEFAULT_DOCK_WIDTH = 0x20;
static const Shortint DEFAULT_DOCK_HEIGHT = 0x20;

}	/* namespace Acappbar */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acappbar;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acAppBar
