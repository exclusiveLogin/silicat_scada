// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acAppCursors.pas' rev: 4.00

#ifndef acAppCursorsHPP
#define acAppCursorsHPP

#pragma delphiheader begin
#pragma option push -w-
#include <acClasses.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acappcursors
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacAppObject { aoBorderNonResize, aoBorderBottom, aoBorderBottomLeft, aoBorderBottomRight, aoBorderLeft, 
	aoBorderRight, aoBorderTop, aoBorderTopLeft, aoBorderTopRight, aoBtnClose, aoBtnHelp, aoBtnMaximize, 
	aoBtnMinimize, aoCaption, aoClient, aoClientNonVCL, aoMainMenu, aoMenuItem, aoScrollHorz, aoScrollVert, 
	aoSystemMenu, aoTransparent };
#pragma option pop

typedef void __fastcall (__closure *TacMouseOverObjectEvent)(System::TObject* Sender, TacAppObject AppObject
	, unsigned WndHandle, Controls::TCursor &Cursor);

class DELPHICLASS TacAppCursors;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacAppCursors : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	bool FActive;
	Controls::TCursor FCursors[22];
	TacMouseOverObjectEvent FOnMouseOverObject;
	bool FHooked;
	HWND FHookedWindow;
	void *FOldWndProc;
	void *FNewWndProc;
	void __fastcall HookWindow(HWND Wnd);
	void __fastcall UnhookWindow(void);
	void __fastcall HookWndProc(Messages::TMessage &Message);
	
public:
	__fastcall virtual TacAppCursors(Classes::TComponent* aOwner);
	__fastcall virtual ~TacAppCursors(void);
	
__published:
	__property About ;
	__property bool Active = {read=FActive, write=FActive, default=1};
	__property Controls::TCursor BorderNonResize = {read=FCursors[23], write=FCursors[23], nodefault};
	__property Controls::TCursor BorderBottom = {read=FCursors[24], write=FCursors[24], nodefault};
	__property Controls::TCursor BorderBottomLeft = {read=FCursors[25], write=FCursors[25], nodefault};
		
	__property Controls::TCursor BorderBottomRight = {read=FCursors[26], write=FCursors[26], nodefault}
		;
	__property Controls::TCursor BorderLeft = {read=FCursors[27], write=FCursors[27], nodefault};
	__property Controls::TCursor BorderRight = {read=FCursors[28], write=FCursors[28], nodefault};
	__property Controls::TCursor BorderTop = {read=FCursors[29], write=FCursors[29], nodefault};
	__property Controls::TCursor BorderTopLeft = {read=FCursors[30], write=FCursors[30], nodefault};
	__property Controls::TCursor BorderTopRight = {read=FCursors[31], write=FCursors[31], nodefault};
	__property Controls::TCursor BtnClose = {read=FCursors[32], write=FCursors[32], nodefault};
	__property Controls::TCursor BtnHelp = {read=FCursors[33], write=FCursors[33], nodefault};
	__property Controls::TCursor BtnMaximize = {read=FCursors[34], write=FCursors[34], nodefault};
	__property Controls::TCursor BtnMinimize = {read=FCursors[35], write=FCursors[35], nodefault};
	__property Controls::TCursor Caption = {read=FCursors[36], write=FCursors[36], nodefault};
	__property Controls::TCursor Client = {read=FCursors[37], write=FCursors[37], nodefault};
	__property Controls::TCursor ClientNonVCL = {read=FCursors[38], write=FCursors[38], nodefault};
	__property Controls::TCursor MainMenu = {read=FCursors[39], write=FCursors[39], nodefault};
	__property Controls::TCursor MenuItem = {read=FCursors[40], write=FCursors[40], nodefault};
	__property Controls::TCursor ScrollHorz = {read=FCursors[41], write=FCursors[41], nodefault};
	__property Controls::TCursor ScrollVert = {read=FCursors[42], write=FCursors[42], nodefault};
	__property Controls::TCursor SystemMenu = {read=FCursors[43], write=FCursors[43], nodefault};
	__property Controls::TCursor Transparent = {read=FCursors[44], write=FCursors[44], nodefault};
	__property TacMouseOverObjectEvent OnMouseOverObject = {read=FOnMouseOverObject, write=FOnMouseOverObject
		};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE int __stdcall WndCallbackProc(int nCode, int wParam, int lParam);

}	/* namespace Acappcursors */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acappcursors;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acAppCursors
