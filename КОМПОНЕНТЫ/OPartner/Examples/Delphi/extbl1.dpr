program ExTbl1;

uses
  Forms,
  ExTbl1u in 'ExTbl1u.pas' {Form1};

{$R *.RES}

begin
  Application.Initialize;
  Application.CreateForm(TForm1, Form1);
  Application.Run;
end.
