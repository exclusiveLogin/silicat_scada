//---------------------------------------------------------------------------
#ifndef ExO2XL1H
#define ExO2XL1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "OpDbOfc.hpp"
#include "OpDbOlk.hpp"
#include "OpExcel.hpp"
#include "OpModels.hpp"
#include "OpOlk2k.hpp"
#include "OpOutlk.hpp"
#include "OpShared.hpp"
#include "OpXL2K.hpp"
#include <Db.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TButton *btnExport;
    TOpExcel *OpExcel1;
    TOpOutlook *OpOutlook1;
    TOpDataSetModel *OpDataSetModel1;
    TOpContactsDataSet *OpContactsDataSet1;
    void __fastcall btnExportClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
