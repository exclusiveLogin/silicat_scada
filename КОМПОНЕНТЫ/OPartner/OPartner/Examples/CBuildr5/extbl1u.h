//---------------------------------------------------------------------------
#ifndef ExTbl1uH
#define ExTbl1uH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Grids.hpp>
#include <Forms.hpp>
#include "OpModels.hpp"
#include "OpShared.hpp"
#include "OpWord.hpp"
#include "OpWrd2k.hpp"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TLabel *Label2;
    TButton *btnUpdate;
    TStringGrid *StringGrid1;
    TOpWord *OpWord1;
    TOpEventModel *OpEventModel1;
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall btnUpdateClick(TObject *Sender);
    void __fastcall OpEventModel1GetColCount(TObject *Sender,
          int &ColCount);
    void __fastcall OpEventModel1GetColHeaders(TObject *Sender,
          Variant &ColHeaders);
    void __fastcall OpEventModel1GetData(TObject *Sender, int Index,
          int Row, TOpRetrievalMode Mode, int &Size, Variant &Data);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
