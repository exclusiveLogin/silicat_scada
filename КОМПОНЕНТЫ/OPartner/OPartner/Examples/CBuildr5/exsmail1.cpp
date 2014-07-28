//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "ExSMail1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "OpOlk2k"
#pragma link "OpOutlk"
#pragma link "OpShared"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnSendClick(TObject *Sender)
{
  if (!OpOutlook1->Connected)
    OpOutlook1->Connected = true;
  TOpMailItem* MailItem = OpOutlook1->CreateMailItem();
  if (MailItem) {
    MailItem->MsgTo = edtTo->Text;
    MailItem->MsgCC = edtCC->Text;
    MailItem->MsgBCC = edtBcc->Text;
    MailItem->Subject = edtSubject->Text;
    MailItem->Body = mmoBody->Text;
    MailItem->Send();
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
  OpOutlook1->Connected = false;    
}
//---------------------------------------------------------------------------
