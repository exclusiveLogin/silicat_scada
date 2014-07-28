// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acMRUComboBox.pas' rev: 3.00

#ifndef acMRUComboBoxHPP
#define acMRUComboBoxHPP
#include <acGraphics.hpp>
#include <acClasses.hpp>
#include <SysUtils.hpp>
#include <Registry.hpp>
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

namespace Acmrucombobox
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacMRUComboBox;
class PASCALIMPLEMENTATION TacMRUComboBox : public Stdctrls::TComboBox 
{
	typedef Stdctrls::TComboBox inherited;
	
private:
	System::AnsiString FAbout;
	bool FAutoFill;
	int FAutoFillDelay;
	bool FAutoFillCaseSensitive;
	Controls::TCursor FCursorBorder;
	bool FMRUEnabled;
	TacRegLocation FMRURegLocation;
	System::AnsiString FMRURegKey;
	int FMRUMax;
	bool FMRUSaveOnExit;
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	bool FTimerEnabled;
	void __fastcall SetAutoFill(bool Value);
	void __fastcall SetAutoFillDelay(int Value);
	void __fastcall SetMRURegLocation(Acclasses::TacRegLocation Value);
	void __fastcall SetMRURegKey(System::AnsiString Value);
	void __fastcall DoSave(Registry::TRegistry* Reg);
	HIDESBASE MESSAGE void __fastcall CNChar(Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall CMExit(Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	void __fastcall UpdateTimer(void);
	void __fastcall SetTimerEnabled(bool Value);
	__property bool TimerEnabled = {read=FTimerEnabled, write=SetTimerEnabled, nodefault};
	
protected:
	virtual void __fastcall Loaded(void);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	virtual void __fastcall DoAutoFill(void);
	
public:
	__fastcall virtual TacMRUComboBox(Classes::TComponent* aOwner);
	__fastcall virtual ~TacMRUComboBox(void);
	void __fastcall AddToMRU(const System::AnsiString Str);
	void __fastcall Save(void);
	
__published:
	__property Align ;
	__property ItemIndex ;
	__property System::AnsiString About = {read=FAbout, write=FAbout, stored=false};
	__property bool AutoFill = {read=FAutoFill, write=SetAutoFill, default=1};
	__property int AutoFillDelay = {read=FAutoFillDelay, write=SetAutoFillDelay, default=500};
	__property bool AutoFillCaseSensitive = {read=FAutoFillCaseSensitive, write=FAutoFillCaseSensitive, 
		default=1};
	__property Controls::TCursor CursorBorder = {read=FCursorBorder, write=FCursorBorder, nodefault};
	__property bool MRUEnabled = {read=FMRUEnabled, write=FMRUEnabled, nodefault};
	__property Acclasses::TacRegLocation MRURegLocation = {read=FMRURegLocation, write=SetMRURegLocation
		, nodefault};
	__property System::AnsiString MRURegKey = {read=FMRURegKey, write=SetMRURegKey};
	__property int MRUMax = {read=FMRUMax, write=FMRUMax, default=20};
	__property bool MRUSaveOnExit = {read=FMRUSaveOnExit, write=FMRUSaveOnExit, nodefault};
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
public:
	/* TWinControl.CreateParented */ __fastcall TacMRUComboBox(HWND ParentWindow) : Stdctrls::TComboBox(
		ParentWindow) { }
	
};

//-- var, const, procedure ---------------------------------------------------
#define DEFAULT_AUTOFILL_DELAY (Word)(500)
#define DEFAULT_MAX_MRU (Byte)(20)

}	/* namespace Acmrucombobox */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acmrucombobox;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acMRUComboBox
