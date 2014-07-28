program ExEvent;

uses
  Forms,
  ExEvent1 in 'ExEvent1.pas' {FrmMain};

{$R *.RES}

begin
  Application.Initialize;
  Application.CreateForm(TFrmMain, FrmMain);
  Application.Run;
end.
