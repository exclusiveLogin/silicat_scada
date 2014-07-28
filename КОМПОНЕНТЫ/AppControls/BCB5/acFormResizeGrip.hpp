// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acFormResizeGrip.pas' rev: 5.00

#ifndef acFormResizeGripHPP
#define acFormResizeGripHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acClasses.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

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
	#pragma option push -w-inl
	/* TacFormHookComponent.KreateHook */ inline __fastcall TacFormResizeGrip(Classes::TComponent* aOwner
		, Controls::TWinControl* aHookedObject) : Acclasses::TacFormHookComponent(aOwner, aHookedObject) { }
		
	#pragma option pop
	#pragma option push -w-inl
	/* TacFormHookComponent.Destroy */ inline __fastcall virtual ~TacFormResizeGrip(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acformresizegrip */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acformresizegrip;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acFormResizeGrip
