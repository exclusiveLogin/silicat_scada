//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
USERES("XlDemo.res");
USEFORM("XlDemo1.cpp", Form1);
USEFORM("XlDemo2.cpp", DataModule1);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    try
    {
        Application->Initialize();
        Application->CreateForm(__classid(TForm1), &Form1);
                 Application->CreateForm(__classid(TDataModule1), &DataModule1);
                 Application->Run();
    }
    catch (Exception &exception)
    {
        Application->ShowException(&exception);
    }
    return 0;
}
//---------------------------------------------------------------------------
