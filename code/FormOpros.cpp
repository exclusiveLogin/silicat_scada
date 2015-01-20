//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FormOpros.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPACQuery *PACQuery;
//---------------------------------------------------------------------------
__fastcall TPACQuery::TPACQuery(TComponent* Owner)
        : TForm(Owner)
{
        const_time_out=60;
        const_time_out_query=5;
        QListTags->Open();
        Lic=100;
        Arhiv                = new MyArhiv(this,Lic,1000);
        Arhiv->OnActiveArhiv = InitArhiv;
        Arhiv->ActiveWrite   = true     ;
        //ClientSocket1->Open();
        //Active = true    ;
        scadaWin = FindWindow("TWinScada","���������� ����������");
       if(scadaWin!=NULL){
                //Application->MessageBoxA("���� �����","Test",MB_OK);
                Application->ShowMainForm = false;
                PACQuery->Visible = false;
        }
        else Application->MessageBoxA("�� �������� SCADA","������",MB_OK); 
}
//---------------------------------------------------------------------------
void __fastcall TPACQuery::InitArhiv(TObject *Sender, bool &Active, int *IDTag, double *Val, int *Stat)
{
 if (!QListTags->Active) Active=false;
 else
  {
   if (!QListTags->Bof) QListTags->First();
   int sm =0;
   while (!QListTags->Eof)
    {
     if (QListTagsIDTag->AsInteger<Lic) // CountActiveTags)
      {
       IDTag[sm]=QListTagsIDTag->AsInteger    ;
       Val[sm]  =QListTagsValueTag->AsFloat   ;
       Stat[sm] =QListTagsStatusTag->AsInteger;
       sm++;
       if (sm>Arhiv->CountTags) break;
      }
     QListTags->Next();
    }
   Active=true;
   QArhivSob->Open();
  }
}


//-------------------------------------------
void __fastcall TPACQuery::Timer1Timer(TObject *Sender)
{
 static unsigned int  time_out=0 ;//����-��� �� �������������� ���������� � ������ ��������� ����==1���.
 static unsigned int  time_out_query=3;//���� ��� �������
 static unsigned char index=0;
 unsigned long statusPLC;
 switch(statusDebug){
        case 1:
                statusDebug1->Caption="Ethernet ���������";
                statusDebug1->Font->Color=clGreen;
                statusPLC=statusPLC=1;
                break;
        case 2:
                statusDebug1->Caption="���������� ��������";
                statusDebug1->Font->Color=clRed;
                statusPLC=101;
                break;
        case 3:
                statusDebug1->Caption="LookUP";
                statusDebug1->Font->Color=clGreen;
                statusPLC=100;
                break;
        case 4:
                statusDebug1->Caption="������";
                statusDebug1->Font->Color=clRed;
                statusPLC=2;
                break;
        case 5:
                statusDebug1->Caption="����� �����������";
                statusDebug1->Font->Color=clGreen;
                statusPLC=0;
                break;
        case 6:
                statusDebug1->Caption="������ ����������";
                statusDebug1->Font->Color=clRed;
                statusPLC=102;
                break;
        default:
                statusDebug1->Caption="������";
                statusDebug1->Font->Color=clRed;
                statusPLC=103;
                break;
 }
 PostMessage(scadaWin,WM_USER+3,statusPLC,statusPLC);
  // ����� ����������
 Timer1->Enabled=false;
 // ����� ��� � �������
 try
  {
   // ����� ���������� ������������� ����������
   if (ClientSocket1->Socket!=NULL)
    if (ClientSocket1->Socket->Connected) // ���������� �����������
     {
      time_out_query++;
      if ((time_out_query%const_time_out_query)==1)
       {
        SendCommand(0,0,index);//������ ������ � �����������
        index=1-index;
       }
      if (time_out_query==const_time_out_query) time_out_query=0;
     }
    else // ��� ����������
     {
      time_out++;
      if ((time_out%const_time_out)==1)
       {
        ClientSocket1->Open();
       }
      if (time_out==const_time_out) time_out=0;
     }
    else{
      int pc=0;
    }
  }
 catch (...) { }
 Timer1->Enabled=true;
}
//---------------------------------------------------------------------------
void TPACQuery::SendCommand(int numCom, float val, unsigned char index){

        tmpbuf.st.start[0]=1;
        tmpbuf.st.start[1]=1;
        tmpbuf.st.start[2]=1;
        tmpbuf.st.start[3]=1;
        tmpbuf.st.start[4]=1;
        tmpbuf.st.index = index;


        tmpbuf.st.value=val;
        //AnsiString ttt="NumCom="+IntToStr(numCom)+";"+IntToStr(index);
        //Application->MessageBoxA(ttt.c_str(),ttt.c_str(),MB_OK);
        switch(numCom){
        case 0://������ ��������
                tmpbuf.st.i_command=114;//������� �� ������ ����������
                break;
        case 10://������ �������
                tmpbuf.st.i_command=99;//������� �� ������ �������
                break;
        case 20://������������� ���������� �������
                tmpbuf.st.i_command=105;//'i'
                break;
        case 21://������������� �������������
                tmpbuf.st.i_command=109;//'m'
                break;
        case 22://������������� ������������������
                tmpbuf.st.i_command=112;//'p'
                break;
        case 30:
                tmpbuf.st.i_command=101;//'e'
                break;//��������� ������������������ �������
        case 40:
                tmpbuf.st.i_command=115;//'s'
                break;//��������� ������������������ �����
        case 100:
                tmpbuf.st.i_command=97;//'a'
                break;//��������� ������ ������ � ����
        case 101:
                tmpbuf.st.i_command=98;//'b'
                //Application->MessageBoxA("���������� ������ �����!","Test",MB_OK);
                break;//��������� ������ ������ � ������
        }
        if (ClientSocket1->Socket!=NULL){
                if (ClientSocket1->Socket->Connected){
                        ClientSocket1->Socket->SendBuf(tmpbuf.buf,11);
                }
                else{
                        ClientSocket1->Open();
                    //    ClientSocket1->Socket->SendBuf(tmpbuf.buf,11);
                }
        }
}

void __fastcall TPACQuery::ClientSocket1Connect(TObject *Sender,
      TCustomWinSocket *Socket)
{
 int i=0;
 statusDebug = 1;
 //statusDebug1->Caption="Ethernet ���������";
 //statusDebug1->Font->Color=clGreen;
}
//---------------------------------------------------------------------------

void __fastcall TPACQuery::ClientSocket1Disconnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
 int i=0;
 statusDebug = 2;
 //statusDebug1->Caption="���������� ��������";
 //statusDebug1->Font->Color=clRed;
}
//---------------------------------------------------------------------------


void __fastcall TPACQuery::ClientSocket1Write(TObject *Sender,
      TCustomWinSocket *Socket)
{
 int i=0;
 statusDebug = 4;
 //statusDebug1->Caption="������";
 //statusDebug1->Font->Color=clRed;
}
//---------------------------------------------------------------------------


void __fastcall TPACQuery::ClientSocket1Read(TObject *Sender,  //����������
      TCustomWinSocket *Socket)
{
 statusDebug = 5;
 //statusDebug1->Caption="����� �����������";
 //statusDebug1->Font->Color=clGreen;
 unsigned char buf[129];
 int           bytes=0;
 bytes=Socket->ReceiveBuf(&buf[0],256);
 bool error=0;

 for(int i=0;i<bytes-60;i++){
    if ((buf[i]==1)&&(buf[i+1]==1)&&(buf[i+2]==1)&&(buf[i+3]==1)&&(buf[i+4]==1)&&((buf[i+5]==1)||(buf[i+5]==0))){
        if((i+66)<=bytes){
                for(int n=0;n<66;n++){
                        recvtmpbuf[buf[i+5]].buf[n]=buf[i+n];
                }
                i=i+65;
                WriteData();
        }
        else error=1;
        if(error==1) break;
    }
 }
}
//---------------------------------------------------------------------------
void TPACQuery::WriteData()
{
 // ������ ������� ������ � �����
 unsigned int CodeError;

 for (int i=0;i<Lic;i++)
  {
   int   IDTag = i+1;
   float Val=0;
   float Val1=0,Val2=0;
   int   Status1=1, Status2=1;
   bool  sh=false;
   int Status=1;
   TTime      sm      ;
   TDateTime  td=Now();
   TDateTime  fd,ld   ;
   int        tz = StrToInt(td.FormatString("hh"));
   td.Val = (int)td.Val;
   fd = td; ld = td;
   if (QListTags->Locate("IDTag",IDTag,TLocateOptions()))
    {
     switch (IDTag)
      {
       case 21: Val = recvtmpbuf[1].recvtmpstruct.data[0];  Status=0; break;
       case 1 : // ����� ������
                Val = recvtmpbuf[0].recvtmpstruct.data[0];  Status=0; break;
       case 22: Val = recvtmpbuf[1].recvtmpstruct.data[1]; Status=0; break;
       case 2 : // ������� ������������������ �������
                Val = recvtmpbuf[0].recvtmpstruct.data[1]; Status=0; break;
       case 23: Val = recvtmpbuf[1].recvtmpstruct.data[2]; Status=0; break;
       case 3 : // ����������� ������������������ �������
                Val = recvtmpbuf[0].recvtmpstruct.data[2]; Status=0; break;
       case 24: Val = recvtmpbuf[1].recvtmpstruct.data[3]; Status=0; break;
       case 4 : // ������� ���������� �������
                Val = recvtmpbuf[0].recvtmpstruct.data[3]; Status=0; break;
       case 25: Val = recvtmpbuf[1].recvtmpstruct.data[4]; Status=0; break;
       case 5 : // ������� ������������������ �����
                Val = recvtmpbuf[0].recvtmpstruct.data[4]; Status=0; break;
       case 26: Val = recvtmpbuf[1].recvtmpstruct.data[5]; Status=0; break;
       case 6 : // ����������� ������������������ �����
                Val = recvtmpbuf[0].recvtmpstruct.data[5]; Status=0; break;
       case 27: Val = recvtmpbuf[1].recvtmpstruct.data[6]; Status=0; break;
       case 7 : // ������� �������� ��������������
                Val = recvtmpbuf[0].recvtmpstruct.data[6]; Status=0; break;
       case 28: Val = recvtmpbuf[1].recvtmpstruct.data[7]; Status=0; break;
       case 8 : // ������ �������� �������
                Val = recvtmpbuf[0].recvtmpstruct.data[7]; Status=0; break;
       case 29: Val = recvtmpbuf[1].recvtmpstruct.data[8]; Status=0; break;
       case 9 : // ������ �������� �����
                Val = recvtmpbuf[0].recvtmpstruct.data[8]; Status=0; break;
       case 30: Val = recvtmpbuf[1].recvtmpstruct.data[9]; Status=0; break;
       case 10: // ������� ������������������
                Val = recvtmpbuf[0].recvtmpstruct.data[9]; Status=0; break;
       case 31: Val = recvtmpbuf[1].recvtmpstruct.data[10]; Status=0; break;
       case 11: // ������������� ������������������
                Val = recvtmpbuf[0].recvtmpstruct.data[10]; Status=0; break;
       case 32: Val = recvtmpbuf[1].recvtmpstruct.data[11]; Status=0; break;
       case 12: // ��������
                Val = recvtmpbuf[0].recvtmpstruct.data[11]; Status=0; break;
       case 33: Val = recvtmpbuf[1].recvtmpstruct.data[12]; Status=0; break;
       case 13: // ��������
                Val = recvtmpbuf[0].recvtmpstruct.data[12]; Status=0; break;
       case 34: Val = recvtmpbuf[1].recvtmpstruct.data[13]; Status=0; break;
       case 14: // ��������
                Val = recvtmpbuf[0].recvtmpstruct.data[13]; Status=0; break;
      }
     if ((QListTagsValueTag->AsFloat!=Val)||(QListTagsStatusTag->AsInteger!=Status)||
         ((sh)&&(Status1==0)&&(Status2==0)&&((QListTagsMinValIn->AsFloat!=Val1)||(QListTagsMinValIn->AsFloat!=Val2)))
        )
      {
       QListTags->Edit();
       QListTagsValueTag->AsFloat    = Val;
       QListTagsStatusTag->AsInteger = Status;
       if ((sh)&&(Status1==0)&&(Status2==0))
        {
         QListTagsMinVal->AsFloat = Val1;
         QListTagsMaxVal->AsFloat = Val2;
        }
       QListTags->Post();
       analiz(QListTagsIDTag->AsInteger,Val,Status,QListTagsTypeArhiv->AsInteger,QListTagsUslWrite->AsInteger,QListTagsUslAvar->AsInteger);

      }
     Arhiv->SetData(QListTagsIDTag->AsInteger,Val,Status);
    }
  }
}
//--------------------------------------------------------
void TPACQuery::analiz(int IDTag,double Value,int Status,int TypeArhiv,int Usl, int UslAvar)
{
 // ������ ������������� ������ � �����
 // IDTag     - ID ����
 // Value     - ��������
 // Status    - ������
 // TypeArhiv - ��� ������
 // Usl       - ������� ������ � ����� 0 - �� ���������, 1 �� ���������� ��������
 bool wr=false;
 bool av=false;
 double FaktVal;
 TDateTime tmp = Now();
 switch (TypeArhiv)
  {
   case 1 : // ����� �������
            switch (Usl)
             {
              case 0: // ������ �� ���������
                      switch (UslAvar)
                       {
                        case  2: // �������� 0 - �������� ���������
                                 av = Value==0;
                                 break;
                        case  3: // �������� 0 - �������� ��������� ��� ���������� ����� (Status) �������� ���������
                                 av = (Value==0); /* || (Status==0); */ wr=true;
                                 break;
                        case  4: // �������� 1 - �������� ���������
                                 av = Value==1;
                                 break;
                        case  5: // �������� �� �������� ���������
                        case  7:
                        case 10:
                                 av=false;
                                 break;
                        case  6: // �������� ���������, ���� == 1 ��� 2
                                 av = (Value==1) || (Value==2); wr=true;
                                 break;
                        case  8: // �������� ���������, ���� != 0
                                 av = (Value!=0);
                                 break;
                        case  9: av = (Value==1) || (Value==2) || (Value==5) || (Value==10) || (Value==14) || (Value==15) || (Value>=16);
                                 break;
                       }
                      if (!Status) wr=true;
                      FaktVal = Value;
                      break;
              case 3: // �������� ��������
                      if (!Status) Value=2;
                      switch (UslAvar)
                       {
                        case  2: // �������� 0 - �������� ���������
                                 av = Value==0;
                                 break;
                        case  3: // �������� 0 - �������� ��������� ��� ���������� ����� (Status) �������� ���������
                                 av = (Value==0) || (Status==0); wr=true;
                                 break;
                        case  4: // �������� 1 - �������� ���������
                                 av = Value==1;
                                 break;
                        case  5: // �������� �� �������� ���������
                        case  7:
                        case 10:
                                 av=false;
                                 break;
                        case  6: // �������� ���������, ���� == 1 ��� 2
                                 av = (Value==1) || (Value==2); wr=true;
                                 break;
                        case  8: // �������� ���������, ���� != 0
                                 av = (Value!=0);
                                 break;
                        case  9: av = (Value==1) ||(Value==2) || (Value==10) || (Value==5) || (Value==14) || (Value==15) || (Value>=16);
                                 break;
                       }
                      if (!Status) wr=true;
                      FaktVal = Value;
                      break;
             }
            if (wr)
             {
              // ����� ������ ���������� � ����������� ��������
              TLocateOptions SearchOptions;
              Variant locval[] = { IDTag, true };
              bool stop=false;
              if (QArhivSob->Locate("IDTag;Active",VarArrayOf(locval,1),SearchOptions<<loPartialKey<<loCaseInsensitive))
               {
                if (QArhivSobVal->AsInteger!=FaktVal)
                 {
                  QArhivSob->Edit();
                  QArhivSobActive->AsBoolean   = false;
                  QArhivSobKvitirov->AsBoolean = false;
                  QArhivSobActive1->AsBoolean  = false;
                  try
                   {
                    QArhivSobDlit->AsDateTime = Now() - QArhivSobDTSob->AsDateTime;
                   }
                  catch (...) { QArhivSobDlit->AsString=""; }
                  QArhivSob->Post()                   ;
                 }
                else stop=true;
               }
              else
               {
                if (QArhivSob->Locate("IDTag;Active1",VarArrayOf(locval,1),SearchOptions<<loPartialKey<<loCaseInsensitive))
                 {
                  if (QArhivSobVal->AsInteger!=FaktVal)
                   {
                    QArhivSob->Edit();
                    QArhivSobActive->AsBoolean   = false;
                    QArhivSobKvitirov->AsBoolean = false;
                    QArhivSobActive1->AsBoolean  = false;
                    try
                     {
                      QArhivSobDlit->AsDateTime = Now() - QArhivSobDTSob->AsDateTime;
                     }
                    catch (...) { QArhivSobDlit->AsString=""; }
                    QArhivSob->Post()                   ;
                   }
                  else stop=true;
                 }
               }
              if (!stop)
               {
                if (QArhivSob->Locate("IDSob",TekIDSob,TLocateOptions())) QArhivSob->Edit();
                else                                                      QArhivSob->Insert();
                QArhivSobIDSob->AsInteger    = TekIDSob;
                QArhivSobDTSob->AsDateTime   = tmp     ;
                QArhivSobIDTag->AsInteger    = IDTag   ;
                QArhivSobVal->AsInteger      = FaktVal ;
                QArhivSobActive->AsBoolean   = av      ;
                QArhivSobKvitirov->AsBoolean = av      ;
                QArhivSobActive1->AsBoolean  = true    ;
                QArhivSobDlit->AsString      = ""      ;
                if (av) // ������ �������� ���������, ������� ���������
                    {
                        //PostMessage(FindWindow("TFMainForm","��� \"����-����-����\". ��������� ��������������� �����."),WM_USER+4,1,1);
                    }
                QArhivSob->Post();
                TekIDSob++;
               }
             }
            break;
  }

}
//----------------------------------------------
void __fastcall  TPACQuery::OnWriteValue(TMessage& Message){
        unsigned int command = Message.WParam;
        union{
                long luni;
                float funi;
        }uni;
        uni.luni = Message.LParam;
        if (command>1000)  SendCommand(command-1000, uni.funi,1);
        else               SendCommand(command,uni.funi,0);

}

__fastcall TPACQuery::~TPACQuery(void)
{
    ConArhiv->Close();
}
void __fastcall TPACQuery::ClientSocket1Connecting(TObject *Sender,
      TCustomWinSocket *Socket)
{
 int i=0;
/* statusDebug1->Caption="�����������...";
 statusDebug1->Font->Color=clBlue;    */
}
//---------------------------------------------------------------------------

void __fastcall TPACQuery::ClientSocket1Error(TObject *Sender,
      TCustomWinSocket *Socket, TErrorEvent ErrorEvent, int &ErrorCode)
{
int i=0;
ErrorCode=0;
statusDebug = 6;
}
//---------------------------------------------------------------------------


