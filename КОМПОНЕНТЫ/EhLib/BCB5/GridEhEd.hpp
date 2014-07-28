// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'GridEhEd.pas' rev: 5.00

#ifndef GridEhEdHPP
#define GridEhEdHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <LibIntf.hpp>	// Pascal unit
#include <DsgnWnds.hpp>	// Pascal unit
#include <DsgnIntf.hpp>	// Pascal unit
#include <DBGrids.hpp>	// Pascal unit
#include <DBGridEh.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <ToolWin.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
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

namespace Gridehed
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBGridEhColumnsEditor;
class PASCALIMPLEMENTATION TDBGridEhColumnsEditor : public Dsgnwnds::TDesignWindow 
{
	typedef Dsgnwnds::TDesignWindow inherited;
	
__published:
	Comctrls::TToolBar* ToolBar1;
	Comctrls::TToolButton* tbAddNew;
	Comctrls::TToolButton* tbDeleteSelected;
	Comctrls::TToolButton* ToolButton3;
	Comctrls::TToolButton* tbAddAllFields;
	Comctrls::TToolButton* tbRestoreDefaults;
	Controls::TImageList* ImageList1;
	Menus::TPopupMenu* PopupMenu1;
	Menus::TMenuItem* miAddNew;
	Menus::TMenuItem* miDeleteSelected;
	Menus::TMenuItem* miAddAllFields;
	Menus::TMenuItem* miRestoreDefaults;
	Menus::TMenuItem* miSelectAll;
	Menus::TMenuItem* N1;
	Comctrls::TListView* ListView1;
	Comctrls::TToolButton* tbMoveUp;
	Comctrls::TToolButton* tbMoveDown;
	Comctrls::TToolButton* ToolButton4;
	void __fastcall FormClose(System::TObject* Sender, Forms::TCloseAction &Action);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall tbAddNewClick(System::TObject* Sender);
	void __fastcall tbDeleteSelectedClick(System::TObject* Sender);
	void __fastcall tbAddAllFieldsClick(System::TObject* Sender);
	void __fastcall tbRestoreDefaultsClick(System::TObject* Sender);
	void __fastcall ListView1Change(System::TObject* Sender, Comctrls::TListItem* Item, Comctrls::TItemChange 
		Change);
	void __fastcall FormResize(System::TObject* Sender);
	void __fastcall miAddNewClick(System::TObject* Sender);
	void __fastcall miDeleteSelectedClick(System::TObject* Sender);
	void __fastcall miSelectAllClick(System::TObject* Sender);
	void __fastcall miAddAllFieldsClick(System::TObject* Sender);
	void __fastcall miRestoreDefaultsClick(System::TObject* Sender);
	void __fastcall tbMoveUpClick(System::TObject* Sender);
	void __fastcall tbMoveDownClick(System::TObject* Sender);
	
private:
	Dbgrideh::TDBGridEh* FDBGridEh;
	bool __fastcall CheckCollection(void);
	void __fastcall SetDBGridEh(const Dbgrideh::TDBGridEh* Value);
	void __fastcall UpdateData(void);
	void __fastcall Copy(void);
	void __fastcall Cut(void);
	void __fastcall Paste(void);
	
protected:
	virtual AnsiString __fastcall UniqueName(Classes::TComponent* Component);
	DYNAMIC void __fastcall Activated(void);
	
public:
	virtual void __fastcall EditAction(Dsgnintf::TEditAction Action);
	virtual void __fastcall FormModified(void);
	virtual void __fastcall FormClosed(Forms::TCustomForm* Form);
	virtual Dsgnintf::TEditState __fastcall GetEditState(void);
	virtual void __fastcall ComponentDeleted(Dsgnintf::_di_IPersistent Component);
	__property Dbgrideh::TDBGridEh* DBGridEh = {read=FDBGridEh, write=SetDBGridEh};
public:
	#pragma option push -w-inl
	/* TDesignWindow.Create */ inline __fastcall virtual TDBGridEhColumnsEditor(Classes::TComponent* AOwner
		) : Dsgnwnds::TDesignWindow(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TDesignWindow.Destroy */ inline __fastcall virtual ~TDBGridEhColumnsEditor(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TDBGridEhColumnsEditor(Classes::TComponent* AOwner
		, int Dummy) : Dsgnwnds::TDesignWindow(AOwner, Dummy) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TDBGridEhColumnsEditor(HWND ParentWindow) : Dsgnwnds::TDesignWindow(
		ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TDBGridEhColumnsProperty;
class PASCALIMPLEMENTATION TDBGridEhColumnsProperty : public Dsgnintf::TPropertyEditor 
{
	typedef Dsgnintf::TPropertyEditor inherited;
	
public:
	virtual Dsgnintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual AnsiString __fastcall GetValue();
	virtual void __fastcall Edit(void);
protected:
	#pragma option push -w-inl
	/* TPropertyEditor.Create */ inline __fastcall virtual TDBGridEhColumnsProperty(const Dsgnintf::_di_IFormDesigner 
		ADesigner, int APropCount) : Dsgnintf::TPropertyEditor(ADesigner, APropCount) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TDBGridEhColumnsProperty(void) { }
	#pragma option pop
	
};


class DELPHICLASS TDBGridEhEditor;
class PASCALIMPLEMENTATION TDBGridEhEditor : public Dsgnintf::TComponentEditor 
{
	typedef Dsgnintf::TComponentEditor inherited;
	
public:
	virtual void __fastcall ExecuteVerb(int Index);
	virtual AnsiString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount(void);
public:
	#pragma option push -w-inl
	/* TComponentEditor.Create */ inline __fastcall virtual TDBGridEhEditor(Classes::TComponent* AComponent
		, Dsgnintf::_di_IFormDesigner ADesigner) : Dsgnintf::TComponentEditor(AComponent, ADesigner) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TDBGridEhEditor(void) { }
	#pragma option pop
	
};


class DELPHICLASS TDBGridEhFieldProperty;
class PASCALIMPLEMENTATION TDBGridEhFieldProperty : public Dsgnintf::TStringProperty 
{
	typedef Dsgnintf::TStringProperty inherited;
	
public:
	virtual Dsgnintf::TPropertyAttributes __fastcall GetAttributes(void);
	void __fastcall GetValueList(Classes::TStrings* List);
	virtual void __fastcall GetValues(Classes::TGetStrProc Proc);
protected:
	#pragma option push -w-inl
	/* TPropertyEditor.Create */ inline __fastcall virtual TDBGridEhFieldProperty(const Dsgnintf::_di_IFormDesigner 
		ADesigner, int APropCount) : Dsgnintf::TStringProperty(ADesigner, APropCount) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TDBGridEhFieldProperty(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TDBGridEhColumnsEditor* DBGridEhColumnsEditor;

}	/* namespace Gridehed */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Gridehed;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// GridEhEd
