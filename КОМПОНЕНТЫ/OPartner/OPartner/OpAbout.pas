{*********************************************************}
{*                  OPABOUT.PAS 1.61                     *}
{*      Copyright (c) 1997-00 TurboPower Software Co     *}
{*                 All rights reserved.                  *}
{*********************************************************}

{$I OPDEFINE.INC}

unit OpAbout;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  StdCtrls, {$IFDEF VERSION6} DesignIntf, {$ELSE} DsgnIntf, {$ENDIF} ExtCtrls,
  ShellAPI;

type
  TFrmAbout = class(TForm)
    Panel1: TPanel;
    Image1: TImage;
    lblVersion: TLabel;
    btnOK: TButton;
    WebLbl: TLabel;
    Panel2: TPanel;
    NewsLbl: TLabel;
    SupportLbl: TLabel;
    procedure btnOKClick(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure WebLblMouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure NewsLblMouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure Panel2MouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure FormMouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure WebLblClick(Sender: TObject);
    procedure NewsLblClick(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

implementation

{$R *.DFM}

uses
  OpConst;

{*** TFrmAbout ***}

procedure TFrmAbout.btnOKClick(Sender: TObject);
begin
  Close;
end;

procedure TFrmAbout.FormCreate(Sender: TObject);
begin
  Top := (Screen.Height - Height) div 3;
  Left := (Screen.Width - Width) div 2;
  lblVersion.Caption := 'Version ' + SVersion;
end;

procedure TFrmAbout.WebLblMouseMove(Sender: TObject; Shift: TShiftState;
  X, Y: Integer);
begin
  WebLbl.Font.Color := clRed;
end;

procedure TFrmAbout.NewsLblMouseMove(Sender: TObject;
  Shift: TShiftState; X, Y: Integer);
begin
  NewsLbl.Font.Color := clRed;
end;

procedure TFrmAbout.Panel2MouseMove(Sender: TObject; Shift: TShiftState;
  X, Y: Integer);
begin
  NewsLbl.Font.Color := clNavy;
end;

procedure TFrmAbout.FormMouseMove(Sender: TObject; Shift: TShiftState;
  X, Y: Integer);
begin
  WebLbl.Font.Color := clNavy;
  NewsLbl.Font.Color := clNavy;
end;

procedure TFrmAbout.WebLblClick(Sender: TObject);
begin
  if ShellExecute(0, 'open', 'http://www.turbopower.com', '', '',
    SW_SHOWNORMAL) <= 32 then
    ShowMessage('Unable to start web browser');
  WebLbl.Font.Color := clNavy;
end;

procedure TFrmAbout.NewsLblClick(Sender: TObject);
begin
  if ShellExecute(0, 'open', 'news://news.turbopower.com', '', '',
    SW_SHOWNORMAL) <= 32 then
    ShowMessage('Unable to start news reader');
  NewsLbl.Font.Color := clNavy;
end;

end.
  