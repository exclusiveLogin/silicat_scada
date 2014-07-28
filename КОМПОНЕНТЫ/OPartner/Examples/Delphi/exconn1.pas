unit ExConn1;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  Menus, OleCtnrs, StdCtrls, OpShared, OpWrd2k, OpWord;

type
  TForm1 = class(TForm)
    Label1: TLabel;
    btnConnect: TButton;
    OpWord1: TOpWord;
    procedure btnConnectClick(Sender: TObject);
    procedure OpWord1GetInstance(Sender: TObject; var Instance: IDispatch;
      const CLSID, IID: TGUID);
    procedure OpWord1OpConnect(Sender: TObject);
    procedure FormClose(Sender: TObject; var Action: TCloseAction);
  end;

var
  Form1: TForm1;

implementation

uses ComObj, ActiveX;

{$R *.DFM}

procedure TForm1.btnConnectClick(Sender: TObject);
begin
  OpWord1.Connected := True;
end;

procedure TForm1.OpWord1GetInstance(Sender: TObject;
  var Instance: IDispatch; const CLSID, IID: TGUID);
var
  Unk: IUnknown;
begin
  if IsEqualGuid(CLASS_Application_, CLSID) and
    IsEqualGuid(_Application, IID) then
  begin
    // Get Active Instance of Word and connect to it
    OleCheck(GetActiveObject(CLASS_Application_, nil, Unk));
    Instance := Unk as _Application;
  end;
end;

procedure TForm1.OpWord1OpConnect(Sender: TObject);
begin
  OpWord1.Caption := 'Hello from OfficePartner';
  OpWord1.Visible := True;
end;

procedure TForm1.FormClose(Sender: TObject; var Action: TCloseAction);
begin
  OpWord1.Connected := False;
end;

end.
