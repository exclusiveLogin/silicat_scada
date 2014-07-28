// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acUnixCrypt.pas' rev: 5.00

#ifndef acUnixCryptHPP
#define acUnixCryptHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acClasses.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acunixcrypt
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacUnixCrypt;
class PASCALIMPLEMENTATION TacUnixCrypt : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	AnsiString FKey;
	AnsiString FSalt;
	AnsiString FResult;
	void __fastcall SetKey(AnsiString Value);
	void __fastcall SetSalt(AnsiString Value);
	void __fastcall SetNothing(AnsiString Value);
	
__published:
	__property About ;
	__property AnsiString Key = {read=FKey, write=SetKey};
	__property AnsiString Salt = {read=FSalt, write=SetSalt};
	__property AnsiString Result = {read=FResult, write=SetNothing};
public:
	#pragma option push -w-inl
	/* TacComponent.Create */ inline __fastcall virtual TacUnixCrypt(Classes::TComponent* aOwner) : Acclasses::TacComponent(
		aOwner) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TComponent.Destroy */ inline __fastcall virtual ~TacUnixCrypt(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acunixcrypt */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acunixcrypt;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acUnixCrypt
