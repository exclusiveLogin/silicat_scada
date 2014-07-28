program ExSMail;

uses
  Forms,
  ExSMail1 in 'ExSMail1.pas' {Form1},
  ExSMail3 in 'ExSMail3.pas' {Form3},
  ExSMail2 in 'ExSMail2.pas' {Form2};

{$R *.RES}

begin
  Application.Initialize;
  Application.CreateForm(TForm1, Form1);
  Application.CreateForm(TForm3, Form3);
  Application.CreateForm(TForm2, Form2);
  Application.Run;
end.
