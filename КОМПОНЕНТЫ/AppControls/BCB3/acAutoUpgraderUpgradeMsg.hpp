// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acAutoUpgraderUpgradeMsg.pas' rev: 3.00

#ifndef acAutoUpgraderUpgradeMsgHPP
#define acAutoUpgraderUpgradeMsgHPP
#include <acAutoUpgrader.hpp>
#include <acRichLabel.hpp>
#include <acLabels.hpp>
#include <StdCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Forms.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acautoupgraderupgrademsg
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacAutoUpgraderUpgradeMessageForm;
class PASCALIMPLEMENTATION TacAutoUpgraderUpgradeMessageForm : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
__published:
	Extctrls::TPanel* BottomPanel;
	Stdctrls::TButton* YesBtn;
	Stdctrls::TButton* LaterBtn;
	Acrichlabel::TacRichLabel* acRichLabel1;
	Extctrls::TImage* Icon;
	void __fastcall FormClose(System::TObject* Sender, Forms::TCloseAction &Action);
	void __fastcall FormShow(System::TObject* Sender);
	
private:
	Acautoupgrader::TacAutoUpgrader* AutoUpgrader;
	
protected:
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
public:
	/* TCustomForm.Create */ __fastcall virtual TacAutoUpgraderUpgradeMessageForm(Classes::TComponent* 
		AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ __fastcall TacAutoUpgraderUpgradeMessageForm(Classes::TComponent* AOwner
		, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ __fastcall virtual ~TacAutoUpgraderUpgradeMessageForm(void) { }
	
public:
	/* TWinControl.CreateParented */ __fastcall TacAutoUpgraderUpgradeMessageForm(HWND ParentWindow) : 
		Forms::TForm(ParentWindow) { }
	
};

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TacAutoUpgraderUpgradeMessageForm* UpgradeMessageForm;
extern PACKAGE bool __fastcall ShowUpgradeBox(Acautoupgrader::TacAutoUpgrader* aAutoUpgrader, System::AnsiString 
	Msg, bool TestMode);

}	/* namespace Acautoupgraderupgrademsg */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acautoupgraderupgrademsg;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acAutoUpgraderUpgradeMsg
