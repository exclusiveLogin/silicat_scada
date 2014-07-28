unit ExTbl1u;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  StdCtrls, Grids, OpModels, OpShared, OpWrd2k, OpWord;

type
  TForm1 = class(TForm)
    btnUpdate: TButton;
    StringGrid1: TStringGrid;
    Label2: TLabel;
    OpWord1: TOpWord;
    OpEventModel1: TOpEventModel;
    procedure btnUpdateClick(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure OpEventModel1GetColCount(Sender: TObject;
      var ColCount: Integer);
    procedure OpEventModel1GetColHeaders(Sender: TObject;
      var ColHeaders: Variant);
    procedure OpEventModel1GetData(Sender: TObject; Index, Row: Integer;
      Mode: TOpRetrievalMode; var Size: Integer; var Data: Variant);
    procedure FormClose(Sender: TObject; var Action: TCloseAction);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.DFM}

const
  ProjectCaption = 'Populating a Word Table with TDvEventModel';

var
  Doc : TOpWordDocument;
  Table : TOpDocumentTable;
  Headers : Variant;

procedure TForm1.FormCreate(Sender: TObject);
begin
  Caption := ProjectCaption;
  { Turn on Word and create new document }
  OpWord1.Connected := True;
  Doc := OpWord1.Documents.Add;
  Doc.Insert(Caption + #13#10#10#10, True);

  { Create variant array for the table header row }
  Headers := VarArrayCreate([0, 2], varVariant);
  Headers[0] := 'Col 1';
  Headers[1] := 'Col 2';
  Headers[2] := 'Col 3';

  { Create table, hook up with TDvEventModel, and populate }
  Table := Doc.Tables.Add;
  Table.OfficeModel := OpEventModel1;
  OpEventModel1.RowCount := StringGrid1.RowCount;
  Table.PopulateDocTable;
  OpWord1.Visible := True;
end;

procedure TForm1.btnUpdateClick(Sender: TObject);
begin
  { Re-Populate Table }
  Table.RePopulateDocTable;
end;

procedure TForm1.OpEventModel1GetColCount(Sender: TObject;
  var ColCount: Integer);
begin
  { Populating table, need column count }
  ColCount := StringGrid1.ColCount;
end;

procedure TForm1.OpEventModel1GetColHeaders(Sender: TObject;
  var ColHeaders: Variant);
begin
  { Populating table, need variant array of headers }
  ColHeaders := Headers;
end;

procedure TForm1.OpEventModel1GetData(Sender: TObject; Index, Row: Integer;
  Mode: TOpRetrievalMode; var Size: Integer; var Data: Variant);
var
  OleStr : OleVariant;
begin
  { Populating table, need data for specified table cell }
  OleStr := StringGrid1.Cells[Index, Row];
  Data := OleStr;
  Size := Length(OleStr);
end;

procedure TForm1.FormClose(Sender: TObject; var Action: TCloseAction);
begin
  if Assigned(Table) then
    Table.Free;
  if Assigned(Doc) then
    Doc.Free;
  OpWord1.Connected := False;
end;

end.
