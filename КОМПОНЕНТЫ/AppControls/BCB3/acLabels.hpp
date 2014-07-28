// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acLabels.pas' rev: 3.00

#ifndef acLabelsHPP
#define acLabelsHPP
#include <Menus.hpp>
#include <acGraphics.hpp>
#include <acControls.hpp>
#include <StdCtrls.hpp>
#include <Graphics.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Aclabels
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacBaseLabel;
class PASCALIMPLEMENTATION TacBaseLabel : public Stdctrls::TCustomLabel 
{
	typedef Stdctrls::TCustomLabel inherited;
	
private:
	System::AnsiString FAbout;
	bool FWordWrap;
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE void __fastcall SetWordWrap(bool Value);
	
protected:
	virtual void __fastcall DoMouseEnter(void);
	virtual void __fastcall DoMouseLeave(void);
	
public:
	Graphics::TBitmap* WorkBitmap;
	__fastcall virtual TacBaseLabel(Classes::TComponent* aOwner);
	__fastcall virtual ~TacBaseLabel(void);
	
__published:
	__property System::AnsiString About = {read=FAbout, write=FAbout, stored=false};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, nodefault};
	__property Align ;
	__property Alignment ;
	__property Caption ;
	__property Color ;
	__property DragCursor ;
	__property DragMode ;
	__property Enabled ;
	__property FocusControl ;
	__property Font ;
	__property ParentColor ;
	__property ParentFont ;
	__property ParentShowHint ;
	__property PopupMenu ;
	__property ShowAccelChar ;
	__property ShowHint ;
	__property Transparent ;
	__property Visible ;
	__property OnClick ;
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDrag ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnStartDrag ;
};

enum TacLabelEffectDirection { edUp, edDown, edLeft, edRight, edUpLeft, edUpRight, edDownLeft, edDownRight 
	};

class DELPHICLASS TacLabelEffect;
class DELPHICLASS TacLabel;
class DELPHICLASS TacLabelBlinking;
class PASCALIMPLEMENTATION TacLabelBlinking : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FEnabled;
	int FDelayVisible;
	int FDelayInvisible;
	TacLabel* acLabel;
	HWND FTimerHandle;
	void __fastcall SetEnabled(bool Value);
	void __fastcall SetDelayVisible(int Value);
	void __fastcall SetDelayInvisible(int Value);
	void __fastcall UpdateTimer(void);
	void __fastcall WndProc(Messages::TMessage &Message);
	
public:
	__fastcall TacLabelBlinking(TacLabel* aLabel);
	__fastcall virtual ~TacLabelBlinking(void);
	
__published:
	__property bool Enabled = {read=FEnabled, write=SetEnabled, nodefault};
	__property int DelayVisible = {read=FDelayVisible, write=SetDelayVisible, default=700};
	__property int DelayInvisible = {read=FDelayInvisible, write=SetDelayInvisible, default=400};
};

enum acLabels__4 { loPathEllipsis, loEndEllipsis, loEditControl };

typedef Set<acLabels__4, loPathEllipsis, loEditControl>  TacLabelOptions;

class PASCALIMPLEMENTATION TacLabel : public Aclabels::TacBaseLabel 
{
	typedef Aclabels::TacBaseLabel inherited;
	
private:
	TacLabelBlinking* FBlinking;
	Controls::TCursor FCursorClick;
	Accontrols::TStyleFont* FFontClick;
	Accontrols::TStyleFont* FFontHover;
	TacLabelEffect* FHighlight;
	TacLabelEffect* FShadow;
	TacLabelOptions FOptions;
	bool BlinkVisible;
	bool FLabelHover;
	bool FLabelClick;
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Messages::TMessage &Message);
	void __fastcall SetOptions(TacLabelOptions Value);
	void __fastcall SetLabelHover(bool Value);
	void __fastcall SetLabelClick(bool Value);
	__property bool LabelHover = {read=FLabelHover, write=SetLabelHover, nodefault};
	__property bool LabelClick = {read=FLabelClick, write=SetLabelClick, nodefault};
	
protected:
	virtual void __fastcall Paint(void);
	virtual void __fastcall DoMouseEnter(void);
	virtual void __fastcall DoMouseLeave(void);
	
public:
	__fastcall virtual TacLabel(Classes::TComponent* aOwner);
	__fastcall virtual ~TacLabel(void);
	
__published:
	__property AutoSize ;
	__property TacLabelBlinking* Blinking = {read=FBlinking, write=FBlinking};
	__property Controls::TCursor CursorClick = {read=FCursorClick, write=FCursorClick, nodefault};
	__property Accontrols::TStyleFont* FontHover = {read=FFontHover, write=FFontHover};
	__property Accontrols::TStyleFont* FontClick = {read=FFontClick, write=FFontClick};
	__property TacLabelEffect* Highlight = {read=FHighlight, write=FHighlight};
	__property TacLabelEffect* Shadow = {read=FShadow, write=FShadow};
	__property TacLabelOptions Options = {read=FOptions, write=SetOptions, nodefault};
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
};

class PASCALIMPLEMENTATION TacLabelEffect : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FEnabled;
	Graphics::TColor FColor;
	Graphics::TColor FColorHover;
	Graphics::TColor FColorClick;
	Byte FDepth;
	TacLabelEffectDirection FDirection;
	TacLabel* acLabel;
	void __fastcall SetEnabled(bool Value);
	void __fastcall SetColor(Graphics::TColor Value);
	void __fastcall SetColorHover(Graphics::TColor Value);
	void __fastcall SetColorClick(Graphics::TColor Value);
	void __fastcall SetDepth(Byte Value);
	void __fastcall SetDirection(TacLabelEffectDirection Value);
	
public:
	__fastcall TacLabelEffect(TacLabel* AacLabel);
	
__published:
	__property bool Enabled = {read=FEnabled, write=SetEnabled, nodefault};
	__property Graphics::TColor Color = {read=FColor, write=SetColor, nodefault};
	__property Graphics::TColor ColorHover = {read=FColorHover, write=SetColorHover, nodefault};
	__property Graphics::TColor ColorClick = {read=FColorClick, write=SetColorClick, nodefault};
	__property Byte Depth = {read=FDepth, write=SetDepth, nodefault};
	__property TacLabelEffectDirection Direction = {read=FDirection, write=SetDirection, nodefault};
public:
		
	/* TPersistent.Destroy */ __fastcall virtual ~TacLabelEffect(void) { }
	
};

class DELPHICLASS TacEmailParams;
class PASCALIMPLEMENTATION TacEmailParams : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	System::AnsiString FAddress;
	System::AnsiString FName;
	System::AnsiString FCarbonCopy;
	System::AnsiString FBlindCarbonCopy;
	System::AnsiString FSubject;
	System::AnsiString FMessage;
	
__published:
	__property System::AnsiString Address = {read=FAddress, write=FAddress};
	__property System::AnsiString Name = {read=FName, write=FName};
	__property System::AnsiString CarbonCopy = {read=FCarbonCopy, write=FCarbonCopy};
	__property System::AnsiString BlindCarbonCopy = {read=FBlindCarbonCopy, write=FBlindCarbonCopy};
	__property System::AnsiString Subject = {read=FSubject, write=FSubject};
	__property System::AnsiString Message = {read=FMessage, write=FMessage};
public:
	/* TPersistent.Destroy */ __fastcall virtual ~TacEmailParams(void) { }
	
public:
	/* TObject.Create */ __fastcall TacEmailParams(void) : Classes::TPersistent() { }
	
};

enum TacURLLabelKind { ukWWW, ukEmail };

class DELPHICLASS TacURLLabel;
class PASCALIMPLEMENTATION TacURLLabel : public Aclabels::TacLabel 
{
	typedef Aclabels::TacLabel inherited;
	
private:
	TacEmailParams* FEmail;
	TacURLLabelKind FKind;
	System::AnsiString FURL;
	bool FURLInNewWindow;
	
protected:
	DYNAMIC void __fastcall Click(void);
	
public:
	__fastcall virtual TacURLLabel(Classes::TComponent* aOwner);
	__fastcall virtual ~TacURLLabel(void);
	void __fastcall Execute(void);
	
__published:
	__property TacEmailParams* Email = {read=FEmail, write=FEmail};
	__property TacURLLabelKind Kind = {read=FKind, write=FKind, nodefault};
	__property System::AnsiString URL = {read=FURL, write=FURL};
	__property bool URLInNewWindow = {read=FURLInNewWindow, write=FURLInNewWindow, default=1};
};

//-- var, const, procedure ---------------------------------------------------
#define DEFAULT_BLINKING_VISIBLE (Word)(700)
#define DEFAULT_BLINKING_INVISIBLE (Word)(400)

}	/* namespace Aclabels */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Aclabels;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acLabels
