program XLDemo;

uses
  Forms,
  XLDemo1 in 'XLDemo1.pas' {Form1},
  XLDemo2 in 'XLDemo2.pas' {DataModule1: TDataModule};

{$R *.RES}

begin
  Application.Initialize;
  Application.CreateForm(TForm1, Form1);
  Application.CreateForm(TDataModule1, DataModule1);
  Application.Run;
end.
