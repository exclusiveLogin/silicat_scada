// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acButtons.pas' rev: 4.00

#ifndef acButtonsHPP
#define acButtonsHPP

#pragma delphiheader begin
#pragma option push -w-
#include <acGraphics.hpp>	// Pascal unit
#include <Commctrl.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acbuttons
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacButton;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacButton : public Stdctrls::TButton 
{
	typedef Stdctrls::TButton inherited;
	
private:
	AnsiString FAbout;
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
	__property AnsiString About = {read=FAbout, write=FAbout, stored=false};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, nodefault};
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacButton(HWND ParentWindow) : Stdctrls::TButton(
		ParentWindow) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TWinControl.Destroy */ inline __fastcall virtual ~TacButton(void) { }
	#pragma option pop
	
};

#pragma pack(pop)

#pragma option push -b-
enum TacButtonLayout { blGlyphLeft, blGlyphRight, blGlyphTop, blGlyphBottom };
#pragma option pop

#pragma option push -b-
enum TacButtonState { bsUp, bsDisabled, bsDown, bsExclusive };
#pragma option pop

#pragma option push -b-
enum TacButtonStyle { bsAutoDetect, bsWin31, bsNew };
#pragma option pop

typedef Shortint TNumGlyphs;

#pragma option push -b-
enum TacBitBtnKind { bkCustom, bkOK, bkCancel, bkHelp, bkYes, bkNo, bkClose, bkAbort, bkRetry, bkIgnore, 
	bkAll };
#pragma option pop

class DELPHICLASS TacBitBtn;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacBitBtn : public TacButton 
{
	typedef TacButton inherited;
	
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
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacBitBtn(HWND ParentWindow) : TacButton(ParentWindow
		) { }
	#pragma option pop
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acbuttons */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acbuttons;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acButtons
