program ExTbl2;

uses
  Forms,
  ExTbl2u in 'ExTbl2u.pas' {Form1};

{$R *.RES}

begin
  Application.Initialize;
  Application.CreateForm(TForm1, Form1);
  Application.Run;
end.
