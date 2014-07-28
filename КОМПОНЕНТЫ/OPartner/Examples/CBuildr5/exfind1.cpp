//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "ExFind1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "OpShared"
#pragma link "OpWord"
#pragma link "OpWrd2k"
#pragma resource "*.dfm"
TForm1 *Form1;
TOpWordDocument* Doc1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnFindClick(TObject *Sender)
{
  Doc1->Find(edtFindText->Text, true);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnFindNextClick(TObject *Sender)
{
  Doc1->FindNext();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::OpWord1OpDisconnect(TObject *Sender)
{
  Caption = "Word Find example";
  OpWord1->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnOpenDocClick(TObject *Sender)
{
  btnCloseDocClick(0);
  if (OpenDialog1->Execute()) {
    Screen->Cursor = crHourGlass;
    Doc1 = OpWord1->OpenDocument(OpenDialog1->FileName);
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnCloseDocClick(TObject *Sender)
{
  if (Doc1)
    delete Doc1;
  Doc1 = 0;
  OpWord1->Connected = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
  btnCloseDocClick(0);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::OpWord1DocumentOpen(TObject *Sender,
      _Document *Doc)
{
  WideString WS;
  Doc->Get_FullName(WS);
  Caption = WS;
  OpWord1->Visible = true;
  Screen->Cursor = crDefault;
}
//---------------------------------------------------------------------------

