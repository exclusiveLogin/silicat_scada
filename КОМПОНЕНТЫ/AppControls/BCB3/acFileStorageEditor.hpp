// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acFileStorageEditor.pas' rev: 3.00

#ifndef acFileStorageEditorHPP
#define acFileStorageEditorHPP
#include <acFormPlacementSaver.hpp>
#include <acFormTopmost.hpp>
#include <acExtAssociation.hpp>
#include <acSystemImageList.hpp>
#include <acComCtrls.hpp>
#include <acFormHelp.hpp>
#include <acCaptionButton.hpp>
#include <acClasses.hpp>
#include <acFileStorage.hpp>
#include <DsgnWnds.hpp>
#include <DsgnIntf.hpp>
#include <Menus.hpp>
#include <StdCtrls.hpp>
#include <ComCtrls.hpp>
#include <Dialogs.hpp>
#include <Forms.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <SysUtils.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acfilestorageeditor
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacFStorageEditor;
class PASCALIMPLEMENTATION TacFStorageEditor : public Dsgnwnds::TDesignWindow 
{
	typedef Dsgnwnds::TDesignWindow inherited;
	
__published:
	Stdctrls::TGroupBox* GroupBox1;
	Dialogs::TOpenDialog* OpenDialog;
	Menus::TPopupMenu* PopupMenu;
	Menus::TMenuItem* UploadItem;
	Menus::TMenuItem* DeleteItem;
	Menus::TMenuItem* N1;
	Menus::TMenuItem* ExtractItem;
	Dialogs::TSaveDialog* SaveDialog;
	Acformhelp::TacFormHelp* acFormHelp;
	Stdctrls::TButton* AddBtn;
	Stdctrls::TButton* DeleteBtn;
	Stdctrls::TButton* ClearBtn;
	Stdctrls::TButton* CloseBtn;
	Stdctrls::TButton* ExtractBtn;
	Accomctrls::TacListView* ListView;
	Acextassociation::TacExtAssociation* acExtAssociation;
	Controls::TImageList* ImageList;
	Menus::TMenuItem* N2;
	Menus::TMenuItem* SelectAll1;
	void __fastcall ListViewChange(System::TObject* Sender, Comctrls::TListItem* Item, Comctrls::TItemChange 
		Change);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall CloseBtnClick(System::TObject* Sender);
	void __fastcall FormClose(System::TObject* Sender, Forms::TCloseAction &Action);
	void __fastcall ClearBtnClick(System::TObject* Sender);
	void __fastcall DeleteBtnClick(System::TObject* Sender);
	void __fastcall AddBtnClick(System::TObject* Sender);
	void __fastcall ExtractBtnClick(System::TObject* Sender);
	void __fastcall SelectAll1Click(System::TObject* Sender);
	void __fastcall ListViewEdited(System::TObject* Sender, Comctrls::TListItem* Item, System::AnsiString 
		&S);
	
private:
	Acfilestorage::TacFileStorage* FileStorage;
	void __fastcall RefreshList(void);
public:
	/* TDesignWindow.Create */ __fastcall virtual TacFStorageEditor(Classes::TComponent* AOwner) : Dsgnwnds::
		TDesignWindow(AOwner) { }
	/* TDesignWindow.Destroy */ __fastcall virtual ~TacFStorageEditor(void) { }
	
public:
	/* TCustomForm.CreateNew */ __fastcall TacFStorageEditor(Classes::TComponent* AOwner, int Dummy) : 
		Dsgnwnds::TDesignWindow(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ __fastcall TacFStorageEditor(HWND ParentWindow) : Dsgnwnds::TDesignWindow(
		ParentWindow) { }
	
};

typedef TDesigner IDesigner;
;

typedef TFormDesigner IFormDesigner;
;

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall ShowFileStorageDesigner(Forms::TDesigner* Designer, Acfilestorage::TacFileStorage* 
	FileStorage);

}	/* namespace Acfilestorageeditor */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acfilestorageeditor;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acFileStorageEditor
