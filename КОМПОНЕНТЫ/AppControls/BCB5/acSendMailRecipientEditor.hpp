// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acSendMailRecipientEditor.pas' rev: 5.00

#ifndef acSendMailRecipientEditorHPP
#define acSendMailRecipientEditorHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acFormHelp.hpp>	// Pascal unit
#include <acCaptionButton.hpp>	// Pascal unit
#include <acClasses.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Grids.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acsendmailrecipienteditor
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacSendMailRecipientEditor;
class PASCALIMPLEMENTATION TacSendMailRecipientEditor : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TGroupBox* GroupBox1;
	Grids::TStringGrid* Grid;
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	Menus::TPopupMenu* PopupMenu1;
	Menus::TMenuItem* Addrecord1;
	Menus::TMenuItem* Insert1;
	Menus::TMenuItem* Delete1;
	Acformhelp::TacFormHelp* acFormHelp1;
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall FormDestroy(System::TObject* Sender);
	void __fastcall FormClose(System::TObject* Sender, Forms::TCloseAction &Action);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall OKBtnClick(System::TObject* Sender);
	void __fastcall GridClick(System::TObject* Sender);
	void __fastcall GridKeyDown(System::TObject* Sender, Word &Key, Classes::TShiftState Shift);
	void __fastcall Addrecord1Click(System::TObject* Sender);
	void __fastcall Insert1Click(System::TObject* Sender);
	void __fastcall Delete1Click(System::TObject* Sender);
	void __fastcall PopupMenu1Popup(System::TObject* Sender);
	
private:
	Classes::TStringList* Names;
	Classes::TStringList* Addresses;
	bool __fastcall IsLastRow(void);
	bool __fastcall IsEmptyRow(int RowIndex);
	void __fastcall InsertRow(int RowIndex);
	void __fastcall DeleteRow(int RowIndex);
	void __fastcall CollapseGridRows(void);
	
public:
	AnsiString Recipients;
public:
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TacSendMailRecipientEditor(Classes::TComponent* 
		AOwner) : Forms::TForm(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TacSendMailRecipientEditor(Classes::TComponent* 
		AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TacSendMailRecipientEditor(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacSendMailRecipientEditor(HWND ParentWindow) : 
		Forms::TForm(ParentWindow) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acsendmailrecipienteditor */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acsendmailrecipienteditor;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acSendMailRecipientEditor
