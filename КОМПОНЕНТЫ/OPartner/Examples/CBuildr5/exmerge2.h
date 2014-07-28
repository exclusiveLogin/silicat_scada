//---------------------------------------------------------------------------
#ifndef ExMerge2H
#define ExMerge2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
    TLabel *lblODBC;
    TLabel *lblSQL;
    TMemo *mmoSQL;
    TBitBtn *BitBtn1;
    TBitBtn *BitBtn2;
    TEdit *edtAlias;
private:	// User declarations
public:		// User declarations
    __fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
