// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBSumLst.pas' rev: 5.00

#ifndef DBSumLstHPP
#define DBSumLstHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <TypInfo.hpp>	// Pascal unit
#include <Db.hpp>	// Pascal unit
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

namespace Dbsumlst
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TGroupOperation { goSum, goCount };
#pragma option pop

class DELPHICLASS TDBSum;
class PASCALIMPLEMENTATION TDBSum : public Classes::TCollectionItem 
{
	typedef Classes::TCollectionItem inherited;
	
private:
	void __fastcall SetGroupOperation(const TGroupOperation Value);
	void __fastcall SetFieldName(const AnsiString Value);
	
protected:
	TGroupOperation FGroupOperation;
	AnsiString FFieldName;
	System::Currency Value;
	
public:
	System::Currency SumValue;
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	
__published:
	__property TGroupOperation GroupOperation = {read=FGroupOperation, write=SetGroupOperation, nodefault
		};
	__property AnsiString FieldName = {read=FFieldName, write=SetFieldName};
public:
	#pragma option push -w-inl
	/* TCollectionItem.Create */ inline __fastcall virtual TDBSum(Classes::TCollection* Collection) : Classes::TCollectionItem(
		Collection) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TDBSum(void) { }
	#pragma option pop
	
};


class DELPHICLASS TDBSumCollection;
class PASCALIMPLEMENTATION TDBSumCollection : public Classes::TCollection 
{
	typedef Classes::TCollection inherited;
	
protected:
	Classes::TPersistent* FOwner;
	DYNAMIC Classes::TPersistent* __fastcall GetOwner(void);
	HIDESBASE TDBSum* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TDBSum* Value);
	virtual void __fastcall Update(Classes::TCollectionItem* Item);
	
public:
	__property TDBSum* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	TDBSum* __fastcall GetSumByOpAndFName(TGroupOperation AGroupOperation, AnsiString AFieldName);
public:
		
	#pragma option push -w-inl
	/* TCollection.Create */ inline __fastcall TDBSumCollection(TMetaClass* ItemClass) : Classes::TCollection(
		ItemClass) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCollection.Destroy */ inline __fastcall virtual ~TDBSumCollection(void) { }
	#pragma option pop
	
};


class DELPHICLASS TDBSumListProducer;
class PASCALIMPLEMENTATION TDBSumListProducer : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FVirtualRecords;
	void __fastcall SetVirtualRecords(const bool Value);
	int __fastcall GetRecNo(void);
	void __fastcall SetRecNo(const int Value);
	
protected:
	Classes::TComponent* FOwner;
	Classes::TNotifyEvent FOnRecalcAll;
	bool FExternalRecalc;
	TDBSumCollection* FSumCollection;
	Db::TDataSet* FDataSet;
	Db::TDataSet* FMasterDataset;
	Typinfo::TPropInfo *FMasterPropInfo;
	Classes::TNotifyEvent FSumListChanged;
	bool Filtered;
	AnsiString Filter;
	bool Changing;
	bool FActive;
	bool FEventsOverloaded;
	bool FDesignTimeWork;
	Classes::TList* FVirtualRecList;
	int FOldRecNo;
	bool FTryedInsert;
	Db::TDataSetNotifyEvent OldAfterEdit;
	Db::TDataSetNotifyEvent OldAfterInsert;
	Db::TDataSetNotifyEvent OldAfterOpen;
	Db::TDataSetNotifyEvent OldAfterPost;
	Db::TDataSetNotifyEvent OldAfterScroll;
	Db::TDataSetNotifyEvent OldBeforeDelete;
	Db::TDataSetNotifyEvent OldAfterClose;
	Db::TDataSetNotifyEvent OldAfterCancel;
	Db::TDataSetNotifyEvent OldMasterAfterScroll;
	void __fastcall DataSetAfterEdit(Db::TDataSet* DataSet);
	void __fastcall DataSetAfterInsert(Db::TDataSet* DataSet);
	void __fastcall DataSetAfterOpen(Db::TDataSet* DataSet);
	void __fastcall DataSetAfterPost(Db::TDataSet* DataSet);
	void __fastcall DataSetAfterScroll(Db::TDataSet* DataSet);
	void __fastcall DataSetBeforeDelete(Db::TDataSet* DataSet);
	void __fastcall DataSetAfterClose(Db::TDataSet* DataSet);
	void __fastcall DataSetAfterCancel(Db::TDataSet* DataSet);
	DYNAMIC Classes::TPersistent* __fastcall GetOwner(void);
	Db::TDataSet* __fastcall GetMasterDataSet(Typinfo::PPropInfo APropInfo);
	void __fastcall MasterDataSetAfterScroll(Db::TDataSet* DataSet);
	void __fastcall ResetMasterInfo(void);
	void __fastcall SetExternalRecalc(const bool Value);
	void __fastcall Update(void);
	void __fastcall ReturnEvents(void);
	virtual int __fastcall FindVirtualRecord(void * Bookmark);
	void __fastcall DoSumListChanged(void);
	void __fastcall SetActive(const bool Value);
	void __fastcall SetDataSet(Db::TDataSet* Value);
	void __fastcall Loaded(void);
	void __fastcall SetSumCollection(const TDBSumCollection* Value);
	
public:
	__fastcall TDBSumListProducer(Classes::TComponent* AOwner);
	__fastcall virtual ~TDBSumListProducer(void);
	void __fastcall Activate(bool ARecalcAll);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	virtual void __fastcall ClearSumValues(void);
	void __fastcall Deactivate(bool AClearSumValues);
	virtual void __fastcall RecalcAll(void);
	void __fastcall SetDataSetEvents(void);
	int __fastcall RecordCount(void);
	bool __fastcall IsSequenced(void);
	__property bool Active = {read=FActive, write=SetActive, default=1};
	__property bool ExternalRecalc = {read=FExternalRecalc, write=SetExternalRecalc, nodefault};
	__property TDBSumCollection* SumCollection = {read=FSumCollection, write=SetSumCollection};
	__property Db::TDataSet* DataSet = {read=FDataSet, write=SetDataSet};
	__property bool VirtualRecords = {read=FVirtualRecords, write=SetVirtualRecords, nodefault};
	__property int RecNo = {read=GetRecNo, write=SetRecNo, nodefault};
	__property Classes::TNotifyEvent SumListChanged = {read=FSumListChanged, write=FSumListChanged};
	__property Classes::TNotifyEvent OnRecalcAll = {read=FOnRecalcAll, write=FOnRecalcAll};
};


class DELPHICLASS TDBSumList;
class PASCALIMPLEMENTATION TDBSumList : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	bool __fastcall GetActive(void);
	Db::TDataSet* __fastcall GetDataSet(void);
	bool __fastcall GetExternalRecalc(void);
	Classes::TNotifyEvent __fastcall GetOnRecalcAll();
	TDBSumCollection* __fastcall GetSumCollection(void);
	Classes::TNotifyEvent __fastcall GetSumListChanged();
	void __fastcall SetOnRecalcAll(const Classes::TNotifyEvent Value);
	void __fastcall SetSumListChanged(const Classes::TNotifyEvent Value);
	void __fastcall SetVirtualRecords(const bool Value);
	bool __fastcall GetVirtualRecords(void);
	int __fastcall GetRecNo(void);
	void __fastcall SetRecNo(const int Value);
	
protected:
	TDBSumListProducer* FSumListProducer;
	void __fastcall DataSetAfterEdit(Db::TDataSet* DataSet);
	void __fastcall DataSetAfterInsert(Db::TDataSet* DataSet);
	void __fastcall DataSetAfterOpen(Db::TDataSet* DataSet);
	void __fastcall DataSetAfterPost(Db::TDataSet* DataSet);
	void __fastcall DataSetAfterScroll(Db::TDataSet* DataSet);
	void __fastcall DataSetBeforeDelete(Db::TDataSet* DataSet);
	void __fastcall DataSetAfterClose(Db::TDataSet* DataSet);
	void __fastcall MasterDataSetAfterScroll(Db::TDataSet* DataSet);
	void __fastcall SetExternalRecalc(const bool Value);
	void __fastcall DoSumListChanged(void);
	void __fastcall SetActive(const bool Value);
	void __fastcall SetDataSet(Db::TDataSet* Value);
	virtual void __fastcall Loaded(void);
	void __fastcall SetSumCollection(const TDBSumCollection* Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation
		);
	
public:
	__fastcall virtual TDBSumList(Classes::TComponent* AOwner);
	__fastcall virtual ~TDBSumList(void);
	void __fastcall Activate(bool ARecalcAll);
	virtual void __fastcall ClearSumValues(void);
	void __fastcall Deactivate(bool AClearSumValues);
	virtual void __fastcall RecalcAll(void);
	void __fastcall SetDataSetEvents(void);
	int __fastcall RecordCount(void);
	bool __fastcall IsSequenced(void);
	__property int RecNo = {read=GetRecNo, write=SetRecNo, nodefault};
	
__published:
	__property bool Active = {read=GetActive, write=SetActive, default=1};
	__property bool ExternalRecalc = {read=GetExternalRecalc, write=SetExternalRecalc, nodefault};
	__property TDBSumCollection* SumCollection = {read=GetSumCollection, write=SetSumCollection};
	__property Db::TDataSet* DataSet = {read=GetDataSet, write=SetDataSet};
	__property bool VirtualRecords = {read=GetVirtualRecords, write=SetVirtualRecords, nodefault};
	__property Classes::TNotifyEvent SumListChanged = {read=GetSumListChanged, write=SetSumListChanged}
		;
	__property Classes::TNotifyEvent OnRecalcAll = {read=GetOnRecalcAll, write=SetOnRecalcAll};
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbsumlst */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbsumlst;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DBSumLst
