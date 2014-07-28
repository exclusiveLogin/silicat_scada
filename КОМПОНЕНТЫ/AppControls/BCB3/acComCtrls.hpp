// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acComCtrls.pas' rev: 3.00

#ifndef acComCtrlsHPP
#define acComCtrlsHPP
#include <Forms.hpp>
#include <acGraphics.hpp>
#include <acClasses.hpp>
#include <Menus.hpp>
#include <Commctrl.hpp>
#include <ComCtrls.hpp>
#include <Graphics.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Accomctrls
{
//-- type declarations -------------------------------------------------------
enum TacListViewSortDirection { sdAscending, sdDescending };

enum TacListViewSortMarkKind { mkSunken, mkRaised };

enum TacListViewSortMarkAlign { maText, maEdge };

enum TacListViewToolTipOption { ttoInstantShow, ttoLongStay, ttoBelowItem, ttoOffset };

typedef Set<TacListViewToolTipOption, ttoInstantShow, ttoOffset>  TacListViewToolTipOptions;

typedef void __fastcall (__closure *TacListViewDrawHeaderSection)(System::TObject* Sender, Graphics::TCanvas* 
	Canvas, const Windows::TRect &Rect, int ColumnIndex, bool Pressed);

typedef void __fastcall (__closure *TacListViewToolTipEvent)(System::TObject* Sender, System::AnsiString 
	&ToolTipText, Comctrls::TListItem* Item, int LogicalCol);

class DELPHICLASS TacListViewCursors;
class DELPHICLASS TacCustomListView;
enum THeaderStyle { hsButtons, hsFlat };

class DELPHICLASS TacListViewHeaderMenu;
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
	/* TPersistent.Destroy */ __fastcall virtual ~TacListViewHeaderMenu(void) { }
	
};

class DELPHICLASS TacListViewRegistrySaver;
class PASCALIMPLEMENTATION TacListViewRegistrySaver : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FEnabled;
	System::AnsiString FRegKey;
	TacRegLocation FRegLocation;
	void __fastcall SetRegKey(System::AnsiString Value);
	
public:
	__fastcall TacListViewRegistrySaver(void);
	
__published:
	__property bool Enabled = {read=FEnabled, write=FEnabled, nodefault};
	__property System::AnsiString RegKey = {read=FRegKey, write=SetRegKey};
	__property Acclasses::TacRegLocation RegLocation = {read=FRegLocation, write=FRegLocation, default=0
		};
public:
	/* TPersistent.Destroy */ __fastcall virtual ~TacListViewRegistrySaver(void) { }
	
};

enum TListHotTrackStyle { htHandPoint, htUnderlineCold, htUnderlineHot };

typedef Set<TListHotTrackStyle, htHandPoint, htUnderlineHot>  TListHotTrackStyles;

class PASCALIMPLEMENTATION TacCustomListView : public Comctrls::TCustomListView 
{
	typedef Comctrls::TCustomListView inherited;
	
private:
	System::AnsiString FAbout;
	THeaderStyle FHeaderStyle;
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
	bool FFlatScrollBars;
	bool FFullDrag;
	TListHotTrackStyles FHotTrackStyles;
	TacListViewToolTipOptions FToolTipOptions;
	System::AnsiString FToolTipText;
	TacListViewDrawHeaderSection FOnDrawHeaderSection;
	TacListViewToolTipEvent FOnToolTip;
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	Classes::TNotifyEvent FOnSettingsChanged;
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
	void __fastcall SetHeaderStyle(THeaderStyle Value);
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
	HIDESBASE void __fastcall ResetExStyles(void);
	void __fastcall SetFlatScrollBars(bool Value);
	void __fastcall SetFullDrag(bool Value);
	void __fastcall SetHotTrackStyles(TListHotTrackStyles Value);
	int __fastcall GetHoverTime(void);
	void __fastcall SetHoverTime(int Value);
	HIDESBASE void __fastcall HeaderWndProc(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMSysColorChange(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMWinIniChange(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CNKeyDown(Messages::TWMKey &Message);
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
	__property BorderStyle ;
	__property Checkboxes ;
	__property Color ;
	__property ColumnClick ;
	__property Ctl3D ;
	__property Enabled ;
	__property Font ;
	__property GridLines ;
	__property HideSelection ;
	__property HotTrack ;
	__property IconOptions ;
	__property MultiSelect ;
	__property ReadOnly ;
	__property RowSelect ;
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
	__property OnDblClick ;
	__property OnDeletion ;
	__property OnEdited ;
	__property OnEditing ;
	__property OnEnter ;
	__property OnExit ;
	__property OnInsert ;
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property System::AnsiString About = {read=FAbout, write=FAbout, stored=false};
	__property Comctrls::TViewStyle ViewStyle = {read=GetViewStyle, write=SetViewStyle, default=3};
	__property Comctrls::TSortType SortType = {read=GetSortType, write=SetSortType, default=1};
	__property THeaderStyle HeaderStyle = {read=FHeaderStyle, write=SetHeaderStyle, default=0};
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
	__property bool FlatScrollBars = {read=FFlatScrollBars, write=SetFlatScrollBars, nodefault};
	__property bool FullDrag = {read=FFullDrag, write=SetFullDrag, default=0};
	__property TListHotTrackStyles HotTrackStyles = {read=FHotTrackStyles, write=SetHotTrackStyles, default=0
		};
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
public:
	/* TWinControl.CreateParented */ __fastcall TacCustomListView(HWND ParentWindow) : Comctrls::TCustomListView(
		ParentWindow) { }
	
};

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
	/* TPersistent.Destroy */ __fastcall virtual ~TacListViewCursors(void) { }
	
};

class DELPHICLASS TacListView;
class PASCALIMPLEMENTATION TacListView : public Accomctrls::TacCustomListView 
{
	typedef Accomctrls::TacCustomListView inherited;
	
__published:
	__property Columns ;
	__property Items ;
	__property LargeImages ;
	__property SmallImages ;
	__property StateImages ;
	__property DragCursor ;
	__property DragMode ;
	__property OnStartDrag ;
	__property OnEndDrag ;
	__property OnDragDrop ;
	__property OnDragOver ;
public:
	/* TacCustomListView.Create */ __fastcall virtual TacListView(Classes::TComponent* aOwner) : Accomctrls::
		TacCustomListView(aOwner) { }
	/* TacCustomListView.Destroy */ __fastcall virtual ~TacListView(void) { }
	
public:
	/* TWinControl.CreateParented */ __fastcall TacListView(HWND ParentWindow) : Accomctrls::TacCustomListView(
		ParentWindow) { }
	
};

class DELPHICLASS TacTreeViewCursors;
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
	/* TPersistent.Destroy */ __fastcall virtual ~TacTreeViewCursors(void) { }
	
public:
	/* TObject.Create */ __fastcall TacTreeViewCursors(void) : Classes::TPersistent() { }
	
};

class DELPHICLASS TacTreeView;
class PASCALIMPLEMENTATION TacTreeView : public Comctrls::TTreeView 
{
	typedef Comctrls::TTreeView inherited;
	
private:
	System::AnsiString FAbout;
	TacTreeViewCursors* FCursors;
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	bool FAutoExpand;
	bool FHotTrack;
	bool FRowSelect;
	bool FToolTips;
	void __fastcall SetAutoExpand(bool Value);
	void __fastcall SetHotTrack(bool Value);
	void __fastcall SetRowSelect(bool Value);
	void __fastcall SetToolTips(bool Value);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	
protected:
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	
public:
	__fastcall virtual TacTreeView(Classes::TComponent* aOwner);
	__fastcall virtual ~TacTreeView(void);
	
__published:
	__property System::AnsiString About = {read=FAbout, write=FAbout, stored=false};
	__property TacTreeViewCursors* Cursors = {read=FCursors, write=FCursors};
	__property bool AutoExpand = {read=FAutoExpand, write=SetAutoExpand, nodefault};
	__property bool HotTrack = {read=FHotTrack, write=SetHotTrack, nodefault};
	__property bool RowSelect = {read=FRowSelect, write=SetRowSelect, nodefault};
	__property bool ToolTips = {read=FToolTips, write=SetToolTips, default=1};
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
public:
	/* TWinControl.CreateParented */ __fastcall TacTreeView(HWND ParentWindow) : Comctrls::TTreeView(ParentWindow
		) { }
	
};

//-- var, const, procedure ---------------------------------------------------
#define UM_BESTFIT (Word)(1690)
extern PACKAGE System::TDateTime __fastcall StrToDateTimeDef(const System::AnsiString S, System::TDateTime 
	DefDateTime);
extern PACKAGE int __stdcall UMDefaultListViewSort(Comctrls::TListItem* Item1, Comctrls::TListItem* 
	Item2, int lParam);

}	/* namespace Accomctrls */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Accomctrls;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acComCtrls
