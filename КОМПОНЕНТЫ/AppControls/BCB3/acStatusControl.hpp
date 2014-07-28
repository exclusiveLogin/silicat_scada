// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acStatusControl.pas' rev: 3.00

#ifndef acStatusControlHPP
#define acStatusControlHPP
#include <acClasses.hpp>
#include <ComCtrls.hpp>
#include <Forms.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acstatuscontrol
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacStatusControl;
class PASCALIMPLEMENTATION TacStatusControl : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	Controls::TControl* FControl;
	int FPanelIndex;
	Comctrls::TStatusBar* FStatusBar;
	Controls::TWinControl* RealControlParent;
	Windows::TRect RealControlBoundsRect;
	bool RealControlVisible;
	TStatusPanelStyle RealPanelStyle;
	Comctrls::TDrawPanelEvent RealDrawPanel;
	void __fastcall SetControl(Controls::TControl* Value);
	void __fastcall SetPanelIndex(int Value);
	void __fastcall SetStatusBar(Comctrls::TStatusBar* Value);
	void __fastcall InsertControl(void);
	void __fastcall RemoveControl(void);
	void __fastcall ResetPanelStyle(void);
	void __fastcall DrawPanel(Comctrls::TStatusBar* StatusBar, Comctrls::TStatusPanel* Panel, const Windows::TRect 
		&Rect);
	
protected:
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation AOperation
		);
	
public:
	__fastcall virtual ~TacStatusControl(void);
	
__published:
	__property About ;
	__property Controls::TControl* Control = {read=FControl, write=SetControl};
	__property int PanelIndex = {read=FPanelIndex, write=SetPanelIndex, nodefault};
	__property Comctrls::TStatusBar* StatusBar = {read=FStatusBar, write=SetStatusBar};
public:
	/* TacComponent.Create */ __fastcall virtual TacStatusControl(Classes::TComponent* aOwner) : Acclasses::
		TacComponent(aOwner) { }
	
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acstatuscontrol */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acstatuscontrol;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acStatusControl
