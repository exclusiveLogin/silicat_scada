// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acFormTopmost.pas' rev: 3.00

#ifndef acFormTopmostHPP
#define acFormTopmostHPP
#include <acClasses.hpp>
#include <acCaptionButton.hpp>
#include <Forms.hpp>
#include <Classes.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

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
	/* TacCustomCaptionButton.Destroy */ __fastcall virtual ~TacFormTopmost(void) { }
	
public:
	/* TacFormHookComponent.KreateHook */ __fastcall TacFormTopmost(Classes::TComponent* aOwner, Controls::TWinControl* 
		aHookedObject) : Accaptionbutton::TacCustomCaptionButton(aOwner, aHookedObject) { }
	
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acformtopmost */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acformtopmost;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acFormTopmost
