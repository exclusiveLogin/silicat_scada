//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
USERES("P161_R51.res");
USEUNIT("OpDbOfc.pas");
USEUNIT("OpDbOlk.pas");
USEUNIT("OpXL2K.pas");
USEUNIT("OpXL97.pas");
USEUNIT("OpExcel.pas");
USEUNIT("OpFrms97.pas");
USEUNIT("OpMSO.pas");
USEUNIT("OpOfc2K.pas");
USEUNIT("OpOfc97.pas");
USEUNIT("OpConst.pas");
USEUNIT("OpEvents.pas");
USEUNIT("OpModels.pas");
USEUNIT("OpShared.pas");
USEUNIT("OpOlk2K.pas");
USEUNIT("OpOlk97.pas");
USEUNIT("OpOlk98.pas");
USEUNIT("OpOutlk.pas");
USEUNIT("OpPpt2K.pas");
USEUNIT("OpPpt97.pas");
USEUNIT("OpVbId2K.pas");
USEUNIT("OpVbId97.pas");
USEUNIT("OpWrd2K.pas");
USEUNIT("OpWrd97.pas");
USEUNIT("OpWord.pas");
USEUNIT("OpPower.pas");
USEPACKAGE("vclx50.bpi");
USEPACKAGE("vcl50.bpi");
USEPACKAGE("vcldb50.bpi");
USEPACKAGE("vclbde50.bpi");
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------
//   Package source.
//---------------------------------------------------------------------------
int WINAPI DllEntryPoint(HINSTANCE hinst, unsigned long reason, void*)
{
        return 1;
}
//---------------------------------------------------------------------------
