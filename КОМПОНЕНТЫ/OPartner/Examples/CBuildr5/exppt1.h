//---------------------------------------------------------------------------
#ifndef ExPpt1H
#define ExPpt1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "OpPower.hpp"
#include "OpPpt2k.hpp"
#include "OpShared.hpp"
#include <Dialogs.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TButton *btnOpenPresentation;
    TButton *btnRunSlideShow;
    TButton *btnClosePresentation;
    TGroupBox *gbOptions;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TLabel *Label4;
    TComboBox *cbxTransitionEffect;
    TComboBox *cbxLayout;
    TEdit *edtAdvanceTime;
    TComboBox *cbxTransitionSpeed;
    TOpPowerPoint *OpPowerPoint1;
    TOpenDialog *OpenDialog1;
    TCheckBox *chkAdvanceOnClick;
    TCheckBox *chkAdvanceOnTime;
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall btnOpenPresentationClick(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall btnRunSlideShowClick(TObject *Sender);
    void __fastcall btnClosePresentationClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
