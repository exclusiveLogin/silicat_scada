// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acImagesComboBox.pas' rev: 3.00

#ifndef acImagesComboBoxHPP
#define acImagesComboBoxHPP
#include <Menus.hpp>
#include <acGraphics.hpp>
#include <SysUtils.hpp>
#include <Forms.hpp>
#include <StdCtrls.hpp>
#include <Graphics.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acimagescombobox
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacImagesComboBox;
class PASCALIMPLEMENTATION TacImagesComboBox : public Stdctrls::TCustomComboBox 
{
	typedef Stdctrls::TCustomComboBox inherited;
	
private:
	System::AnsiString FAbout;
	Controls::TImageList* FImages;
	void __fastcall SetImages(Controls::TImageList* Value);
	
protected:
	virtual void __fastcall Notification(Classes::TComponent* aComponent, Classes::TOperation aOperation
		);
	virtual void __fastcall DrawItem(int Index, const Windows::TRect &Rect, Stdctrls::TOwnerDrawState State
		);
	
public:
	__fastcall virtual TacImagesComboBox(Classes::TComponent* aOwner);
	__property Style ;
	
__published:
	__property System::AnsiString About = {read=FAbout, write=FAbout, stored=false};
	__property Controls::TImageList* Images = {read=FImages, write=SetImages};
	__property ItemHeight ;
	__property Align ;
	__property Color ;
	__property Ctl3D ;
	__property DragCursor ;
	__property DragMode ;
	__property DropDownCount ;
	__property Enabled ;
	__property Font ;
	__property ImeMode ;
	__property ImeName ;
	__property ItemIndex ;
	__property MaxLength ;
	__property ParentColor ;
	__property ParentCtl3D ;
	__property ParentFont ;
	__property ParentShowHint ;
	__property PopupMenu ;
	__property ShowHint ;
	__property Sorted ;
	__property TabOrder ;
	__property TabStop ;
	__property Text ;
	__property Visible ;
	__property OnChange ;
	__property OnClick ;
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnDrawItem ;
	__property OnDropDown ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnMeasureItem ;
	__property OnStartDrag ;
	__property Items ;
public:
	/* TCustomComboBox.Destroy */ __fastcall virtual ~TacImagesComboBox(void) { }
	
public:
	/* TWinControl.CreateParented */ __fastcall TacImagesComboBox(HWND ParentWindow) : Stdctrls::TCustomComboBox(
		ParentWindow) { }
	
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acimagescombobox */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acimagescombobox;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acImagesComboBox
