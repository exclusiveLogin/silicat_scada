//---------------------------------------------------------------------------
#ifndef ExAppen1H
#define ExAppen1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "OpShared.hpp"
#include "OpWord.hpp"
#include "OpWrd2k.hpp"
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TButton *btnNewDocument;
    TButton *btnAppendDocument;
    TOpenDialog *OpenDialog1;
    TOpWord *OpWord1;
    void __fastcall btnNewDocumentClick(TObject *Sender);
    void __fastcall btnAppendDocumentClick(TObject *Sender);
    void __fastcall FormActivate(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
