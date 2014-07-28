// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Unit1.pas' rev: 5.00

#ifndef Unit1HPP
#define Unit1HPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <ImgList.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <ToolWin.hpp>	// Pascal unit
#include <PrnDbgeh.hpp>	// Pascal unit
#include <PrViewEh.hpp>	// Pascal unit
#include <DBGrids.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <DBTables.hpp>	// Pascal unit
#include <Db.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <DBGridEh.hpp>	// Pascal unit
#include <Grids.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <DBCtrls.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Unit1
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TForm1;
class PASCALIMPLEMENTATION TForm1 : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
__published:
	Db::TDataSource* DataSource2;
	Dbtables::TTable* Table1;
	Dbtables::TTable* Table2;
	Db::TDataSource* DataSource3;
	Comctrls::TPageControl* PageControl1;
	Comctrls::TTabSheet* TabSheet1;
	Dbgrideh::TDBGridEh* DBGridEh1;
	Extctrls::TPanel* Panel1;
	Comctrls::TTabSheet* TabSheet2;
	Dbgrideh::TDBGridEh* DBGridEh2;
	Comctrls::TTabSheet* TabSheet3;
	Dbgrideh::TDBGridEh* DBGridEh3;
	Dbgrideh::TDBGridEh* DBGridEh4;
	Dbctrls::TDBNavigator* DBNavigator2;
	Dbctrls::TDBNavigator* DBNavigator3;
	Comctrls::TTabSheet* TabSheet4;
	Controls::TImageList* ImageList2;
	Dbtables::TTable* tEmployee;
	Db::TIntegerField* tEmployeeEmpNo;
	Db::TStringField* tEmployeeLastName;
	Db::TStringField* tEmployeeFirstName;
	Db::TStringField* tEmployeePhoneExt;
	Db::TDateTimeField* tEmployeeHireDate;
	Db::TFloatField* tEmployeeSalary;
	Db::TIntegerField* tEmployeeSalaryType;
	Db::TDataSource* dsEmployee;
	Dbgrideh::TDBGridEh* DBGridEh5;
	Dbtables::TQuery* qrVendors;
	Db::TFloatField* qrVendorsVendorNo;
	Db::TStringField* qrVendorsVendorName;
	Db::TStringField* qrVendorsAddress1;
	Db::TStringField* qrVendorsAddress2;
	Db::TStringField* qrVendorsCity;
	Db::TStringField* qrVendorsState;
	Db::TStringField* qrVendorsZip;
	Db::TStringField* qrVendorsCountry;
	Db::TStringField* qrVendorsPhone;
	Db::TStringField* qrVendorsFAX;
	Db::TBooleanField* qrVendorsPreferred;
	Db::TDataSource* dsVendors;
	Db::TDataSource* DataSource1;
	Dbtables::TQuery* Query1;
	Db::TFloatField* Query1VNo;
	Db::TStringField* Query1VName;
	Db::TFloatField* Query1PNo;
	Db::TStringField* Query1PDescription;
	Db::TCurrencyField* Query1PCost;
	Db::TIntegerField* Query1IQty;
	Db::TStringField* Query1VName1;
	Db::TBooleanField* Query1VPreferred;
	Comctrls::TTabSheet* TabSheet5;
	Extctrls::TPanel* Panel3;
	Stdctrls::TCheckBox* cbClearSelection;
	Stdctrls::TCheckBox* cbShowIndicator;
	Stdctrls::TCheckBox* cbTitle;
	Stdctrls::TCheckBox* cbHighlightFocus;
	Stdctrls::TCheckBox* cbMultiselect;
	Db::TDataSource* dsCustomer;
	Extctrls::TPanel* PreviewSetupPanel;
	Stdctrls::TButton* bPrint;
	Stdctrls::TButton* bPrinterSetup;
	Stdctrls::TButton* bPrevPage;
	Stdctrls::TButton* bNextPage;
	Stdctrls::TButton* bStop;
	Stdctrls::TButton* bClosePreview;
	Prndbgeh::TPrintDBGridEh* PrintDBGridEh1;
	Prvieweh::TPreviewBox* PreviewBox1;
	Stdctrls::TButton* bInpPreview;
	Stdctrls::TButton* bPreview;
	Stdctrls::TButton* bOpenClose;
	Stdctrls::TButton* bFiltr;
	Stdctrls::TLabel* lPageinfo;
	Stdctrls::TButton* cCustomPreview;
	Controls::TImageList* ilArrows;
	Comctrls::TToolBar* ToolBar1;
	Comctrls::TToolButton* ToolButton1;
	Comctrls::TToolButton* ToolButton2;
	Menus::TPopupMenu* pmNoVisibleCols;
	Dbtables::TQuery* qCustomer;
	Dbtables::TQuery* qCustomer2;
	Db::TDataSource* dsCustomer2;
	Dbgrideh::TDBGridEh* dbgList1;
	Dbgrideh::TDBGridEh* dbgList;
	Stdctrls::TCheckBox* cbDragNDrop;
	Stdctrls::TCheckBox* cbDichromatic;
	Buttons::TBitBtn* bbCopy;
	Stdctrls::TCheckBox* cbInterAppDragNDrop;
	Controls::TImageList* ImageList1;
	void __fastcall bFiltrClick(System::TObject* Sender);
	void __fastcall bOpenCloseClick(System::TObject* Sender);
	void __fastcall Query1UpdateRecord(Db::TDataSet* DataSet, Db::TUpdateKind UpdateKind, Db::TUpdateAction 
		&UpdateAction);
	void __fastcall DBGridEh2DrawColumnCell(System::TObject* Sender, const Windows::TRect &Rect, int DataCol
		, Dbgrideh::TColumnEh* Column, Grids::TGridDrawState State);
	void __fastcall DBGridEh2DrawFooterCell(System::TObject* Sender, int DataCol, int Row, Dbgrideh::TColumnEh* 
		Column, const Windows::TRect &Rect, Grids::TGridDrawState State);
	void __fastcall DBGridEh2GetCellParams(System::TObject* Sender, Dbgrideh::TColumnEh* Column, Graphics::TFont* 
		AFont, Graphics::TColor &Background, Grids::TGridDrawState State);
	void __fastcall DBGridEh2GetFooterParams(System::TObject* Sender, int DataCol, int Row, Dbgrideh::TColumnEh* 
		Column, Graphics::TFont* AFont, Graphics::TColor &Background, Classes::TAlignment &Alignment, Grids::TGridDrawState 
		State, AnsiString &Text);
	void __fastcall tEmployeeCalcFields(Db::TDataSet* DataSet);
	void __fastcall DBGridEh1TitleBtnClick(System::TObject* Sender, int ACol, Dbgrideh::TColumnEh* Column
		);
	void __fastcall cbClearSelectionClick(System::TObject* Sender);
	void __fastcall cbShowIndicatorClick(System::TObject* Sender);
	void __fastcall cbTitleClick(System::TObject* Sender);
	void __fastcall cbHighlightFocusClick(System::TObject* Sender);
	void __fastcall cbMultiselectClick(System::TObject* Sender);
	void __fastcall DBGridEh1SortMarkingChanged(System::TObject* Sender);
	void __fastcall bPrintClick(System::TObject* Sender);
	void __fastcall bPrinterSetupClick(System::TObject* Sender);
	void __fastcall bPrevPageClick(System::TObject* Sender);
	void __fastcall bNextPageClick(System::TObject* Sender);
	void __fastcall bStopClick(System::TObject* Sender);
	void __fastcall bClosePreviewClick(System::TObject* Sender);
	void __fastcall bPreviewClick(System::TObject* Sender);
	void __fastcall bInpPreviewClick(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall PreviewBox1PrinterPreviewChanged(System::TObject* Sender);
	void __fastcall cCustomPreviewClick(System::TObject* Sender);
	void __fastcall ToolButton2Click(System::TObject* Sender);
	void __fastcall ToolButton1Click(System::TObject* Sender);
	void __fastcall dbgListDragDrop(System::TObject* Sender, System::TObject* Source, int X, int Y);
	void __fastcall dbgListDragOver(System::TObject* Sender, System::TObject* Source, int X, int Y, Controls::TDragState 
		State, bool &Accept);
	void __fastcall dbgListStartDrag(System::TObject* Sender, Controls::TDragObject* &DragObject);
	void __fastcall dbgList1DragDrop(System::TObject* Sender, System::TObject* Source, int X, int Y);
	void __fastcall dbgList1DragOver(System::TObject* Sender, System::TObject* Source, int X, int Y, Controls::TDragState 
		State, bool &Accept);
	void __fastcall qCustomerUpdateRecord(Db::TDataSet* DataSet, Db::TUpdateKind UpdateKind, Db::TUpdateAction 
		&UpdateAction);
	void __fastcall qCustomer2UpdateRecord(Db::TDataSet* DataSet, Db::TUpdateKind UpdateKind, Db::TUpdateAction 
		&UpdateAction);
	void __fastcall cbDragNDropClick(System::TObject* Sender);
	void __fastcall cbDichromaticClick(System::TObject* Sender);
	void __fastcall dbgListGetCellParams(System::TObject* Sender, Dbgrideh::TColumnEh* Column, Graphics::TFont* 
		AFont, Graphics::TColor &Background, Grids::TGridDrawState State);
	void __fastcall bbCopyClick(System::TObject* Sender);
	void __fastcall DBGridEh1KeyDown(System::TObject* Sender, Word &Key, Classes::TShiftState Shift);
	void __fastcall cbInterAppDragNDropClick(System::TObject* Sender);
	void __fastcall DBGridEh2EditButtonClick(System::TObject* Sender);
	
public:
	void __fastcall InplacePreviewSetupDialog(System::TObject* Sender);
	void __fastcall ColumnMenuItem(System::TObject* Sender);
	AnsiString __fastcall GridSelectionAsText(Dbgrideh::TDBGridEh* AGrid);
	void __fastcall ApplicationIdle(System::TObject* Sender, bool &Done);
public:
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TForm1(Classes::TComponent* AOwner) : Forms::TForm(
		AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TForm1(Classes::TComponent* AOwner, int Dummy
		) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TForm1(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TForm1(HWND ParentWindow) : Forms::TForm(ParentWindow
		) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TForm1* Form1;

}	/* namespace Unit1 */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Unit1;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Unit1
