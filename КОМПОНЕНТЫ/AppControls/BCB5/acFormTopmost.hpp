// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acFormTopmost.pas' rev: 5.00

#ifndef acFormTopmostHPP
#define acFormTopmostHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acClasses.hpp>	// Pascal unit
#include <acCaptionButton.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acformtopmost
{
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TacFormTopmostChangedEvent)(System::TObject* Sender, bool Topmost
	);

class DELPHICLASS TacFormTopmost;
class PASCALIMPLEMENTATION TacFormTopmost : public Accaptionbutton::TacCustomCaptionButton 
{
	typedef Accaptionbutton::TacCustomCaptionButton inherited;
	
private:
	TacFormTopmostChangedEvent FOnTopmostChanged;
	
protected:
	virtual void __fastcall Loaded(void);
	virtual void __fastcall MessageAfter(Messages::TMessage &Message);
	virtual void __fastcall Click(void);
	
public:
	__fastcall virtual TacFormTopmost(Classes::TComponent* aOwner);
	
__published:
	__property About ;
	__property CaptionButton ;
	__property SystemMenu ;
	__property Topmost ;
	__property TacFormTopmostChangedEvent OnTopmostChanged = {read=FOnTopmostChanged, write=FOnTopmostChanged
		};
public:
	#pragma option push -w-inl
	/* TacCustomCaptionButton.Destroy */ inline __fastcall virtual ~TacFormTopmost(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TacFormHookComponent.KreateHook */ inline __fastcall TacFormTopmost(Classes::TComponent* aOwner, 
		Controls::TWinControl* aHookedObject) : Accaptionbutton::TacCustomCaptionButton(aOwner, aHookedObject
		) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acformtopmost */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acformtopmost;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acFormTopmost
