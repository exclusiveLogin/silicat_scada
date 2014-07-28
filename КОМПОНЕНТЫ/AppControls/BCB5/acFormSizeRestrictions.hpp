// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acFormSizeRestrictions.pas' rev: 5.00

#ifndef acFormSizeRestrictionsHPP
#define acFormSizeRestrictionsHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acClasses.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acformsizerestrictions
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacFormSizeRestrictions;
class PASCALIMPLEMENTATION TacFormSizeRestrictions : public Acclasses::TacFormHookComponent 
{
	typedef Acclasses::TacFormHookComponent inherited;
	
private:
	bool FEnabled;
	Word FMaxWidth;
	Word FMaxHeight;
	Word FMinWidth;
	Word FMinHeight;
	void __fastcall SetMaxWidth(Word Value);
	void __fastcall SetMaxHeight(Word Value);
	void __fastcall SetMinWidth(Word Value);
	void __fastcall SetMinHeight(Word Value);
	void __fastcall UpdateSizeRestrictions(void);
	
protected:
	virtual void __fastcall MessageAfter(Messages::TMessage &Message);
	
public:
	__fastcall virtual TacFormSizeRestrictions(Classes::TComponent* aOwner);
	
__published:
	__property About ;
	__property bool Enabled = {read=FEnabled, write=FEnabled, nodefault};
	__property Word MaxWidth = {read=FMaxWidth, write=SetMaxWidth, nodefault};
	__property Word MaxHeight = {read=FMaxHeight, write=SetMaxHeight, nodefault};
	__property Word MinWidth = {read=FMinWidth, write=SetMinWidth, nodefault};
	__property Word MinHeight = {read=FMinHeight, write=SetMinHeight, nodefault};
public:
	#pragma option push -w-inl
	/* TacFormHookComponent.KreateHook */ inline __fastcall TacFormSizeRestrictions(Classes::TComponent* 
		aOwner, Controls::TWinControl* aHookedObject) : Acclasses::TacFormHookComponent(aOwner, aHookedObject
		) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacFormHookComponent.Destroy */ inline __fastcall virtual ~TacFormSizeRestrictions(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acformsizerestrictions */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acformsizerestrictions;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acFormSizeRestrictions
