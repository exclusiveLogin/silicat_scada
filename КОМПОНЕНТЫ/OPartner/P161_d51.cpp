//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
USERES("P161_D51.res");
USEUNIT("OpDesign.pas");
USEUNIT("OpAbout.pas");
USERES("OpDesign.dcr");
USEPACKAGE("vcl50.bpi");
USEPACKAGE("vclx50.bpi");
USEPACKAGE("vcldb50.bpi");
USEPACKAGE("vclbde50.bpi");
USEPACKAGE("P161_R51.bpi");
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
