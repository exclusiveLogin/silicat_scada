//---------------------------------------------------------------------------
#ifndef ExSMail1H
#define ExSMail1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "OpOlk2k.hpp"
#include "OpOutlk.hpp"
#include "OpShared.hpp"
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TPanel *Panel1;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TLabel *Label4;
    TEdit *edtTo;
    TEdit *edtCC;
    TEdit *edtBcc;
    TEdit *edtSubject;
    TButton *btnSend;
    TPanel *Panel2;
    TMemo *mmoBody;
    TOpOutlook *OpOutlook1;
    void __fastcall btnSendClick(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
