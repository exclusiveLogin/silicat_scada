//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "XlDemo2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "OpDbOfc"
#pragma link "OpModels"
#pragma link "OpShared"
#pragma resource "*.dfm"
TDataModule1 *DataModule1;
//---------------------------------------------------------------------------
__fastcall TDataModule1::TDataModule1(TComponent* Owner)
    : TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
