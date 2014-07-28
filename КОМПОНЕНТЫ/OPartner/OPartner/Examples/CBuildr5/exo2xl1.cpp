//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "ExO2XL1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "OpDbOfc"
#pragma link "OpDbOlk"
#pragma link "OpExcel"
#pragma link "OpModels"
#pragma link "OpOlk2k"
#pragma link "OpOutlk"
#pragma link "OpShared"
#pragma link "OpXL2K"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnExportClick(TObject *Sender)
{
  TCursor oCursor = Screen->Cursor;
  Screen->Cursor = crHourGlass;

  // check all connections
  if (!OpOutlook1->Connected)
    OpOutlook1->Connected = true;
  if (!OpExcel1->Connected)
    OpExcel1->Connected = true;
  if (!OpContactsDataSet1->Active)
    OpContactsDataSet1->Active = true;

  TOpExcelWorkbook* oWorkBook = OpExcel1->Workbooks->Add(); // create a workbook
  TOpExcelWorksheet* oSheet = oWorkBook->Worksheets->Add(); // add a worksheet
  TOpExcelRange* oRange = oSheet->Ranges->Add();            // create range for output
  oRange->Address = "A1";                                   // locate range
  oRange->OfficeModel = OpDataSetModel1;                    // assign the model to the range
  oRange->Populate();                                       // fill the range from the model
  OpExcel1->Visible = true;                                 // show it
  OpExcel1->Interactive = true;                             // Let the user access it
  Screen->Cursor = oCursor;
}
//---------------------------------------------------------------------------
