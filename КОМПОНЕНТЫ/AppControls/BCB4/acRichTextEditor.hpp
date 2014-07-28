// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acRichTextEditor.pas' rev: 4.00

#ifndef acRichTextEditorHPP
#define acRichTextEditorHPP

#pragma delphiheader begin
#pragma option push -w-
#include <ComCtrls.hpp>	// Pascal unit
#include <acFormResizeGrip.hpp>	// Pascal unit
#include <acFormPlacementSaver.hpp>	// Pascal unit
#include <acFormSizeRestrictions.hpp>	// Pascal unit
#include <acFormHelp.hpp>	// Pascal unit
#include <acCaptionButton.hpp>	// Pascal unit
#include <acClasses.hpp>	// Pascal unit
#include <RichEdit.hpp>	// Pascal unit
#include <Tabs.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
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

namespace Acrichtexteditor
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacRichTextEditor;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacRichTextEditor : public Forms::TForm 
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
	Menus::TPopupMenu* TagPopupMenu;
	Menus::TMenuItem* TagCutItem;
	Menus::TMenuItem* TagCopyItem;
	Menus::TMenuItem* TagPasteItem;
	Menus::TMenuItem* TagDeleteItem;
	Menus::TMenuItem* MenuItem6;
	Menus::TMenuItem* TagSelectAll;
	Acformplacementsaver::TacFormPlacementSaver* acFormPlacementSaver;
	Extctrls::TPanel* Panel;
	Comctrls::TRichEdit* TagEditor;
	Tabs::TTabSet* TabSet;
	Stdctrls::TButton* OkBtn;
	Stdctrls::TButton* CancelBtn;
	Stdctrls::TMemo* tmpMemo;
	Acformresizegrip::TacFormResizeGrip* acFormResizeGrip;
	Comctrls::TRichEdit* RichEditor;
	Extctrls::TPanel* Toolbar;
	Extctrls::TPanel* Panel4;
	Buttons::TSpeedButton* StrikeBtn;
	Buttons::TSpeedButton* UnderlineBtn;
	Buttons::TSpeedButton* ItalicBtn;
	Buttons::TSpeedButton* BoldBtn;
	Stdctrls::TComboBox* ColorComboBox;
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
	Buttons::TSpeedButton* SpeedButton1;
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
	void __fastcall RichUndoBtnClick(System::TObject* Sender);
	void __fastcall TabSetChange(System::TObject* Sender, int NewTab, bool &AllowChange);
	void __fastcall acFormHelpShow(System::TObject* Sender, Controls::TControl* HelpControl);
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
	void __fastcall FormShow(System::TObject* Sender);
	
private:
	void __fastcall SetComboBoxColor(Graphics::TColor Color, bool UseSpecifiedColor);
	
public:
	char GTagOpen;
	char GTagClose;
public:
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TacRichTextEditor(Classes::TComponent* AOwner) : 
		Forms::TForm(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TacRichTextEditor(Classes::TComponent* AOwner
		, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TacRichTextEditor(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacRichTextEditor(HWND ParentWindow) : Forms::TForm(
		ParentWindow) { }
	#pragma option pop
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acrichtexteditor */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acrichtexteditor;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acRichTextEditor
