program ExAppts;

uses
  Forms,
  ExAppts1 in 'ExAppts1.pas' {Form1};

{$R *.RES}

begin
  Application.Initialize;
  Application.CreateForm(TForm1, Form1);
  Application.Run;
end.
