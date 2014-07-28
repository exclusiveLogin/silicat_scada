program ExO2XL;

uses
  Forms,
  ExO2XL1 in 'ExO2XL1.pas' {Form1};

{$R *.RES}

begin
  Application.Initialize;
  Application.CreateForm(TForm1, Form1);
  Application.Run;
end.
