// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acComCtrls.pas' rev: 4.00

#ifndef acComCtrlsHPP
#define acComCtrlsHPP

#pragma delphiheader begin
#pragma option push -w-
#include <ImgList.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <acGraphics.hpp>	// Pascal unit
#include <acClasses.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Commctrl.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Accomctrls
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacListViewSortDirection { sdAscending, sdDescending };
#pragma option pop

#pragma option push -b-
enum TacListViewSortMarkKind { mkSunken, mkRaised };
#pragma option pop

#pragma option push -b-
enum TacListViewSortMarkAlign { maText, maEdge };
#pragma option pop

#pragma option push -b-
enum TacListViewToolTipOption { ttoInstantShow, ttoLongStay, ttoBelowItem, ttoOffset };
#pragma option pop

typedef Set<TacListViewToolTipOption, ttoInstantShow, ttoOffset>  TacListViewToolTipOptions;

typedef void __fastcall (__closure *TacListViewDrawHeaderSection)(System::TObject* Sender, Graphics::TCanvas* 
	Canvas, const Windows::TRect &Rect, int ColumnIndex, bool Pressed);

typedef void __fastcall (__closure *TacListViewToolTipEvent)(System::TObject* Sender, AnsiString &ToolTipText
	, Comctrls::TListItem* Item, int LogicalCol);

typedef void __fastcall (__closure *TacListViewCustomDrawSubItemExEvent)(System::TObject* Sender, Graphics::TCanvas* 
	Canvas, const Windows::TRect &Rect, Comctrls::TListItem* Item, int SubItem, Comctrls::TCustomDrawState 
	State, bool &DefaultDraw);

typedef void __fastcall (__closure *TacListViewColumnDragEvent)(System::TObject* Sender, const int * 
	ColumnOrders, const int ColumnOrders_Size);

class DELPHICLASS TacListViewCursors;
class DELPHICLASS TacCustomListView;
class DELPHICLASS TacListViewHeaderMenu;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacListViewHeaderMenu : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	Menus::TMenuItem* FAlignLeftItem;
	Menus::TMenuItem* FAlignRightItem;
	Menus::TMenuItem* FAlignCenterItem;
	Menus::TMenuItem* FAscendingItem;
	Menus::TMenuItem* FDescendingItem;
	Menus::TMenuItem* FBestFitItem;
	Menus::TPopupMenu* FPopupMenu;
	TacCustomListView* ListView;
	void __fastcall SetAlignLeftItem(Menus::TMenuItem* Value);
	void __fastcall SetAlignRightItem(Menus::TMenuItem* Value);
	void __fastcall SetAlignCenterItem(Menus::TMenuItem* Value);
	void __fastcall SetAscendingItem(Menus::TMenuItem* Value);
	void __fastcall SetDescendingItem(Menus::TMenuItem* Value);
	void __fastcall SetBestFitItem(Menus::TMenuItem* Value);
	
public:
	__fastcall TacListViewHeaderMenu(TacCustomListView* aListView);
	
__published:
	__property Menus::TMenuItem* AlignLeftItem = {read=FAlignLeftItem, write=SetAlignLeftItem};
	__property Menus::TMenuItem* AlignRightItem = {read=FAlignRightItem, write=SetAlignRightItem};
	__property Menus::TMenuItem* AlignCenterItem = {read=FAlignCenterItem, write=SetAlignCenterItem};
	__property Menus::TMenuItem* AscendingItem = {read=FAscendingItem, write=SetAscendingItem};
	__property Menus::TMenuItem* DescendingItem = {read=FDescendingItem, write=SetDescendingItem};
	__property Menus::TMenuItem* BestFitItem = {read=FBestFitItem, write=SetBestFitItem};
	__property Menus::TPopupMenu* PopupMenu = {read=FPopupMenu, write=FPopupMenu};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacListViewHeaderMenu(void) { }
	#pragma option pop
	
};

#pragma pack(pop)

class DELPHICLASS TacListViewRegistrySaver;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacListViewRegistrySaver : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FEnabled;
	AnsiString FRegKey;
	Acclasses::TacRegLocation FRegLocation;
	void __fastcall SetRegKey(AnsiString Value);
	
public:
	__fastcall TacListViewRegistrySaver(void);
	
__published:
	__property bool Enabled = {read=FEnabled, write=FEnabled, nodefault};
	__property AnsiString RegKey = {read=FRegKey, write=SetRegKey};
	__property Acclasses::TacRegLocation RegLocation = {read=FRegLocation, write=FRegLocation, default=0
		};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacListViewRegistrySaver(void) { }
	#pragma option pop
	
};

#pragma pack(pop)

#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacCustomListView : public Comctrls::TCustomListView 
{
	typedef Comctrls::TCustomListView inherited;
	
private:
	AnsiString FAbout;
	Comctrls::THeaderStyle FHeaderStyle;
	TacListViewHeaderMenu* FHeaderMenu;
	TacListViewCursors* FCursors;
	bool FShowHeaderMenu;
	bool FShowSortMark;
	bool FShowScrollTips;
	bool FShowToolTips;
	TacListViewSortDirection FSortDirection;
	Word FSortColumn;
	TacListViewSortMarkAlign FSortMarkAlign;
	TacListViewSortMarkKind FSortMarkKind;
	TacListViewRegistrySaver* FRegistrySaver;
	TacListViewToolTipOptions FToolTipOptions;
	AnsiString FToolTipText;
	TacListViewDrawHeaderSection FOnDrawHeaderSection;
	TacListViewToolTipEvent FOnToolTip;
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	Classes::TNotifyEvent FOnSettingsChanged;
	TacListViewCustomDrawSubItemExEvent FOnCustomDrawSubItemEx;
	TacListViewColumnDragEvent FOnColumnDragged;
	Menus::TPopupMenu* FDefaultMenu;
	Menus::TMenuItem* FDefAscendingItem;
	Menus::TMenuItem* FDefDescendingItem;
	HWND FHeaderHandle;
	void *FHeaderInstance;
	void *FOldHeaderWndProc;
	int MouseX;
	int MouseY;
	int ClickedColumn;
	bool HeaderVisible;
	bool ColumnDragging;
	bool ColumnDragged;
	Windows::TRect CustomDrawRect;
	void __fastcall SetHeaderStyle(Comctrls::THeaderStyle Value);
	void __fastcall SetShowSortMark(bool Value);
	void __fastcall SetSortDirection(TacListViewSortDirection Value);
	void __fastcall SetSortColumn(Word Value);
	void __fastcall SetSortMarkAlign(TacListViewSortMarkAlign Value);
	void __fastcall SetSortMarkKind(TacListViewSortMarkKind Value);
	bool __fastcall GetToolTips(void);
	void __fastcall SetToolTips(bool Value);
	void __fastcall SetToolTipOptions(TacListViewToolTipOptions Value);
	Comctrls::TViewStyle __fastcall GetViewStyle(void);
	Comctrls::TSortType __fastcall GetSortType(void);
	HIDESBASE void __fastcall SetSortType(Comctrls::TSortType Value);
	int __fastcall GetHoverTime(void);
	void __fastcall SetHoverTime(int Value);
	void __fastcall SetOnCustomDrawSubItemEx(TacListViewCustomDrawSubItemExEvent Value);
	void __fastcall StdOnCustomDrawSubItemHook(Comctrls::TCustomListView* Sender, Comctrls::TListItem* 
		Item, int SubItem, Comctrls::TCustomDrawState State, bool &DefaultDraw);
	HIDESBASE void __fastcall HeaderWndProc(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMSysColorChange(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMWinIniChange(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CNKeyDown(Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CNNotify(Messages::TWMNotify &Message);
	HIDESBASE MESSAGE void __fastcall WMVScroll(Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall WMParentNotify(Messages::TWMParentNotify &Message);
	MESSAGE void __fastcall WMDrawHeader(Messages::TWMDrawItem &Message);
	HIDESBASE MESSAGE void __fastcall WMNotify(Messages::TWMNotify &Message);
	MESSAGE void __fastcall UMBestFit(Messages::TMessage &Message);
	void __fastcall AlignLeftItemClick(System::TObject* Sender);
	void __fastcall AlignRightItemClick(System::TObject* Sender);
	void __fastcall AlignCenterItemClick(System::TObject* Sender);
	void __fastcall AscendingItemClick(System::TObject* Sender);
	void __fastcall DescendingItemClick(System::TObject* Sender);
	void __fastcall BestFitItemClick(System::TObject* Sender);
	
protected:
	void *DefaultSortProc;
	virtual void __fastcall Notification(Classes::TComponent* aComponent, Classes::TOperation Operation
		);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall CreateWnd(void);
	HIDESBASE virtual void __fastcall SetViewStyle(Comctrls::TViewStyle Value);
	DYNAMIC void __fastcall ColClick(Comctrls::TListColumn* Column);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	virtual bool __fastcall CustomDrawSubItem(Comctrls::TListItem* Item, int SubItem, Comctrls::TCustomDrawState 
		State, Comctrls::TCustomDrawStage Stage);
	virtual void __fastcall DrawHeader(Graphics::TCanvas* Canvas, const Windows::TRect &Rect, int ColumnIndex
		, bool Pressed);
	virtual void __fastcall UpdateListItems(void);
	virtual void __fastcall LoadSettings(void);
	virtual void __fastcall StoreSettings(void);
	__property Columns ;
	
public:
	__fastcall virtual TacCustomListView(Classes::TComponent* aOwner);
	__fastcall virtual ~TacCustomListView(void);
	virtual void __fastcall RepaintHeader(void);
	int __fastcall CountPerPage(void);
	Comctrls::TListColumn* __fastcall GetColumnAt(int X);
	bool __fastcall IsScrollBarsVisible(void);
	void __fastcall BestFit(void);
	__property Items ;
	
__published:
	__property Align ;
	__property AllocBy ;
	__property Anchors ;
	__property BiDiMode ;
	__property BorderStyle ;
	__property BorderWidth ;
	__property Checkboxes ;
	__property Color ;
	__property ColumnClick ;
	__property Constraints ;
	__property Ctl3D ;
	__property Enabled ;
	__property Font ;
	__property FlatScrollBars ;
	__property FullDrag ;
	__property GridLines ;
	__property HideSelection ;
	__property HotTrack ;
	__property HotTrackStyles ;
	__property IconOptions ;
	__property MultiSelect ;
	__property OwnerData ;
	__property OwnerDraw ;
	__property ReadOnly ;
	__property RowSelect ;
	__property ParentBiDiMode ;
	__property ParentColor ;
	__property ParentFont ;
	__property ParentShowHint ;
	__property PopupMenu ;
	__property ShowColumnHeaders ;
	__property ShowHint ;
	__property TabOrder ;
	__property TabStop ;
	__property Visible ;
	__property OnChange ;
	__property OnChanging ;
	__property OnClick ;
	__property OnColumnClick ;
	__property OnCompare ;
	__property OnCustomDraw ;
	__property OnCustomDrawItem ;
	__property OnCustomDrawSubItem ;
	__property OnData ;
	__property OnDataFind ;
	__property OnDataHint ;
	__property OnDataStateChange ;
	__property OnDblClick ;
	__property OnDeletion ;
	__property OnDrawItem ;
	__property OnEdited ;
	__property OnEditing ;
	__property OnEnter ;
	__property OnExit ;
	__property OnGetImageIndex ;
	__property OnInsert ;
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnResize ;
	__property OnSelectItem ;
	__property AnsiString About = {read=FAbout, write=FAbout, stored=false};
	__property Comctrls::TViewStyle ViewStyle = {read=GetViewStyle, write=SetViewStyle, default=3};
	__property Comctrls::TSortType SortType = {read=GetSortType, write=SetSortType, default=1};
	__property Comctrls::THeaderStyle HeaderStyle = {read=FHeaderStyle, write=SetHeaderStyle, default=0
		};
	__property TacListViewHeaderMenu* HeaderMenu = {read=FHeaderMenu, write=FHeaderMenu};
	__property TacListViewCursors* Cursors = {read=FCursors, write=FCursors};
	__property bool ShowHeaderMenu = {read=FShowHeaderMenu, write=FShowHeaderMenu, default=1};
	__property bool ShowSortMark = {read=FShowSortMark, write=SetShowSortMark, default=1};
	__property TacListViewSortDirection SortDirection = {read=FSortDirection, write=SetSortDirection, default=0
		};
	__property Word SortColumn = {read=FSortColumn, write=SetSortColumn, default=0};
	__property TacListViewSortMarkAlign SortMarkAlign = {read=FSortMarkAlign, write=SetSortMarkAlign, default=0
		};
	__property TacListViewSortMarkKind SortMarkKind = {read=FSortMarkKind, write=SetSortMarkKind, default=0
		};
	__property TacListViewRegistrySaver* RegistrySaver = {read=FRegistrySaver, write=FRegistrySaver};
	__property int HoverTime = {read=GetHoverTime, write=SetHoverTime, nodefault};
	__property bool ShowScrollTips = {read=FShowScrollTips, write=FShowScrollTips, default=1};
	__property bool ShowToolTips = {read=GetToolTips, write=SetToolTips, default=1};
	__property TacListViewToolTipOptions ToolTipOptions = {read=FToolTipOptions, write=SetToolTipOptions
		, default=0};
	__property TacListViewDrawHeaderSection OnDrawHeaderSection = {read=FOnDrawHeaderSection, write=FOnDrawHeaderSection
		};
	__property TacListViewToolTipEvent OnToolTip = {read=FOnToolTip, write=FOnToolTip};
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property Classes::TNotifyEvent OnSettingsChanged = {read=FOnSettingsChanged, write=FOnSettingsChanged
		};
	__property TacListViewCustomDrawSubItemExEvent OnCustomDrawSubItemEx = {read=FOnCustomDrawSubItemEx
		, write=SetOnCustomDrawSubItemEx};
	__property TacListViewColumnDragEvent OnColumnDragged = {read=FOnColumnDragged, write=FOnColumnDragged
		};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacCustomListView(HWND ParentWindow) : Comctrls::TCustomListView(
		ParentWindow) { }
	#pragma option pop
	
};

#pragma pack(pop)

#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacListViewCursors : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	Controls::TCursor FBorder;
	Controls::TCursor FHeader;
	Controls::TCursor FHotCursor;
	Controls::TCursor FDivider;
	Controls::TCursor FScrollHorz;
	Controls::TCursor FScrollVert;
	TacCustomListView* ListView;
	void __fastcall SetHotCursor(Controls::TCursor Value);
	
public:
	__fastcall TacListViewCursors(TacCustomListView* aListView);
	
__published:
	__property Controls::TCursor Border = {read=FBorder, write=FBorder, default=0};
	__property Controls::TCursor Header = {read=FHeader, write=FHeader, default=0};
	__property Controls::TCursor HotCursor = {read=FHotCursor, write=SetHotCursor, default=-151};
	__property Controls::TCursor Divider = {read=FDivider, write=FDivider, default=0};
	__property Controls::TCursor ScrollHorz = {read=FScrollHorz, write=FScrollHorz, default=0};
	__property Controls::TCursor ScrollVert = {read=FScrollVert, write=FScrollVert, default=0};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacListViewCursors(void) { }
	#pragma option pop
	
};

#pragma pack(pop)

class DELPHICLASS TacListView;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacListView : public TacCustomListView 
{
	typedef TacCustomListView inherited;
	
__published:
	__property Columns ;
	__property Items ;
	__property LargeImages ;
	__property SmallImages ;
	__property StateImages ;
	__property DragCursor ;
	__property DragMode ;
	__property DragKind ;
	__property OnStartDock ;
	__property OnEndDock ;
	__property OnStartDrag ;
	__property OnEndDrag ;
	__property OnDragDrop ;
	__property OnDragOver ;
public:
	#pragma option push -w-inl
	/* TacCustomListView.Create */ inline __fastcall virtual TacListView(Classes::TComponent* aOwner) : 
		TacCustomListView(aOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacCustomListView.Destroy */ inline __fastcall virtual ~TacListView(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacListView(HWND ParentWindow) : TacCustomListView(
		ParentWindow) { }
	#pragma option pop
	
};

#pragma pack(pop)

class DELPHICLASS TacTreeViewCursors;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacTreeViewCursors : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	Controls::TCursor FBorder;
	Controls::TCursor FScrollHorz;
	Controls::TCursor FScrollVert;
	
__published:
	__property Controls::TCursor Border = {read=FBorder, write=FBorder, default=0};
	__property Controls::TCursor ScrollHorz = {read=FScrollHorz, write=FScrollHorz, default=0};
	__property Controls::TCursor ScrollVert = {read=FScrollVert, write=FScrollVert, default=0};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacTreeViewCursors(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TacTreeViewCursors(void) : Classes::TPersistent() { }
	#pragma option pop
	
};

#pragma pack(pop)

class DELPHICLASS TacTreeView;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacTreeView : public Comctrls::TTreeView 
{
	typedef Comctrls::TTreeView inherited;
	
private:
	AnsiString FAbout;
	TacTreeViewCursors* FCursors;
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	
protected:
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	
public:
	__fastcall virtual TacTreeView(Classes::TComponent* aOwner);
	__fastcall virtual ~TacTreeView(void);
	
__published:
	__property AnsiString About = {read=FAbout, write=FAbout, stored=false};
	__property TacTreeViewCursors* Cursors = {read=FCursors, write=FCursors};
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacTreeView(HWND ParentWindow) : Comctrls::TTreeView(
		ParentWindow) { }
	#pragma option pop
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const Word UM_BESTFIT = 0x69a;
extern PACKAGE System::TDateTime __fastcall StrToDateTimeDef(const AnsiString S, System::TDateTime DefDateTime
	);
extern PACKAGE int __stdcall UMDefaultListViewSort(Comctrls::TListItem* Item1, Comctrls::TListItem* 
	Item2, int lParam);

}	/* namespace Accomctrls */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Accomctrls;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acComCtrls
