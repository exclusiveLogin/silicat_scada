// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acOnlyOne.pas' rev: 5.00

#ifndef acOnlyOneHPP
#define acOnlyOneHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acClasses.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Aconlyone
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacOnlyOne;
class PASCALIMPLEMENTATION TacOnlyOne : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	bool FCloseSecond;
	bool FSwitchToPrevious;
	Classes::TNotifyEvent FOnAlreadyExist;
	HWND Mutex;
	bool IsCreated;
	
protected:
	virtual void __fastcall Loaded(void);
	
public:
	__fastcall virtual TacOnlyOne(Classes::TComponent* aOwner);
	__fastcall virtual ~TacOnlyOne(void);
	
__published:
	__property About ;
	__property bool CloseSecond = {read=FCloseSecond, write=FCloseSecond, default=1};
	__property bool SwitchToPrevious = {read=FSwitchToPrevious, write=FSwitchToPrevious, default=1};
	__property Classes::TNotifyEvent OnAlreadyExist = {read=FOnAlreadyExist, write=FOnAlreadyExist};
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Aconlyone */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Aconlyone;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acOnlyOne
