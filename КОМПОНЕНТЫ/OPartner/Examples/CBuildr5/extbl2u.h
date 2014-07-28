//---------------------------------------------------------------------------
#ifndef ExTbl2uH
#define ExTbl2uH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
#include "OpShared.hpp"
#include "OpWord.hpp"
#include "OpWrd2k.hpp"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TLabel *Label1;
    TLabel *Label2;
    TButton *btnUpdate;
    TStringGrid *gridTableData;
    TEdit *edtCol1Header;
    TEdit *edtCol2Header;
    TEdit *edtCol3Header;
    TOpWord *OpWord1;
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall btnUpdateClick(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
