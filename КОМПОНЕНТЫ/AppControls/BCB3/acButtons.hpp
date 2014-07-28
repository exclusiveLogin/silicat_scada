// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acButtons.pas' rev: 3.00

#ifndef acButtonsHPP
#define acButtonsHPP
#include <acGraphics.hpp>
#include <Commctrl.hpp>
#include <StdCtrls.hpp>
#include <Graphics.hpp>
#include <Forms.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acbuttons
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacButton;
class PASCALIMPLEMENTATION TacButton : public Stdctrls::TButton 
{
	typedef Stdctrls::TButton inherited;
	
private:
	System::AnsiString FAbout;
	bool FWordWrap;
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	void __fastcall SetWordWrap(bool Value);
	
protected:
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	
public:
	__fastcall virtual TacButton(Classes::TComponent* aOwner);
	
__published:
	__property Align ;
	__property System::AnsiString About = {read=FAbout, write=FAbout, stored=false};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, nodefault};
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
public:
	/* TWinControl.CreateParented */ __fastcall TacButton(HWND ParentWindow) : Stdctrls::TButton(ParentWindow
		) { }
	/* TWinControl.Destroy */ __fastcall virtual ~TacButton(void) { }
	
};

enum TacButtonLayout { blGlyphLeft, blGlyphRight, blGlyphTop, blGlyphBottom };

enum TacButtonState { bsUp, bsDisabled, bsDown, bsExclusive };

enum TacButtonStyle { bsAutoDetect, bsWin31, bsNew };

typedef Shortint TNumGlyphs;

enum TacBitBtnKind { bkCustom, bkOK, bkCancel, bkHelp, bkYes, bkNo, bkClose, bkAbort, bkRetry, bkIgnore, 
	bkAll };

class DELPHICLASS TacBitBtn;
class PASCALIMPLEMENTATION TacBitBtn : public Acbuttons::TacButton 
{
	typedef Acbuttons::TacButton inherited;
	
private:
	Graphics::TCanvas* FCanvas;
	void *FGlyph;
	TacButtonStyle FStyle;
	TacBitBtnKind FKind;
	TacButtonLayout FLayout;
	int FSpacing;
	int FMargin;
	bool IsFocused;
	bool FModifiedGlyph;
	MESSAGE void __fastcall CNMeasureItem(Messages::TWMMeasureItem &Message);
	MESSAGE void __fastcall CNDrawItem(Messages::TWMDrawItem &Message);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMParentColorChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Messages::TWMMouse &Message);
	void __fastcall DrawItem(const tagDRAWITEMSTRUCT &DrawItemStruct);
	void __fastcall SetGlyph(Graphics::TBitmap* Value);
	Graphics::TBitmap* __fastcall GetGlyph(void);
	TNumGlyphs __fastcall GetNumGlyphs(void);
	void __fastcall SetNumGlyphs(TNumGlyphs Value);
	void __fastcall GlyphChanged(System::TObject* Sender);
	bool __fastcall IsCustom(void);
	bool __fastcall IsCustomCaption(void);
	void __fastcall SetStyle(TacButtonStyle Value);
	void __fastcall SetKind(TacBitBtnKind Value);
	TacBitBtnKind __fastcall GetKind(void);
	void __fastcall SetLayout(TacButtonLayout Value);
	void __fastcall SetSpacing(int Value);
	void __fastcall SetMargin(int Value);
	
protected:
	virtual void __fastcall CreateHandle(void);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	DYNAMIC HPALETTE __fastcall GetPalette(void);
	virtual void __fastcall SetButtonStyle(bool ADefault);
	
public:
	__fastcall virtual TacBitBtn(Classes::TComponent* aOwner);
	__fastcall virtual ~TacBitBtn(void);
	DYNAMIC void __fastcall Click(void);
	
__published:
	__property Color ;
	__property ParentColor ;
	__property Cancel  = {stored=IsCustom, default=0};
	__property Caption  = {stored=IsCustomCaption};
	__property Default  = {stored=IsCustom, default=0};
	__property Graphics::TBitmap* Glyph = {read=GetGlyph, write=SetGlyph, stored=IsCustom};
	__property TacBitBtnKind Kind = {read=GetKind, write=SetKind, default=0};
	__property TacButtonLayout Layout = {read=FLayout, write=SetLayout, default=0};
	__property int Margin = {read=FMargin, write=SetMargin, default=-1};
	__property ModalResult  = {stored=IsCustom, default=0};
	__property TNumGlyphs NumGlyphs = {read=GetNumGlyphs, write=SetNumGlyphs, stored=IsCustom, default=1
		};
	__property TacButtonStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property int Spacing = {read=FSpacing, write=SetSpacing, default=4};
public:
	/* TWinControl.CreateParented */ __fastcall TacBitBtn(HWND ParentWindow) : Acbuttons::TacButton(ParentWindow
		) { }
	
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acbuttons */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acbuttons;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acButtons
