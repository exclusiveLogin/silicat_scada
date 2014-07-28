unit XLDemo2;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  OpModels, OpDbOfc, Db, DBTables, OpShared;

type
  TDataModule1 = class(TDataModule)
    tblCustomers: TTable;
    qryChartData: TQuery;
    dsCustomers: TDataSource;
    tblOrders: TTable;
    dsOrders: TDataSource;
    mdlCustomers: TOpDataSetModel;
    mdlOrders: TOpDataSetModel;
    mdlChartData: TOpDataSetModel;
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  DataModule1: TDataModule1;

implementation

uses XLDemo1;

{$R *.DFM}

end.
