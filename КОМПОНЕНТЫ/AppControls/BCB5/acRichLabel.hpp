// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acRichLabel.pas' rev: 5.00

#ifndef acRichLabelHPP
#define acRichLabelHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acLabels.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acrichlabel
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacRichLabel;
class PASCALIMPLEMENTATION TacRichLabel : public Aclabels::TacBaseLabel 
{
	typedef Aclabels::TacBaseLabel inherited;
	
private:
	bool FAutoHeight;
	Word FMarginHorz;
	Word FMarginVert;
	bool FPlainText;
	char FTagOpen;
	char FTagClose;
	Graphics::TColor FShadowColor;
	bool FShowFrame;
	bool FShowShadow;
	bool FWordWrap;
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Messages::TMessage &Message);
	void __fastcall SetAutoHeight(bool Value);
	void __fastcall SetPlainText(bool Value);
	void __fastcall SetMarginHorz(Word Value);
	void __fastcall SetMarginVert(Word Value);
	void __fastcall SetShadowColor(Graphics::TColor Value);
	void __fastcall SetShowFrame(bool Value);
	void __fastcall SetShowShadow(bool Value);
	void __fastcall SetTagOpen(char Value);
	void __fastcall SetTagClose(char Value);
	HIDESBASE void __fastcall SetWordWrap(bool Value);
	
protected:
	virtual void __fastcall Paint(void);
	
public:
	__fastcall virtual TacRichLabel(Classes::TComponent* aOwner);
	
__published:
	__property bool AutoHeight = {read=FAutoHeight, write=SetAutoHeight, default=1};
	__property Word MarginHorz = {read=FMarginHorz, write=SetMarginHorz, nodefault};
	__property Word MarginVert = {read=FMarginVert, write=SetMarginVert, nodefault};
	__property bool PlainText = {read=FPlainText, write=SetPlainText, nodefault};
	__property Graphics::TColor ShadowColor = {read=FShadowColor, write=SetShadowColor, default=0};
	__property bool ShowFrame = {read=FShowFrame, write=SetShowFrame, nodefault};
	__property bool ShowShadow = {read=FShowShadow, write=SetShowShadow, nodefault};
	__property char TagOpen = {read=FTagOpen, write=SetTagOpen, default=91};
	__property char TagClose = {read=FTagClose, write=SetTagClose, default=93};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, default=0};
public:
	#pragma option push -w-inl
	/* TacBaseLabel.Destroy */ inline __fastcall virtual ~TacRichLabel(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
static const char DEFAULT_TAG_OPEN = '\x5b';
static const char DEFAULT_TAG_CLOSE = '\x5d';

}	/* namespace Acrichlabel */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acrichlabel;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acRichLabel
