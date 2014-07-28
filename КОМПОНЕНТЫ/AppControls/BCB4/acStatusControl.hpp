// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acStatusControl.pas' rev: 4.00

#ifndef acStatusControlHPP
#define acStatusControlHPP

#pragma delphiheader begin
#pragma option push -w-
#include <acClasses.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acstatuscontrol
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacStatusControl;
#pragma pack(push, 4)
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
	Comctrls::TStatusPanelStyle RealPanelStyle;
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
	#pragma option push -w-inl
	/* TacComponent.Create */ inline __fastcall virtual TacStatusControl(Classes::TComponent* aOwner) : 
		Acclasses::TacComponent(aOwner) { }
	#pragma option pop
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acstatuscontrol */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acstatuscontrol;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acStatusControl
