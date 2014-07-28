// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acOnlyOne.pas' rev: 3.00

#ifndef acOnlyOneHPP
#define acOnlyOneHPP
#include <acClasses.hpp>
#include <Forms.hpp>
#include <Classes.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

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
//-- end unit ----------------------------------------------------------------
#endif	// acOnlyOne
