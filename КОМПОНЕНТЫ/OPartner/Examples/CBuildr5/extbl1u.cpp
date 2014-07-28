//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "ExTbl1u.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "OpModels"
#pragma link "OpShared"
#pragma link "OpWord"
#pragma link "OpWrd2k"
#pragma resource "*.dfm"
TForm1 *Form1;
TOpWordDocument* Doc;
TOpDocumentTable* Tbl;
Variant Headers;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
  // Turn on Word and create new document
  OpWord1->Connected = true;
  Doc = OpWord1->NewDocument();
  Doc->Insert(Caption + "/n/n/n", true);

  // Create variant array for the table header row
  int Bounds[2] = {0,2};
  Headers = VarArrayCreate(Bounds, 1, varVariant);
  Headers.PutElement("Col 1", 0);
  Headers.PutElement("Col 2", 1);
  Headers.PutElement("Col 3", 2);

  // Create table, hook up with TDvEventModel, and populate
  Tbl = Doc->Tables->Add();
  Tbl->OfficeModel = OpEventModel1;
  OpEventModel1->RowCount = StringGrid1->RowCount;
  Tbl->PopulateDocTable();
  OpWord1->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnUpdateClick(TObject *Sender)
{
  Tbl->RePopulateDocTable();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::OpEventModel1GetColCount(TObject *Sender,
      int &ColCount)
{
  ColCount = StringGrid1->ColCount;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::OpEventModel1GetColHeaders(TObject *Sender,
      Variant &ColHeaders)
{
  ColHeaders = Headers;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::OpEventModel1GetData(TObject *Sender, int Index,
      int Row, TOpRetrievalMode Mode, int &Size, Variant &Data)
{
  // Populating table, need data for specified table cell
  Variant OleStr = StringGrid1->Cells[Index] [Row];
  Data = OleStr;
  Size = sizeof(OleStr);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
  if (Tbl)
    delete Tbl;
  if (Doc)
    delete Doc;
  OpWord1->Connected = false;
}
//---------------------------------------------------------------------------
