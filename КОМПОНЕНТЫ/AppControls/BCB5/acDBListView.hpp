// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acDBListView.pas' rev: 5.00

#ifndef acDBListViewHPP
#define acDBListViewHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <ComCtrls.hpp>	// Pascal unit
#include <acComCtrls.hpp>	// Pascal unit
#include <Db.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

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
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacDBListView(HWND ParentWindow) : Accomctrls::TacCustomListView(
		ParentWindow) { }
	#pragma option pop
	
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
	#pragma option push -w-inl
	/* TDataLink.Destroy */ inline __fastcall virtual ~TacDBListViewDataLink(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acdblistview */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acdblistview;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acDBListView
