unit ExO2XL1;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  StdCtrls, OpXL2K, OpExcel, OpModels, OpDbOfc, Db,
  OpDbOlk, OpShared, OpOlk2K, OpOutlk, Buttons;

type
  TForm1 = class(TForm)
    btnExport: TButton;
    OpExcel1: TOpExcel;
    OpOutlook1: TOpOutlook;
    OpDataSetModel1: TOpDataSetModel;
    OpContactsDataSet1: TOpContactsDataSet;
    procedure btnExportClick(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.DFM}

procedure TForm1.btnExportClick(Sender: TObject);
var
  oCursor: TCursor;
  oWorkBook: TOpExcelWorkbook;
  oSheet: TOpExcelWorksheet;
  oRange: TOpExcelRange;
begin
  oCursor := Screen.Cursor;
  Screen.Cursor := crHourglass;
  try
    // check all connections
    if not OpOutlook1.Connected then
      OpOutlook1.Connected := True;
    if not OpExcel1.Connected then
      OpExcel1.Connected := True;
    if not OpContactsDataSet1.Active then
      OpContactsDataSet1.Active := True;

    with OpExcel1 do
    begin
      oWorkBook := Workbooks.Add;            // create a workbook
      oSheet := oWorkBook.Worksheets.Add;    // add a worksheet
      oRange := oSheet.Ranges.Add;           // create range for output
      oRange.Address := 'A1';                // locate range
      oRange.OfficeModel := OpDatasetModel1; // assign the model to the range
      oRange.Populate;                       // fill the range from the model
      Visible := True;                       // show it
      Interactive := True                    // Let the user access it
    end;
  finally
    Screen.Cursor := oCursor;
  end;
end;

end.
