//---------------------------------------------------------------------------
#ifndef XlDemo2H
#define XlDemo2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include "OpDbOfc.hpp"
#include "OpModels.hpp"
#include "OpShared.hpp"
//---------------------------------------------------------------------------
class TDataModule1 : public TDataModule
{
__published:	// IDE-managed Components
    TTable *tblCustomers;
    TQuery *qryChartData;
    TDataSource *dsCustomers;
    TTable *tblOrders;
    TDataSource *dsOrders;
    TOpDataSetModel *mdlCustomers;
    TOpDataSetModel *mdlOrders;
    TOpDataSetModel *mdlChartData;
private:	// User declarations
public:		// User declarations
    __fastcall TDataModule1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDataModule1 *DataModule1;
//---------------------------------------------------------------------------
#endif
