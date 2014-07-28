// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acDragPanel.pas' rev: 4.00

#ifndef acDragPanelHPP
#define acDragPanelHPP

#pragma delphiheader begin
#pragma option push -w-
#include <Menus.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acdragpanel
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacDragPanelDragObject { doForm, doPanel, doNone };
#pragma option pop

class DELPHICLASS TacDragPanel;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacDragPanel : public Extctrls::TCustomPanel 
{
	typedef Extctrls::TCustomPanel inherited;
	
private:
	AnsiString FAbout;
	TacDragPanelDragObject FDragObject;
	unsigned ParentHandle;
	
protected:
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	
public:
	__fastcall virtual TacDragPanel(Classes::TComponent* aOwner);
	
__published:
	__property AnsiString About = {read=FAbout, write=FAbout, stored=false};
	__property DragCursor ;
	__property TacDragPanelDragObject DragObject = {read=FDragObject, write=FDragObject, default=0};
	__property Align ;
	__property Alignment ;
	__property Anchors ;
	__property AutoSize ;
	__property BevelInner ;
	__property BevelOuter ;
	__property BevelWidth ;
	__property BiDiMode ;
	__property BorderWidth ;
	__property BorderStyle ;
	__property Caption ;
	__property Color ;
	__property Constraints ;
	__property Ctl3D ;
	__property Enabled ;
	__property FullRepaint ;
	__property Font ;
	__property Locked ;
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
	__property OnCanResize ;
	__property OnClick ;
	__property OnConstrainedResize ;
	__property OnDblClick ;
	__property OnEnter ;
	__property OnExit ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnResize ;
public:
	#pragma option push -w-inl
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TacDragPanel(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacDragPanel(HWND ParentWindow) : Extctrls::TCustomPanel(
		ParentWindow) { }
	#pragma option pop
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acdragpanel */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acdragpanel;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acDragPanel
