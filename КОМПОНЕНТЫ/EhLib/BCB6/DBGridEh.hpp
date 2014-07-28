// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBGridEh.pas' rev: 5.00

#ifndef DBGridEhHPP
#define DBGridEhHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <ImgList.hpp>	// Pascal unit
#include <DBSumLst.hpp>	// Pascal unit
#include <Registry.hpp>	// Pascal unit
#include <DBGrids.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Db.hpp>	// Pascal unit
#include <DBCtrls.hpp>	// Pascal unit
#include <Grids.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbgrideh
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TColumnEhValue { cvColor, cvWidth, cvFont, cvAlignment, cvReadOnly, cvTitleColor, cvTitleCaption, 
	cvTitleAlignment, cvTitleFont, cvImeMode, cvImeName, cvWordWrap, cvLookupDisplayFields, cvCheckboxes 
	};
#pragma option pop

typedef Set<TColumnEhValue, cvColor, cvCheckboxes>  TColumnEhValues;

#pragma option push -b-
enum TColumnFooterEhValue { cvFooterAlignment, cvFooterFont, cvFooterColor };
#pragma option pop

typedef Set<TColumnFooterEhValue, cvFooterAlignment, cvFooterColor>  TColumnFooterValues;

#pragma option push -b-
enum TColumnEhRestoreParam { crpColIndexEh, crpColWidthsEh, crpSortMarkerEh, crpColVisibleEh };
#pragma option pop

typedef Set<TColumnEhRestoreParam, crpColIndexEh, crpColVisibleEh>  TColumnEhRestoreParams;

#pragma option push -b-
enum TDBGridEhRestoreParam { grpColIndexEh, grpColWidthsEh, grpSortMarkerEh, grpColVisibleEh, grpRowHeightEh 
	};
#pragma option pop

typedef Set<TDBGridEhRestoreParam, grpColIndexEh, grpRowHeightEh>  TDBGridEhRestoreParams;

#pragma option push -b-
enum TSortMarkerEh { smNoneEh, smDownEh, smUpEh };
#pragma option pop

class DELPHICLASS TColumnTitleEh;
class DELPHICLASS TColumnEh;
#pragma option push -b-
enum TColumnButtonStyleEh { cbsAuto, cbsEllipsis, cbsNone, cbsUpDown, cbsDropDown };
#pragma option pop

class DELPHICLASS TColumnFooterEh;
#pragma option push -b-
enum TFooterValueType { fvtNon, fvtSum, fvtCount, fvtFieldValue, fvtStaticText };
#pragma option pop

class PASCALIMPLEMENTATION TColumnFooterEh : public Classes::TCollectionItem 
{
	typedef Classes::TCollectionItem inherited;
	
private:
	TColumnEh* FColumn;
	Graphics::TFont* FFont;
	Graphics::TColor FColor;
	Classes::TAlignment FAlignment;
	bool FEndEllipsis;
	AnsiString FValue;
	AnsiString FFieldName;
	TFooterValueType FValueType;
	bool FWordWrap;
	TColumnFooterValues FAssignedValues;
	void __fastcall FontChanged(System::TObject* Sender);
	Classes::TAlignment __fastcall GetAlignment(void);
	Graphics::TColor __fastcall GetColor(void);
	Graphics::TFont* __fastcall GetFont(void);
	bool __fastcall IsAlignmentStored(void);
	bool __fastcall IsColorStored(void);
	bool __fastcall IsFontStored(void);
	void __fastcall SetAlignment(Classes::TAlignment Value);
	void __fastcall SetColor(Graphics::TColor Value);
	void __fastcall SetFont(Graphics::TFont* Value);
	void __fastcall SetEndEllipsis(const bool Value);
	void __fastcall SetFieldName(const AnsiString Value);
	void __fastcall SetValueType(const TFooterValueType Value);
	void __fastcall SetValue(const AnsiString Value);
	void __fastcall SetWordWrap(const bool Value);
	
protected:
	Dbsumlst::TDBSum* FDBSum;
	void __fastcall RefreshDefaultFont(void);
	
public:
	__fastcall virtual TColumnFooterEh(Classes::TCollection* Collection);
	__fastcall TColumnFooterEh(TColumnEh* Column);
	__fastcall virtual ~TColumnFooterEh(void);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	Classes::TAlignment __fastcall DefaultAlignment(void);
	Graphics::TColor __fastcall DefaultColor(void);
	Graphics::TFont* __fastcall DefaultFont(void);
	void __fastcall EnsureSumValue(void);
	virtual void __fastcall RestoreDefaults(void);
	__property TColumnFooterValues AssignedValues = {read=FAssignedValues, nodefault};
	__property TColumnEh* Column = {read=FColumn};
	
__published:
	__property Classes::TAlignment Alignment = {read=GetAlignment, write=SetAlignment, stored=IsAlignmentStored
		, nodefault};
	__property Graphics::TColor Color = {read=GetColor, write=SetColor, stored=IsColorStored, nodefault
		};
	__property Graphics::TFont* Font = {read=GetFont, write=SetFont, stored=IsFontStored};
	__property bool EndEllipsis = {read=FEndEllipsis, write=SetEndEllipsis, default=0};
	__property TFooterValueType ValueType = {read=FValueType, write=SetValueType, default=0};
	__property AnsiString FieldName = {read=FFieldName, write=SetFieldName};
	__property AnsiString Value = {read=FValue, write=SetValue};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, default=0};
};


class DELPHICLASS TColumnFootersEh;
typedef TMetaClass*TColumnFooterEhClass;

class PASCALIMPLEMENTATION TColumnFootersEh : public Classes::TCollection 
{
	typedef Classes::TCollection inherited;
	
private:
	TColumnEh* FColumn;
	TColumnFooterEh* __fastcall GetFooter(int Index);
	void __fastcall SetFooter(int Index, TColumnFooterEh* Value);
	
protected:
	DYNAMIC Classes::TPersistent* __fastcall GetOwner(void);
	virtual void __fastcall Update(Classes::TCollectionItem* Item);
	
public:
	__fastcall TColumnFootersEh(TColumnEh* Column, TMetaClass* FooterClass);
	HIDESBASE TColumnFooterEh* __fastcall Add(void);
	__property TColumnEh* Column = {read=FColumn};
	__property TColumnFooterEh* Items[int Index] = {read=GetFooter, write=SetFooter/*, default*/};
public:
		
	#pragma option push -w-inl
	/* TCollection.Destroy */ inline __fastcall virtual ~TColumnFootersEh(void) { }
	#pragma option pop
	
};


class DELPHICLASS TCustomDBGridEh;
#pragma option push -b-
enum TColumnEhType { ctCommon, ctPickList, ctLookupField, ctKeyPickList, ctKeyImageList, ctCheckboxes 
	};
#pragma option pop

class PASCALIMPLEMENTATION TColumnEh : public Classes::TCollectionItem 
{
	typedef Classes::TCollectionItem inherited;
	
private:
	Db::TField* FField;
	AnsiString FFieldName;
	Graphics::TColor FColor;
	int FWidth;
	TColumnTitleEh* FTitle;
	Graphics::TFont* FFont;
	Controls::TImeMode FImeMode;
	AnsiString FImeName;
	Classes::TStrings* FPickList;
	Menus::TPopupMenu* FPopupMenu;
	unsigned FDropDownRows;
	TColumnButtonStyleEh FButtonStyle;
	Classes::TAlignment FAlignment;
	bool FReadonly;
	TColumnEhValues FAssignedValues;
	TColumnFooterEh* FFooter;
	bool FVisible;
	Classes::TStrings* FKeyList;
	Imglist::TCustomImageList* FImageList;
	int FNotInKeyListIndex;
	int FMinWidth;
	int FMaxWidth;
	bool FNotInWidthRange;
	bool FDblClickNextVal;
	bool FCheckboxes;
	Extended FIncrement;
	bool FToolTips;
	TColumnFootersEh* FFooters;
	void __fastcall FontChanged(System::TObject* Sender);
	Classes::TAlignment __fastcall GetAlignment(void);
	Graphics::TColor __fastcall GetColor(void);
	Db::TField* __fastcall GetField(void);
	Graphics::TFont* __fastcall GetFont(void);
	Controls::TImeMode __fastcall GetImeMode(void);
	AnsiString __fastcall GetImeName();
	Classes::TStrings* __fastcall GetPickList(void);
	bool __fastcall GetReadOnly(void);
	int __fastcall GetWidth(void);
	bool __fastcall IsAlignmentStored(void);
	bool __fastcall IsColorStored(void);
	bool __fastcall IsFontStored(void);
	bool __fastcall IsImeModeStored(void);
	bool __fastcall IsImeNameStored(void);
	bool __fastcall IsReadOnlyStored(void);
	bool __fastcall IsWidthStored(void);
	virtual void __fastcall SetAlignment(Classes::TAlignment Value);
	void __fastcall SetButtonStyle(TColumnButtonStyleEh Value);
	void __fastcall SetColor(Graphics::TColor Value);
	virtual void __fastcall SetField(Db::TField* Value);
	void __fastcall SetFieldName(const AnsiString Value);
	void __fastcall SetFont(Graphics::TFont* Value);
	virtual void __fastcall SetImeMode(Controls::TImeMode Value);
	virtual void __fastcall SetImeName(AnsiString Value);
	void __fastcall SetPickList(Classes::TStrings* Value);
	void __fastcall SetPopupMenu(Menus::TPopupMenu* Value);
	virtual void __fastcall SetReadOnly(bool Value);
	void __fastcall SetTitle(TColumnTitleEh* Value);
	virtual void __fastcall SetWidth(int Value);
	void __fastcall SetFooter(const TColumnFooterEh* Value);
	void __fastcall SetVisible(const bool Value);
	Classes::TStrings* __fastcall GetKeykList(void);
	void __fastcall SetKeykList(const Classes::TStrings* Value);
	void __fastcall SetNotInKeyListIndex(const int Value);
	void __fastcall SetImageList(const Imglist::TCustomImageList* Value);
	void __fastcall SetMaxWidth(const int Value);
	void __fastcall SetMinWidth(const int Value);
	bool __fastcall GetCheckboxes(void);
	void __fastcall SetCheckboxes(const bool Value);
	bool __fastcall DefaultCheckboxes(void);
	Stdctrls::TCheckBoxState __fastcall GetCheckboxState(void);
	void __fastcall SetCheckboxState(const Stdctrls::TCheckBoxState Value);
	bool __fastcall IsCheckboxesStored(void);
	bool __fastcall IsIncrementStored(void);
	bool __fastcall GetToolTips(void);
	void __fastcall SetToolTips(const bool Value);
	void __fastcall SetFooters(const TColumnFootersEh* Value);
	
protected:
	int FInitWidth;
	bool FAutoFitColWidth;
	bool FWordWrap;
	bool FEndEllipsis;
	int FDropDownWidth;
	AnsiString FLookupDisplayFields;
	bool FAlwaysShowEditButton;
	bool FAutoDropDown;
	bool __fastcall GetAutoFitColWidth(void);
	AnsiString __fastcall GetLookupDisplayFields();
	bool __fastcall GetWordWrap(void);
	bool __fastcall IsWordWrapStored(void);
	bool __fastcall IsLookupDisplayFieldsStored(void);
	AnsiString __fastcall DefaultLookupDisplayFields();
	bool __fastcall DefaultWordWrap(void);
	void __fastcall SetAlwaysShowEditButton(bool Value);
	void __fastcall SetAutoDropDown(bool Value);
	virtual void __fastcall SetAutoFitColWidth(bool Value);
	virtual void __fastcall SetWordWrap(bool Value);
	virtual void __fastcall SetLookupDisplayFields(AnsiString Value);
	void __fastcall SetDropDownWidth(int Value);
	void __fastcall SetEndEllipsis(const bool Value);
	virtual TColumnFooterEh* __fastcall CreateFooter(void);
	void __fastcall SetNextFieldValue(Extended Increment);
	bool __fastcall CanModify(bool TryEdit);
	int __fastcall AllowableWidth(int TryWidth);
	void __fastcall EnsureSumValue(void);
	virtual TColumnTitleEh* __fastcall CreateTitle(void);
	virtual TColumnFootersEh* __fastcall CreateFooters(void);
	TCustomDBGridEh* __fastcall GetGrid(void);
	virtual AnsiString __fastcall GetDisplayName();
	void __fastcall RefreshDefaultFont(void);
	
public:
	__fastcall virtual TColumnEh(Classes::TCollection* Collection);
	__fastcall virtual ~TColumnEh(void);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	Classes::TAlignment __fastcall DefaultAlignment(void);
	Graphics::TColor __fastcall DefaultColor(void);
	Graphics::TFont* __fastcall DefaultFont(void);
	Controls::TImeMode __fastcall DefaultImeMode(void);
	AnsiString __fastcall DefaultImeName();
	bool __fastcall DefaultReadOnly(void);
	int __fastcall DefaultWidth(void);
	virtual void __fastcall RestoreDefaults(void);
	AnsiString __fastcall DisplayText();
	TColumnEhType __fastcall GetColumnType(void);
	TColumnFooterEh* __fastcall UsedFooter(int Index);
	__property TCustomDBGridEh* Grid = {read=GetGrid};
	__property TColumnEhValues AssignedValues = {read=FAssignedValues, nodefault};
	__property Db::TField* Field = {read=GetField, write=SetField};
	__property Stdctrls::TCheckBoxState CheckboxState = {read=GetCheckboxState, write=SetCheckboxState, 
		nodefault};
	
__published:
	__property Classes::TAlignment Alignment = {read=GetAlignment, write=SetAlignment, stored=IsAlignmentStored
		, nodefault};
	__property TColumnButtonStyleEh ButtonStyle = {read=FButtonStyle, write=SetButtonStyle, default=0};
		
	__property Graphics::TColor Color = {read=GetColor, write=SetColor, stored=IsColorStored, nodefault
		};
	__property unsigned DropDownRows = {read=FDropDownRows, write=FDropDownRows, default=7};
	__property AnsiString FieldName = {read=FFieldName, write=SetFieldName};
	__property Graphics::TFont* Font = {read=GetFont, write=SetFont, stored=IsFontStored};
	__property Controls::TImeMode ImeMode = {read=GetImeMode, write=SetImeMode, stored=IsImeModeStored, 
		nodefault};
	__property AnsiString ImeName = {read=GetImeName, write=SetImeName, stored=IsImeNameStored};
	__property Classes::TStrings* PickList = {read=GetPickList, write=SetPickList};
	__property Menus::TPopupMenu* PopupMenu = {read=FPopupMenu, write=SetPopupMenu};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, stored=IsReadOnlyStored, nodefault
		};
	__property TColumnTitleEh* Title = {read=FTitle, write=SetTitle};
	__property int Width = {read=GetWidth, write=SetWidth, stored=IsWidthStored, nodefault};
	__property bool AlwaysShowEditButton = {read=FAlwaysShowEditButton, write=SetAlwaysShowEditButton, 
		default=0};
	__property bool AutoFitColWidth = {read=GetAutoFitColWidth, write=SetAutoFitColWidth, default=1};
	__property bool WordWrap = {read=GetWordWrap, write=SetWordWrap, stored=IsWordWrapStored, nodefault
		};
	__property bool EndEllipsis = {read=FEndEllipsis, write=SetEndEllipsis, default=0};
	__property int DropDownWidth = {read=FDropDownWidth, write=SetDropDownWidth, default=0};
	__property AnsiString LookupDisplayFields = {read=GetLookupDisplayFields, write=SetLookupDisplayFields
		, stored=IsLookupDisplayFieldsStored};
	__property bool AutoDropDown = {read=FAutoDropDown, write=SetAutoDropDown, default=0};
	__property TColumnFooterEh* Footer = {read=FFooter, write=SetFooter};
	__property bool Visible = {read=FVisible, write=SetVisible, default=1};
	__property Classes::TStrings* KeyList = {read=GetKeykList, write=SetKeykList};
	__property Imglist::TCustomImageList* ImageList = {read=FImageList, write=SetImageList};
	__property int NotInKeyListIndex = {read=FNotInKeyListIndex, write=SetNotInKeyListIndex, default=-1
		};
	__property int MinWidth = {read=FMinWidth, write=SetMinWidth, default=0};
	__property int MaxWidth = {read=FMaxWidth, write=SetMaxWidth, default=0};
	__property bool DblClickNextVal = {read=FDblClickNextVal, write=FDblClickNextVal, default=0};
	__property bool Checkboxes = {read=GetCheckboxes, write=SetCheckboxes, stored=IsCheckboxesStored, nodefault
		};
	__property Extended Increment = {read=FIncrement, write=FIncrement, stored=IsIncrementStored};
	__property bool ToolTips = {read=GetToolTips, write=SetToolTips, default=0};
	__property TColumnFootersEh* Footers = {read=FFooters, write=SetFooters};
};


class PASCALIMPLEMENTATION TColumnTitleEh : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	TColumnEh* FColumn;
	AnsiString FCaption;
	Graphics::TFont* FFont;
	Graphics::TColor FColor;
	Classes::TAlignment FAlignment;
	bool FEndEllipsis;
	int FSortIndex;
	AnsiString FHint;
	int FImageIndex;
	bool FToolTips;
	void __fastcall FontChanged(System::TObject* Sender);
	Classes::TAlignment __fastcall GetAlignment(void);
	Graphics::TColor __fastcall GetColor(void);
	AnsiString __fastcall GetCaption();
	Graphics::TFont* __fastcall GetFont(void);
	bool __fastcall IsAlignmentStored(void);
	bool __fastcall IsColorStored(void);
	bool __fastcall IsFontStored(void);
	bool __fastcall IsCaptionStored(void);
	void __fastcall SetAlignment(Classes::TAlignment Value);
	void __fastcall SetColor(Graphics::TColor Value);
	void __fastcall SetFont(Graphics::TFont* Value);
	virtual void __fastcall SetCaption(const AnsiString Value);
	void __fastcall SetEndEllipsis(const bool Value);
	void __fastcall SetSortIndex(int Value);
	void __fastcall SetImageIndex(const int Value);
	bool __fastcall GetToolTips(void);
	void __fastcall SetToolTips(const bool Value);
	
protected:
	bool FTitleButton;
	TSortMarkerEh FSortMarker;
	void __fastcall SetTitleButton(bool Value);
	void __fastcall SetSortMarker(TSortMarkerEh Value);
	void __fastcall RefreshDefaultFont(void);
	int __fastcall GetSortMarkingWidth(void);
	
public:
	__fastcall TColumnTitleEh(TColumnEh* Column);
	__fastcall virtual ~TColumnTitleEh(void);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	Classes::TAlignment __fastcall DefaultAlignment(void);
	Graphics::TColor __fastcall DefaultColor(void);
	Graphics::TFont* __fastcall DefaultFont(void);
	AnsiString __fastcall DefaultCaption();
	virtual void __fastcall RestoreDefaults(void);
	void __fastcall SetNextSortMarkerValue(bool KeepMulti);
	
__published:
	__property Classes::TAlignment Alignment = {read=GetAlignment, write=SetAlignment, stored=IsAlignmentStored
		, nodefault};
	__property AnsiString Caption = {read=GetCaption, write=SetCaption, stored=IsCaptionStored};
	__property Graphics::TColor Color = {read=GetColor, write=SetColor, stored=IsColorStored, nodefault
		};
	__property Graphics::TFont* Font = {read=GetFont, write=SetFont, stored=IsFontStored};
	__property bool TitleButton = {read=FTitleButton, write=SetTitleButton, default=0};
	__property TSortMarkerEh SortMarker = {read=FSortMarker, write=SetSortMarker, default=0};
	__property bool EndEllipsis = {read=FEndEllipsis, write=SetEndEllipsis, default=0};
	__property int SortIndex = {read=FSortIndex, write=SetSortIndex, default=0};
	__property AnsiString Hint = {read=FHint, write=FHint};
	__property int ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
	__property bool ToolTips = {read=GetToolTips, write=SetToolTips, default=0};
};


typedef TMetaClass*TColumnEhClass;

class DELPHICLASS TDBGridColumnsEh;
class PASCALIMPLEMENTATION TDBGridColumnsEh : public Classes::TCollection 
{
	typedef Classes::TCollection inherited;
	
private:
	TCustomDBGridEh* FGrid;
	TColumnEh* __fastcall GetColumn(int Index);
	Dbgrids::TDBGridColumnsState __fastcall GetState(void);
	void __fastcall SetColumn(int Index, TColumnEh* Value);
	void __fastcall SetState(Dbgrids::TDBGridColumnsState NewState);
	
protected:
	DYNAMIC Classes::TPersistent* __fastcall GetOwner(void);
	virtual void __fastcall Update(Classes::TCollectionItem* Item);
	
public:
	__fastcall TDBGridColumnsEh(TCustomDBGridEh* Grid, TMetaClass* ColumnClass);
	HIDESBASE TColumnEh* __fastcall Add(void);
	void __fastcall LoadFromFile(const AnsiString Filename);
	void __fastcall LoadFromStream(Classes::TStream* S);
	void __fastcall RestoreDefaults(void);
	void __fastcall RebuildColumns(void);
	void __fastcall SaveToFile(const AnsiString Filename);
	void __fastcall SaveToStream(Classes::TStream* S);
	__property Dbgrids::TDBGridColumnsState State = {read=GetState, write=SetState, nodefault};
	__property TCustomDBGridEh* Grid = {read=FGrid};
	__property TColumnEh* Items[int Index] = {read=GetColumn, write=SetColumn/*, default*/};
	bool __fastcall ExistFooterValueType(TFooterValueType AFooterValueType);
public:
	#pragma option push -w-inl
	/* TCollection.Destroy */ inline __fastcall virtual ~TDBGridColumnsEh(void) { }
	#pragma option pop
	
};


class DELPHICLASS TColumnsEhList;
class PASCALIMPLEMENTATION TColumnsEhList : public Classes::TList 
{
	typedef Classes::TList inherited;
	
private:
	TColumnEh* __fastcall GetColumn(int Index);
	void __fastcall SetColumn(int Index, const TColumnEh* Value);
	
public:
	__property TColumnEh* Items[int Index] = {read=GetColumn, write=SetColumn/*, default*/};
public:
	#pragma option push -w-inl
	/* TList.Destroy */ inline __fastcall virtual ~TColumnsEhList(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TColumnsEhList(void) : Classes::TList() { }
	#pragma option pop
	
};


class DELPHICLASS TGridDataLinkEh;
class PASCALIMPLEMENTATION TGridDataLinkEh : public Db::TDataLink 
{
	typedef Db::TDataLink inherited;
	
private:
	TCustomDBGridEh* FGrid;
	int FFieldCount;
	int FFieldMapSize;
	void *FFieldMap;
	bool FModified;
	bool FInUpdateData;
	bool FSparseMap;
	bool __fastcall GetDefaultFields(void);
	Db::TField* __fastcall GetFields(int I);
	
protected:
	virtual void __fastcall ActiveChanged(void);
	virtual void __fastcall DataSetChanged(void);
	virtual void __fastcall DataSetScrolled(int Distance);
	virtual void __fastcall FocusControl(Db::TFieldRef Field);
	virtual void __fastcall EditingChanged(void);
	virtual void __fastcall LayoutChanged(void);
	virtual void __fastcall RecordChanged(Db::TField* Field);
	virtual void __fastcall UpdateData(void);
	int __fastcall GetMappedIndex(int ColIndex);
	
public:
	__fastcall TGridDataLinkEh(TCustomDBGridEh* AGrid);
	__fastcall virtual ~TGridDataLinkEh(void);
	bool __fastcall AddMapping(const AnsiString FieldName);
	void __fastcall ClearMapping(void);
	void __fastcall Modified(void);
	void __fastcall Reset(void);
	__property bool DefaultFields = {read=GetDefaultFields, nodefault};
	__property int FieldCount = {read=FFieldCount, nodefault};
	__property Db::TField* Fields[int I] = {read=GetFields};
	__property bool SparseMap = {read=FSparseMap, write=FSparseMap, nodefault};
};


class DELPHICLASS TBookmarkListEh;
class PASCALIMPLEMENTATION TBookmarkListEh : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	Classes::TStringList* FList;
	TCustomDBGridEh* FGrid;
	AnsiString FCache;
	int FCacheIndex;
	bool FCacheFind;
	bool FLinkActive;
	int __fastcall GetCount(void);
	bool __fastcall GetCurrentRowSelected(void);
	AnsiString __fastcall GetItem(int Index);
	void __fastcall SetCurrentRowSelected(bool Value);
	void __fastcall StringsChanged(System::TObject* Sender);
	
protected:
	AnsiString __fastcall CurrentRow();
	int __fastcall Compare(const AnsiString Item1, const AnsiString Item2);
	void __fastcall LinkActive(bool Value);
	
public:
	__fastcall TBookmarkListEh(TCustomDBGridEh* AGrid);
	__fastcall virtual ~TBookmarkListEh(void);
	void __fastcall Clear(void);
	void __fastcall Delete(void);
	bool __fastcall Find(const AnsiString Item, int &Index);
	int __fastcall IndexOf(const AnsiString Item);
	bool __fastcall Refresh(void);
	void __fastcall SelectAll(void);
	__property int Count = {read=GetCount, nodefault};
	__property bool CurrentRowSelected = {read=GetCurrentRowSelected, write=SetCurrentRowSelected, nodefault
		};
	__property AnsiString Items[int Index] = {read=GetItem/*, default*/};
};


class DELPHICLASS THeadTreeNode;
typedef void __fastcall (__closure *THeadTreeProc)(THeadTreeNode* node);

class PASCALIMPLEMENTATION THeadTreeNode : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	THeadTreeNode* Host;
	THeadTreeNode* Child;
	THeadTreeNode* Next;
	AnsiString Text;
	int Height;
	int Width;
	int WIndent;
	int VLineWidth;
	bool Drawed;
	int HeightPrn;
	int WidthPrn;
	TColumnEh* Column;
	__fastcall THeadTreeNode(void);
	__fastcall THeadTreeNode(AnsiString AText, int AHeight, int AWidth);
	__fastcall virtual ~THeadTreeNode(void);
	THeadTreeNode* __fastcall Add(THeadTreeNode* AAfter, AnsiString AText, int AHeight, int AWidth);
	THeadTreeNode* __fastcall AddChild(THeadTreeNode* ANode, AnsiString AText, int AHeight, int AWidth)
		;
	bool __fastcall Find(THeadTreeNode* ANode);
	void __fastcall Union(THeadTreeNode* AFrom, THeadTreeNode* ATo, AnsiString AText, int AHeight);
	void __fastcall FreeAllChild(void);
	void __fastcall CreateFieldTree(TCustomDBGridEh* AGrid);
	void __fastcall DoForAllNode(THeadTreeProc proc);
};


struct LeafCol
{
	THeadTreeNode* FLeaf;
	TColumnEh* FColumn;
} ;

typedef LeafCol *PLeafCol;

typedef LeafCol TLeafCol[134217727];

typedef LeafCol *PTLeafCol;

class DELPHICLASS TDBGridEhSumList;
class PASCALIMPLEMENTATION TDBGridEhSumList : public Dbsumlst::TDBSumListProducer 
{
	typedef Dbsumlst::TDBSumListProducer inherited;
	
private:
	bool __fastcall GetActive(void);
	HIDESBASE void __fastcall SetActive(const bool Value);
	
public:
	__fastcall TDBGridEhSumList(Classes::TComponent* AOwner);
	
__published:
	__property bool Active = {read=GetActive, write=SetActive, default=0};
	__property ExternalRecalc ;
	__property VirtualRecords ;
	__property SumListChanged ;
	__property OnRecalcAll ;
public:
	#pragma option push -w-inl
	/* TDBSumListProducer.Destroy */ inline __fastcall virtual ~TDBGridEhSumList(void) { }
	#pragma option pop
	
};


class DELPHICLASS TDBGridEhScrollBar;
class PASCALIMPLEMENTATION TDBGridEhScrollBar : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	TCustomDBGridEh* FDBGridEh;
	Forms::TScrollBarKind FKind;
	bool FVisible;
	bool FTracking;
	void __fastcall SetVisible(bool Value);
	
public:
	__fastcall TDBGridEhScrollBar(TCustomDBGridEh* AGrid, Forms::TScrollBarKind AKind);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	__property Forms::TScrollBarKind Kind = {read=FKind, nodefault};
	bool __fastcall IsScrollBarVisible(void);
	
__published:
	__property bool Tracking = {read=FTracking, write=FTracking, default=0};
	__property bool Visible = {read=FVisible, write=SetVisible, default=1};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TDBGridEhScrollBar(void) { }
	#pragma option pop
	
};


#pragma option push -b-
enum TDBGridEhOption { dghFixed3D, dghFrozen3D, dghFooter3D, dghData3D, dghResizeWholeRightPart, dghHighlightFocus, 
	dghClearSelection, dghFitRowHeightToText, dghAutoSortMarking, dghMultiSortMarking };
#pragma option pop

typedef Set<TDBGridEhOption, dghFixed3D, dghMultiSortMarking>  TDBGridEhOptions;

#pragma option push -b-
enum TDBGridEhSelectionType { gstNon, gstRecordBookmarks, gstRectangle, gstColumns, gstAll };
#pragma option pop

struct TDBCell
{
	int Col;
	AnsiString Row;
} ;

class DELPHICLASS TDBGridEhSelectionRect;
class PASCALIMPLEMENTATION TDBGridEhSelectionRect : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	TCustomDBGridEh* FGrid;
	TDBCell FAnchor;
	TDBCell FShiftCell;
	bool __fastcall CheckState(void);
	AnsiString __fastcall GetBottomRow();
	int __fastcall GetLeftCol(void);
	int __fastcall GetRightCol(void);
	AnsiString __fastcall GetTopRow();
	Windows::TRect __fastcall BoxRect(int ALeft, AnsiString ATop, int ARight, AnsiString ABottom);
	
public:
	__fastcall TDBGridEhSelectionRect(TCustomDBGridEh* AGrid);
	void __fastcall Clear(void);
	void __fastcall Select(int ACol, AnsiString ARow, bool AddSel);
	bool __fastcall DataCellSelected(int DataCol, AnsiString DataRow);
	__property int LeftCol = {read=GetLeftCol, nodefault};
	__property int RightCol = {read=GetRightCol, nodefault};
	__property AnsiString TopRow = {read=GetTopRow};
	__property AnsiString BottomRow = {read=GetBottomRow};
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TDBGridEhSelectionRect(void) { }
	#pragma option pop
	
};


class DELPHICLASS TDBGridEhSelectionCols;
class PASCALIMPLEMENTATION TDBGridEhSelectionCols : public TColumnsEhList 
{
	typedef TColumnsEhList inherited;
	
private:
	TCustomDBGridEh* FGrid;
	TColumnEh* FAnchor;
	TColumnEh* FShiftCol;
	HIDESBASE void __fastcall Add(TColumnEh* ACol);
	
public:
	__fastcall TDBGridEhSelectionCols(TCustomDBGridEh* AGrid);
	void __fastcall InvertSelect(TColumnEh* ACol);
	void __fastcall Select(TColumnEh* ACol, bool AddSel);
	void __fastcall SelectShift(TColumnEh* ACol, bool Clear);
	virtual void __fastcall Clear(void);
	void __fastcall Refresh(void);
public:
	#pragma option push -w-inl
	/* TList.Destroy */ inline __fastcall virtual ~TDBGridEhSelectionCols(void) { }
	#pragma option pop
	
};


class DELPHICLASS TDBGridEhSelection;
class PASCALIMPLEMENTATION TDBGridEhSelection : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	TCustomDBGridEh* FGrid;
	TDBGridEhSelectionRect* FRect;
	TDBGridEhSelectionCols* FColumns;
	TDBGridEhSelectionType FSelectionType;
	TBookmarkListEh* __fastcall GetRows(void);
	void __fastcall LinkActive(bool Value);
	void __fastcall SetSelectionType(TDBGridEhSelectionType ASelType);
	
public:
	__fastcall TDBGridEhSelection(TCustomDBGridEh* AGrid);
	__fastcall virtual ~TDBGridEhSelection(void);
	bool __fastcall DataCellSelected(int DataCol, AnsiString DataRow);
	void __fastcall Clear(void);
	void __fastcall SelectAll(void);
	void __fastcall Refresh(void);
	void __fastcall UpdateState(void);
	__property TDBGridEhSelectionCols* Columns = {read=FColumns};
	__property TDBGridEhSelectionType SelectionType = {read=FSelectionType, nodefault};
	__property TDBGridEhSelectionRect* Rect = {read=FRect};
	__property TBookmarkListEh* Rows = {read=GetRows};
};


#pragma option push -b-
enum TDBGridEhState { dgsNormal, dgsRowSelecting, dgsColSelecting, dgsRectSelecting, dgsPosTracing, 
	dgsTitleDown, dgsColSizing };
#pragma option pop

#pragma option push -b-
enum TDBGridEhAllowedOperation { alopInsertEh, alopUpdateEh, alopDeleteEh, alopAppendEh };
#pragma option pop

typedef Set<TDBGridEhAllowedOperation, alopInsertEh, alopAppendEh>  TDBGridEhAllowedOperations;

typedef void __fastcall (__closure *TDrawColumnEhCellEvent)(System::TObject* Sender, const Windows::TRect 
	&Rect, int DataCol, TColumnEh* Column, Grids::TGridDrawState State);

typedef void __fastcall (__closure *TDBGridEhClickEvent)(TColumnEh* Column);

typedef void __fastcall (__closure *TDrawFooterCellEvent)(System::TObject* Sender, int DataCol, int 
	Row, TColumnEh* Column, const Windows::TRect &Rect, Grids::TGridDrawState State);

typedef void __fastcall (__closure *TGetFooterParamsEvent)(System::TObject* Sender, int DataCol, int 
	Row, TColumnEh* Column, Graphics::TFont* AFont, Graphics::TColor &Background, Classes::TAlignment &
	Alignment, Grids::TGridDrawState State, AnsiString &Text);

typedef void __fastcall (__closure *TTitleEhClickEvent)(System::TObject* Sender, int ACol, TColumnEh* 
	Column);

typedef void __fastcall (__closure *TCheckTitleEhBtnEvent)(System::TObject* Sender, int ACol, TColumnEh* 
	Column, bool &Enabled);

typedef void __fastcall (__closure *TGetBtnEhParamsEvent)(System::TObject* Sender, TColumnEh* Column
	, Graphics::TFont* AFont, Graphics::TColor &Background, TSortMarkerEh &SortMarker, bool IsDown);

typedef void __fastcall (__closure *TGetCellEhParamsEvent)(System::TObject* Sender, TColumnEh* Column
	, Graphics::TFont* AFont, Graphics::TColor &Background, Grids::TGridDrawState State);

class PASCALIMPLEMENTATION TCustomDBGridEh : public Grids::TCustomGrid 
{
	typedef Grids::TCustomGrid inherited;
	
private:
	Controls::TImageList* FIndicators;
	Graphics::TFont* FTitleFont;
	bool FReadOnly;
	AnsiString FOriginalImeName;
	Controls::TImeMode FOriginalImeMode;
	bool FUserChange;
	bool FLayoutFromDataset;
	Dbgrids::TDBGridOptions FOptions;
	Byte FTitleOffset;
	Byte FIndicatorOffset;
	Byte FUpdateLock;
	Byte FLayoutLock;
	bool FInColExit;
	bool FDefaultDrawing;
	bool FSelfChangingTitleFont;
	bool FSelecting;
	int FSelRow;
	TGridDataLinkEh* FDataLink;
	Classes::TNotifyEvent FOnColEnter;
	Classes::TNotifyEvent FOnColExit;
	Dbgrids::TDrawDataCellEvent FOnDrawDataCell;
	TDrawColumnEhCellEvent FOnDrawColumnCell;
	AnsiString FEditText;
	TDBGridColumnsEh* FColumns;
	Classes::TNotifyEvent FOnEditButtonClick;
	Grids::TMovedEvent FOnColumnMoved;
	TBookmarkListEh* FBookmarks;
	AnsiString FSelectionAnchor;
	TDBGridEhClickEvent FOnCellClick;
	TDBGridEhClickEvent FOnTitleClick;
	TGetCellEhParamsEvent FOnGetCellParams;
	TGetFooterParamsEvent FOnGetFooterParams;
	Classes::TNotifyEvent FOnSumListRecalcAll;
	TDBGridEhScrollBar* FHorzScrollBar;
	TDBGridEhScrollBar* FVertScrollBar;
	TDBGridEhOptions FOptionsEh;
	Variant FEditKeyValue;
	bool ThumbTracked;
	Classes::TNotifyEvent FOnSortMarkingChanged;
	bool FSortMarking;
	Graphics::TBitmap* FUpDownBitmap;
	bool FTopLeftVisible;
	TDBGridEhSelection* FSelection;
	bool FAutoDrag;
	bool FSelectedCellPressed;
	Imglist::TCustomImageList* FTitleImages;
	TDBGridEhAllowedOperations FAllowedOperations;
	int FSizingIndex;
	int FSizingPos;
	int FSizingOfs;
	bool FSelfChangingFooterFont;
	Graphics::TFont* FFooterFont;
	Graphics::TColor FFooterColor;
	Graphics::TFont* FHintFont;
	bool __fastcall AcquireFocus(void);
	void __fastcall DataChanged(void);
	void __fastcall EditingChanged(void);
	Db::TDataSource* __fastcall GetDataSource(void);
	int __fastcall GetFieldCount(void);
	Db::TField* __fastcall GetFields(int FieldIndex);
	Db::TField* __fastcall GetSelectedField(void);
	int __fastcall GetSelectedIndex(void);
	void __fastcall InternalLayout(void);
	void __fastcall MoveCol(int RawCol, int Direction, bool Select);
	void __fastcall ReadColumns(Classes::TReader* Reader);
	void __fastcall RecordChanged(Db::TField* Field);
	HIDESBASE void __fastcall SetIme(void);
	void __fastcall SetColumns(TDBGridColumnsEh* Value);
	void __fastcall SetDataSource(Db::TDataSource* Value);
	HIDESBASE void __fastcall SetOptions(Dbgrids::TDBGridOptions Value);
	void __fastcall SetSelectedField(Db::TField* Value);
	void __fastcall SetSelectedIndex(int Value);
	void __fastcall SetTitleFont(Graphics::TFont* Value);
	void __fastcall TitleFontChanged(System::TObject* Sender);
	void __fastcall UpdateData(void);
	void __fastcall UpdateActive(void);
	void __fastcall UpdateIme(void);
	void __fastcall UpdateScrollBar(void);
	void __fastcall UpdateRowCount(void);
	void __fastcall WriteColumns(Classes::TWriter* Writer);
	HIDESBASE MESSAGE void __fastcall CMExit(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMParentFontChanged(Messages::TMessage &Message);
	MESSAGE void __fastcall CMDeferLayout(void *Message);
	HIDESBASE MESSAGE void __fastcall CMDesignHitTest(Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetCursor(Messages::TWMSetCursor &Msg);
	HIDESBASE MESSAGE void __fastcall WMSize(Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMVScroll(Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall WMHScroll(Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall WMIMEStartComp(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	void __fastcall SetDrawMemoText(const bool Value);
	void __fastcall SetSumList(const TDBGridEhSumList* Value);
	void __fastcall SetHorzScrollBar(const TDBGridEhScrollBar* Value);
	void __fastcall SetVertScrollBar(const TDBGridEhScrollBar* Value);
	void __fastcall SetOptionsEh(const TDBGridEhOptions Value);
	HIDESBASE MESSAGE void __fastcall WMChar(Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMTimer(Messages::TMessage &Message);
	void __fastcall ClearSelection(void);
	void __fastcall DoSelection(bool Select, int Direction, bool MaxDirection, bool RowOnly);
	Graphics::TBitmap* __fastcall UpDownBitmap(void);
	HIDESBASE MESSAGE void __fastcall CMHintShow(Forms::TCMHintShow &Message);
	MESSAGE void __fastcall CMHintsShowPause(Forms::TCMHintShowPause &Message);
	HIDESBASE MESSAGE void __fastcall CMParentColorChanged(Messages::TMessage &Message);
	void __fastcall SetTitleImages(const Imglist::TCustomImageList* Value);
	int __fastcall GetCol(void);
	HIDESBASE void __fastcall SetCol(int Value);
	void __fastcall SetFooterFont(Graphics::TFont* Value);
	void __fastcall FooterFontChanged(System::TObject* Sender);
	void __fastcall SetFooterColor(Graphics::TColor Value);
	
protected:
	bool FUpdateFields;
	bool FAcquireFocus;
	bool FUpdatingEditor;
	TDBGridEhState FDBGridEhState;
	int FTitleHeight;
	int FTitleLines;
	int FTitleHeightFull;
	bool FMarginText;
	int FVTitleMargin;
	int FHTitleMargin;
	bool FUseMultiTitle;
	bool FAutoFitColWidths;
	int FMinAutoFitWidth;
	Classes::TList* FInitColWidth;
	int FFooterRowCount;
	TDrawFooterCellEvent FOnDrawFooterCell;
	THeadTreeNode* FHeadTree;
	LeafCol *FLeafFieldArr;
	int FNewRowHeight;
	int FRowLines;
	bool FRowSizingAllowed;
	bool FDefaultRowChanged;
	bool FAllowWordWrap;
	bool FDrawMemoText;
	Controls::TImageList* FSortMarkerImages;
	int FPressedCol;
	bool FPressed;
	bool FTracking;
	bool FSwapButtons;
	TCheckTitleEhBtnEvent FOnCheckButton;
	TGetBtnEhParamsEvent FOnGetBtnParams;
	TTitleEhClickEvent FOnTitleBtnClick;
	int FInplaceEditorButtonWidth;
	int FFrozenCols;
	TDBGridEhSumList* FSumList;
	TColumnsEhList* FVisibleColumns;
	Grids::TGridCoord FPressedCell;
	bool FIndicatorPressed;
	Windows::TPoint FDownMousePos;
	Windows::TPoint FMoveMousePos;
	Classes::TShiftState FMouseShift;
	bool FTimerActive;
	int FTimerInterval;
	AnsiString FPresedRecord;
	bool FSelectionAnchorSelected;
	bool FAntiSelection;
	bool FDataTracking;
	TColumnsEhList* FSortMarkedColumns;
	bool FLockPaint;
	AnsiString FLockedBookmark;
	int FLookedOffset;
	int FFrozenCol;
	bool FLockEditShow;
	virtual void __fastcall Paint(void);
	int __fastcall GetFooterRowCount(void);
	void __fastcall SetFooterRowCount(int Value);
	void __fastcall ClearPainted(THeadTreeNode* node);
	int __fastcall SetChildTreeHeight(THeadTreeNode* ANode);
	int __fastcall ReadTitleHeight(void);
	void __fastcall WriteTitleHeight(int th);
	int __fastcall ReadTitleLines(void);
	void __fastcall WriteTitleLines(int tl);
	void __fastcall WriteMarginText(bool IsMargin);
	void __fastcall WriteVTitleMargin(int Value);
	void __fastcall WritEhTitleMargin(int Value);
	void __fastcall WriteUseMultiTitle(bool Value);
	void __fastcall WriteAutoFitColWidths(bool Value);
	void __fastcall WriteMinAutoFitWidth(int Value);
	HIDESBASE int __fastcall GetColWidths(int Index);
	HIDESBASE void __fastcall SetColWidths(int Index, int Value);
	void __fastcall SetRowSizingAllowed(bool Value);
	int __fastcall GetRowHeight(void);
	void __fastcall SetRowHeight(int Value);
	int __fastcall GetRowLines(void);
	void __fastcall SetRowLines(int Value);
	DYNAMIC void __fastcall RowHeightsChanged(void);
	int __fastcall StdDefaultRowHeight(void);
	void __fastcall StopTracking(void);
	void __fastcall TrackButton(int X, int Y);
	HIDESBASE MESSAGE void __fastcall WMCancelMode(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMCancelMode(Controls::TCMCancelMode &Message);
	DYNAMIC void __fastcall DoTitleClick(int ACol, TColumnEh* AColumn);
	DYNAMIC void __fastcall CheckTitleButton(int ACol, bool &Enabled);
	DYNAMIC void __fastcall GetCellParams(TColumnEh* Column, Graphics::TFont* AFont, Graphics::TColor &
		Background, Grids::TGridDrawState State);
	void __fastcall SetFrozenCols(int Value);
	void __fastcall EnsureFooterValueType(TFooterValueType AFooterValueType, AnsiString AFieldName);
	void __fastcall SumListChanged(System::TObject* Sender);
	void __fastcall SumListRecalcAll(System::TObject* Sender);
	DYNAMIC void __fastcall GetFooterParams(int DataCol, int Row, TColumnEh* Column, Graphics::TFont* AFont
		, Graphics::TColor &Background, Classes::TAlignment &Alignment, Grids::TGridDrawState State, AnsiString 
		&Text);
	bool __fastcall CanEditModifyText(void);
	int __fastcall VisibleDataRowCount(void);
	void __fastcall TimerScroll(void);
	void __fastcall StopTimer(void);
	void __fastcall ResetTimer(int Interval);
	DYNAMIC void __fastcall DoSortMarkingChanged(void);
	int __fastcall RawToDataColumn(int ACol);
	int __fastcall DataToRawColumn(int ACol);
	bool __fastcall AcquireLayoutLock(void);
	void __fastcall BeginLayout(void);
	void __fastcall BeginUpdate(void);
	void __fastcall CancelLayout(void);
	DYNAMIC bool __fastcall CanEditAcceptKey(char Key);
	DYNAMIC bool __fastcall CanEditModify(void);
	virtual bool __fastcall CanEditShow(void);
	DYNAMIC void __fastcall CellClick(TColumnEh* Column);
	DYNAMIC void __fastcall ColumnMoved(int FromIndex, int ToIndex);
	DYNAMIC void __fastcall ColEnter(void);
	DYNAMIC void __fastcall ColExit(void);
	DYNAMIC void __fastcall ColWidthsChanged(void);
	DYNAMIC TDBGridColumnsEh* __fastcall CreateColumns(void);
	virtual Grids::TInplaceEdit* __fastcall CreateEditor(void);
	virtual void __fastcall CreateWnd(void);
	void __fastcall DeferLayout(void);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	virtual void __fastcall DefineFieldMap(void);
	virtual void __fastcall DefineProperties(Classes::TFiler* Filer);
	DYNAMIC void __fastcall TopLeftChanged(void);
	virtual void __fastcall DrawCell(int ACol, int ARow, const Windows::TRect &ARect, Grids::TGridDrawState 
		AState);
	DYNAMIC void __fastcall DrawDataCell(const Windows::TRect &Rect, Db::TField* Field, Grids::TGridDrawState 
		State);
	DYNAMIC void __fastcall DrawColumnCell(const Windows::TRect &Rect, int DataCol, TColumnEh* Column, 
		Grids::TGridDrawState State);
	DYNAMIC void __fastcall EditButtonClick(void);
	void __fastcall EndLayout(void);
	void __fastcall EndUpdate(void);
	Db::TField* __fastcall GetColField(int DataCol);
	DYNAMIC int __fastcall GetEditLimit(void);
	DYNAMIC AnsiString __fastcall GetEditMask(int ACol, int ARow);
	DYNAMIC AnsiString __fastcall GetEditText(int ACol, int ARow);
	AnsiString __fastcall GetFieldValue(int ACol);
	virtual bool __fastcall HighlightCell(int DataCol, int DataRow, const AnsiString Value, Grids::TGridDrawState 
		&AState);
	DYNAMIC void __fastcall KeyDown(Word &Key, Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyUp(Word &Key, Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(char &Key);
	virtual void __fastcall LayoutChanged(void);
	virtual void __fastcall LinkActive(bool Value);
	virtual void __fastcall Loaded(void);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, 
		int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int 
		Y);
	DYNAMIC bool __fastcall DoMouseWheelDown(Classes::TShiftState Shift, const Windows::TPoint &MousePos
		);
	DYNAMIC bool __fastcall DoMouseWheelUp(Classes::TShiftState Shift, const Windows::TPoint &MousePos)
		;
	virtual void __fastcall CalcSizingState(int X, int Y, Grids::TGridState &State, int &Index, int &SizingPos
		, int &SizingOfs, Grids::TGridDrawInfo &FixedInfo);
	void __fastcall CalcFrozenSizingState(int X, int Y, TDBGridEhState &State, int &Index, int &SizingPos
		, int &SizingOfs);
	bool __fastcall FrozenSizing(int X, int Y);
	HIDESBASE void __fastcall DrawSizingLine(int HorzGridBoundary, int VertGridBoundary);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation
		);
	virtual void __fastcall Scroll(int Distance);
	virtual void __fastcall SetColumnAttributes(void);
	DYNAMIC void __fastcall SetEditText(int ACol, int ARow, const AnsiString Value);
	bool __fastcall StoreColumns(void);
	DYNAMIC void __fastcall TimedScroll(Grids::TGridScrollDirection Direction);
	DYNAMIC void __fastcall TitleClick(TColumnEh* Column);
	__property TDBGridColumnsEh* Columns = {read=FColumns, write=SetColumns};
	__property bool DefaultDrawing = {read=FDefaultDrawing, write=FDefaultDrawing, default=1};
	__property Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property TGridDataLinkEh* DataLink = {read=FDataLink};
	__property Byte LayoutLock = {read=FLayoutLock, nodefault};
	__property Dbgrids::TDBGridOptions Options = {read=FOptions, write=SetOptions, default=3325};
	__property ParentColor ;
	__property bool ReadOnly = {read=FReadOnly, write=FReadOnly, default=0};
	__property TBookmarkListEh* SelectedRows = {read=FBookmarks};
	__property Graphics::TFont* TitleFont = {read=FTitleFont, write=SetTitleFont};
	__property Byte UpdateLock = {read=FUpdateLock, nodefault};
	__property Classes::TNotifyEvent OnColEnter = {read=FOnColEnter, write=FOnColEnter};
	__property Classes::TNotifyEvent OnColExit = {read=FOnColExit, write=FOnColExit};
	__property Dbgrids::TDrawDataCellEvent OnDrawDataCell = {read=FOnDrawDataCell, write=FOnDrawDataCell
		};
	__property TDrawColumnEhCellEvent OnDrawColumnCell = {read=FOnDrawColumnCell, write=FOnDrawColumnCell
		};
	__property Classes::TNotifyEvent OnEditButtonClick = {read=FOnEditButtonClick, write=FOnEditButtonClick
		};
	__property Grids::TMovedEvent OnColumnMoved = {read=FOnColumnMoved, write=FOnColumnMoved};
	__property TDBGridEhClickEvent OnCellClick = {read=FOnCellClick, write=FOnCellClick};
	__property TDBGridEhClickEvent OnTitleClick = {read=FOnTitleClick, write=FOnTitleClick};
	void __fastcall SaveColumnsLayoutProducer(System::TObject* ARegIni, AnsiString Section, bool DeleteSection
		);
	void __fastcall RestoreColumnsLayoutProducer(System::TObject* ARegIni, AnsiString Section, TColumnEhRestoreParams 
		RestoreParams);
	void __fastcall SaveGridLayoutProducer(System::TObject* ARegIni, AnsiString Section, bool DeleteSection
		);
	void __fastcall RestoreGridLayoutProducer(System::TObject* ARegIni, AnsiString Section, TDBGridEhRestoreParams 
		RestoreParams);
	bool __fastcall AllowedOperationUpdate(void);
	__property Graphics::TFont* FooterFont = {read=FFooterFont, write=SetFooterFont};
	__property Graphics::TColor FooterColor = {read=FFooterColor, write=SetFooterColor, nodefault};
	
public:
	__fastcall virtual TCustomDBGridEh(Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomDBGridEh(void);
	void __fastcall DefaultDrawDataCell(const Windows::TRect &Rect, Db::TField* Field, Grids::TGridDrawState 
		State);
	void __fastcall DefaultDrawColumnCell(const Windows::TRect &Rect, int DataCol, TColumnEh* Column, Grids::TGridDrawState 
		State);
	bool __fastcall ValidFieldIndex(int FieldIndex);
	__property THeadTreeNode* HeadTree = {read=FHeadTree};
	__property PTLeafCol LeafFieldArr = {read=FLeafFieldArr};
	__property EditorMode ;
	__property int FieldCount = {read=GetFieldCount, nodefault};
	__property Db::TField* Fields[int FieldIndex] = {read=GetFields};
	__property Db::TField* SelectedField = {read=GetSelectedField, write=SetSelectedField};
	__property int SelectedIndex = {read=GetSelectedIndex, write=SetSelectedIndex, nodefault};
	DYNAMIC bool __fastcall ExecuteAction(Classes::TBasicAction* Action);
	DYNAMIC bool __fastcall UpdateAction(Classes::TBasicAction* Action);
	virtual void __fastcall DefaultHandler(void *Msg);
	Windows::TRect __fastcall DataRect();
	int __fastcall DataRowCount(void);
	void __fastcall InvalidateFooter(void);
	void __fastcall SaveColumnsLayout(Registry::TRegIniFile* ARegIni);
	void __fastcall RestoreColumnsLayout(Registry::TRegIniFile* ARegIni, TColumnEhRestoreParams RestoreParams
		);
	void __fastcall SaveColumnsLayoutIni(AnsiString IniFileName, AnsiString Section, bool DeleteSection
		);
	void __fastcall RestoreColumnsLayoutIni(AnsiString IniFileName, AnsiString Section, TColumnEhRestoreParams 
		RestoreParams);
	void __fastcall SaveGridLayout(Registry::TRegIniFile* ARegIni);
	void __fastcall RestoreGridLayout(Registry::TRegIniFile* ARegIni, TDBGridEhRestoreParams RestoreParams
		);
	void __fastcall SaveGridLayoutIni(AnsiString IniFileName, AnsiString Section, bool DeleteSection);
	void __fastcall RestoreGridLayoutIni(AnsiString IniFileName, AnsiString Section, TDBGridEhRestoreParams 
		RestoreParams);
	HIDESBASE Windows::TRect __fastcall CellRect(int ACol, int ARow);
	void __fastcall DefaultDrawFooterCell(const Windows::TRect &Rect, int DataCol, int Row, TColumnEh* 
		Column, Grids::TGridDrawState State);
	virtual AnsiString __fastcall GetFooterValue(int Row, TColumnEh* Column);
	void __fastcall SetSortMarkedColumns(void);
	void __fastcall SaveBookmark(void);
	void __fastcall RestoreBookmark(void);
	__property Canvas ;
	__property Col  = {read=GetCol, write=SetCol};
	__property InplaceEditor ;
	__property LeftCol ;
	__property Row ;
	__property VisibleRowCount ;
	__property VisibleColCount ;
	__property Byte IndicatorOffset = {read=FIndicatorOffset, nodefault};
	__property Byte TitleOffset = {read=FTitleOffset, nodefault};
	__property int FooterRowCount = {read=GetFooterRowCount, write=SetFooterRowCount, default=0};
	__property int FrozenCols = {read=FFrozenCols, write=SetFrozenCols, default=0};
	__property TDrawFooterCellEvent OnDrawFooterCell = {read=FOnDrawFooterCell, write=FOnDrawFooterCell
		};
	__property int TitleHeight = {read=ReadTitleHeight, write=WriteTitleHeight, default=0};
	__property int TitleLines = {read=ReadTitleLines, write=WriteTitleLines, default=0};
	__property int VTitleMargin = {read=FVTitleMargin, write=WriteVTitleMargin, default=10};
	__property bool UseMultiTitle = {read=FUseMultiTitle, write=WriteUseMultiTitle, default=0};
	__property bool AutoFitColWidths = {read=FAutoFitColWidths, write=WriteAutoFitColWidths, default=0}
		;
	__property int MinAutoFitWidth = {read=FMinAutoFitWidth, write=WriteMinAutoFitWidth, default=0};
	__property int RowHeight = {read=GetRowHeight, write=SetRowHeight, default=0};
	__property int RowLines = {read=GetRowLines, write=SetRowLines, default=0};
	__property bool RowSizingAllowed = {read=FRowSizingAllowed, write=SetRowSizingAllowed, default=0};
	__property bool DrawMemoText = {read=FDrawMemoText, write=SetDrawMemoText, default=0};
	__property TCheckTitleEhBtnEvent OnCheckButton = {read=FOnCheckButton, write=FOnCheckButton};
	__property TGetBtnEhParamsEvent OnGetBtnParams = {read=FOnGetBtnParams, write=FOnGetBtnParams};
	__property TTitleEhClickEvent OnTitleBtnClick = {read=FOnTitleBtnClick, write=FOnTitleBtnClick};
	__property TGetCellEhParamsEvent OnGetCellParams = {read=FOnGetCellParams, write=FOnGetCellParams};
		
	__property TGetFooterParamsEvent OnGetFooterParams = {read=FOnGetFooterParams, write=FOnGetFooterParams
		};
	__property TDBGridEhSumList* SumList = {read=FSumList, write=SetSumList};
	__property Classes::TNotifyEvent OnSumListRecalcAll = {read=FOnSumListRecalcAll, write=FOnSumListRecalcAll
		};
	__property TColumnsEhList* VisibleColumns = {read=FVisibleColumns, write=FVisibleColumns};
	__property TDBGridEhScrollBar* HorzScrollBar = {read=FHorzScrollBar, write=SetHorzScrollBar};
	__property TDBGridEhScrollBar* VertScrollBar = {read=FVertScrollBar, write=SetVertScrollBar};
	__property TDBGridEhOptions OptionsEh = {read=FOptionsEh, write=SetOptionsEh, default=97};
	__property Classes::TNotifyEvent OnSortMarkingChanged = {read=FOnSortMarkingChanged, write=FOnSortMarkingChanged
		};
	__property TColumnsEhList* SortMarkedColumns = {read=FSortMarkedColumns, write=FSortMarkedColumns};
		
	__property TDBGridEhSelection* Selection = {read=FSelection};
	__property Imglist::TCustomImageList* TitleImages = {read=FTitleImages, write=SetTitleImages};
	__property bool TimerActive = {read=FTimerActive, nodefault};
	__property TDBGridEhAllowedOperations AllowedOperations = {read=FAllowedOperations, write=FAllowedOperations
		, default=15};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TCustomDBGridEh(HWND ParentWindow) : Grids::TCustomGrid(
		ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TDBGridEh;
class PASCALIMPLEMENTATION TDBGridEh : public TCustomDBGridEh 
{
	typedef TCustomDBGridEh inherited;
	
public:
	__property GridHeight ;
	__property RowCount ;
	__property Canvas ;
	__property SelectedRows ;
	
__published:
	__property Align ;
	__property BorderStyle ;
	__property Color ;
	__property Columns  = {stored=false};
	__property Ctl3D ;
	__property DataSource ;
	__property DefaultDrawing ;
	__property DragCursor ;
	__property DragMode ;
	__property Enabled ;
	__property FixedColor ;
	__property Font ;
	__property ImeMode ;
	__property ImeName ;
	__property Options ;
	__property ParentColor ;
	__property ParentCtl3D ;
	__property ParentFont ;
	__property ParentShowHint ;
	__property PopupMenu ;
	__property ReadOnly ;
	__property ShowHint ;
	__property TabOrder ;
	__property TabStop ;
	__property TitleFont ;
	__property Visible ;
	__property OnCellClick ;
	__property OnColEnter ;
	__property OnColExit ;
	__property OnColumnMoved ;
	__property OnDrawDataCell ;
	__property OnDrawColumnCell ;
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEditButtonClick ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnStartDrag ;
	__property OnTitleClick ;
	__property Anchors ;
	__property BiDiMode ;
	__property Constraints ;
	__property DragKind ;
	__property ParentBiDiMode ;
	__property OnEndDock ;
	__property OnStartDock ;
	__property AllowedOperations ;
	__property FooterRowCount ;
	__property FrozenCols ;
	__property FooterFont ;
	__property FooterColor ;
	__property TitleHeight ;
	__property TitleLines ;
	__property VTitleMargin ;
	__property UseMultiTitle ;
	__property AutoFitColWidths ;
	__property MinAutoFitWidth ;
	__property RowHeight ;
	__property RowSizingAllowed ;
	__property RowLines ;
	__property DrawMemoText ;
	__property SumList ;
	__property HorzScrollBar ;
	__property VertScrollBar ;
	__property TitleImages ;
	__property OptionsEh ;
	__property OnDrawFooterCell ;
	__property OnGetFooterParams ;
	__property OnCheckButton ;
	__property OnGetBtnParams ;
	__property OnTitleBtnClick ;
	__property OnGetCellParams ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnSumListRecalcAll ;
	__property OnSortMarkingChanged ;
public:
	#pragma option push -w-inl
	/* TCustomDBGridEh.Create */ inline __fastcall virtual TDBGridEh(Classes::TComponent* AOwner) : TCustomDBGridEh(
		AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomDBGridEh.Destroy */ inline __fastcall virtual ~TDBGridEh(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TDBGridEh(HWND ParentWindow) : TCustomDBGridEh(ParentWindow
		) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
#define ColumnEhTitleValues (System::Set<TColumnEhValue, cvColor, cvCheckboxes> () )
#define ColumnEhFooterValues (System::Set<TColumnFooterEhValue, cvFooterAlignment, cvFooterColor> () \
	)
extern PACKAGE Graphics::TFont* SortMarkerFont;
extern PACKAGE int ColSelectionAreaHeight;
extern PACKAGE void __fastcall WriteTextEh(Graphics::TCanvas* ACanvas, const Windows::TRect &ARect, 
	bool FillRect, int DX, int DY, AnsiString Text, Classes::TAlignment Alignment, Stdctrls::TTextLayout 
	Layout, bool MultyL, bool EndEllipsis, int LeftMarg, int RightMarg);

}	/* namespace Dbgrideh */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbgrideh;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DBGridEh
