//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "ExPpt1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "OpPower"
#pragma link "OpPpt2k"
#pragma link "OpShared"
#pragma resource "*.dfm"
TForm1 *Form1;
TOpPresentation* Pres;
Opppt2k::_di__Presentation IPres;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
  cbxLayout->ItemIndex = 0;
  cbxTransitionEffect->ItemIndex = 0;
  cbxTransitionSpeed->ItemIndex = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnOpenPresentationClick(TObject *Sender)
{
  if (OpenDialog1->Execute()) {
    OpPowerPoint1->Connected = true;
    Pres = OpPowerPoint1->OpenPresentation(OpenDialog1->FileName);
    IPres = Pres->AsPresentation;
    IPres->SlideShowSettings->AdvanceMode = ppSlideShowUseSlideTimings;
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
  btnClosePresentationClick(0);
  OpPowerPoint1->Quit();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnRunSlideShowClick(TObject *Sender)
{
  if (Pres->Slides->Count > 0)
    for (int i = 0; i < Pres->Slides->Count; i++) {
      TOpSlide* Sld = Pres->Slides->Items[i];
      Sld->Layout = TOpPpSlideLayout(cbxLayout->ItemIndex);
      Sld->TransitionEffect->EntryEffect =
        TOpPpEntryEffect(cbxTransitionEffect->ItemIndex);
      Sld->TransitionEffect->Speed =
        TOpPpTransitionSpeed(cbxTransitionSpeed->ItemIndex);
      Sld->TransitionEffect->AdvanceOnClick = chkAdvanceOnClick->Checked;
      Sld->TransitionEffect->AdvanceOnTime  = chkAdvanceOnTime->Checked;
      if (chkAdvanceOnTime->Checked)
        Sld->TransitionEffect->AdvanceTime = StrToIntDef(edtAdvanceTime->Text, 10);
      Pres->RunSlideShow();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnClosePresentationClick(TObject *Sender)
{
  if (Pres)
    delete Pres;
  Pres = 0;
  OpPowerPoint1->Connected = false;
}
//---------------------------------------------------------------------------

