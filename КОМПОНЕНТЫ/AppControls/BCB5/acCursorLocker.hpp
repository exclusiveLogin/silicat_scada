// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acCursorLocker.pas' rev: 5.00

#ifndef acCursorLockerHPP
#define acCursorLockerHPP

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

namespace Accursorlocker
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacCursorLocker;
class PASCALIMPLEMENTATION TacCursorLocker : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	Controls::TControl* FControl;
	bool FEnabled;
	unsigned FHandle;
	Controls::TControl* __fastcall GetControl(void);
	void __fastcall SetControl(Controls::TControl* Value);
	void __fastcall SetEnabled(bool Value);
	void __fastcall UpdateLocker(void);
	void __fastcall UpdateTimer(void);
	
protected:
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation
		);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	
public:
	__fastcall virtual TacCursorLocker(Classes::TComponent* aOwner);
	__fastcall virtual ~TacCursorLocker(void);
	
__published:
	__property About ;
	__property Controls::TControl* Control = {read=GetControl, write=SetControl};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, nodefault};
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Accursorlocker */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Accursorlocker;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acCursorLocker
