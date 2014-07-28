// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acMRUComboBox.pas' rev: 4.00

#ifndef acMRUComboBoxHPP
#define acMRUComboBoxHPP

#pragma delphiheader begin
#pragma option push -w-
#include <acGraphics.hpp>	// Pascal unit
#include <acClasses.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Registry.hpp>	// Pascal unit
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

namespace Acmrucombobox
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacMRUComboBox;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacMRUComboBox : public Stdctrls::TComboBox 
{
	typedef Stdctrls::TComboBox inherited;
	
private:
	AnsiString FAbout;
	bool FAutoFill;
	int FAutoFillDelay;
	bool FAutoFillCaseSensitive;
	Controls::TCursor FCursorBorder;
	bool FMRUEnabled;
	Acclasses::TacRegLocation FMRURegLocation;
	AnsiString FMRURegKey;
	int FMRUMax;
	bool FMRUSaveOnExit;
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	bool FTimerEnabled;
	void __fastcall SetAutoFill(bool Value);
	void __fastcall SetAutoFillDelay(int Value);
	void __fastcall SetMRURegLocation(Acclasses::TacRegLocation Value);
	void __fastcall SetMRURegKey(AnsiString Value);
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
	void __fastcall AddToMRU(const AnsiString Str);
	void __fastcall Save(void);
	
__published:
	__property Align ;
	__property ItemIndex ;
	__property AnsiString About = {read=FAbout, write=FAbout, stored=false};
	__property bool AutoFill = {read=FAutoFill, write=SetAutoFill, default=1};
	__property int AutoFillDelay = {read=FAutoFillDelay, write=SetAutoFillDelay, default=500};
	__property bool AutoFillCaseSensitive = {read=FAutoFillCaseSensitive, write=FAutoFillCaseSensitive, 
		default=1};
	__property Controls::TCursor CursorBorder = {read=FCursorBorder, write=FCursorBorder, nodefault};
	__property bool MRUEnabled = {read=FMRUEnabled, write=FMRUEnabled, nodefault};
	__property Acclasses::TacRegLocation MRURegLocation = {read=FMRURegLocation, write=SetMRURegLocation
		, nodefault};
	__property AnsiString MRURegKey = {read=FMRURegKey, write=SetMRURegKey};
	__property int MRUMax = {read=FMRUMax, write=FMRUMax, default=20};
	__property bool MRUSaveOnExit = {read=FMRUSaveOnExit, write=FMRUSaveOnExit, nodefault};
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacMRUComboBox(HWND ParentWindow) : Stdctrls::TComboBox(
		ParentWindow) { }
	#pragma option pop
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const Word DEFAULT_AUTOFILL_DELAY = 0x1f4;
static const Shortint DEFAULT_MAX_MRU = 0x14;

}	/* namespace Acmrucombobox */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acmrucombobox;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acMRUComboBox
