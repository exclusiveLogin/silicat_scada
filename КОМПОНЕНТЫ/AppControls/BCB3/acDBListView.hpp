// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acDBListView.pas' rev: 3.00

#ifndef acDBListViewHPP
#define acDBListViewHPP
#include <ComCtrls.hpp>
#include <acComCtrls.hpp>
#include <Db.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acdblistview
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacDBListViewDataLink;
class DELPHICLASS TacDBListView;
class PASCALIMPLEMENTATION TacDBListView : public Accomctrls::TacCustomListView 
{
	typedef Accomctrls::TacCustomListView inherited;
	
private:
	TacDBListViewDataLink* FDataLink;
	bool FUpdating;
	Db::TDataSource* __fastcall GetDataSource(void);
	void __fastcall SetDataSource(Db::TDataSource* Value);
	MESSAGE void __fastcall CMGetDataLink(Messages::TMessage &Message);
	
protected:
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation
		);
	virtual void __fastcall LinkActive(bool Value);
	
public:
	__fastcall virtual TacDBListView(Classes::TComponent* aOwner);
	__fastcall virtual ~TacDBListView(void);
	virtual void __fastcall UpdateList(void);
	
__published:
	__property Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property Columns ;
	__property RowSelect ;
public:
	/* TWinControl.CreateParented */ __fastcall TacDBListView(HWND ParentWindow) : Accomctrls::TacCustomListView(
		ParentWindow) { }
	
};

class PASCALIMPLEMENTATION TacDBListViewDataLink : public Db::TDataLink 
{
	typedef Db::TDataLink inherited;
	
private:
	TacDBListView* FListView;
	
protected:
	virtual void __fastcall ActiveChanged(void);
	
public:
	__fastcall TacDBListViewDataLink(TacDBListView* aListView);
public:
	/* TDataLink.Destroy */ __fastcall virtual ~TacDBListViewDataLink(void) { }
	
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acdblistview */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acdblistview;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acDBListView
