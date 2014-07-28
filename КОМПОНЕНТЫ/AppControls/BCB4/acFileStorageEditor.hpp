// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acFileStorageEditor.pas' rev: 4.00

#ifndef acFileStorageEditorHPP
#define acFileStorageEditorHPP

#pragma delphiheader begin
#pragma option push -w-
#include <acFormPlacementSaver.hpp>	// Pascal unit
#include <acFormTopmost.hpp>	// Pascal unit
#include <acExtAssociation.hpp>	// Pascal unit
#include <acSystemImageList.hpp>	// Pascal unit
#include <acComCtrls.hpp>	// Pascal unit
#include <acFormHelp.hpp>	// Pascal unit
#include <acCaptionButton.hpp>	// Pascal unit
#include <acClasses.hpp>	// Pascal unit
#include <acFileStorage.hpp>	// Pascal unit
#include <DsgnWnds.hpp>	// Pascal unit
#include <DsgnIntf.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acfilestorageeditor
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacFStorageEditor;
#pragma pack(push, 4)
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
	void __fastcall ListViewEdited(System::TObject* Sender, Comctrls::TListItem* Item, AnsiString &S);
	
private:
	Acfilestorage::TacFileStorage* FileStorage;
	void __fastcall RefreshList(void);
public:
	#pragma option push -w-inl
	/* TDesignWindow.Create */ inline __fastcall virtual TacFStorageEditor(Classes::TComponent* AOwner)
		 : Dsgnwnds::TDesignWindow(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TDesignWindow.Destroy */ inline __fastcall virtual ~TacFStorageEditor(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TacFStorageEditor(Classes::TComponent* AOwner
		, int Dummy) : Dsgnwnds::TDesignWindow(AOwner, Dummy) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacFStorageEditor(HWND ParentWindow) : Dsgnwnds::TDesignWindow(
		ParentWindow) { }
	#pragma option pop
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall ShowFileStorageDesigner(Forms::_di_IDesigner Designer, Acfilestorage::TacFileStorage* 
	FileStorage);

}	/* namespace Acfilestorageeditor */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acfilestorageeditor;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acFileStorageEditor
