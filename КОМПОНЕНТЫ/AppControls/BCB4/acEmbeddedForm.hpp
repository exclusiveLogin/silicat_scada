// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acEmbeddedForm.pas' rev: 4.00

#ifndef acEmbeddedFormHPP
#define acEmbeddedFormHPP

#pragma delphiheader begin
#pragma option push -w-
#include <acClasses.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acembeddedform
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacEmbeddedForm;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacEmbeddedForm : public Acclasses::TacFormHookComponent 
{
	typedef Acclasses::TacFormHookComponent inherited;
	
private:
	AnsiString FFormName;
	Controls::TWinControl* FHolderControl;
	AnsiString MyParentName;
	Forms::TForm* EmbeddedForm;
	Controls::TWinControl* OldParent;
	Forms::TBorderIcons OldBorderIcons;
	Forms::TFormBorderStyle OldBorderStyle;
	Controls::TAlign OldAlign;
	bool OldVisible;
	bool Modified;
	void __fastcall SetFormName(AnsiString Value);
	void __fastcall SetHolderControl(Controls::TWinControl* Value);
	void __fastcall EmbedForm(void);
	void __fastcall UnEmbedForm(void);
	
protected:
	virtual void __fastcall Notification(Classes::TComponent* aComponent, Classes::TOperation aOperation
		);
	virtual void __fastcall MessageAfter(Messages::TMessage &Message);
	
public:
	__fastcall virtual TacEmbeddedForm(Classes::TComponent* aOwner);
	
__published:
	__property About ;
	__property AnsiString FormName = {read=FFormName, write=SetFormName};
	__property Controls::TWinControl* HolderControl = {read=FHolderControl, write=SetHolderControl};
public:
		
	#pragma option push -w-inl
	/* TacFormHookComponent.KreateHook */ inline __fastcall TacEmbeddedForm(Classes::TComponent* aOwner
		, Controls::TWinControl* aHookedObject) : Acclasses::TacFormHookComponent(aOwner, aHookedObject) { }
		
	#pragma option pop
	#pragma option push -w-inl
	/* TacFormHookComponent.Destroy */ inline __fastcall virtual ~TacEmbeddedForm(void) { }
	#pragma option pop
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acembeddedform */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acembeddedform;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acEmbeddedForm
