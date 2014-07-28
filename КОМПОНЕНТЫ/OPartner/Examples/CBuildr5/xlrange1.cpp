//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "XlRange1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "OpExcel"
#pragma link "OpShared"
#pragma link "OpXL2K"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormShow(TObject *Sender)
{
  int i;
  OpExcel1->Connected = true;
  OpExcel1->Visible = true;
  for (i=0; i <= ComponentCount - 1; i++) {
    if (dynamic_cast<TComboBox *>(Components[i]))
      dynamic_cast<TComboBox *>(Components[i])->ItemIndex = 0;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
  OpExcel1->Connected = false;        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BorderWeightCBChange(TObject *Sender)
{
  switch (BorderWeightCB->ItemIndex) {
    case 0 : OpExcel1->RangeByName['r']->BorderLineWeight = xlbwHairline; break;
    case 1 : OpExcel1->RangeByName['r']->BorderLineWeight = xlbwThin; break;
    case 2 : OpExcel1->RangeByName['r']->BorderLineWeight = xlbwMedium; break;
    case 3 : OpExcel1->RangeByName['r']->BorderLineWeight = xlbwThick; break;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BorderStyleCBChange(TObject *Sender)
{
  switch (BorderStyleCB->ItemIndex) {
    case 0 : OpExcel1->RangeByName['r']->BorderStyle = xlblsContinuous; break;
    case 1 : OpExcel1->RangeByName['r']->BorderStyle = xlblsDash; break;
    case 2 : OpExcel1->RangeByName['r']->BorderStyle = xlblsDashDot; break;
    case 3 : OpExcel1->RangeByName['r']->BorderStyle = xlblsDashDotDot; break;
    case 4 : OpExcel1->RangeByName['r']->BorderStyle = xlblsDot; break;
    case 5 : OpExcel1->RangeByName['r']->BorderStyle = xlblsDouble; break;
    case 6 : OpExcel1->RangeByName['r']->BorderStyle = xlblsLineStyleNone; break;
    case 7 : OpExcel1->RangeByName['r']->BorderStyle = xlblsSlantDashDot; break;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BorderLeftcbClick(TObject *Sender)
{
  if (BorderLeftcb->Checked)
    OpExcel1->RangeByName['r']->Borders = OpExcel1->RangeByName['r']->Borders << xlbLeft;
  else
    OpExcel1->RangeByName['r']->Borders = OpExcel1->RangeByName['r']->Borders >> xlbLeft;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BorderRightcbClick(TObject *Sender)
{
  if (BorderRightcb->Checked)
    OpExcel1->RangeByName['r']->Borders = OpExcel1->RangeByName['r']->Borders << xlbRight;
  else
    OpExcel1->RangeByName['r']->Borders = OpExcel1->RangeByName['r']->Borders >> xlbRight;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BorderTopcbClick(TObject *Sender)
{
  if (BorderTopcb->Checked) 
    OpExcel1->RangeByName['r']->Borders = OpExcel1->RangeByName['r']->Borders << xlbTop;
  else
    OpExcel1->RangeByName['r']->Borders = OpExcel1->RangeByName['r']->Borders >> xlbTop;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BorderBottomcbClick(TObject *Sender)
{
  if (BorderBottomcb->Checked)
    OpExcel1->RangeByName['r']->Borders = OpExcel1->RangeByName['r']->Borders << xlbBottom;
  else
    OpExcel1->RangeByName['r']->Borders = OpExcel1->RangeByName['r']->Borders >> xlbBottom;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ColorBtnClick(TObject *Sender)
{
  if (ColorDialog1->Execute())
    OpExcel1->RangeByName['r']->Color = ColorDialog1->Color;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FontColorBtnClick(TObject *Sender)
{
  if (ColorDialog1->Execute())
    OpExcel1->RangeByName['r']->FontColor = ColorDialog1->Color;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PatternColorBtnClick(TObject *Sender)
{
  if (ColorDialog1->Execute())
    OpExcel1->RangeByName['r']->PatternColor = ColorDialog1->Color;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FontNameEditExit(TObject *Sender)
{
  OpExcel1->RangeByName['r']->FontName = FontNameEdit->Text;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FontSizeEditExit(TObject *Sender)
{
  OpExcel1->RangeByName['r']->FontSize = StrToInt(FontSizeEdit->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::IndentEditExit(TObject *Sender)
{
  OpExcel1->RangeByName['r']->IndentLevel= StrToInt(IndentEdit->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::RotateEditExit(TObject *Sender)
{
  OpExcel1->RangeByName['r']->RotateDegrees= StrToInt(RotateEdit->Text);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ShrinkToFitcbClick(TObject *Sender)
{
  if (ShrinkToFitcb->Checked)
    OpExcel1->RangeByName['r']->ShrinkToFit = true;
  else
    OpExcel1->RangeByName['r']->ShrinkToFit = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BoldcbClick(TObject *Sender)
{
  if (Boldcb->Checked)
    OpExcel1->RangeByName['r']->FontAttributes = OpExcel1->RangeByName['r']->FontAttributes << xlfaBold;
  else
    OpExcel1->RangeByName['r']->FontAttributes = OpExcel1->RangeByName['r']->FontAttributes >> xlfaBold;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ItaliccbClick(TObject *Sender)
{
  if (Italiccb->Checked)
    OpExcel1->RangeByName['r']->FontAttributes = OpExcel1->RangeByName['r']->FontAttributes << xlfaItalic;
  else
    OpExcel1->RangeByName['r']->FontAttributes = OpExcel1->RangeByName['r']->FontAttributes >> xlfaItalic;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::UnderlinecbClick(TObject *Sender)
{
  if (Underlinecb->Checked)
    OpExcel1->RangeByName['r']->FontAttributes = OpExcel1->RangeByName['r']->FontAttributes << xlfaUnderline;
  else
    OpExcel1->RangeByName['r']->FontAttributes = OpExcel1->RangeByName['r']->FontAttributes >> xlfaUnderline;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::StrikethroughcbClick(TObject *Sender)
{
  if (Strikethroughcb->Checked)
    OpExcel1->RangeByName['r']->FontAttributes = OpExcel1->RangeByName['r']->FontAttributes << xlfaStrikethrough;
  else
    OpExcel1->RangeByName['r']->FontAttributes = OpExcel1->RangeByName['r']->FontAttributes >> xlfaStrikethrough;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PatterncbChange(TObject *Sender)
{
  switch (Patterncb->ItemIndex) {
    case 0 : OpExcel1->RangeByName['r']->Pattern = xlipPatternAutomatic; break;
    case 1 : OpExcel1->RangeByName['r']->Pattern = xlipPatternChecker; break;
    case 2 : OpExcel1->RangeByName['r']->Pattern = xlipPatternCrissCross; break;
    case 3 : OpExcel1->RangeByName['r']->Pattern = xlipPatternDown; break;
    case 4 : OpExcel1->RangeByName['r']->Pattern = xlipPatternGray16; break;
    case 5 : OpExcel1->RangeByName['r']->Pattern = xlipPatternGray25; break;
    case 6 : OpExcel1->RangeByName['r']->Pattern = xlipPatternGray50; break;
    case 7 : OpExcel1->RangeByName['r']->Pattern = xlipPatternGray75; break;
    case 8 : OpExcel1->RangeByName['r']->Pattern = xlipPatternGray8; break;
    case 9 : OpExcel1->RangeByName['r']->Pattern = xlipPatternGrid; break;
    case 10 : OpExcel1->RangeByName['r']->Pattern = xlipPatternHorizontal; break;
    case 11 : OpExcel1->RangeByName['r']->Pattern = xlipPatternLightDown; break;
    case 12 : OpExcel1->RangeByName['r']->Pattern = xlipPatternLightHorizontal; break;
    case 13 : OpExcel1->RangeByName['r']->Pattern = xlipPatternLightUp; break;
    case 14 : OpExcel1->RangeByName['r']->Pattern = xlipPatternLightVertical; break;
    case 15 : OpExcel1->RangeByName['r']->Pattern = xlipPatternNone; break;
    case 16 : OpExcel1->RangeByName['r']->Pattern = xlipPatternSemiGray75; break;
    case 17 : OpExcel1->RangeByName['r']->Pattern = xlipPatternSolid; break;
    case 18 : OpExcel1->RangeByName['r']->Pattern = xlipPatternUp; break;
    case 19 : OpExcel1->RangeByName['r']->Pattern = xlipPatternVertical; break;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::hAligncbChange(TObject *Sender)
{
  switch (hAligncb->ItemIndex) {
    case 0 : OpExcel1->RangeByName['r']->HorizontalAlignment = xlchaGeneral; break;
    case 1 : OpExcel1->RangeByName['r']->HorizontalAlignment = xlchaLeft; break;
    case 2 : OpExcel1->RangeByName['r']->HorizontalAlignment = xlchaCenter; break;
    case 3 : OpExcel1->RangeByName['r']->HorizontalAlignment = xlchaRight; break;
    case 4 : OpExcel1->RangeByName['r']->HorizontalAlignment = xlchaFill; break;
    case 5 : OpExcel1->RangeByName['r']->HorizontalAlignment = xlchaJustify; break;
    case 6 : OpExcel1->RangeByName['r']->HorizontalAlignment = xlchaCenterAcrossSelection; break;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::vAligncbChange(TObject *Sender)
{
  switch (vAligncb->ItemIndex) {
    case 0 : OpExcel1->RangeByName['r']->VerticalAlignment = xlcvaTop; break;
    case 1 : OpExcel1->RangeByName['r']->VerticalAlignment = xlcvaCenter; break;
    case 2 : OpExcel1->RangeByName['r']->VerticalAlignment = xlcvaBottom; break;
    case 3 : OpExcel1->RangeByName['r']->VerticalAlignment = xlcvaJustify; break;
    case 4 : OpExcel1->RangeByName['r']->VerticalAlignment = xlcvaDistributed; break;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::OrientationcbChange(TObject *Sender)
{
  switch (Orientationcb->ItemIndex) {
    case 0 : OpExcel1->RangeByName['r']->Orientation = xlcoDownward; break;
    case 1 : OpExcel1->RangeByName['r']->Orientation = xlcoHorizontal; break;
    case 2 : OpExcel1->RangeByName['r']->Orientation = xlcoUpward; break;
    case 3 : OpExcel1->RangeByName['r']->Orientation = xlcoVertical; break;
    case 4 : OpExcel1->RangeByName['r']->Orientation = xlcoRotated; break;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ClearAllBtnClick(TObject *Sender)
{
  OpExcel1->RangeByName['r']->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ColWidthTBChange(TObject *Sender)
{
  OpExcel1->RangeByName['r']->ColumnWidth = ColWidthTB->Position;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::RowHeightTBChange(TObject *Sender)
{
  OpExcel1->RangeByName['r']->RowHeight = RowHeightTB->Position;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AutoFitColBtnClick(TObject *Sender)
{
  OpExcel1->RangeByName['r']->AutoFitColumns();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AutoFitRowBtnClick(TObject *Sender)
{
  OpExcel1->RangeByName['r']->AutoFitRows();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::WrapTextcbClick(TObject *Sender)
{
  if (WrapTextcb->Checked)
    OpExcel1->RangeByName['r']->WrapText = true;
  else
    OpExcel1->RangeByName['r']->WrapText = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SimpleTextEditChange(TObject *Sender)
{
  OpExcel1->RangeByName['r']->SimpleText = SimpleTextEdit->Text;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SetAddressBtnClick(TObject *Sender)
{
  ClearAllBtnClick(this);
  OpExcel1->RangeByName['r']->Address = AddressEdit->Text;
}
//---------------------------------------------------------------------------
