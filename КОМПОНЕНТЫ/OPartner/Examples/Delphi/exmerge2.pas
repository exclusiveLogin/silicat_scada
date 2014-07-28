unit ExMerge2;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  StdCtrls, Buttons;

type
  TForm2 = class(TForm)
    lblODBC: TLabel;
    mmoSQL: TMemo;
    BitBtn1: TBitBtn;
    BitBtn2: TBitBtn;
    edtAlias: TEdit;
    lblSQL: TLabel;
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form2: TForm2;

implementation

{$R *.DFM}

end.
