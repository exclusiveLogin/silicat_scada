//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "ExTbl2u.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "OpShared"
#pragma link "OpWord"
#pragma link "OpWrd2k"
#pragma resource "*.dfm"
TForm1 *Form1;
AnsiString ProjectCaption = "Populating a Word Table";
TOpWordDocument* Doc;
Opwrd2k::_di_Table ITable;
Opwrd2k::_di__Document IDoc;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
  Caption = ProjectCaption;
  // Turn on Word and create new document
  OpWord1->Connected = true;
  Doc = OpWord1->NewDocument();
  Doc->Insert(Caption, true);

  // Create a table with a header row
  IDoc = Doc->AsDocument;
  IDoc->Tables->AddOld(IDoc->Characters->Last,
                       gridTableData->RowCount + 1,
                       gridTableData->ColCount,
                       ITable);
  ITable->AllowAutoFit = true;

  // Populate the table
  btnUpdateClick(0);

  // Make the document visible
  OpWord1->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnUpdateClick(TObject *Sender)
{
  // Populate header row
  Opwrd2k::_di_Cell ICell;
  ITable->Cell(1, 1, ICell);
  ICell->Range->Text = edtCol1Header->Text;
  ICell->Range->Bold = 1;
  ITable->Cell(1, 2, ICell);
  ICell->Range->Text = edtCol2Header->Text;
  ICell->Range->Bold = 1;
  ITable->Cell(1, 3, ICell);
  ICell->Range->Text = edtCol3Header->Text;
  ICell->Range->Bold = 1;

  // Populate table data
  for (int j = 1; j <= gridTableData->RowCount; j++)
    for (int i = 1; i <= gridTableData->ColCount; i++) {
      ITable->Cell(j+1, i, ICell);
      ICell->Range->Text = gridTableData->Cells[i-1][j-1];
    }
  ITable->Columns->AutoFit();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
  if (Doc)
    delete Doc;
  OpWord1->Connected = false;
}
//---------------------------------------------------------------------------
