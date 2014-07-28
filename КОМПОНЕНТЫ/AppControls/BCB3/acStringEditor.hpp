// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acStringEditor.pas' rev: 3.00

#ifndef acStringEditorHPP
#define acStringEditorHPP
#include <acFormResizeGrip.hpp>
#include <ExtCtrls.hpp>
#include <acFormHelp.hpp>
#include <acCaptionButton.hpp>
#include <acFormSizeRestrictions.hpp>
#include <acFormPlacementSaver.hpp>
#include <acClasses.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <SysUtils.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

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
	/* TCustomForm.Create */ __fastcall virtual TacStringEditor(Classes::TComponent* AOwner) : Forms::TForm(
		AOwner) { }
	/* TCustomForm.CreateNew */ __fastcall TacStringEditor(Classes::TComponent* AOwner, int Dummy) : Forms::
		TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ __fastcall virtual ~TacStringEditor(void) { }
	
public:
	/* TWinControl.CreateParented */ __fastcall TacStringEditor(HWND ParentWindow) : Forms::TForm(ParentWindow
		) { }
	
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acstringeditor */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acstringeditor;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acStringEditor
