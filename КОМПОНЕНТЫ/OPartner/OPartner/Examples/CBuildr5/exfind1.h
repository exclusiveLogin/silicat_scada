//---------------------------------------------------------------------------
#ifndef ExFind1H
#define ExFind1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "OpShared.hpp"
#include "OpWord.hpp"
#include "OpWrd2k.hpp"
#include <Dialogs.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TPanel *Panel1;
    TButton *btnOpenDoc;
    TButton *btnCloseDoc;
    TButton *btnFind;
    TButton *btnFindNext;
    TEdit *edtFindText;
    TOpenDialog *OpenDialog1;
    TOpWord *OpWord1;
    void __fastcall btnFindClick(TObject *Sender);
    void __fastcall btnFindNextClick(TObject *Sender);
    void __fastcall OpWord1OpDisconnect(TObject *Sender);
    void __fastcall btnOpenDocClick(TObject *Sender);
    void __fastcall btnCloseDocClick(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall OpWord1DocumentOpen(TObject *Sender, _Document *Doc);
private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
