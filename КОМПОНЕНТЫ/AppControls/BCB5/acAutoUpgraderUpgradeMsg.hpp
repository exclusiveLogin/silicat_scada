// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acAutoUpgraderUpgradeMsg.pas' rev: 5.00

#ifndef acAutoUpgraderUpgradeMsgHPP
#define acAutoUpgraderUpgradeMsgHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acAutoUpgrader.hpp>	// Pascal unit
#include <acRichLabel.hpp>	// Pascal unit
#include <acLabels.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

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
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TacAutoUpgraderUpgradeMessageForm(Classes::TComponent* 
		AOwner) : Forms::TForm(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TacAutoUpgraderUpgradeMessageForm(Classes::TComponent* 
		AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TacAutoUpgraderUpgradeMessageForm(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacAutoUpgraderUpgradeMessageForm(HWND ParentWindow
		) : Forms::TForm(ParentWindow) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TacAutoUpgraderUpgradeMessageForm* UpgradeMessageForm;
extern PACKAGE bool __fastcall ShowUpgradeBox(Acautoupgrader::TacAutoUpgrader* aAutoUpgrader, AnsiString 
	Msg, bool TestMode);

}	/* namespace Acautoupgraderupgrademsg */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acautoupgraderupgrademsg;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acAutoUpgraderUpgradeMsg
