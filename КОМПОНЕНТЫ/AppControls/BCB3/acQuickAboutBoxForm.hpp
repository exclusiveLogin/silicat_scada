// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acQuickAboutBoxForm.pas' rev: 3.00

#ifndef acQuickAboutBoxFormHPP
#define acQuickAboutBoxFormHPP
#include <acFormBackground.hpp>
#include <acRichLabel.hpp>
#include <acLabels.hpp>
#include <acAnimationEffect.hpp>
#include <acAppCursors.hpp>
#include <acSystemInfo.hpp>
#include <acClasses.hpp>
#include <ExtCtrls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acquickaboutboxform
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacQuickAboutBoxForm;
class PASCALIMPLEMENTATION TacQuickAboutBoxForm : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
__published:
	Extctrls::TImage* Icon;
	Stdctrls::TLabel* WWWLabel;
	Stdctrls::TLabel* EmailLabel;
	Stdctrls::TButton* OKBtn;
	Acanimationeffect::TacAnimationEffect* AnimEffect;
	Extctrls::TBevel* Bevel1;
	Extctrls::TBevel* Bevel2;
	Stdctrls::TButton* RegisterBtn;
	Extctrls::TBevel* Bevel3;
	Stdctrls::TLabel* RegLab;
	Stdctrls::TLabel* UserInfo;
	Acsysteminfo::TacSystemInfo* acSystemInfo;
	Aclabels::TacLabel* TitleLabel;
	Acrichlabel::TacRichLabel* DescriptionLabel;
	Acrichlabel::TacRichLabel* CopyrightLabel;
	Aclabels::TacURLLabel* EmailLab;
	Aclabels::TacURLLabel* WWWLab;
	Acappcursors::TacAppCursors* acAppCursors;
	Acformbackground::TacFormBackground* acFormBackground;
	void __fastcall RegisterBtnClick(System::TObject* Sender);
	void __fastcall FormShow(System::TObject* Sender);
	
public:
	System::AnsiString FAddInfo;
public:
	/* TCustomForm.Create */ __fastcall virtual TacQuickAboutBoxForm(Classes::TComponent* AOwner) : Forms::
		TForm(AOwner) { }
	/* TCustomForm.CreateNew */ __fastcall TacQuickAboutBoxForm(Classes::TComponent* AOwner, int Dummy)
		 : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ __fastcall virtual ~TacQuickAboutBoxForm(void) { }
	
public:
	/* TWinControl.CreateParented */ __fastcall TacQuickAboutBoxForm(HWND ParentWindow) : Forms::TForm(
		ParentWindow) { }
	
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acquickaboutboxform */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acquickaboutboxform;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acQuickAboutBoxForm
