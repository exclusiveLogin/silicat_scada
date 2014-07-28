//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
USERES("AppControlsCB3.res");
USEPACKAGE("vcl35.bpi");
USEPACKAGE("vcldb35.bpi");
USEPACKAGE("vclx35.bpi");
USEUNIT("_AACReg.pas");
USERES("_AACReg.dcr");
USELIB("inet.lib");
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
