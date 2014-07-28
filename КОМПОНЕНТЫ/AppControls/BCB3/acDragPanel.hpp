// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acDragPanel.pas' rev: 3.00

#ifndef acDragPanelHPP
#define acDragPanelHPP
#include <Menus.hpp>
#include <Graphics.hpp>
#include <ExtCtrls.hpp>
#include <Forms.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acdragpanel
{
//-- type declarations -------------------------------------------------------
enum TacDragPanelDragObject { doForm, doPanel, doNone };

class DELPHICLASS TacDragPanel;
class PASCALIMPLEMENTATION TacDragPanel : public Extctrls::TCustomPanel 
{
	typedef Extctrls::TCustomPanel inherited;
	
private:
	System::AnsiString FAbout;
	TacDragPanelDragObject FDragObject;
	int ParentHandle;
	
protected:
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	
public:
	__fastcall virtual TacDragPanel(Classes::TComponent* aOwner);
	
__published:
	__property System::AnsiString About = {read=FAbout, write=FAbout, stored=false};
	__property DragCursor ;
	__property TacDragPanelDragObject DragObject = {read=FDragObject, write=FDragObject, default=0};
	__property Align ;
	__property Alignment ;
	__property BevelInner ;
	__property BevelOuter ;
	__property BevelWidth ;
	__property BorderWidth ;
	__property BorderStyle ;
	__property Caption ;
	__property Color ;
	__property Ctl3D ;
	__property Enabled ;
	__property FullRepaint ;
	__property Font ;
	__property Locked ;
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
	__property OnEnter ;
	__property OnExit ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnResize ;
public:
	/* TCustomControl.Destroy */ __fastcall virtual ~TacDragPanel(void) { }
	
public:
	/* TWinControl.CreateParented */ __fastcall TacDragPanel(HWND ParentWindow) : Extctrls::TCustomPanel(
		ParentWindow) { }
	
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acdragpanel */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acdragpanel;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acDragPanel
