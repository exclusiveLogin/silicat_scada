unit ExAppen1;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  StdCtrls, OpShared, OpWrd2k, OpWord;

type
  TForm1 = class(TForm)
    btnNewDocument: TButton;
    btnAppendDocument: TButton;
    OpenDialog1: TOpenDialog;
    OpWord1: TOpWord;
    procedure btnNewDocumentClick(Sender: TObject);
    procedure btnAppendDocumentClick(Sender: TObject);
    procedure FormClose(Sender: TObject; var Action: TCloseAction);
    procedure FormCreate(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;
  MainDoc: TOpWordDocument;
implementation

{$R *.DFM}

procedure TForm1.btnNewDocumentClick(Sender: TObject);
begin
  OpWord1.Visible:= True;
  MainDoc:=  OpWord1.Documents.Add;
  MainDoc.Insert('New Document' + #10#13#10#13, True);
end;

procedure TForm1.btnAppendDocumentClick(Sender: TObject);
var
  EndOfDocVariant: OleVariant;
  EndOfDocRange: Range;
begin
  if OpenDialog1.Execute then
  begin
    
    MainDoc.Insert(OpenDialog1.FileName + #10#13#10#13, True);
    EndOfDocVariant:= (MainDoc.AsDocument).Characters.Count - 1;
    EndOfDocRange:= (MainDoc.AsDocument).Range(EndOfDocVariant, EndOfDocVariant);
    EndOfDocRange.InsertFile(OpenDialog1.FileName, emptyParam, emptyParam, emptyParam, emptyParam);
  end;
end;

procedure TForm1.FormClose(Sender: TObject; var Action: TCloseAction);
begin
  if Assigned(MainDoc) then
    MainDoc.Free;
  OpWord1.Connected := False;
end;

procedure TForm1.FormCreate(Sender: TObject);
begin
  OpWord1.Connected := True;
  OpWord1.Visible := False;
end;

end.
