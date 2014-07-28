//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "ExAppen1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "OpShared"
#pragma link "OpWord"
#pragma link "OpWrd2k"
#pragma resource "*.dfm"

#define spIDocument Opwrd2k::_di__Document  //safe pointer
#define spIRange Opwrd2k::_di_Range         //safe pointer

TForm1 *Form1;
TOpWordDocument *MainDoc;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnNewDocumentClick(TObject *Sender)
{
  OpWord1->Visible = true;
  MainDoc = OpWord1->Documents->Add();
  MainDoc->Insert("New Document\n\n", true);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnAppendDocumentClick(TObject *Sender)
{
  if (OpenDialog1->Execute()) {
    MainDoc->Insert(OpenDialog1->FileName, true);
    spIDocument IDocument = MainDoc->AsDocument;
    OleVariant EndOfDoc = IDocument->Characters->Count - 1;
    spIRange IRange = IDocument->Content;
    IRange->InsertFile(OpenDialog1->FileName, EmptyParam,
                       EmptyParam, EmptyParam, EmptyParam);
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormActivate(TObject *Sender)
{
  OpWord1->Connected = true;
  OpWord1->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
  if (MainDoc)
    delete MainDoc;
  OpWord1->Connected = false;
}
//---------------------------------------------------------------------------
