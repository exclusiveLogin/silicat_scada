// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acFormResizeGrip.pas' rev: 3.00

#ifndef acFormResizeGripHPP
#define acFormResizeGripHPP
#include <acClasses.hpp>
#include <Forms.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acformresizegrip
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacFormResizeGrip;
class PASCALIMPLEMENTATION TacFormResizeGrip : public Acclasses::TacFormHookComponent 
{
	typedef Acclasses::TacFormHookComponent inherited;
	
private:
	bool FVisible;
	bool __fastcall IsScrollBarVisible(void);
	void __fastcall SetVisible(bool Value);
	
protected:
	virtual void __fastcall MessageBefore(Messages::TMessage &Message, bool &Handled);
	virtual void __fastcall MessageAfter(Messages::TMessage &Message);
	virtual void __fastcall PaintGrip(void);
	
public:
	__fastcall virtual TacFormResizeGrip(Classes::TComponent* aOwner);
	
__published:
	__property About ;
	__property bool Visible = {read=FVisible, write=SetVisible, default=1};
public:
	/* TacFormHookComponent.KreateHook */ __fastcall TacFormResizeGrip(Classes::TComponent* aOwner, Controls::TWinControl* 
		aHookedObject) : Acclasses::TacFormHookComponent(aOwner, aHookedObject) { }
	/* TacFormHookComponent.Destroy */ __fastcall virtual ~TacFormResizeGrip(void) { }
	
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acformresizegrip */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acformresizegrip;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acFormResizeGrip
