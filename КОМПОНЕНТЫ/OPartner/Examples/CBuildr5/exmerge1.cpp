//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "ExMerge1.h"
#include "ExMerge2.h"
#pragma link "ExMerge2"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "OpDbOfc"
#pragma link "OpModels"
#pragma link "OpShared"
#pragma link "OpWord"
#pragma link "OpWrd2k"
#pragma resource "*.dfm"
TForm1 *Form1;
TOpWordDocument* MergeDoc;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
  OpWord1->Connected = true;
  MergeDoc = OpWord1->NewDocument();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormActivate(TObject *Sender)
{
  OpWord1->Visible = true;    
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
  if (MergeDoc)
    delete MergeDoc;
  OpWord1->Connected = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnPopulateTableClick(TObject *Sender)
{
  TOpDocumentTable* Tbl = OpWord1->ActiveDocument->Tables->Add();
  Tbl->OfficeModel = OpDataSetModel1;
  Tbl->PopulateDocTable();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnPopulateMailMergeClick(TObject *Sender)
{
  if (Form2->ShowModal() == mrOk) {
    if ((Form2->edtAlias->Text != "") & (Form2->mmoSQL->Text != "")) {
      MergeQuery->Close();
      MergeQuery->DatabaseName = Form2->edtAlias->Text;
      MergeQuery->SQL->Clear();
      MergeQuery->SQL->Add(Form2->mmoSQL->Text);
      MergeQuery->Open();
      MergeDoc->MailMerge->OfficeModel = OpDataSetModel2;
      MergeDoc->PopulateMailMerge();
      btnExecuteMailMerge->Enabled = true;
    }
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnExecuteMailMergeClick(TObject *Sender)
{
  MergeDoc->ExecuteMailMerge();
}
//---------------------------------------------------------------------------
