// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acAutoUpgraderWizard.pas' rev: 3.00

#ifndef acAutoUpgraderWizardHPP
#define acAutoUpgraderWizardHPP
#include <Graphics.hpp>
#include <acAutoUpgrader.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acautoupgraderwizard
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacAutoUpgraderWizardForm;
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
	/* TCustomForm.Create */ __fastcall virtual TacAutoUpgraderWizardForm(Classes::TComponent* AOwner) : 
		Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ __fastcall TacAutoUpgraderWizardForm(Classes::TComponent* AOwner, int Dummy
		) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ __fastcall virtual ~TacAutoUpgraderWizardForm(void) { }
	
public:
	/* TWinControl.CreateParented */ __fastcall TacAutoUpgraderWizardForm(HWND ParentWindow) : Forms::TForm(
		ParentWindow) { }
	
};

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TacAutoUpgraderWizardForm* WizardForm;
extern PACKAGE void __fastcall ShowAutoUpgraderWizard(Acautoupgrader::TacAutoUpgrader* aAutoUpgrader
	);

}	/* namespace Acautoupgraderwizard */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acautoupgraderwizard;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acAutoUpgraderWizard
