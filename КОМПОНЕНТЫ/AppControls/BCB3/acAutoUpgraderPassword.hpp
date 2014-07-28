// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acAutoUpgraderPassword.pas' rev: 3.00

#ifndef acAutoUpgraderPasswordHPP
#define acAutoUpgraderPasswordHPP
#include <acAutoUpgrader.hpp>
#include <ExtCtrls.hpp>
#include <acRichLabel.hpp>
#include <acLabels.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acautoupgraderpassword
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacAutoUpgraderPasswordForm;
class PASCALIMPLEMENTATION TacAutoUpgraderPasswordForm : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
__published:
	Acrichlabel::TacRichLabel* acRichLabel1;
	Extctrls::TImage* Image1;
	Extctrls::TPanel* BottomPanel;
	Stdctrls::TLabel* UsernameLab;
	Stdctrls::TLabel* PasswordLab;
	Stdctrls::TEdit* UsernameEdit;
	Stdctrls::TEdit* PasswordEdit;
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	void __fastcall FormClose(System::TObject* Sender, Forms::TCloseAction &Action);
	void __fastcall OKBtnClick(System::TObject* Sender);
	
private:
	Acautoupgrader::TacAutoUpgrader* AutoUpgrader;
public:
	/* TCustomForm.Create */ __fastcall virtual TacAutoUpgraderPasswordForm(Classes::TComponent* AOwner
		) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ __fastcall TacAutoUpgraderPasswordForm(Classes::TComponent* AOwner, int 
		Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ __fastcall virtual ~TacAutoUpgraderPasswordForm(void) { }
	
public:
	/* TWinControl.CreateParented */ __fastcall TacAutoUpgraderPasswordForm(HWND ParentWindow) : Forms::
		TForm(ParentWindow) { }
	
};

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TacAutoUpgraderPasswordForm* PasswordForm;
extern PACKAGE bool __fastcall ShowPasswordBox(Acautoupgrader::TacAutoUpgrader* aAutoUpgrader, System::AnsiString 
	FileName);

}	/* namespace Acautoupgraderpassword */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acautoupgraderpassword;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acAutoUpgraderPassword
