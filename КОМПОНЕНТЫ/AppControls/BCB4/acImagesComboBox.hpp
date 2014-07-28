// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acImagesComboBox.pas' rev: 4.00

#ifndef acImagesComboBoxHPP
#define acImagesComboBoxHPP

#pragma delphiheader begin
#pragma option push -w-
#include <Menus.hpp>	// Pascal unit
#include <acGraphics.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acimagescombobox
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacImagesComboBox;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacImagesComboBox : public Stdctrls::TCustomComboBox 
{
	typedef Stdctrls::TCustomComboBox inherited;
	
private:
	AnsiString FAbout;
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
	__property AnsiString About = {read=FAbout, write=FAbout, stored=false};
	__property Controls::TImageList* Images = {read=FImages, write=SetImages};
	__property ItemHeight ;
	__property Align ;
	__property Anchors ;
	__property BiDiMode ;
	__property Color ;
	__property Constraints ;
	__property Ctl3D ;
	__property DragCursor ;
	__property DragKind ;
	__property DragMode ;
	__property DropDownCount ;
	__property Enabled ;
	__property Font ;
	__property ImeMode ;
	__property ImeName ;
	__property ItemIndex ;
	__property MaxLength ;
	__property ParentBiDiMode ;
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
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnMeasureItem ;
	__property OnStartDock ;
	__property OnStartDrag ;
	__property Items ;
public:
	#pragma option push -w-inl
	/* TCustomComboBox.Destroy */ inline __fastcall virtual ~TacImagesComboBox(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacImagesComboBox(HWND ParentWindow) : Stdctrls::TCustomComboBox(
		ParentWindow) { }
	#pragma option pop
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acimagescombobox */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acimagescombobox;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acImagesComboBox
