// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acAutoUpgraderPassword.pas' rev: 5.00

#ifndef acAutoUpgraderPasswordHPP
#define acAutoUpgraderPasswordHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acAutoUpgrader.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <acRichLabel.hpp>	// Pascal unit
#include <acLabels.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

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
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TacAutoUpgraderPasswordForm(Classes::TComponent* 
		AOwner) : Forms::TForm(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TacAutoUpgraderPasswordForm(Classes::TComponent* 
		AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TacAutoUpgraderPasswordForm(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacAutoUpgraderPasswordForm(HWND ParentWindow) : 
		Forms::TForm(ParentWindow) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TacAutoUpgraderPasswordForm* PasswordForm;
extern PACKAGE bool __fastcall ShowPasswordBox(Acautoupgrader::TacAutoUpgrader* aAutoUpgrader, AnsiString 
	FileName);

}	/* namespace Acautoupgraderpassword */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acautoupgraderpassword;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acAutoUpgraderPassword
