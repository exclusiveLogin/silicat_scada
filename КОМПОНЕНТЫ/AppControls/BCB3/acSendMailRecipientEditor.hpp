// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acSendMailRecipientEditor.pas' rev: 3.00

#ifndef acSendMailRecipientEditorHPP
#define acSendMailRecipientEditorHPP
#include <acFormHelp.hpp>
#include <acCaptionButton.hpp>
#include <acClasses.hpp>
#include <Menus.hpp>
#include <Grids.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

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
	System::AnsiString Recipients;
public:
	/* TCustomForm.Create */ __fastcall virtual TacSendMailRecipientEditor(Classes::TComponent* AOwner)
		 : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ __fastcall TacSendMailRecipientEditor(Classes::TComponent* AOwner, int 
		Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ __fastcall virtual ~TacSendMailRecipientEditor(void) { }
	
public:
	/* TWinControl.CreateParented */ __fastcall TacSendMailRecipientEditor(HWND ParentWindow) : Forms::
		TForm(ParentWindow) { }
	
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acsendmailrecipienteditor */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acsendmailrecipienteditor;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acSendMailRecipientEditor
