// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acAutoUpgraderAddURL.pas' rev: 3.00

#ifndef acAutoUpgraderAddURLHPP
#define acAutoUpgraderAddURLHPP
#include <acFormHelp.hpp>
#include <acCaptionButton.hpp>
#include <acClasses.hpp>
#include <acMRUComboBox.hpp>
#include <ExtCtrls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Controls.hpp>
#include <Graphics.hpp>
#include <Classes.hpp>
#include <SysUtils.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acautoupgraderaddurl
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacAddURLForm;
class PASCALIMPLEMENTATION TacAddURLForm : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TGroupBox* GroupBox1;
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	Acmrucombobox::TacMRUComboBox* URLEdit;
	Acformhelp::TacFormHelp* acFormHelp;
public:
	/* TCustomForm.Create */ __fastcall virtual TacAddURLForm(Classes::TComponent* AOwner) : Forms::TForm(
		AOwner) { }
	/* TCustomForm.CreateNew */ __fastcall TacAddURLForm(Classes::TComponent* AOwner, int Dummy) : Forms::
		TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ __fastcall virtual ~TacAddURLForm(void) { }
	
public:
	/* TWinControl.CreateParented */ __fastcall TacAddURLForm(HWND ParentWindow) : Forms::TForm(ParentWindow
		) { }
	
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acautoupgraderaddurl */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acautoupgraderaddurl;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acAutoUpgraderAddURL
