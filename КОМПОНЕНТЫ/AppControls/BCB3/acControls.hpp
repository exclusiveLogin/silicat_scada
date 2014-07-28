// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acControls.pas' rev: 3.00

#ifndef acControlsHPP
#define acControlsHPP
#include <Menus.hpp>
#include <StdCtrls.hpp>
#include <Graphics.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

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
	/* TPersistent.Destroy */ __fastcall virtual ~TStyleFont(void) { }
	
};

enum TVerticalAlignment { vaTopJustify, vaBottomJustify, vaCenter };

class DELPHICLASS TacCheckBox;
class PASCALIMPLEMENTATION TacCheckBox : public Stdctrls::TCustomCheckBox 
{
	typedef Stdctrls::TCustomCheckBox inherited;
	
private:
	System::AnsiString FAbout;
	TAlignment FAlignmentHorz;
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
	__property System::AnsiString About = {read=FAbout, write=FAbout, stored=false};
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
	__property Caption ;
	__property Checked ;
	__property Color ;
	__property DragCursor ;
	__property DragMode ;
	__property Enabled ;
	__property Font ;
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
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnStartDrag ;
public:
	/* TWinControl.CreateParented */ __fastcall TacCheckBox(HWND ParentWindow) : Stdctrls::TCustomCheckBox(
		ParentWindow) { }
	/* TWinControl.Destroy */ __fastcall virtual ~TacCheckBox(void) { }
	
};

class DELPHICLASS TacRadioButton;
class PASCALIMPLEMENTATION TacRadioButton : public Stdctrls::TButtonControl 
{
	typedef Stdctrls::TButtonControl inherited;
	
private:
	System::AnsiString FAbout;
	TAlignment FAlignmentHorz;
	TVerticalAlignment FAlignmentVert;
	TAlignment FBoxAlignment;
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
	__property System::AnsiString About = {read=FAbout, write=FAbout, stored=false};
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
	__property Caption ;
	__property Color ;
	__property DragCursor ;
	__property DragMode ;
	__property Enabled ;
	__property Font ;
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
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnStartDrag ;
public:
	/* TWinControl.CreateParented */ __fastcall TacRadioButton(HWND ParentWindow) : Stdctrls::TButtonControl(
		ParentWindow) { }
	/* TWinControl.Destroy */ __fastcall virtual ~TacRadioButton(void) { }
	
};

class DELPHICLASS TacCheckGroupBox;
class PASCALIMPLEMENTATION TacCheckGroupBox : public Stdctrls::TGroupBox 
{
	typedef Stdctrls::TGroupBox inherited;
	
private:
	System::AnsiString FAbout;
	bool FAutoDisable;
	TacCheckBox* FCheckBox;
	Classes::TNotifyEvent FOnCheckBoxClick;
	void __fastcall AdjustCheckBounds(void);
	Classes::TLeftRight __fastcall GetBoxAlignment(void);
	void __fastcall SetBoxAlignment(Classes::TLeftRight Value);
	System::AnsiString __fastcall GetCaption();
	void __fastcall SetCaption(System::AnsiString Value);
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
	__property System::AnsiString About = {read=FAbout, write=FAbout, stored=false};
	__property bool AutoDisable = {read=FAutoDisable, write=FAutoDisable, default=1};
	__property Classes::TLeftRight BoxAlignment = {read=GetBoxAlignment, write=SetBoxAlignment, default=0
		};
	__property System::AnsiString Caption = {read=GetCaption, write=SetCaption};
	__property bool Checked = {read=GetChecked, write=SetChecked, nodefault};
	__property Controls::TCursor Cursor = {read=GetCursor, write=SetCursor, nodefault};
	__property Classes::TNotifyEvent OnCheckBoxClick = {read=FOnCheckBoxClick, write=FOnCheckBoxClick};
		
public:
	/* TWinControl.CreateParented */ __fastcall TacCheckGroupBox(HWND ParentWindow) : Stdctrls::TGroupBox(
		ParentWindow) { }
	
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Accontrols */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Accontrols;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acControls
