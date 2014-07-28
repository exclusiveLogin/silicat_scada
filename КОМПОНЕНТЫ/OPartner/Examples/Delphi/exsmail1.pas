unit ExSMail1;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  StdCtrls, OpShared, OpOlk2k, OpOutlk;

type
  TForm1 = class(TForm)
    btnCreateAnSend: TButton;
    OpOutlook1: TOpOutlook;
    procedure btnCreateAnSendClick(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.DFM}

uses
  ExSMail2, ExSMail3;

procedure TForm1.btnCreateAnSendClick(Sender: TObject);
var
  Dlg: TForm2;
begin
  if not OpOutlook1.Connected then
    OpOutlook1.Connected := True;
  Dlg := TForm2.Create( Self );
  try
    Dlg.Outlook := OpOutlook1;
    Dlg.ShowModal;
  finally
    Dlg.Free;
  end;
end;

end.
