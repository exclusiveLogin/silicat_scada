// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acQuickAboutBoxForm.pas' rev: 4.00

#ifndef acQuickAboutBoxFormHPP
#define acQuickAboutBoxFormHPP

#pragma delphiheader begin
#pragma option push -w-
#include <acFormBackground.hpp>	// Pascal unit
#include <acRichLabel.hpp>	// Pascal unit
#include <acLabels.hpp>	// Pascal unit
#include <acAnimationEffect.hpp>	// Pascal unit
#include <acAppCursors.hpp>	// Pascal unit
#include <acSystemInfo.hpp>	// Pascal unit
#include <acClasses.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acquickaboutboxform
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacQuickAboutBoxForm;
#pragma pack(push, 4)
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
	AnsiString FAddInfo;
public:
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TacQuickAboutBoxForm(Classes::TComponent* AOwner
		) : Forms::TForm(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TacQuickAboutBoxForm(Classes::TComponent* AOwner
		, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TacQuickAboutBoxForm(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacQuickAboutBoxForm(HWND ParentWindow) : Forms::TForm(
		ParentWindow) { }
	#pragma option pop
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acquickaboutboxform */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acquickaboutboxform;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acQuickAboutBoxForm
