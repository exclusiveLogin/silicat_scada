unit ExEvent1;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  StdCtrls, OpShared, OpOlk2K, OpOutlk;

type
  TFrmMain = class(TForm)
    BtnSend: TButton;
    GroupBox1: TGroupBox;
    EdtEventTo: TEdit;
    MemEventMsg: TMemo;
    GroupBox2: TGroupBox;
    EdtTo: TEdit;
    Label1: TLabel;
    Label2: TLabel;
    MemMsg: TMemo;
    Label3: TLabel;
    Label4: TLabel;
    BtnExit: TButton;
    OpOutlook1: TOpOutlook;
    procedure BtnExitClick(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure BtnSendClick(Sender: TObject);
    procedure OpOutlook1ItemSend(Item: IDispatch; var Cancel: WordBool);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  FrmMain: TFrmMain;

implementation

{$R *.DFM}

procedure TFrmMain.BtnExitClick(Sender: TObject);
begin
  Close;
end;

procedure TFrmMain.FormCreate(Sender: TObject);
begin
  OpOutlook1.Connected := True;
end;

procedure TFrmMain.BtnSendClick(Sender: TObject);
begin
  with OpOutlook1.CreateMailItem do
    try
      MsgTo := EdtTo.Text;
      Subject := 'OpOutlook Event Test';
      HTMLBody := MemMsg.Lines.Text;
      Send;
    finally
      Free;
    end;
end;

procedure TFrmMain.OpOutlook1ItemSend(Item: IDispatch;
  var Cancel: WordBool);
var
  Mail: TOpMailItem;
begin
  if Item <> nil then
  begin
    Mail := TOpMailItem.Create(Item as _MailItem);
    try
      EdtEventTo.Text := Mail.MsgTo;
      MemEventMsg.Lines.Text := Mail.Body;
    finally
      Mail.Free;
    end;
  end;
end;

end.
