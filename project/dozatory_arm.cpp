//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("dozatory_arm.res");
USEFORM("..\code\Unit1.cpp", WinScada);
USEUNIT("..\MyCLASS\ClassArhiv.cpp");
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TWinScada), &WinScada);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        return 0;
}
//---------------------------------------------------------------------------
