//---------------------------------------------------------------------------
#ifndef XlRange1H
#define XlRange1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <Dialogs.hpp>
#include "OpExcel.hpp"
#include "OpShared.hpp"
#include "OpXL2K.hpp"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TLabel *Label4;
    TLabel *Label5;
    TLabel *Label6;
    TLabel *Label7;
    TLabel *Label8;
    TLabel *Label9;
    TLabel *Label10;
    TLabel *Label11;
    TLabel *Label12;
    TLabel *Label13;
    TLabel *Label14;
    TComboBox *BorderWeightCB;
    TGroupBox *GroupBox1;
    TCheckBox *BorderLeftcb;
    TCheckBox *BorderRightcb;
    TCheckBox *BorderTopcb;
    TCheckBox *BorderBottomcb;
    TComboBox *BorderStyleCB;
    TButton *ColorBtn;
    TGroupBox *GroupBox2;
    TCheckBox *Boldcb;
    TCheckBox *Italiccb;
    TCheckBox *Underlinecb;
    TCheckBox *Strikethroughcb;
    TButton *FontColorBtn;
    TEdit *FontNameEdit;
    TEdit *FontSizeEdit;
    TComboBox *hAligncb;
    TComboBox *vAligncb;
    TEdit *IndentEdit;
    TComboBox *Orientationcb;
    TComboBox *Patterncb;
    TButton *PatternColorBtn;
    TEdit *RotateEdit;
    TCheckBox *ShrinkToFitcb;
    TEdit *SimpleTextEdit;
    TEdit *AddressEdit;
    TButton *ClearAllBtn;
    TTrackBar *ColWidthTB;
    TTrackBar *RowHeightTB;
    TButton *AutoFitColBtn;
    TButton *AutoFitRowBtn;
    TCheckBox *WrapTextcb;
    TButton *SetAddressBtn;
    TColorDialog *ColorDialog1;
    TOpExcel *OpExcel1;
    void __fastcall FormShow(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall BorderWeightCBChange(TObject *Sender);
    void __fastcall BorderStyleCBChange(TObject *Sender);
    void __fastcall BorderLeftcbClick(TObject *Sender);
    void __fastcall BorderRightcbClick(TObject *Sender);
    void __fastcall BorderTopcbClick(TObject *Sender);
    void __fastcall BorderBottomcbClick(TObject *Sender);
    void __fastcall ColorBtnClick(TObject *Sender);
    void __fastcall FontColorBtnClick(TObject *Sender);
    void __fastcall PatternColorBtnClick(TObject *Sender);
    void __fastcall FontNameEditExit(TObject *Sender);
    void __fastcall FontSizeEditExit(TObject *Sender);
    void __fastcall IndentEditExit(TObject *Sender);
    void __fastcall RotateEditExit(TObject *Sender);
    void __fastcall ShrinkToFitcbClick(TObject *Sender);
    void __fastcall BoldcbClick(TObject *Sender);
    void __fastcall ItaliccbClick(TObject *Sender);
    void __fastcall UnderlinecbClick(TObject *Sender);
    void __fastcall StrikethroughcbClick(TObject *Sender);
    void __fastcall PatterncbChange(TObject *Sender);
    void __fastcall hAligncbChange(TObject *Sender);
    void __fastcall vAligncbChange(TObject *Sender);
    void __fastcall OrientationcbChange(TObject *Sender);
    void __fastcall ClearAllBtnClick(TObject *Sender);
    void __fastcall ColWidthTBChange(TObject *Sender);
    void __fastcall RowHeightTBChange(TObject *Sender);
    void __fastcall AutoFitColBtnClick(TObject *Sender);
    void __fastcall AutoFitRowBtnClick(TObject *Sender);
    void __fastcall WrapTextcbClick(TObject *Sender);
    void __fastcall SimpleTextEditChange(TObject *Sender);
    void __fastcall SetAddressBtnClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
