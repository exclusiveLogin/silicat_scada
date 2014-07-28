// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'OpDesign.pas' rev: 5.00

#ifndef OpDesignHPP
#define OpDesignHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <OpMSO.hpp>	// Pascal unit
#include <TypInfo.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <OpModels.hpp>	// Pascal unit
#include <OpPower.hpp>	// Pascal unit
#include <OpOutlk.hpp>	// Pascal unit
#include <OpWord.hpp>	// Pascal unit
#include <OpExcel.hpp>	// Pascal unit
#include <OpShared.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DsgnIntf.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Opdesign
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TOpNestedCollectionEditor;
class PASCALIMPLEMENTATION TOpNestedCollectionEditor : public Dsgnintf::TPropertyEditor 
{
	typedef Dsgnintf::TPropertyEditor inherited;
	
public:
	virtual Dsgnintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual AnsiString __fastcall GetValue();
	virtual void __fastcall Edit(void);
protected:
	#pragma option push -w-inl
	/* TPropertyEditor.Create */ inline __fastcall virtual TOpNestedCollectionEditor(const Dsgnintf::_di_IFormDesigner 
		ADesigner, int APropCount) : Dsgnintf::TPropertyEditor(ADesigner, APropCount) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TOpNestedCollectionEditor(void) { }
	#pragma option pop
	
};


class DELPHICLASS TOpModelProperty;
class PASCALIMPLEMENTATION TOpModelProperty : public Dsgnintf::TComponentProperty 
{
	typedef Dsgnintf::TComponentProperty inherited;
	
private:
	Classes::TGetStrProc FOldStrProc;
	void __fastcall FilterModels(const AnsiString S);
	
public:
	virtual void __fastcall GetValues(Classes::TGetStrProc Proc);
protected:
	#pragma option push -w-inl
	/* TPropertyEditor.Create */ inline __fastcall virtual TOpModelProperty(const Dsgnintf::_di_IFormDesigner 
		ADesigner, int APropCount) : Dsgnintf::TComponentProperty(ADesigner, APropCount) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TOpModelProperty(void) { }
	#pragma option pop
	
};


class DELPHICLASS TOpOfficeFileProperty;
class PASCALIMPLEMENTATION TOpOfficeFileProperty : public Dsgnintf::TStringProperty 
{
	typedef Dsgnintf::TStringProperty inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual Dsgnintf::TPropertyAttributes __fastcall GetAttributes(void);
protected:
	#pragma option push -w-inl
	/* TPropertyEditor.Create */ inline __fastcall virtual TOpOfficeFileProperty(const Dsgnintf::_di_IFormDesigner 
		ADesigner, int APropCount) : Dsgnintf::TStringProperty(ADesigner, APropCount) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TOpOfficeFileProperty(void) { }
	#pragma option pop
	
};


class DELPHICLASS TOpOfficeAssistantProperty;
class PASCALIMPLEMENTATION TOpOfficeAssistantProperty : public Dsgnintf::TStringProperty 
{
	typedef Dsgnintf::TStringProperty inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual Dsgnintf::TPropertyAttributes __fastcall GetAttributes(void);
protected:
	#pragma option push -w-inl
	/* TPropertyEditor.Create */ inline __fastcall virtual TOpOfficeAssistantProperty(const Dsgnintf::_di_IFormDesigner 
		ADesigner, int APropCount) : Dsgnintf::TStringProperty(ADesigner, APropCount) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TOpOfficeAssistantProperty(void) { }
	#pragma option pop
	
};


class DELPHICLASS TOpMachineNameProperty;
class PASCALIMPLEMENTATION TOpMachineNameProperty : public Dsgnintf::TStringProperty 
{
	typedef Dsgnintf::TStringProperty inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual Dsgnintf::TPropertyAttributes __fastcall GetAttributes(void);
protected:
	#pragma option push -w-inl
	/* TPropertyEditor.Create */ inline __fastcall virtual TOpMachineNameProperty(const Dsgnintf::_di_IFormDesigner 
		ADesigner, int APropCount) : Dsgnintf::TStringProperty(ADesigner, APropCount) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TOpMachineNameProperty(void) { }
	#pragma option pop
	
};


class DELPHICLASS TOpOfficeComponentInfo;
class PASCALIMPLEMENTATION TOpOfficeComponentInfo : public Dsgnintf::TComponentEditor 
{
	typedef Dsgnintf::TComponentEditor inherited;
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual AnsiString __fastcall GetVerb(int index);
	virtual void __fastcall ExecuteVerb(int index);
	virtual void __fastcall Edit(void);
public:
	#pragma option push -w-inl
	/* TComponentEditor.Create */ inline __fastcall virtual TOpOfficeComponentInfo(Classes::TComponent* 
		AComponent, Dsgnintf::_di_IFormDesigner ADesigner) : Dsgnintf::TComponentEditor(AComponent, ADesigner
		) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TOpOfficeComponentInfo(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall Register(void);

}	/* namespace Opdesign */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Opdesign;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// OpDesign
