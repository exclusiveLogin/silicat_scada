// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acStringEditor.pas' rev: 5.00

#ifndef acStringEditorHPP
#define acStringEditorHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acFormResizeGrip.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <acFormHelp.hpp>	// Pascal unit
#include <acCaptionButton.hpp>	// Pascal unit
#include <acFormSizeRestrictions.hpp>	// Pascal unit
#include <acFormPlacementSaver.hpp>	// Pascal unit
#include <acClasses.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acstringeditor
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacStringEditor;
class PASCALIMPLEMENTATION TacStringEditor : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
__published:
	Acformsizerestrictions::TacFormSizeRestrictions* acFormSizeRestrictions;
	Acformplacementsaver::TacFormPlacementSaver* acFormPlacementSaver;
	Stdctrls::TGroupBox* GroupBox;
	Stdctrls::TMemo* Memo;
	Acformhelp::TacFormHelp* acFormHelp;
	Extctrls::TPanel* topspace2;
	Extctrls::TPanel* Panel3;
	Extctrls::TPanel* rightspace;
	Extctrls::TPanel* bottomspace;
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	Acformresizegrip::TacFormResizeGrip* acFormResizeGrip1;
	void __fastcall FormResize(System::TObject* Sender);
	void __fastcall MemoChange(System::TObject* Sender);
	void __fastcall FormShow(System::TObject* Sender);
public:
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TacStringEditor(Classes::TComponent* AOwner) : Forms::TForm(
		AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TacStringEditor(Classes::TComponent* AOwner, 
		int Dummy) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TacStringEditor(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacStringEditor(HWND ParentWindow) : Forms::TForm(
		ParentWindow) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acstringeditor */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acstringeditor;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acStringEditor
