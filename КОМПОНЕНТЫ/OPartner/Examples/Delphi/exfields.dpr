program ExFields;

uses
  Forms,
  ExField1 in 'ExField1.pas' {Form1};

{$R *.RES}

begin
  Application.Initialize;
  Application.CreateForm(TForm1, Form1);
  Application.Run;
end.
