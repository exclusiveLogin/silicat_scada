#ifndef ClassArhivH
#define ClassArhivH
#include <stdlib.h>
#include <extctrls.hpp>
#include <FileCtrl.hpp>
#include <sysutils.hpp>
#include <fcntl.h>
#include <sys\stat.h>
#include <io.h>
typedef void __fastcall (__closure *TOnInit)(System::TObject *Sender, bool &Active, int *IDTag, double *Val, int *Stat);
void __stdcall Timer1Timer(UINT TimerID, UINT Message, DWORD dwUser, DWORD dw1, DWORD dw2);
typedef  struct TData { double Val; int Status; bool YesData; } TData;
class MyArhiv : public TObject
{
 protected:
          bool     FErrorDostup; // ��� ������� ��� �������� ����� ������
 private:
          int      FCountTags  ;
          double  *FValTags    ;
          int     *FStatTags   ;
          int     *FIDTags     ;
          double  *FArhivValTags    ;
          int     *FArhivStatTags   ;
          int     *FArhivIDTags     ;
          bool     FInitArhiv  ;
          TOnInit  FMyInitArhiv; // ������������� ������
          UINT     FTimer        ;
          UINT     FTimerInterval;
          bool     FTimerEnabled ;
          bool     FActiveWrite;
          void __fastcall FSetActiveWrite(bool value) ;
          void __fastcall FSetCom(int CodeCom)        ;
          TData    FDataTag;
          TData __fastcall GetFDataTag(TDateTime DateArhiv, int IDTag);
 public :
        __fastcall MyArhiv(TComponent *Comp, int CountTags, unsigned int period_write);
        // ���������� �����, ������ ������
        __fastcall ~MyArhiv(void)                               ;
        __property int     Com               = { write = FSetCom }  ;
        __property int     CountTags         = { read = FCountTags };
        __property int*    IDTags            = { read = FIDTags }   ;
        __property double* ValTags           = { read = FValTags }   ;
        __property int*    StatTags          = { read = FStatTags}  ;
        __property TOnInit OnActiveArhiv = { read = FMyInitArhiv, write = FMyInitArhiv    };
        __property bool    ActiveWrite   = { read = FActiveWrite, write = FSetActiveWrite }; // �������������� ������ � �����
        __property TData   DataTag[TDateTime DateArhiv][int IDTag] = { read = GetFDataTag };
        void __fastcall SetData(int IDTag, double Val, int Status);

};
extern MyArhiv *ActiveArhiv;
#endif



