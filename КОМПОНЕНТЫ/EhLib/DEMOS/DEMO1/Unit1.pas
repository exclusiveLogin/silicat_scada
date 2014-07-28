unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  StdCtrls, DBCtrls, ExtCtrls, Grids, DBGridEh, ComCtrls, Db, DBTables,
  Buttons, DBGrids, PrViewEh, PrnDbgeh, ToolWin, Menus;

type
  TForm1 = class(TForm)
    DataSource2: TDataSource;
    Table1: TTable;
    Table2: TTable;
    DataSource3: TDataSource;
    PageControl1: TPageControl;
    TabSheet1: TTabSheet;
    DBGridEh1: TDBGridEh;
    Panel1: TPanel;
    TabSheet2: TTabSheet;
    DBGridEh2: TDBGridEh;
    TabSheet3: TTabSheet;
    DBGridEh3: TDBGridEh;
    DBGridEh4: TDBGridEh;
    DBNavigator2: TDBNavigator;
    DBNavigator3: TDBNavigator;
    TabSheet4: TTabSheet;
    ImageList2: TImageList;
    tEmployee: TTable;
    tEmployeeEmpNo: TIntegerField;
    tEmployeeLastName: TStringField;
    tEmployeeFirstName: TStringField;
    tEmployeePhoneExt: TStringField;
    tEmployeeHireDate: TDateTimeField;
    tEmployeeSalary: TFloatField;
    tEmployeeSalaryType: TIntegerField;
    dsEmployee: TDataSource;
    DBGridEh5: TDBGridEh;
    qrVendors: TQuery;
    qrVendorsVendorNo: TFloatField;
    qrVendorsVendorName: TStringField;
    qrVendorsAddress1: TStringField;
    qrVendorsAddress2: TStringField;
    qrVendorsCity: TStringField;
    qrVendorsState: TStringField;
    qrVendorsZip: TStringField;
    qrVendorsCountry: TStringField;
    qrVendorsPhone: TStringField;
    qrVendorsFAX: TStringField;
    qrVendorsPreferred: TBooleanField;
    dsVendors: TDataSource;
    DataSource1: TDataSource;
    Query1: TQuery;
    Query1VNo: TFloatField;
    Query1VName: TStringField;
    Query1PNo: TFloatField;
    Query1PDescription: TStringField;
    Query1PCost: TCurrencyField;
    Query1IQty: TIntegerField;
    Query1VName1: TStringField;
    Query1VPreferred: TBooleanField;
    TabSheet5: TTabSheet;
    Panel3: TPanel;
    cbClearSelection: TCheckBox;
    cbShowIndicator: TCheckBox;
    cbTitle: TCheckBox;
    cbHighlightFocus: TCheckBox;
    cbMultiselect: TCheckBox;
    dsCustomer: TDataSource;
    PreviewSetupPanel: TPanel;
    bPrint: TButton;
    bPrinterSetup: TButton;
    bPrevPage: TButton;
    bNextPage: TButton;
    bStop: TButton;
    bClosePreview: TButton;
    PrintDBGridEh1: TPrintDBGridEh;
    PreviewBox1: TPreviewBox;
    bInpPreview: TButton;
    bPreview: TButton;
    bOpenClose: TButton;
    bFiltr: TButton;
    lPageinfo: TLabel;
    cCustomPreview: TButton;
    ilArrows: TImageList;
    ToolBar1: TToolBar;
    ToolButton1: TToolButton;
    ToolButton2: TToolButton;
    pmNoVisibleCols: TPopupMenu;
    qCustomer: TQuery;
    qCustomer2: TQuery;
    dsCustomer2: TDataSource;
    dbgList1: TDBGridEh;
    dbgList: TDBGridEh;
    cbDragNDrop: TCheckBox;
    cbDichromatic: TCheckBox;
    bbCopy: TBitBtn;
    cbInterAppDragNDrop: TCheckBox;
    ImageList1: TImageList;
    procedure bFiltrClick(Sender: TObject);
    procedure bOpenCloseClick(Sender: TObject);
    procedure Query1UpdateRecord(DataSet: TDataSet;
      UpdateKind: TUpdateKind; var UpdateAction: TUpdateAction);
    procedure DBGridEh2DrawColumnCell(Sender: TObject; const Rect: TRect;
      DataCol: Integer; Column: TColumnEh; State: TGridDrawState);
    procedure DBGridEh2DrawFooterCell(Sender: TObject; DataCol,
      Row: Integer; Column: TColumnEh; Rect: TRect; State: TGridDrawState);
    procedure DBGridEh2GetCellParams(Sender: TObject; Column: TColumnEh;
      AFont: TFont; var Background: TColor; State: TGridDrawState);
    procedure DBGridEh2GetFooterParams(Sender: TObject; DataCol,
      Row: Integer; Column: TColumnEh; AFont: TFont;
      var Background: TColor; var Alignment: TAlignment;
      State: TGridDrawState; var Text: String);
    procedure tEmployeeCalcFields(DataSet: TDataSet);
    procedure DBGridEh1TitleBtnClick(Sender: TObject; ACol: Integer;
      Column: TColumnEh);
    procedure cbClearSelectionClick(Sender: TObject);
    procedure cbShowIndicatorClick(Sender: TObject);
    procedure cbTitleClick(Sender: TObject);
    procedure cbHighlightFocusClick(Sender: TObject);
    procedure cbMultiselectClick(Sender: TObject);
    procedure DBGridEh1SortMarkingChanged(Sender: TObject);
    procedure bPrintClick(Sender: TObject);
    procedure bPrinterSetupClick(Sender: TObject);
    procedure bPrevPageClick(Sender: TObject);
    procedure bNextPageClick(Sender: TObject);
    procedure bStopClick(Sender: TObject);
    procedure bClosePreviewClick(Sender: TObject);
    procedure bPreviewClick(Sender: TObject);
    procedure bInpPreviewClick(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure PreviewBox1PrinterPreviewChanged(Sender: TObject);
    procedure cCustomPreviewClick(Sender: TObject);
    procedure ToolButton2Click(Sender: TObject);
    procedure ToolButton1Click(Sender: TObject);
    procedure dbgListDragDrop(Sender, Source: TObject; X, Y: Integer);
    procedure dbgListDragOver(Sender, Source: TObject; X, Y: Integer;
      State: TDragState; var Accept: Boolean);
    procedure dbgListStartDrag(Sender: TObject;
      var DragObject: TDragObject);
    procedure dbgList1DragDrop(Sender, Source: TObject; X, Y: Integer);
    procedure dbgList1DragOver(Sender, Source: TObject; X, Y: Integer;
      State: TDragState; var Accept: Boolean);
    procedure qCustomerUpdateRecord(DataSet: TDataSet;
      UpdateKind: TUpdateKind; var UpdateAction: TUpdateAction);
    procedure qCustomer2UpdateRecord(DataSet: TDataSet;
      UpdateKind: TUpdateKind; var UpdateAction: TUpdateAction);
    procedure cbDragNDropClick(Sender: TObject);
    procedure cbDichromaticClick(Sender: TObject);
    procedure dbgListGetCellParams(Sender: TObject; Column: TColumnEh;
      AFont: TFont; var Background: TColor; State: TGridDrawState);
    procedure bbCopyClick(Sender: TObject);
    procedure DBGridEh1KeyDown(Sender: TObject; var Key: Word;
      Shift: TShiftState);
    procedure cbInterAppDragNDropClick(Sender: TObject);
    procedure DBGridEh2EditButtonClick(Sender: TObject);
  private
    { Private declarations }
  public
    procedure InplacePreviewSetupDialog(Sender: TObject);
    procedure ColumnMenuItem(Sender: TObject);
    function GridSelectionAsText(AGrid:TDBGridEh):String;
    procedure ApplicationIdle(Sender: TObject; var Done: Boolean);
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

uses CustPrev, clipbrd, Unit2;

{$R *.DFM}

procedure TForm1.bFiltrClick(Sender: TObject);
begin
  if (Query1.Filtered = True) then begin
    Query1.Filtered := False;
    bFiltr.Caption := 'Filtr';
  end else begin
    Query1.Filtered := True;
    bFiltr.Caption := 'UnFiltr';
  end;
end;

procedure TForm1.bOpenCloseClick(Sender: TObject);
begin
  if (Query1.Active = False) then begin
    Query1.Active := True;
    bOpenClose.Caption := 'Close';
  end else begin
    Query1.Active := False;
    bOpenClose.Caption := 'Open';
  end;
end;

procedure TForm1.Query1UpdateRecord(DataSet: TDataSet;
  UpdateKind: TUpdateKind; var UpdateAction: TUpdateAction);
begin
  //
end;

procedure TForm1.DBGridEh2DrawColumnCell(Sender: TObject;
  const Rect: TRect; DataCol: Integer; Column: TColumnEh;
  State: TGridDrawState);
begin
  if (Rect.Top = DBGridEh2.CellRect(DBGridEh2.Col,DBGridEh2.Row).Top) and (not (gdFocused in State) or not DBGridEh2.Focused) then
    DBGridEh2.Canvas.Brush.Color := clAqua;
  DBGridEh2.DefaultDrawColumnCell(Rect,DataCol,Column,State);
end;

procedure TForm1.DBGridEh2DrawFooterCell(Sender: TObject; DataCol,
  Row: Integer; Column: TColumnEh; Rect: TRect; State: TGridDrawState);
begin
  DBGridEh2.DefaultDrawFooterCell(Rect,DataCol,Row,Column,State);
end;

procedure TForm1.DBGridEh2GetCellParams(Sender: TObject; Column: TColumnEh;
  AFont: TFont; var Background: TColor; State: TGridDrawState);
begin
  if Query1.FieldByName('IQty').Text = '17' then
    AFont.Style := AFont.Style + [fsBold];
end;

procedure TForm1.DBGridEh2GetFooterParams(Sender: TObject; DataCol,
  Row: Integer; Column: TColumnEh; AFont: TFont; var Background: TColor;
  var Alignment: TAlignment; State: TGridDrawState; var Text: String);
begin
  if (Column.Field.FieldName = 'PDescription') then Text := 'Qty = ' + Text
  else if (Column.Field.FieldName = 'VName') then Text := Text + ' records';
end;

procedure TForm1.tEmployeeCalcFields(DataSet: TDataSet);
begin
  if (tEmployeeSalary.AsFloat < 15000) then
    tEmployeeSalaryType.AsFloat := 5
  else if (tEmployeeSalary.AsFloat < 20000) then
    tEmployeeSalaryType.AsFloat := 4
  else if (tEmployeeSalary.AsFloat < 25000) then
    tEmployeeSalaryType.AsFloat := 3
  else if (tEmployeeSalary.AsFloat < 30000) then
    tEmployeeSalaryType.AsFloat := 2
  else if (tEmployeeSalary.AsFloat < 50000) then
    tEmployeeSalaryType.AsFloat := 1
  else
    tEmployeeSalaryType.AsFloat := 0;
end;

procedure TForm1.DBGridEh1TitleBtnClick(Sender: TObject; ACol: Integer;
  Column: TColumnEh);
begin
{  case Column.Title.SortMarker of
    smNoneEh: Column.Title.SortMarker := smDownEh;
    smDownEh: Column.Title.SortMarker := smUpEh;
    smUpEh: Column.Title.SortMarker := smNoneEh;
  end;}
end;

procedure TForm1.cbClearSelectionClick(Sender: TObject);
begin
  if cbClearSelection.Checked then
    dbgList.OptionsEh := dbgList.OptionsEh + [dghClearSelection]
  else
    dbgList.OptionsEh := dbgList.OptionsEh - [dghClearSelection];
end;

procedure TForm1.cbShowIndicatorClick(Sender: TObject);
begin
  if cbShowIndicator.Checked then
    dbgList.Options := dbgList.Options + [dgIndicator]
  else
    dbgList.Options := dbgList.Options - [dgIndicator];
end;

procedure TForm1.cbTitleClick(Sender: TObject);
begin
  if cbTitle.Checked then
    dbgList.Options := dbgList.Options + [dgTitles]
  else
    dbgList.Options := dbgList.Options - [dgTitles];
end;

procedure TForm1.cbHighlightFocusClick(Sender: TObject);
begin
  if cbHighlightFocus.Checked then
    dbgList.OptionsEh := dbgList.OptionsEh + [dghHighlightFocus]
  else
    dbgList.OptionsEh := dbgList.OptionsEh - [dghHighlightFocus];
end;

procedure TForm1.cbMultiselectClick(Sender: TObject);
begin
  if cbMultiselect.Checked then
    dbgList.Options := dbgList.Options + [dgMultiselect]
  else
    dbgList.Options := dbgList.Options - [dgMultiselect];
end;

procedure TForm1.DBGridEh1SortMarkingChanged(Sender: TObject);
var i :Integer;
    s:String;
   function DeleteStr(str:String; sunstr:String): String;
   var i:Integer;
   begin
     i := Pos(sunstr,str);
     if i <> 0 then Delete(str,i,Length(sunstr));
     Result := str;
   end;
begin
  s := '';
  for i := 0 to DBGridEh1.SortMarkedColumns.Count-1 do
   if DBGridEh1.SortMarkedColumns[i].Title.SortMarker = smUpEh then
     s := s + DBGridEh1.SortMarkedColumns[i].FieldName + ' DESC , '
   else
     s := s + DBGridEh1.SortMarkedColumns[i].FieldName + ', ';
  if s <> '' then s := ' ORDER BY ' + Copy(s,1,Length(s)-2);
  s := DeleteStr(s,'1');
  Query1.SQL.Strings[Query1.SQL.Count-2] := s;
  Query1.Close;
  Query1.Open;
end;

procedure TForm1.bPreviewClick(Sender: TObject);
begin
  PrintDBGridEh1.SetSubstitutes(['%[Today]',DateToStr(Now)]);
  PrintDBGridEh1.Preview;
end;

procedure TForm1.bInpPreviewClick(Sender: TObject);
begin
  DBGridEh1.Visible := False;
  Panel1.Visible := False;
  PreviewBox1.Visible := True;
  PreviewSetupPanel.Visible := True;
  PreviewBox1.Printer.PrinterSetupOwner := DBGridEh1;
  PreviewBox1.Printer.OnPrinterSetupDialog := InplacePreviewSetupDialog;
  PrintDBGridEh1.PrintTo(PreviewBox1.Printer);
end;

procedure TForm1.FormCreate(Sender: TObject);
begin
  PreviewBox1.Align := alClient;
  Application.OnIdle := ApplicationIdle; 
end;

procedure TForm1.bPrintClick(Sender: TObject);
begin
  PreviewBox1.PrintDialog;
end;

procedure TForm1.bPrinterSetupClick(Sender: TObject);
begin
  PreviewBox1.PrinterSetupDialog;
end;

procedure TForm1.bPrevPageClick(Sender: TObject);
begin
  PreviewBox1.PageIndex := Pred(PreviewBox1.PageIndex);
end;

procedure TForm1.bStopClick(Sender: TObject);
begin
  PreviewBox1.Printer.Abort;
end;

procedure TForm1.PreviewBox1PrinterPreviewChanged(Sender: TObject);
begin
  bStop.Enabled := PreviewBox1.Printer.Printing;
  bClosePreview.Enabled := not PreviewBox1.Printer.Printing;
  bPrint.Enabled := not PreviewBox1.Printer.Printing;
  bPrinterSetup.Enabled := not PreviewBox1.Printer.Printing;
  bPrevPage.Enabled:=PreviewBox1.PageIndex>1;
  bNextPage.Enabled:=PreviewBox1.PageIndex<PreviewBox1.PageCount;
  lPageInfo.Caption := 'Page '+IntToStr(PreviewBox1.PageIndex)+' of '+IntToStr(PreviewBox1.PageCount);
end;

procedure TForm1.bClosePreviewClick(Sender: TObject);
begin
    PreviewBox1.Visible := False;
    PreviewSetupPanel.Visible := False;
    Panel1.Visible := True;
    DBGridEh1.Visible := True;
end;

procedure TForm1.bNextPageClick(Sender: TObject);
begin
  PreviewBox1.PageIndex := Succ(PreviewBox1.PageIndex);
end;


procedure TForm1.InplacePreviewSetupDialog(Sender: TObject);
begin
  PreviewBox1.Printer.OnPrinterSetupDialog := InplacePreviewSetupDialog;
  PreviewBox1.Printer.PrinterSetupOwner := DBGridEh1;
  if PrintDBGridEh1.PrinterSetupDialog then
    PrintDBGridEh1.PrintTo(PreviewBox1.Printer);
end;

procedure TForm1.cCustomPreviewClick(Sender: TObject);
var
  FormImage: TBitmap;
  Info: PBitmapInfo;
  InfoSize: DWORD;
  Image: Pointer;
  ImageSize: DWORD;
  Bits: HBITMAP;
  DIBWidth, DIBHeight: Longint;
  PrintWidth, PrintHeight: Longint;
  StdPrinterPreview:TPrinterPreview;
  i:Integer;
begin
  StdPrinterPreview := SetPrinterPreview(fCustomPreview.PreviewBox1.Printer);
  try
  PrinterPreview.BeginDoc;
  try
    i := 0;
    while True do begin
      PageControl1.ActivePage := PageControl1.Pages[i];
      FormImage := GetFormImage;
      Canvas.Lock;
      try
        { Paint bitmap to the printer }
        with PrinterPreview, Canvas do
        begin
          Bits := FormImage.Handle;
          GetDIBSizes(Bits, InfoSize, ImageSize);
          Info := AllocMem(InfoSize);
          try
            Image := AllocMem(ImageSize);
            try
              GetDIB(Bits, 0, Info^, Image^);
              with Info^.bmiHeader do
              begin
                DIBWidth := biWidth;
                DIBHeight := biHeight;
              end;
              case PrintScale of
                poProportional:
                  begin
                    PrintWidth := MulDiv(DIBWidth, GetDeviceCaps(Printer.Handle,
                      LOGPIXELSX), PixelsPerInch);
                    PrintHeight := MulDiv(DIBHeight, GetDeviceCaps(Printer.Handle,
                      LOGPIXELSY), PixelsPerInch);
                  end;
                poPrintToFit:
                  begin
                    PrintWidth := MulDiv(DIBWidth, PagEheight, DIBHeight);
                    if PrintWidth < PageWidth then
                      PrintHeight := PagEheight
                    else
                    begin
                      PrintWidth := PageWidth;
                      PrintHeight := MulDiv(DIBHeight, PageWidth, DIBWidth);
                    end;
                  end;
              else
                PrintWidth := DIBWidth;
                PrintHeight := DIBHeight;
              end;
              StretchDIBits(Canvas.Handle, 0, 0, PrintWidth, PrintHeight, 0, 0,
                DIBWidth, DIBHeight, Image, Info^, DIB_RGB_COLORS, SRCCOPY);
            finally
              FreeMem(Image, ImageSize);
            end;
          finally
            FreeMem(Info, InfoSize);
          end;
        end;
      finally
        Canvas.Unlock;
        FormImage.Free;
      end;
      Inc(i);
      if PageControl1.PageCount = i then Exit;
      PrinterPreview.NewPage;
    end;
  finally
    PrinterPreview.EndDoc;
  end;
  finally
    SetPrinterPreview(StdPrinterPreview);
    PageControl1.ActivePage := PageControl1.Pages[0];
  end;
end;

procedure TForm1.ToolButton2Click(Sender: TObject);
var mi:TMenuItem;
    S:String;
    p:Integer;
  function GetBackCharPos(S:String; C:Char; N:Integer):Integer;
  var i:Integer;
  begin
    Result := 1;
    for i := Length(S) downto 1 do
      if S[i] = C then begin
        Dec(N);
        if N = 0 then begin
          Result := i+1;
          Exit;
        end;
      end;
  end;
  type
    TReplaceFlags = set of (rfReplaceAll, rfIgnoreCase);

  function StringReplace(const S, OldPattern, NewPattern: string;
    Flags: TReplaceFlags): string;
  var
    SearchStr, Patt, NewStr: string;
    Offset: Integer;
  begin
    if rfIgnoreCase in Flags then
    begin
      SearchStr := AnsiUpperCase(S);
      Patt := AnsiUpperCase(OldPattern);
    end else
    begin
      SearchStr := S;
      Patt := OldPattern;
    end;
    NewStr := S;
    Result := '';
    while SearchStr <> '' do
    begin
     Offset := AnsiPos(Patt, SearchStr);
      if Offset = 0 then
      begin
        Result := Result + NewStr;
        Break;
      end;
      Result := Result + Copy(NewStr, 1, Offset - 1) + NewPattern;
      NewStr := Copy(NewStr, Offset + Length(OldPattern), MaxInt);
      if not (rfReplaceAll in Flags) then
      begin
        Result := Result + NewStr;
        Break;
      end;
     SearchStr := Copy(SearchStr, Offset + Length(Patt), MaxInt);
    end;
  end;
begin
  mi := TMenuItem.Create(nil);
  with DBGridEh1.VisibleColumns do begin
    S := Items[Count-1].Title.Caption;
    p := GetBackCharPos(S,'|',2);
    S := Copy(S,p,Length(S));
    mi.Caption := StringReplace(S,'|',#9,[rfReplaceAll]);
    mi.Tag := Integer(Items[Count-1]);
    mi.OnClick := ColumnMenuItem;
  end;
  pmNoVisibleCols.Items.Insert(0,mi);
  DBGridEh1.VisibleColumns.Items[DBGridEh1.VisibleColumns.Count-1].Visible := False;
  if (DBGridEh1.VisibleColumns.Count = 0) then ToolButton2.Enabled := False;
  ToolButton1.Enabled := True;
end;

procedure TForm1.ToolButton1Click(Sender: TObject);
begin
  pmNoVisibleCols.Items[0].Free;
  DBGridEh1.Columns[DBGridEh1.VisibleColumns.Count].Visible := True;
  if (DBGridEh1.Columns.Count = DBGridEh1.VisibleColumns.Count) then
    ToolButton1.Enabled := False;
  ToolButton2.Enabled := True;
end;

procedure TForm1.ColumnMenuItem(Sender: TObject);
begin
  TColumnEh(TMenuItem(Sender).Tag).Index := DBGridEh1.VisibleColumns.Count;
  TColumnEh(TMenuItem(Sender).Tag).Visible := True;
  Sender.Free;
  if (DBGridEh1.Columns.Count = DBGridEh1.VisibleColumns.Count) then
    ToolButton1.Enabled := False;
end;

function TForm1.GridSelectionAsText(AGrid: TDBGridEh): String;
var //bm:TBookmarkStr;
    i,j :Integer;
    ss: TStringStream;
    function StringTab(s:String; Index, Count:Integer):String;
    begin
      if Index <> Count then
        Result := s + #09
      else
        Result := s;
    end;
begin
  Result := '';
  with AGrid do begin
    if Selection.SelectionType = gstNon then Exit;
    ss := TStringStream.Create('');
    with Datasource.Dataset do
    try
      // BM := Bookmark;
      SaveBookmark;
      DisableControls;
      try
        case Selection.SelectionType of
          gstRecordBookmarks:
          begin
            for I := 0 to Selection.Rows.Count-1 do
            begin
              Bookmark := Selection.Rows[I];
              for j := 0 to VisibleColumns.Count - 1 do
                ss.WriteString(StringTab(VisibleColumns[j].DisplayText,j,VisibleColumns.Count - 1));
              ss.WriteString(#13#10);
            end;
          end;
          gstRectangle: begin
             Bookmark := Selection.Rect.TopRow;
             while True do begin
               for j := Selection.Rect.LeftCol to Selection.Rect.RightCol do
                 if Columns[j].Visible then
                   ss.WriteString(StringTab(Columns[j].DisplayText,j,Selection.Rect.RightCol));
               if CompareBookmarks(Pointer(Selection.Rect.BottomRow),Pointer(Bookmark)) = 0 then Break;
               Next;
               if Eof then Break;
               ss.WriteString(#13#10);
             end;
          end;
          gstColumns: begin
             for j := 0 to Selection.Columns.Count-1 do
                 ss.WriteString(StringTab(Selection.Columns[j].Title.Caption,j,Selection.Columns.Count-1));
             ss.WriteString(#13#10);
             First;
             while  EOF = False do begin
               for j := 0 to Selection.Columns.Count-1 do
                 ss.WriteString(StringTab(Selection.Columns[j].DisplayText,j,Selection.Columns.Count-1));
               ss.WriteString(#13#10);
               Next;
             end;
             for i := 0 to FooterRowCount-1 do begin
               for j := 0 to Selection.Columns.Count-1 do
                   ss.WriteString(StringTab(GetFooterValue(i,Selection.Columns[j]),j,Selection.Columns.Count-1));
               ss.WriteString(#13#10);
             end;
          end;
          gstAll: begin
             for j := 0 to VisibleColumns.Count-1 do
                 ss.WriteString(StringTab(VisibleColumns[j].Title.Caption,j,VisibleColumns.Count-1));
             ss.WriteString(#13#10);
             First;
             while  EOF = False do begin
               for j := 0 to VisibleColumns.Count-1 do
                 ss.WriteString(StringTab(VisibleColumns[j].DisplayText,j,VisibleColumns.Count-1));
               ss.WriteString(#13#10);
               Next;
             end;
             for i := 0 to FooterRowCount-1 do begin
               for j := 0 to VisibleColumns.Count-1 do
                   ss.WriteString(StringTab(GetFooterValue(i,VisibleColumns[j]),j,VisibleColumns.Count-1));
               ss.WriteString(#13#10);
             end;
          end;
        end;
        Result := ss.DataString;
      finally
        //Bookmark := BM;
        RestoreBookmark;
        EnableControls;
      end;
    finally
      ss.Free;
    end;
  end;
end;

procedure TForm1.dbgListDragDrop(Sender, Source: TObject; X, Y: Integer);
var i,j:Integer;
begin
  if Source = dbgList1 then begin
    dbgList.DataSource.DataSet.DisableControls;
    dbgList1.DataSource.DataSet.DisableControls;
    dbgList.SaveBookmark;
    if dbgList1.Selection.SelectionType = gstRecordBookmarks then
      for i := 0 to dbgList1.SelectedRows.Count-1 do
      begin
        dbgList1.DataSource.DataSet.Bookmark := dbgList1.SelectedRows[I];
        dbgList.DataSource.DataSet.Append;
        dbgList.DataSource.DataSet.Edit;
        for j := 0 to dbgList.DataSource.DataSet.FieldCount-1 do
          dbgList.DataSource.DataSet.Fields[j].Value := dbgList1.DataSource.DataSet.Fields[j].Value;
        dbgList.DataSource.DataSet.Post;
      end
    else if dbgList1.Selection.SelectionType = gstAll then begin
      dbgList1.DataSource.DataSet.First;
      while  dbgList1.DataSource.DataSet.EOF = False do begin
        dbgList.DataSource.DataSet.Append;
        dbgList.DataSource.DataSet.Edit;
        for j := 0 to dbgList.DataSource.DataSet.FieldCount-1 do
          dbgList.DataSource.DataSet.Fields[j].Value := dbgList1.DataSource.DataSet.Fields[j].Value;
        dbgList.DataSource.DataSet.Post;
        dbgList1.DataSource.DataSet.Delete;
      end;
      dbgList1.Selection.Clear;
    end;
    dbgList.RestoreBookmark;
    dbgList1.SelectedRows.Delete;
    dbgList1.DataSource.DataSet.Refresh;
    dbgList1.DataSource.DataSet.EnableControls;
    dbgList.DataSource.DataSet.EnableControls;
  end;
end;

procedure TForm1.dbgListDragOver(Sender, Source: TObject; X, Y: Integer;
  State: TDragState; var Accept: Boolean);
begin
  if Source = dbgList1 then Accept := True else Accept := False;
end;

procedure TForm1.dbgListStartDrag(Sender: TObject;
  var DragObject: TDragObject);
begin
{
              ABOUT DRAG & DROP DATA BETWEEN APPLICATIONS.
  Standard drag and drop capacity don't support interapplication interaction.
  To ensure drag and drop from one application to over need use over tools.
  One of such tools is DRAG & DROP COMPONENT SUITE VERSION by Angus Johnson &
  Anders Melander.
  This is a set of components that implements Dragging & Dropping of data
  between applications.
  These components implement the COM interfaces - IDataObject, IDropSource and
  IDropTarget which are the backbone of Windows drag-and-drop.
  The homesite for the Drag and Drop Component Suite is http://www.melander.dk.
  To make use this component download it, install DRAG & DROP COMPONENT SUITE
  VERSION to Delphi , drop TDropTextSource on this Form, do visible
  cbInterAppDragNDrop checkbox and uncomment below text.
  It give you capacity to drag grid info in such applications as Excel or Word
}

//  if not cbInterAppDragNDrop.Checked then Exit;
//  CancelDrag;
//  DropTextSource1.Text := GridSelectionAsText(dbgList);
//  DropTextSource1.Execute;

end;

procedure TForm1.dbgList1DragDrop(Sender, Source: TObject; X, Y: Integer);
var i,j:Integer;
begin
  if Source = dbgList then begin
    dbgList1.DataSource.DataSet.DisableControls;
    dbgList.DataSource.DataSet.DisableControls;
    dbgList1.SaveBookmark;
    if dbgList.Selection.SelectionType = gstRecordBookmarks then
      for i := 0 to dbgList.SelectedRows.Count-1 do
      begin
        dbgList.DataSource.DataSet.Bookmark := dbgList.SelectedRows[I];
        dbgList1.DataSource.DataSet.Append;
        dbgList1.DataSource.DataSet.Edit;
        for j := 0 to dbgList1.DataSource.DataSet.FieldCount-1 do
          dbgList1.DataSource.DataSet.Fields[j].Value := dbgList.DataSource.DataSet.Fields[j].Value;
        dbgList1.DataSource.DataSet.Post;
      end
    else if dbgList.Selection.SelectionType = gstAll then begin
      dbgList.DataSource.DataSet.First;
      while  dbgList.DataSource.DataSet.EOF = False do begin
        dbgList1.DataSource.DataSet.Append;
        dbgList1.DataSource.DataSet.Edit;
        for j := 0 to dbgList1.DataSource.DataSet.FieldCount-1 do
          dbgList1.DataSource.DataSet.Fields[j].Value := dbgList.DataSource.DataSet.Fields[j].Value;
        dbgList1.DataSource.DataSet.Post;
        dbgList.DataSource.DataSet.Delete;
      end;
      dbgList.Selection.Clear;
    end;
    dbgList1.RestoreBookmark;
    dbgList.SelectedRows.Delete;
    dbgList.DataSource.DataSet.Refresh;
    dbgList.DataSource.DataSet.EnableControls;
    dbgList1.DataSource.DataSet.EnableControls;
  end;
end;

procedure TForm1.dbgList1DragOver(Sender, Source: TObject; X, Y: Integer;
  State: TDragState; var Accept: Boolean);
begin
  if Source = dbgList then Accept := True else Accept := False;
end;

procedure TForm1.qCustomerUpdateRecord(DataSet: TDataSet;
  UpdateKind: TUpdateKind; var UpdateAction: TUpdateAction);
begin
//
end;

procedure TForm1.qCustomer2UpdateRecord(DataSet: TDataSet;
  UpdateKind: TUpdateKind; var UpdateAction: TUpdateAction);
begin
//
end;

procedure TForm1.cbDragNDropClick(Sender: TObject);
begin
  if cbDragNDrop.Checked then begin
    dbgList.DragMode := dmAutomatic;
    dbgList1.Visible := True and not cbInterAppDragNDrop.Checked;
  end
  else begin
    dbgList.DragMode := dmManual;
    dbgList1.Visible := False;
  end;
end;

procedure TForm1.cbDichromaticClick(Sender: TObject);
begin
  dbgList.Invalidate;
end;

procedure TForm1.dbgListGetCellParams(Sender: TObject; Column: TColumnEh;
  AFont: TFont; var Background: TColor; State: TGridDrawState);
begin
  if cbDichromatic.Checked then
    if dbgList.SumList.RecNo mod 2 = 1 then
      Background := $00FFC4C4
    else
      Background := $00FFDDDD;
end;

procedure TForm1.ApplicationIdle(Sender: TObject; var Done: Boolean);
begin
  // Under Delphi 4 and upper better to user Actions to determine
  // enablitity buttons and menus
  bbCopy.Enabled := DBGridEh1.Selection.SelectionType <> gstNon;
end;

procedure TForm1.bbCopyClick(Sender: TObject);
begin
  Clipboard.AsText := GridSelectionAsText(DBGridEh1);
end;

procedure TForm1.DBGridEh1KeyDown(Sender: TObject; var Key: Word;
  Shift: TShiftState);
begin
  if (Key = VK_INSERT) and ([ssCtrl] = Shift) then
    Clipboard.AsText := GridSelectionAsText(DBGridEh1);
end;

procedure TForm1.cbInterAppDragNDropClick(Sender: TObject);
begin
  dbgList1.Visible := True and not cbInterAppDragNDrop.Checked;
end;

procedure TForm1.DBGridEh2EditButtonClick(Sender: TObject);
var vn,vs:String;
begin
  vn := Query1.FieldByName('VNo').AsString;
  if Form2.Execute(DBGridEh2.InplaceEditor,vn,vs) then
  begin
    Query1.Edit;
    Query1.FieldByName('VNo').AsString := vn;
    Query1.FieldByName('VName').AsString := vs;
    Query1.Post;
  end;
end;

end.
