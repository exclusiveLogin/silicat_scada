unit ExFind1;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  Menus, StdCtrls, OpShared, OpWrd2k, OpWord, ExtCtrls;

type
  TForm1 = class(TForm)
    OpenDialog1: TOpenDialog;
    OpWord1: TOpWord;
    Panel1: TPanel;
    btnOpenDoc: TButton;
    btnCloseDoc: TButton;
    btnFind: TButton;
    btnFindNext: TButton;
    edtFindText: TEdit;
    procedure btnFindClick(Sender: TObject);
    procedure btnFindNextClick(Sender: TObject);
    procedure OpWord1OpDisconnect(Sender: TObject);
    procedure btnOpenDocClick(Sender: TObject);
    procedure btnCloseDocClick(Sender: TObject);
    procedure FormClose(Sender: TObject; var Action: TCloseAction);
    procedure OpWord1DocumentOpen(Sender: TObject; Doc: _Document);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.DFM}

var
  ActiveDocument : TOpWordDocument;

procedure TForm1.btnFindClick(Sender: TObject);
begin
  ActiveDocument.Find(edtFindText.Text, True);
end;

procedure TForm1.btnFindNextClick(Sender: TObject);
begin
  ActiveDocument.FindNext;
end;

procedure TForm1.OpWord1OpDisconnect(Sender: TObject);
begin
  Caption := 'Word Find Example';
  OpWord1.Visible := False;
end;

procedure TForm1.btnOpenDocClick(Sender: TObject);
begin
  btnCloseDocClick(nil);
  if OpenDialog1.Execute then begin
    Screen.Cursor := crHourglass;
    ActiveDocument := OpWord1.OpenDocument(OpenDialog1.FileName);
  end;
end;

procedure TForm1.btnCloseDocClick(Sender: TObject);
begin
  if Assigned(ActiveDocument) then
    ActiveDocument.Free;
  ActiveDocument := nil;
  OpWord1.Connected := False;
end;

procedure TForm1.FormClose(Sender: TObject; var Action: TCloseAction);
begin
  btnCloseDocClick(nil);
end;

procedure TForm1.OpWord1DocumentOpen(Sender: TObject; Doc: _Document);
begin
  Caption := Doc.Get_FullName;
  OpWord1.Visible := True;
  Screen.Cursor := crDefault;
end;

end.
