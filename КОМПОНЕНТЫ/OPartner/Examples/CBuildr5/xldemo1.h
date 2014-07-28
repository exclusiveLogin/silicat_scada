//---------------------------------------------------------------------------
#ifndef XlDemo1H
#define XlDemo1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include "OpExcel.hpp"
#include "OpShared.hpp"
#include "OpXL2K.hpp"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TPanel *Panel1;
    TButton *btnMasterDetail;
    TButton *btnCustomer;
    TButton *btnChart;
    TButton *LaunchExcelBtn;
    TPanel *Panel2;
    TDBNavigator *DBNavigator1;
    TPanel *Panel3;
    TDBGrid *DBGrid2;
    TDBGrid *DBGrid1;
    TStatusBar *stsbarDoubleClick;
    TOpExcel *OpExcel;
    void __fastcall LaunchExcelBtnClick(TObject *Sender);
    void __fastcall btnMasterDetailClick(TObject *Sender);
    void __fastcall btnCustomerClick(TObject *Sender);
    void __fastcall btnChartClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
