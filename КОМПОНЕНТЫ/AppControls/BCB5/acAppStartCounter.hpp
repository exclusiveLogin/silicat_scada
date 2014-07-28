// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acAppStartCounter.pas' rev: 5.00

#ifndef acAppStartCounterHPP
#define acAppStartCounterHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acClasses.hpp>	// Pascal unit
#include <Registry.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acappstartcounter
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacAppStartRegLocation { arlCurrentUser, arlLocalMachine };
#pragma option pop

typedef void __fastcall (__closure *TacAppStartEvent)(System::TObject* Sender, int StartNumber);

class DELPHICLASS TacAppStartCounter;
class PASCALIMPLEMENTATION TacAppStartCounter : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	AnsiString FRegKey;
	Acclasses::TacRegLocation FRegLocation;
	Classes::TNotifyEvent FOnFirstStart;
	int __fastcall GetCounter(void);
	void __fastcall SetCounter(int Value);
	void __fastcall SetRegKey(AnsiString Value);
	
protected:
	virtual void __fastcall Loaded(void);
	
public:
	__fastcall virtual TacAppStartCounter(Classes::TComponent* aOwner);
	void __fastcall ResetCounter(void);
	
__published:
	__property About ;
	__property int Counter = {read=GetCounter, write=SetCounter, stored=false, nodefault};
	__property AnsiString RegKey = {read=FRegKey, write=SetRegKey};
	__property Acclasses::TacRegLocation RegLocation = {read=FRegLocation, write=FRegLocation, nodefault
		};
	__property Classes::TNotifyEvent OnFirstStart = {read=FOnFirstStart, write=FOnFirstStart};
public:
	#pragma option push -w-inl
	/* TComponent.Destroy */ inline __fastcall virtual ~TacAppStartCounter(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acappstartcounter */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acappstartcounter;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acAppStartCounter
