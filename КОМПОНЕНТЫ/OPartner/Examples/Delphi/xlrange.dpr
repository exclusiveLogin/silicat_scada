program XlRange;

uses
  Forms,
  XlRange1 in 'XlRange1.pas' {ExRgPro1};

{$R *.RES}

begin
  Application.Initialize;
  Application.CreateForm(TExRgPro1, ExRgPro1);
  Application.Run;
end.
