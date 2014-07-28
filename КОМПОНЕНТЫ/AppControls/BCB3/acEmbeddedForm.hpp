// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acEmbeddedForm.pas' rev: 3.00

#ifndef acEmbeddedFormHPP
#define acEmbeddedFormHPP
#include <acClasses.hpp>
#include <Forms.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acembeddedform
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacEmbeddedForm;
class PASCALIMPLEMENTATION TacEmbeddedForm : public Acclasses::TacFormHookComponent 
{
	typedef Acclasses::TacFormHookComponent inherited;
	
private:
	System::AnsiString FFormName;
	Controls::TWinControl* FHolderControl;
	System::AnsiString MyParentName;
	Forms::TForm* EmbeddedForm;
	Controls::TWinControl* OldParent;
	Forms::TBorderIcons OldBorderIcons;
	TFormBorderStyle OldBorderStyle;
	TAlign OldAlign;
	bool OldVisible;
	bool Modified;
	void __fastcall SetFormName(System::AnsiString Value);
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
	__property System::AnsiString FormName = {read=FFormName, write=SetFormName};
	__property Controls::TWinControl* HolderControl = {read=FHolderControl, write=SetHolderControl};
public:
		
	/* TacFormHookComponent.KreateHook */ __fastcall TacEmbeddedForm(Classes::TComponent* aOwner, Controls::TWinControl* 
		aHookedObject) : Acclasses::TacFormHookComponent(aOwner, aHookedObject) { }
	/* TacFormHookComponent.Destroy */ __fastcall virtual ~TacEmbeddedForm(void) { }
	
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acembeddedform */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acembeddedform;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acEmbeddedForm
