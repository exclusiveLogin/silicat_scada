// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acFormHelpEditor.pas' rev: 3.00

#ifndef acFormHelpEditorHPP
#define acFormHelpEditorHPP
#include <acFormResizeGrip.hpp>
#include <acFormPlacementSaver.hpp>
#include <acFormSizeRestrictions.hpp>
#include <acFormHelp.hpp>
#include <acCaptionButton.hpp>
#include <acClasses.hpp>
#include <RichEdit.hpp>
#include <Tabs.hpp>
#include <Registry.hpp>
#include <Menus.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <ComCtrls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Controls.hpp>
#include <Graphics.hpp>
#include <Classes.hpp>
#include <SysUtils.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acformhelpeditor
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacFormHelpEditor;
class PASCALIMPLEMENTATION TacFormHelpEditor : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
__published:
	Menus::TPopupMenu* RichPopupMenu;
	Menus::TMenuItem* RichCutItem;
	Menus::TMenuItem* RichCopyItem;
	Menus::TMenuItem* RichPasteItem;
	Menus::TMenuItem* N1;
	Menus::TMenuItem* RichSelectAllItem;
	Extctrls::TTimer* Timer;
	Menus::TMenuItem* RichDeleteItem;
	Acformhelp::TacFormHelp* acFormHelp;
	Acformsizerestrictions::TacFormSizeRestrictions* acFormSizeRestrictions;
	Comctrls::TPageControl* PageControl;
	Comctrls::TTabSheet* FirstPart;
	Comctrls::TTabSheet* SecondPart;
	Extctrls::TPanel* Toolbar;
	Menus::TPopupMenu* MemoPopupMenu;
	Menus::TMenuItem* MemoCutItem;
	Menus::TMenuItem* MemoCopyItem;
	Menus::TMenuItem* MemoPasteItem;
	Menus::TMenuItem* MemoDeleteItem;
	Menus::TMenuItem* MenuItem5;
	Menus::TMenuItem* MemoSelectAllItem;
	Tabs::TTabSet* TabSet;
	Comctrls::TRichEdit* RichEditor;
	Comctrls::TRichEdit* TagEditor;
	Comctrls::TRichEdit* Memo;
	Extctrls::TPanel* Panel2;
	Stdctrls::TComboBox* ColorComboBox;
	Buttons::TSpeedButton* StrikeBtn;
	Buttons::TSpeedButton* UnderlineBtn;
	Buttons::TSpeedButton* ItalicBtn;
	Buttons::TSpeedButton* BoldBtn;
	Extctrls::TPanel* RichPanel;
	Buttons::TSpeedButton* RichUndoBtn;
	Buttons::TSpeedButton* RichCutBtn;
	Buttons::TSpeedButton* RichCopyBtn;
	Buttons::TSpeedButton* RichPasteBtn;
	Extctrls::TPanel* TagPanel;
	Buttons::TSpeedButton* TagPasteBtn;
	Buttons::TSpeedButton* TagCopyBtn;
	Buttons::TSpeedButton* TagCutBtn;
	Buttons::TSpeedButton* TagUndoBtn;
	Menus::TPopupMenu* TagPopupMenu;
	Menus::TMenuItem* TagCutItem;
	Menus::TMenuItem* TagCopyItem;
	Menus::TMenuItem* TagPasteItem;
	Menus::TMenuItem* TagDeleteItem;
	Menus::TMenuItem* MenuItem6;
	Menus::TMenuItem* TagSelectAll;
	Acformplacementsaver::TacFormPlacementSaver* acFormPlacementSaver;
	Acformresizegrip::TacFormResizeGrip* acFormResizeGrip;
	Stdctrls::TButton* OkBtn;
	Stdctrls::TButton* CancelBtn;
	Stdctrls::TMemo* tmpMemo;
	void __fastcall RichEditorSelectionChange(System::TObject* Sender);
	void __fastcall BoldBtnClick(System::TObject* Sender);
	void __fastcall ItalicBtnClick(System::TObject* Sender);
	void __fastcall UnderlineBtnClick(System::TObject* Sender);
	void __fastcall ColorComboBoxDrawItem(Controls::TWinControl* Control, int Index, const Windows::TRect 
		&Rect, Stdctrls::TOwnerDrawState State);
	void __fastcall ColorComboBoxChange(System::TObject* Sender);
	void __fastcall StrikeBtnClick(System::TObject* Sender);
	void __fastcall TimerTimer(System::TObject* Sender);
	void __fastcall RichCutItemClick(System::TObject* Sender);
	void __fastcall RichCopyItemClick(System::TObject* Sender);
	void __fastcall RichPasteItemClick(System::TObject* Sender);
	void __fastcall RichSelectAllItemClick(System::TObject* Sender);
	void __fastcall RichDeleteItemClick(System::TObject* Sender);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall RichUndoBtnClick(System::TObject* Sender);
	void __fastcall PageControlChange(System::TObject* Sender);
	void __fastcall MemoSelectionChange(System::TObject* Sender);
	void __fastcall MemoCutItemClick(System::TObject* Sender);
	void __fastcall MemoCopyItemClick(System::TObject* Sender);
	void __fastcall MemoPasteItemClick(System::TObject* Sender);
	void __fastcall MemoDeleteItemClick(System::TObject* Sender);
	void __fastcall MemoSelectAllItemClick(System::TObject* Sender);
	void __fastcall TabSetChange(System::TObject* Sender, int NewTab, bool &AllowChange);
	void __fastcall FormResize(System::TObject* Sender);
	void __fastcall TagUndoBtnClick(System::TObject* Sender);
	void __fastcall TagCutItemClick(System::TObject* Sender);
	void __fastcall TagCopyItemClick(System::TObject* Sender);
	void __fastcall TagPasteItemClick(System::TObject* Sender);
	void __fastcall TagDeleteItemClick(System::TObject* Sender);
	void __fastcall TagSelectAllClick(System::TObject* Sender);
	void __fastcall TagEditorSelectionChange(System::TObject* Sender);
	void __fastcall TagEditorKeyPress(System::TObject* Sender, char &Key);
	void __fastcall OkBtnClick(System::TObject* Sender);
	void __fastcall acFormHelpShow(System::TObject* Sender, Controls::TControl* HelpControl, System::AnsiString 
		&HelpMessage);
	
private:
	void __fastcall SetComboBoxColor(Graphics::TColor Color, bool UseSpecifiedColor);
	
public:
	Acformhelp::TacFormHelp* FormHelp;
	void __fastcall AssignFormHelp(Acformhelp::TacFormHelp* aFormHelp);
public:
	/* TCustomForm.Create */ __fastcall virtual TacFormHelpEditor(Classes::TComponent* AOwner) : Forms::
		TForm(AOwner) { }
	/* TCustomForm.CreateNew */ __fastcall TacFormHelpEditor(Classes::TComponent* AOwner, int Dummy) : 
		Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ __fastcall virtual ~TacFormHelpEditor(void) { }
	
public:
	/* TWinControl.CreateParented */ __fastcall TacFormHelpEditor(HWND ParentWindow) : Forms::TForm(ParentWindow
		) { }
	
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acformhelpeditor */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acformhelpeditor;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acFormHelpEditor
