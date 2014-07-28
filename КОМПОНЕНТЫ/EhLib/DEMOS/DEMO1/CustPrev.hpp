// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'CustPrev.pas' rev: 5.00

#ifndef CustPrevHPP
#define CustPrevHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <ExtCtrls.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <PrViewEh.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Custprev
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TfCustomPreview;
class PASCALIMPLEMENTATION TfCustomPreview : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
__published:
	Extctrls::TPanel* Panel1;
	Stdctrls::TButton* bPrint;
	Stdctrls::TButton* bPrinterSetupDialog;
	Stdctrls::TButton* bPrevPage;
	Stdctrls::TButton* bNextPage;
	Stdctrls::TButton* bStop;
	Stdctrls::TButton* bClose;
	Prvieweh::TPreviewBox* PreviewBox1;
	Comctrls::TStatusBar* StatusBar1;
	void __fastcall bPrintClick(System::TObject* Sender);
	void __fastcall bPrinterSetupDialogClick(System::TObject* Sender);
	void __fastcall bPrevPageClick(System::TObject* Sender);
	void __fastcall bNextPageClick(System::TObject* Sender);
	void __fastcall PreviewBox1PrinterPreviewChanged(System::TObject* Sender);
	void __fastcall PreviewBox1OpenPreviewer(System::TObject* Sender);
	void __fastcall bCloseClick(System::TObject* Sender);
public:
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TfCustomPreview(Classes::TComponent* AOwner) : Forms::TForm(
		AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TfCustomPreview(Classes::TComponent* AOwner, 
		int Dummy) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TfCustomPreview(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TfCustomPreview(HWND ParentWindow) : Forms::TForm(
		ParentWindow) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TfCustomPreview* fCustomPreview;

}	/* namespace Custprev */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Custprev;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CustPrev
