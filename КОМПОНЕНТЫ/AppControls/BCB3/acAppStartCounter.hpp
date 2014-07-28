// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acAppStartCounter.pas' rev: 3.00

#ifndef acAppStartCounterHPP
#define acAppStartCounterHPP
#include <acClasses.hpp>
#include <Registry.hpp>
#include <Forms.hpp>
#include <Classes.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acappstartcounter
{
//-- type declarations -------------------------------------------------------
enum TacAppStartRegLocation { arlCurrentUser, arlLocalMachine };

typedef void __fastcall (__closure *TacAppStartEvent)(System::TObject* Sender, int StartNumber);

class DELPHICLASS TacAppStartCounter;
class PASCALIMPLEMENTATION TacAppStartCounter : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	System::AnsiString FRegKey;
	TacRegLocation FRegLocation;
	Classes::TNotifyEvent FOnFirstStart;
	int __fastcall GetCounter(void);
	void __fastcall SetCounter(int Value);
	void __fastcall SetRegKey(System::AnsiString Value);
	
protected:
	virtual void __fastcall Loaded(void);
	
public:
	__fastcall virtual TacAppStartCounter(Classes::TComponent* aOwner);
	void __fastcall ResetCounter(void);
	
__published:
	__property About ;
	__property int Counter = {read=GetCounter, write=SetCounter, stored=false, nodefault};
	__property System::AnsiString RegKey = {read=FRegKey, write=SetRegKey};
	__property Acclasses::TacRegLocation RegLocation = {read=FRegLocation, write=FRegLocation, nodefault
		};
	__property Classes::TNotifyEvent OnFirstStart = {read=FOnFirstStart, write=FOnFirstStart};
public:
	/* TComponent.Destroy */ __fastcall virtual ~TacAppStartCounter(void) { }
	
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acappstartcounter */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acappstartcounter;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acAppStartCounter
