// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acAutoUpgraderEditor.pas' rev: 4.00

#ifndef acAutoUpgraderEditorHPP
#define acAutoUpgraderEditorHPP

#pragma delphiheader begin
#pragma option push -w-
#include <acComCtrls.hpp>	// Pascal unit
#include <acExtAssociation.hpp>	// Pascal unit
#include <acFormHelp.hpp>	// Pascal unit
#include <acCaptionButton.hpp>	// Pascal unit
#include <acAutoUpgrader.hpp>	// Pascal unit
#include <acClasses.hpp>	// Pascal unit
#include <DsgnWnds.hpp>	// Pascal unit
#include <DsgnIntf.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <Registry.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acautoupgradereditor
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacAutoUpgraderEditor;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacAutoUpgraderEditor : public Dsgnwnds::TDesignWindow 
{
	typedef Dsgnwnds::TDesignWindow inherited;
	
__published:
	Stdctrls::TGroupBox* GroupBox1;
	Stdctrls::TLabel* Label1;
	Stdctrls::TLabel* Label2;
	Stdctrls::TEdit* DateEdit;
	Stdctrls::TEdit* NumberEdit;
	Stdctrls::TLabel* Label3;
	Stdctrls::TRadioButton* ByDateRadio;
	Stdctrls::TRadioButton* ByNumberRadio;
	Stdctrls::TGroupBox* GroupBox2;
	Stdctrls::TGroupBox* GroupBox3;
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	Stdctrls::TButton* ExportBtn;
	Dialogs::TSaveDialog* SaveDialog;
	Acformhelp::TacFormHelp* acFormHelp1;
	Stdctrls::TButton* AddBtn;
	Stdctrls::TButton* DeleteBtn;
	Stdctrls::TButton* CheckURLBtn;
	Extctrls::TPanel* Panel1;
	Stdctrls::TLabel* Label6;
	Stdctrls::TRadioButton* ReplaceRadio;
	Stdctrls::TRadioButton* RedirectRadio;
	Acextassociation::TacExtAssociation* acExtAssociation;
	Controls::TImageList* ImageList;
	Menus::TPopupMenu* PopupMenu;
	Accomctrls::TacListView* ListView;
	Menus::TMenuItem* AddItem;
	Menus::TMenuItem* DeleteItem;
	Menus::TMenuItem* RenameItem;
	Menus::TMenuItem* CheckURLItem;
	Menus::TMenuItem* N2;
	Extctrls::TPanel* Panel2;
	Buttons::TSpeedButton* BoldBtn;
	Buttons::TSpeedButton* ItalicBtn;
	Buttons::TSpeedButton* UnderlineBtn;
	Buttons::TSpeedButton* StrikeBtn;
	Stdctrls::TComboBox* ColorComboBox;
	Buttons::TSpeedButton* RichUndoBtn;
	Buttons::TSpeedButton* RichCutBtn;
	Buttons::TSpeedButton* RichCopyBtn;
	Buttons::TSpeedButton* RichPasteBtn;
	Buttons::TBitBtn* TestBtn;
	Comctrls::TRichEdit* RichMessage;
	Menus::TPopupMenu* RichPopupMenu;
	Menus::TMenuItem* RichCutItem;
	Menus::TMenuItem* RichCopyItem;
	Menus::TMenuItem* RichPasteItem;
	Menus::TMenuItem* RichDeleteItem;
	Menus::TMenuItem* MenuItem1;
	Menus::TMenuItem* RichSelectAllItem;
	Extctrls::TTimer* Timer;
	Stdctrls::TMemo* tmpMemo;
	Stdctrls::TRadioButton* SetupRadio;
	void __fastcall ExportBtnClick(System::TObject* Sender);
	void __fastcall FormClose(System::TObject* Sender, Forms::TCloseAction &Action);
	void __fastcall OKBtnClick(System::TObject* Sender);
	void __fastcall CancelBtnClick(System::TObject* Sender);
	void __fastcall TestBtnClick(System::TObject* Sender);
	void __fastcall ByDateRadioClick(System::TObject* Sender);
	void __fastcall DateEditExit(System::TObject* Sender);
	void __fastcall AddBtnClick(System::TObject* Sender);
	void __fastcall ListViewChange(System::TObject* Sender, Comctrls::TListItem* Item, Comctrls::TItemChange 
		Change);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall DeleteBtnClick(System::TObject* Sender);
	void __fastcall CheckURLBtnClick(System::TObject* Sender);
	void __fastcall RenameItemClick(System::TObject* Sender);
	void __fastcall ColorComboBoxChange(System::TObject* Sender);
	void __fastcall ColorComboBoxDrawItem(Controls::TWinControl* Control, int Index, const Windows::TRect 
		&Rect, Stdctrls::TOwnerDrawState State);
	void __fastcall RichMessageKeyPress(System::TObject* Sender, char &Key);
	void __fastcall RichMessageSelectionChange(System::TObject* Sender);
	void __fastcall TimerTimer(System::TObject* Sender);
	void __fastcall BoldBtnClick(System::TObject* Sender);
	void __fastcall ItalicBtnClick(System::TObject* Sender);
	void __fastcall UnderlineBtnClick(System::TObject* Sender);
	void __fastcall StrikeBtnClick(System::TObject* Sender);
	void __fastcall RichUndoBtnClick(System::TObject* Sender);
	void __fastcall RichCutBtnClick(System::TObject* Sender);
	void __fastcall RichCopyBtnClick(System::TObject* Sender);
	void __fastcall RichPasteBtnClick(System::TObject* Sender);
	void __fastcall RichDeleteItemClick(System::TObject* Sender);
	void __fastcall RichSelectAllItemClick(System::TObject* Sender);
	void __fastcall ListViewKeyPress(System::TObject* Sender, char &Key);
	void __fastcall ListViewDblClick(System::TObject* Sender);
	
private:
	void __fastcall SetComboBoxColor(Graphics::TColor Color, bool UseSpecifiedColor);
	void __fastcall AddURLToList(AnsiString URL);
	
public:
	Acautoupgrader::TacAutoUpgrader* AutoUpgrader;
public:
	#pragma option push -w-inl
	/* TDesignWindow.Create */ inline __fastcall virtual TacAutoUpgraderEditor(Classes::TComponent* AOwner
		) : Dsgnwnds::TDesignWindow(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TDesignWindow.Destroy */ inline __fastcall virtual ~TacAutoUpgraderEditor(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TacAutoUpgraderEditor(Classes::TComponent* AOwner
		, int Dummy) : Dsgnwnds::TDesignWindow(AOwner, Dummy) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacAutoUpgraderEditor(HWND ParentWindow) : Dsgnwnds::TDesignWindow(
		ParentWindow) { }
	#pragma option pop
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall ShowAutoUpgraderDesigner(Forms::_di_IDesigner Designer, Acautoupgrader::TacAutoUpgrader* 
	AutoUpgrader);

}	/* namespace Acautoupgradereditor */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acautoupgradereditor;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acAutoUpgraderEditor
