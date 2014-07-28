// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acControls.pas' rev: 5.00

#ifndef acControlsHPP
#define acControlsHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <Menus.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Accontrols
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TStyleFont;
class PASCALIMPLEMENTATION TStyleFont : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	Graphics::TColor FColor;
	Graphics::TFontStyles FStyle;
	bool FUsed;
	
public:
	__fastcall TStyleFont(void);
	
__published:
	__property Graphics::TColor Color = {read=FColor, write=FColor, default=-2147483640};
	__property Graphics::TFontStyles Style = {read=FStyle, write=FStyle, nodefault};
	__property bool Used = {read=FUsed, write=FUsed, nodefault};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TStyleFont(void) { }
	#pragma option pop
	
};


#pragma option push -b-
enum TVerticalAlignment { vaTopJustify, vaBottomJustify, vaCenter };
#pragma option pop

class DELPHICLASS TacCheckBox;
class PASCALIMPLEMENTATION TacCheckBox : public Stdctrls::TCustomCheckBox 
{
	typedef Stdctrls::TCustomCheckBox inherited;
	
private:
	AnsiString FAbout;
	Classes::TAlignment FAlignmentHorz;
	TVerticalAlignment FAlignmentVert;
	bool FCtl3D;
	bool FWordWrap;
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	void __fastcall SetAlignmentHorz(Classes::TAlignment Value);
	void __fastcall SetAlignmentVert(TVerticalAlignment Value);
	Classes::TLeftRight __fastcall GetBoxAlignment(void);
	void __fastcall SetBoxAlignment(Classes::TLeftRight Value);
	HIDESBASE void __fastcall SetCtl3D(bool Value);
	void __fastcall SetWordWrap(bool Value);
	HIDESBASE MESSAGE void __fastcall CMParentCtl3DChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	
protected:
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	
public:
	__fastcall virtual TacCheckBox(Classes::TComponent* aOwner);
	
__published:
	__property AnsiString About = {read=FAbout, write=FAbout, stored=false};
	__property Classes::TAlignment AlignmentHorz = {read=FAlignmentHorz, write=SetAlignmentHorz, nodefault
		};
	__property TVerticalAlignment AlignmentVert = {read=FAlignmentVert, write=SetAlignmentVert, default=2
		};
	__property Classes::TLeftRight BoxAlignment = {read=GetBoxAlignment, write=SetBoxAlignment, default=0
		};
	__property bool Ctl3D = {read=FCtl3D, write=SetCtl3D, default=1};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, nodefault};
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property Align ;
	__property AllowGrayed ;
	__property Action ;
	__property Anchors ;
	__property BiDiMode ;
	__property Caption ;
	__property Checked ;
	__property Color ;
	__property Constraints ;
	__property DragCursor ;
	__property DragKind ;
	__property DragMode ;
	__property Enabled ;
	__property Font ;
	__property ParentBiDiMode ;
	__property ParentCtl3D ;
	__property ParentColor ;
	__property ParentFont ;
	__property ParentShowHint ;
	__property PopupMenu ;
	__property ShowHint ;
	__property State ;
	__property TabOrder ;
	__property TabStop ;
	__property Visible ;
	__property OnClick ;
	__property OnContextPopup ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacCheckBox(HWND ParentWindow) : Stdctrls::TCustomCheckBox(
		ParentWindow) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TWinControl.Destroy */ inline __fastcall virtual ~TacCheckBox(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacRadioButton;
class PASCALIMPLEMENTATION TacRadioButton : public Stdctrls::TButtonControl 
{
	typedef Stdctrls::TButtonControl inherited;
	
private:
	AnsiString FAbout;
	Classes::TAlignment FAlignmentHorz;
	TVerticalAlignment FAlignmentVert;
	Classes::TAlignment FBoxAlignment;
	bool FChecked;
	bool FCtl3D;
	bool FWordWrap;
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	void __fastcall SetAlignmentHorz(Classes::TAlignment Value);
	void __fastcall SetAlignmentVert(TVerticalAlignment Value);
	void __fastcall SetBoxAlignment(Classes::TLeftRight Value);
	HIDESBASE void __fastcall SetCtl3D(bool Value);
	void __fastcall SetWordWrap(bool Value);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall CMParentCtl3DChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Messages::TWMKey &Message);
	MESSAGE void __fastcall CNCommand(Messages::TWMCommand &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	
protected:
	virtual bool __fastcall GetChecked(void);
	virtual void __fastcall SetChecked(bool Value);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd(void);
	
public:
	__fastcall virtual TacRadioButton(Classes::TComponent* aOwner);
	
__published:
	__property AnsiString About = {read=FAbout, write=FAbout, stored=false};
	__property Classes::TAlignment AlignmentHorz = {read=FAlignmentHorz, write=SetAlignmentHorz, nodefault
		};
	__property TVerticalAlignment AlignmentVert = {read=FAlignmentVert, write=SetAlignmentVert, default=2
		};
	__property Classes::TLeftRight BoxAlignment = {read=FBoxAlignment, write=SetBoxAlignment, default=0
		};
	__property bool Checked = {read=GetChecked, write=SetChecked, nodefault};
	__property bool Ctl3D = {read=FCtl3D, write=SetCtl3D, default=1};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, nodefault};
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property Align ;
	__property Action ;
	__property Anchors ;
	__property BiDiMode ;
	__property Caption ;
	__property Color ;
	__property Constraints ;
	__property DragCursor ;
	__property DragKind ;
	__property DragMode ;
	__property Enabled ;
	__property Font ;
	__property ParentBiDiMode ;
	__property ParentColor ;
	__property ParentCtl3D ;
	__property ParentFont ;
	__property ParentShowHint ;
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder ;
	__property TabStop ;
	__property Visible ;
	__property OnClick ;
	__property OnContextPopup ;
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacRadioButton(HWND ParentWindow) : Stdctrls::TButtonControl(
		ParentWindow) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TWinControl.Destroy */ inline __fastcall virtual ~TacRadioButton(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacCheckGroupBox;
class PASCALIMPLEMENTATION TacCheckGroupBox : public Stdctrls::TGroupBox 
{
	typedef Stdctrls::TGroupBox inherited;
	
private:
	AnsiString FAbout;
	bool FAutoDisable;
	TacCheckBox* FCheckBox;
	Classes::TNotifyEvent FOnCheckBoxClick;
	void __fastcall AdjustCheckBounds(void);
	Classes::TLeftRight __fastcall GetBoxAlignment(void);
	void __fastcall SetBoxAlignment(Classes::TLeftRight Value);
	AnsiString __fastcall GetCaption();
	void __fastcall SetCaption(AnsiString Value);
	Controls::TCursor __fastcall GetCursor(void);
	HIDESBASE void __fastcall SetCursor(Controls::TCursor Value);
	bool __fastcall GetChecked(void);
	void __fastcall SetChecked(bool Value);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMParentCtl3DChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Messages::TMessage &Message);
	
protected:
	virtual void __fastcall CheckBoxClick(System::TObject* Sender);
	
public:
	__fastcall virtual TacCheckGroupBox(Classes::TComponent* aOwner);
	__fastcall virtual ~TacCheckGroupBox(void);
	
__published:
	__property AnsiString About = {read=FAbout, write=FAbout, stored=false};
	__property bool AutoDisable = {read=FAutoDisable, write=FAutoDisable, default=1};
	__property Classes::TLeftRight BoxAlignment = {read=GetBoxAlignment, write=SetBoxAlignment, default=0
		};
	__property AnsiString Caption = {read=GetCaption, write=SetCaption};
	__property bool Checked = {read=GetChecked, write=SetChecked, nodefault};
	__property Controls::TCursor Cursor = {read=GetCursor, write=SetCursor, nodefault};
	__property Classes::TNotifyEvent OnCheckBoxClick = {read=FOnCheckBoxClick, write=FOnCheckBoxClick};
		
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacCheckGroupBox(HWND ParentWindow) : Stdctrls::TGroupBox(
		ParentWindow) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Accontrols */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Accontrols;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acControls
