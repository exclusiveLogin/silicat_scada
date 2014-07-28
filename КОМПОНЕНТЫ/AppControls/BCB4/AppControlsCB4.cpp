//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
USERES("AppControlsCB4.res");
USEPACKAGE("vcldb40.bpi");
USEPACKAGE("vcl40.bpi");
USELIB("inet.lib");
USEUNIT("_AACReg.pas");
USERES("_AACReg.dcr");
USEPACKAGE("VCLX40.bpi");
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
