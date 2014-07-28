//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("AppControlsCB5.res");
USEPACKAGE("vcl50.bpi");
USEPACKAGE("vcldb50.bpi");
USEPACKAGE("vclx50.bpi");
USEUNIT("_AACReg.pas");
USERES("_AACReg.dcr");
USELIB("inet.lib");
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Package source.
//---------------------------------------------------------------------------

#pragma argsused
int WINAPI DllEntryPoint(HINSTANCE hinst, unsigned long reason, void*)
{
        return 1;
}
//---------------------------------------------------------------------------
