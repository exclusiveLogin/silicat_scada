// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acAutoUpgraderEditor.pas' rev: 3.00

#ifndef acAutoUpgraderEditorHPP
#define acAutoUpgraderEditorHPP
#include <acComCtrls.hpp>
#include <acExtAssociation.hpp>
#include <acFormHelp.hpp>
#include <acCaptionButton.hpp>
#include <acAutoUpgrader.hpp>
#include <acClasses.hpp>
#include <DsgnWnds.hpp>
#include <DsgnIntf.hpp>
#include <Registry.hpp>
#include <Dialogs.hpp>
#include <Buttons.hpp>
#include <SysUtils.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <Menus.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acautoupgradereditor
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacAutoUpgraderEditor;
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
	void __fastcall AddURLToList(System::AnsiString URL);
	
public:
	Acautoupgrader::TacAutoUpgrader* AutoUpgrader;
public:
	/* TDesignWindow.Create */ __fastcall virtual TacAutoUpgraderEditor(Classes::TComponent* AOwner) : 
		Dsgnwnds::TDesignWindow(AOwner) { }
	/* TDesignWindow.Destroy */ __fastcall virtual ~TacAutoUpgraderEditor(void) { }
	
public:
	/* TCustomForm.CreateNew */ __fastcall TacAutoUpgraderEditor(Classes::TComponent* AOwner, int Dummy
		) : Dsgnwnds::TDesignWindow(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ __fastcall TacAutoUpgraderEditor(HWND ParentWindow) : Dsgnwnds::TDesignWindow(
		ParentWindow) { }
	
};

typedef TDesigner IDesigner;
;

typedef TFormDesigner IFormDesigner;
;

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall ShowAutoUpgraderDesigner(Forms::TDesigner* Designer, Acautoupgrader::TacAutoUpgrader* 
	AutoUpgrader);

}	/* namespace Acautoupgradereditor */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acautoupgradereditor;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acAutoUpgraderEditor
