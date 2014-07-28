program ExFind;

uses
  Forms,
  ExFind1 in 'ExFind1.pas' {Form1};

{$R *.RES}

begin
  Application.Initialize;
  Application.CreateForm(TForm1, Form1);
  Application.Run;
end.
