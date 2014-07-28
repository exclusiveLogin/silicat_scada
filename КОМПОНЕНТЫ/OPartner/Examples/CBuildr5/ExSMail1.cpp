//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "ExSMail1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "OpOlk2k"
#pragma link "OpOutlk"
#pragma link "OpShared"
#pragma link "Outlook_2K_SRVR"
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
   {

    OpOutlook1->Connected = true;
   }
  TOpMailItem* MailItem = OpOutlook1->CreateMailItem();
  TOpTaskItem* TaskItem = OpOutlook1->CreateTaskItem();
//  TaskItem->Subject="Test";
 TaskItem->Assign();
  if (TaskItem)
   {
    TDateTime tmp;
    TaskItem->Subject      ="������ �1111" ;
    // TaskItem->ActualWork   =             2 ; ������� ����������� �����
    TaskItem->Body              ="�������� Body";
    TaskItem->BillingInformation="��� ����������";
    TaskItem->Status            =olTskStatInProgress;
    TaskItem->TotalWork         =1256;
     //    TaskItem->CreationTime =tmp.CurrentDateTime();
    TaskItem->StartDate    =TaskItem->StartDate.CurrentDateTime();
    TaskItem->DueDate      =(TDateTime)"04.07.2006 23:00:00";
    /*    TaskItem->DateCompleted=(TDateTime)"03.07.2006 23:00:00"; // ����-���� ��������� ����� */
    TaskItem->Importance   = olImpHigh;
    TaskItem->Categories   ="������ �� SLA �����������.";
    TaskItem->Companies    ="�� ��� \"��������\""; // jhufybpfwbz
//       TaskItem->ContactNames ="�������������� �������� ������ Help Desk";
    TaskItem->Recipients->Add("�������� �������� ����������");
    TaskItem->UnRead=true;
    TaskItem->Send();
   }
/*  if (MailItem) {
    MailItem->MsgTo = edtTo->Text;
    MailItem->MsgCC = edtCC->Text;
    MailItem->MsgBCC = edtBcc->Text;
    MailItem->Subject = edtSubject->Text;
    MailItem->Body = mmoBody->Text;
    MailItem->Send();
  } */
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
  OpOutlook1->Connected = false;
}
//---------------------------------------------------------------------------
