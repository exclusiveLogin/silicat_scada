// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acAutoUpgraderWizard.pas' rev: 4.00

#ifndef acAutoUpgraderWizardHPP
#define acAutoUpgraderWizardHPP

#pragma delphiheader begin
#pragma option push -w-
#include <Graphics.hpp>	// Pascal unit
#include <acAutoUpgrader.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acautoupgraderwizard
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacAutoUpgraderWizardForm;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacAutoUpgraderWizardForm : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
__published:
	Extctrls::TPanel* Panel1;
	Extctrls::TImage* Image1;
	Extctrls::TBevel* Bevel1;
	Stdctrls::TLabel* WizardTitle;
	Stdctrls::TGroupBox* LCurrentFile;
	Stdctrls::TGroupBox* LAllFiles;
	Stdctrls::TLabel* LDownloadingFileFrom;
	Stdctrls::TLabel* EstimatedTimeLeftLab;
	Stdctrls::TLabel* TransferRateLab;
	Comctrls::TProgressBar* ProgressCurrentFile;
	Comctrls::TProgressBar* ProgressAllFiles;
	Stdctrls::TButton* FinishBtn;
	Stdctrls::TButton* CancelBtn;
	Stdctrls::TLabel* AllDownloading;
	Stdctrls::TLabel* AboutShadow;
	Stdctrls::TLabel* AboutLabel;
	Stdctrls::TEdit* FileURL;
	Stdctrls::TLabel* AfterNote1;
	Stdctrls::TLabel* AfterNote2;
	Stdctrls::TLabel* FileSizeLab;
	void __fastcall FormClose(System::TObject* Sender, Forms::TCloseAction &Action);
	void __fastcall FileURLKeyPress(System::TObject* Sender, char &Key);
	void __fastcall CancelBtnClick(System::TObject* Sender);
	void __fastcall FormCloseQuery(System::TObject* Sender, bool &CanClose);
	
private:
	Acautoupgrader::TacAutoUpgrader* AutoUpgrader;
	
public:
	void __fastcall Finish(void);
public:
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TacAutoUpgraderWizardForm(Classes::TComponent* AOwner
		) : Forms::TForm(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TacAutoUpgraderWizardForm(Classes::TComponent* 
		AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TacAutoUpgraderWizardForm(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacAutoUpgraderWizardForm(HWND ParentWindow) : Forms::TForm(
		ParentWindow) { }
	#pragma option pop
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TacAutoUpgraderWizardForm* WizardForm;
extern PACKAGE void __fastcall ShowAutoUpgraderWizard(Acautoupgrader::TacAutoUpgrader* aAutoUpgrader
	);

}	/* namespace Acautoupgraderwizard */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acautoupgraderwizard;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acAutoUpgraderWizard
