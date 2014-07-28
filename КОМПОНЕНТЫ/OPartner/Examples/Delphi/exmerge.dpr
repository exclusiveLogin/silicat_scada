program ExMerge;

uses
  Forms,
  ExMerge2 in 'ExMerge2.pas' {Form2},
  ExMerge1 in 'ExMerge1.pas' {Form1};

{$R *.RES}

begin
  Application.Initialize;
  Application.CreateForm(TForm1, Form1);
  Application.CreateForm(TForm2, Form2);
  Application.Run;
end.
