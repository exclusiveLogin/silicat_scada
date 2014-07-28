program ExPpt;

uses
  Forms,
  ExPpt1 in 'ExPpt1.pas' {Form1};

{$R *.RES}

begin
  Application.Initialize;
  Application.CreateForm(TForm1, Form1);
  Application.Run;
end.
