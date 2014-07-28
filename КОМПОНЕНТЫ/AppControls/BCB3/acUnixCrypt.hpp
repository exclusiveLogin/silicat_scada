// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acUnixCrypt.pas' rev: 3.00

#ifndef acUnixCryptHPP
#define acUnixCryptHPP
#include <acClasses.hpp>
#include <Classes.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acunixcrypt
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacUnixCrypt;
class PASCALIMPLEMENTATION TacUnixCrypt : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	System::AnsiString FKey;
	System::AnsiString FSalt;
	System::AnsiString FResult;
	void __fastcall SetKey(System::AnsiString Value);
	void __fastcall SetSalt(System::AnsiString Value);
	void __fastcall SetNothing(System::AnsiString Value);
	
__published:
	__property About ;
	__property System::AnsiString Key = {read=FKey, write=SetKey};
	__property System::AnsiString Salt = {read=FSalt, write=SetSalt};
	__property System::AnsiString Result = {read=FResult, write=SetNothing};
public:
	/* TacComponent.Create */ __fastcall virtual TacUnixCrypt(Classes::TComponent* aOwner) : Acclasses::
		TacComponent(aOwner) { }
	
public:
	/* TComponent.Destroy */ __fastcall virtual ~TacUnixCrypt(void) { }
	
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acunixcrypt */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acunixcrypt;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acUnixCrypt
