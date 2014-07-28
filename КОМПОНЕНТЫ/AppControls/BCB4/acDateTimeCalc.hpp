// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acDateTimeCalc.pas' rev: 4.00

#ifndef acDateTimeCalcHPP
#define acDateTimeCalcHPP

#pragma delphiheader begin
#pragma option push -w-
#include <acClasses.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acdatetimecalc
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacDateTimeCalc;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacDateTimeCalc : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	System::TDateTime FBeginTime;
	System::TDateTime FEndTime;
	int FYears;
	int FMonths;
	int FDays;
	int FHours;
	int FMinutes;
	int FSeconds;
	int FMSeconds;
	void __fastcall SetBeginTime(System::TDateTime Value);
	void __fastcall SetEndTime(System::TDateTime Value);
	void __fastcall Calculate(void);
	
public:
	__property int Years = {read=FYears, nodefault};
	__property int Months = {read=FMonths, nodefault};
	__property int Days = {read=FDays, nodefault};
	__property int Hours = {read=FHours, nodefault};
	__property int Minutes = {read=FMinutes, nodefault};
	__property int Seconds = {read=FSeconds, nodefault};
	__property int MSeconds = {read=FMSeconds, nodefault};
	
__published:
	__property About ;
	__property System::TDateTime BeginTime = {read=FBeginTime, write=SetBeginTime};
	__property System::TDateTime EndTime = {read=FEndTime, write=SetEndTime};
public:
	#pragma option push -w-inl
	/* TacComponent.Create */ inline __fastcall virtual TacDateTimeCalc(Classes::TComponent* aOwner) : 
		Acclasses::TacComponent(aOwner) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TComponent.Destroy */ inline __fastcall virtual ~TacDateTimeCalc(void) { }
	#pragma option pop
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acdatetimecalc */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acdatetimecalc;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acDateTimeCalc
