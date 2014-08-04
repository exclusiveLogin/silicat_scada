//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Graphics.hpp>
#include <ADODB.hpp>
#include <Db.hpp>
#include <Buttons.hpp>
#include <Chart.hpp>
#include <Grids.hpp>
#include <Series.hpp>
#include <TeEngine.hpp>
#include <TeeProcs.hpp>
#include "DBGridEh.hpp"
#include "ClassArhiv.hpp"
#include <CheckLst.hpp>
//---------------------------------------------------------------------------
class TWinScada : public TForm
{
__published:	// IDE-managed Components
        TImage *header;
        TImage *Image2;
        TPageControl *PageControl1;
        TTabSheet *TabSheet1;
        TLabel *time1;
        TTimer *Timer1;
        TLabel *date1;
        TLabel *status_doz1_S1;
        TLabel *status_doz2_S1;
        TLabel *workMode1_S1;
        TLabel *curentPerfomanceIzvest1_S1;
        TLabel *calcPerfomanceIzvest1_S1;
        TLabel *izvestActivity1_S1;
        TLabel *curentPerfomanceSand1_S1;
        TLabel *calcPerfomanceSand1_S1;
        TLabel *curentPerfomanceSummary1_S1;
        TLabel *neededPerfomanceSummary1_S1;
        TLabel *curent_MV1_S1;
        TImage *work_doz1_S1;
        TImage *work_doz2_S1;
        TImage *stop_doz1_S1;
        TImage *stop_doz2_S1;
        TImage *btn_setIzvestActivity1_S1;
        TImage *btn_setPerfomanceSummary1_S1;
        TImage *btn_setMV1_S1;
        TDataSource *DSListTags;
        TADOQuery *QListTags;
        TIntegerField *QListTagsIDTag;
        TWideStringField *QListTagsNameTag;
        TWideStringField *QListTagsCaptionTag;
        TFloatField *QListTagsValueTag;
        TIntegerField *QListTagsStatusTag;
        TWideStringField *QListTagsTypeOpros;
        TWideStringField *QListTagsParam1;
        TWideStringField *QListTagsParam2;
        TWideStringField *QListTagsParam3;
        TIntegerField *QListTagsTypeValue;
        TIntegerField *QListTagsNumEkran;
        TIntegerField *QListTagsTypeVisibleElement;
        TWideStringField *QListTagsVisParam1;
        TWideStringField *QListTagsVisParam2;
        TFloatField *QListTagsMinVal;
        TFloatField *QListTagsMaxVal;
        TFloatField *QListTagsMinValIn;
        TFloatField *QListTagsMaxValIn;
        TIntegerField *QListTagsVisParam3;
        TIntegerField *QListTagsVisParam4;
        TIntegerField *QListTagsTypeVisibleArhiv;
        TIntegerField *QListTagsTypeArhiv;
        TIntegerField *QListTagsUslAvar;
        TADOConnection *ConArhiv;
    TTabSheet *TabSheet2;
    TPanel *PanelTrend;
    TSplitter *Splitter4;
    TPanel *PView;
    TDBGridEh *DBGridEh6;
    TTrackBar *TBValue;
    TChart *Trends;
    TPanel *Vizir;
    TLineSeries *Series1;
    TStaticText *STTimeTrend;
    TPanel *Panel71;
    TSpeedButton *SBPlus;
    TSpeedButton *SBMinus;
    TSpeedButton *SpeedButton3;
    TSpeedButton *SBTagMinus;
    TSpeedButton *SBHourMinus;
    TSpeedButton *SBHourPlus;
    TSpeedButton *SBTagPlus;
    TStaticText *StaticText90;
    TDateTimePicker *DTPTime_beginTrend;
    TDateTimePicker *DTPDate_beginTrend;
    TStaticText *StaticText118;
    TDateTimePicker *DTPTime_endTrend;
    TDateTimePicker *DTPDate_endTrend;
    TBitBtn *BBBuilderTrend;
    TDataSource *DSViewData;
    TADOQuery *QViewData;
    TIntegerField *QViewDataIDInfo;
    TIntegerField *QViewDataIDTrend;
    TIntegerField *QViewDataIDTag;
    TIntegerField *QViewDataColorLine;
    TDateTimeField *QViewDataTDT;
    TFloatField *QViewDataVal;
    TIntegerField *QViewDataStatus;
    TFloatField *QViewDataValProc;
    TBooleanField *QViewDataActive;
    TADOConnection *ConViewData;
    TDataSource *DSListTrend;
    TADOQuery *QListTrend;
    TIntegerField *QListTrendIDTrend;
    TWideStringField *QListTrendCaptionTrend;
    TADOConnection *ConListTrend;
    TDataSource *DSConChecktrend;
    TADOQuery *QConCheckTrend;
    TIntegerField *QConCheckTrendIDInfo;
    TIntegerField *QConCheckTrendIDTrend;
    TIntegerField *QConCheckTrendIDTag;
    TIntegerField *QConCheckTrendColorLine;
    TDateTimeField *QConCheckTrendTDT;
    TFloatField *QConCheckTrendVal;
    TIntegerField *QConCheckTrendStatus;
    TFloatField *QConCheckTrendValProc;
    TADOConnection *ConCheckTrend;
    TTimer *Timer2;
    TTabSheet *TabSheet3;
    TPanel *Panel64;
    TStaticText *StaticText53;
    TDBGridEh *DBGridEh2;
    TPanel *Panel68;
    TButton *Button4;
    TSplitter *Splitter1;
    TPanel *Panel65;
    TSplitter *Splitter2;
    TStaticText *StaticText56;
    TPanel *Panel66;
    TSpeedButton *SpeedButton1;
    TStaticText *StaticText57;
    TDateTimePicker *DTPTime_begin;
    TDateTimePicker *DTPDate_begin;
    TStaticText *StaticText58;
    TDateTimePicker *DTPTime_end;
    TDateTimePicker *DTPDate_end;
    TBitBtn *BitBtn12;
    TBitBtn *BitBtn1;
    TBitBtn *BBLastHour;
    TPanel *Panel67;
    TStaticText *StaticText59;
    TCheckListBox *CLBFS;
    TDBGridEh *DBGridEh3;
    TDataSource *DSActiveSob;
    TADOQuery *QActiveSob;
    TIntegerField *QActiveSobIDSob;
    TDateTimeField *QActiveSobDTSob;
    TIntegerField *QActiveSobIDTag;
    TIntegerField *QActiveSobVal;
    TBooleanField *QActiveSobActive;
    TBooleanField *QActiveSobKvitirov;
    TADOConnection *ConActiveSob;
    TDataSource *DSListSob;
    TADOQuery *QListSob;
    TIntegerField *QListSobIDSob;
    TDateTimeField *QListSobDTSob;
    TIntegerField *QListSobIDTag;
    TIntegerField *QListSobVal;
    TBooleanField *QListSobActive;
    TBooleanField *QListSobActive1;
    TDateTimeField *QListSobDlit;
    TADOConnection *ConListSob;
    TDataSource *DSFiltr;
    TADOQuery *QFiltr;
    TIntegerField *QFiltrIDRec;
    TIntegerField *QFiltrIDTag;
    TBooleanField *QFiltrActive;
    TIntegerField *QFiltrTypeFiltr;
    TIntegerField *QFiltrIndexInList;
    TADOConnection *ConFiltr;
        TEdit *izvActivityEdit1;
        TEdit *neededPerfEdit1;
        TEdit *MVEdit1;
        TImage *curentIzvPerfArrowUp1;
        TImage *curentIzvPerfArrowDown1;
        TTimer *Timer3;
        TImage *curentPerfSummArrowDown1;
        TImage *curentPerfSummArrowUp1;
        TImage *curentPerfSandArrowUp1;
        TImage *curentPerfSandArrowDown1;
        TImage *vibroSand1_S1;
        TImage *vibroSand1Right_S1;
        TLabel *statusDebug1_S1;
        TImage *btn_mainTab;
        TImage *btn_trendTab;
        TImage *btn_logTab;
        TImage *bg;
        TImage *btn_confirm1_S1;
        TLabel *setPerfomanceIzvest1_S1;
        TLabel *setPerfomanceSand1_S1;
        TEdit *setPerfIzvestEdit1;
        TEdit *setPerfSandEdit1;
        TImage *btn_setPerfIzv1;
        TImage *btn_setPerfSand1;
        TImage *setManualMode;
        TImage *setAutomaticMode;
        TLabel *statusDebug2_S1;
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall btn_logClick(TObject *Sender);
    void __fastcall BBBuilderTrendClick(TObject *Sender);
    void __fastcall SBPlusClick(TObject *Sender);
    void __fastcall SBMinusClick(TObject *Sender);
    void __fastcall SpeedButton3Click(TObject *Sender);
    void __fastcall SBTagMinusClick(TObject *Sender);
    void __fastcall SBHourMinusClick(TObject *Sender);
    void __fastcall SBHourPlusClick(TObject *Sender);
    void __fastcall SBTagPlusClick(TObject *Sender);
    void __fastcall TrendsGetAxisLabel(TChartAxis *Sender,
          TChartSeries *Series, int ValueIndex, AnsiString &LabelText);
    void __fastcall TrendsMouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
    void __fastcall TrendsMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
    void __fastcall TrendsMouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
    void __fastcall TrendsResize(TObject *Sender);
    void __fastcall TBValueChange(TObject *Sender);
    void __fastcall DBGridEh6MouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
    void __fastcall DBGridEh6DrawColumnCell(TObject *Sender,
          const TRect &Rect, int DataCol, TColumnEh *Column,
          TGridDrawState State);
    void __fastcall Timer2Timer(TObject *Sender);
    void __fastcall QViewDataAfterScroll(TDataSet *DataSet);
    void __fastcall QViewDataCalcFields(TDataSet *DataSet);
    void __fastcall QViewDataIDTagGetText(TField *Sender, AnsiString &Text,
          bool DisplayText);
    void __fastcall QViewDataTDTGetText(TField *Sender, AnsiString &Text,
          bool DisplayText);
    void __fastcall QViewDataValGetText(TField *Sender, AnsiString &Text,
          bool DisplayText);
    void __fastcall QViewDataStatusGetText(TField *Sender,
          AnsiString &Text, bool DisplayText);
    void __fastcall QViewDataValProcGetText(TField *Sender,
          AnsiString &Text, bool DisplayText);
    void __fastcall QViewDataActiveGetText(TField *Sender,
          AnsiString &Text, bool DisplayText);
    void __fastcall BitBtn12Click(TObject *Sender);
    void __fastcall BitBtn1Click(TObject *Sender);
    void __fastcall BBLastHourClick(TObject *Sender);
    void __fastcall QListSobValGetText(TField *Sender, AnsiString &Text,
          bool DisplayText);
    void __fastcall QListSobDlitGetText(TField *Sender, AnsiString &Text,
          bool DisplayText);
    void __fastcall QActiveSobIDTagGetText(TField *Sender,
          AnsiString &Text, bool DisplayText);
    void __fastcall QActiveSobValGetText(TField *Sender, AnsiString &Text,
          bool DisplayText);
    void __fastcall PageControl1Change(TObject *Sender);
    void __fastcall CLBFSClickCheck(TObject *Sender);
        void __fastcall btn_setIzvestActivity1_S1Click(TObject *Sender);
        void __fastcall btn_setPerfomanceSummary1_S1Click(TObject *Sender);
        void __fastcall btn_setMV1_S1Click(TObject *Sender);
        void __fastcall QListSobIDTagGetText(TField *Sender,
          AnsiString &Text, bool DisplayText);
        void __fastcall Timer3Timer(TObject *Sender);
        void __fastcall btn_confirm1_S1Click(TObject *Sender);
        void __fastcall btn_mainTabClick(TObject *Sender);
        void __fastcall btn_trendTabClick(TObject *Sender);
        void __fastcall btn_logTabClick(TObject *Sender);
        void __fastcall btn_setPerfIzv1Click(TObject *Sender);
        void __fastcall btn_setPerfSand1Click(TObject *Sender);
        void __fastcall setManualModeClick(TObject *Sender);
        void __fastcall setAutomaticModeClick(TObject *Sender);
        void __fastcall FormDestroy(TObject *Sender);
private:	// User declarations
        unsigned long MasBits[4][1000]               ; // ������ ��� ��� ����������� ������� ���������
        int             NewSizeWidth;
        int             ModeApp                      ; // ����� ���������� 0 - � ������������ ������ � �������� ������ �������� ����������, 1 - ������� �����
        bool            PLUS_COUNT                   ; // ��������� ������� ��� �������
        bool            vismig                       ; // ����������� �������
        unsigned long   MigEkran                     ; // ������� ��� ����������� �������
        int             FIDTrends                    ; // ���������� ������
        int             Lic                          ;
        int __fastcall  GetCountSeries(int IDTrends, double *Shkals_min, double *Shkals_max, double *min_insh, double *max_insh, int *IDTags, unsigned int *ColorTrend, double *tmp_min, double *tmp_max);
        AnsiString __fastcall  GetIDTagCaptionValue(TField *Sender);
        AnsiString __fastcall  GetIDTagCaption(TField *Sender)     ;
        int        __fastcall  RecNo(int IDTag)      ;
        AnsiString __fastcall GetNameEdIzm(int IDTag);
        double       Shkals_Min[200]   ;
        double       Shkals_Max[200]   ;
        double       Shkals_InMin[200] ;
        double       Shkals_InMax[200] ;
        unsigned int ColorTrend[200]   ;
        int          IDTags_Trends[200];
        AnsiString   FormatTrend[200]  ;
        MyArhiv      *Arhiv   ;
        double       Mashtab;
        bool         MoveVizir;
        bool izvActEdToggle;
        bool neededPerfToggle;
        bool MVtoggle;
        bool setIzvestToggle;
        bool setSandToggle;
        float CalcPerfIzvest;
        float CurentPerfIzvest;
        float CalcPerfSand;
        float CurentPerfSand;
        float CurPerfSummary;
        float NeededPerfSummary;
        bool confirmArmed;
public:		// User declarations
        __fastcall TWinScada(TComponent* Owner);
        void __fastcall TWinScada::statusPLC(TMessage& Message);
        BEGIN_MESSAGE_MAP
         MESSAGE_HANDLER(WM_USER+3,TMessage, statusPLC)      // ������ �������� � ����������
        END_MESSAGE_MAP(TComponent)
};
//---------------------------------------------------------------------------
MyArhiv *ActiveArhiv;
extern PACKAGE TWinScada *WinScada;
//---------------------------------------------------------------------------
#endif
