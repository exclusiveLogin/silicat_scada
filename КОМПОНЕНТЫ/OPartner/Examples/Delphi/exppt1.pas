unit ExPpt1;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  StdCtrls, OpShared, OpPpt2k, OpPower, ExtCtrls;

type
  TForm1 = class(TForm)
    btnOpenPresentation: TButton;
    btnRunSlideShow: TButton;
    OpPowerPoint1: TOpPowerPoint;
    OpenDialog1: TOpenDialog;
    btnClosePresentation: TButton;
    gbOptions: TGroupBox;
    Label1: TLabel;
    cbxTransitionEffect: TComboBox;
    Label2: TLabel;
    cbxLayout: TComboBox;
    edtAdvanceTime: TEdit;
    Label3: TLabel;
    cbxTransitionSpeed: TComboBox;
    Label4: TLabel;
    chkAdvanceOnClick: TCheckBox;
    chkAdvanceOnTime: TCheckBox;
    procedure btnOpenPresentationClick(Sender: TObject);
    procedure FormClose(Sender: TObject; var Action: TCloseAction);
    procedure btnRunSlideShowClick(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure btnClosePresentationClick(Sender: TObject);
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.DFM}

var
  Pres : TOpPresentation;
  IPres : OpPpt2K.Presentation;

procedure TForm1.FormCreate(Sender: TObject);
begin
  cbxLayout.ItemIndex := 0;
  cbxTransitionEffect.ItemIndex := 0;
  cbxTransitionSpeed.ItemIndex := 0;
end;

procedure TForm1.btnOpenPresentationClick(Sender: TObject);
begin
  if OpenDialog1.Execute then begin
    OpPowerPoint1.Connected := True;
    Pres := OpPowerPoint1.OpenPresentation(OpenDialog1.FileName);
    IPres := Pres.AsPresentation;
    IPres.SlideShowSettings.AdvanceMode := ppSlideShowUseSlideTimings;
  end;
end;

procedure TForm1.FormClose(Sender: TObject; var Action: TCloseAction);
begin
  btnClosePresentationClick(nil);
  OpPowerPoint1.Quit;
end;

procedure TForm1.btnRunSlideShowClick(Sender: TObject);
var
  i : Integer;
begin
  { slide options }
  if (Pres.Slides.Count > 0) then
    for i := 0 to Pred(Pres.Slides.Count) do
      with Pres.Slides[i] do begin
        Layout := TOpPpSlideLayout(cbxLayout.ItemIndex);
        with TransitionEffect do begin
          EntryEffect := TOpPpEntryEffect(cbxTransitionEffect.ItemIndex);
          Speed := TOpPpTransitionSpeed(cbxTransitionSpeed.ItemIndex);
          AdvanceOnClick := chkAdvanceOnClick.Checked;
          AdvanceOnTime  := chkAdvanceOnTime.Checked;
          if AdvanceOnTime then
            AdvanceTime := StrToIntDef(edtAdvanceTime.Text, 10);
        end;
      end;

  Pres.RunSlideShow;
end;

procedure TForm1.btnClosePresentationClick(Sender: TObject);
begin
  if Assigned(Pres) then
    Pres.Free;
  Pres := nil;
  OpPowerPoint1.Connected := False;
end;

end.
