// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acEdit.pas' rev: 4.00

#ifndef acEditHPP
#define acEditHPP

#pragma delphiheader begin
#pragma option push -w-
#include <Menus.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acedit
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacEditButton;
class DELPHICLASS TacCustomEdit;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacCustomEdit : public Stdctrls::TEdit 
{
	typedef Stdctrls::TEdit inherited;
	
private:
	AnsiString FAbout;
	Classes::TAlignment FAlignment;
	bool FAutoSelect;
	TacEditButton* FButton;
	Graphics::TColor FColor;
	Graphics::TColor FColorDisabled;
	Controls::TCursor FCursorBorder;
	Classes::TNotifyEvent FOnButtonClick;
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	Buttons::TSpeedButton* FBtn;
	Controls::TWinControl* FBtnControl;
	bool FNameEdit;
	AnsiString FValidChars;
	bool FValidateChars;
	void __fastcall UpdateBtnBounds(void);
	void __fastcall UpdateEditRect(void);
	void __fastcall UpdateBkColor(void);
	void __fastcall SetAlignment(Classes::TAlignment Value);
	HIDESBASE void __fastcall SetColor(Graphics::TColor Value);
	void __fastcall SetColorDisabled(Graphics::TColor Value);
	char __fastcall GetPasswordChar(void);
	HIDESBASE void __fastcall SetPasswordChar(char Value);
	HIDESBASE MESSAGE void __fastcall WMChar(Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall CMEnter(Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Messages::TMessage &Message);
	MESSAGE void __fastcall CMEnableChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	void __fastcall EditButtonClick(System::TObject* Sender);
	
protected:
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd(void);
	DYNAMIC void __fastcall KeyPress(char &Key);
	virtual void __fastcall ButtonClick(void);
	
public:
	__fastcall virtual TacCustomEdit(Classes::TComponent* aOwner);
	__fastcall virtual ~TacCustomEdit(void);
	__property AnsiString About = {read=FAbout, write=FAbout, stored=false};
	__property Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property bool AutoSelect = {read=FAutoSelect, write=FAutoSelect, default=1};
	__property TacEditButton* Button = {read=FButton, write=FButton};
	__property Graphics::TColor Color = {read=FColor, write=SetColor, nodefault};
	__property Graphics::TColor ColorDisabled = {read=FColorDisabled, write=SetColorDisabled, default=-2147483633
		};
	__property Controls::TCursor CursorBorder = {read=FCursorBorder, write=FCursorBorder, nodefault};
	__property char PasswordChar = {read=GetPasswordChar, write=SetPasswordChar, nodefault};
	__property AnsiString ValidChars = {read=FValidChars, write=FValidChars};
	__property bool ValidateChars = {read=FValidateChars, write=FValidateChars, default=0};
	__property Buttons::TSpeedButton* EditButton = {read=FBtn};
	__property Classes::TNotifyEvent OnButtonClick = {read=FOnButtonClick, write=FOnButtonClick};
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacCustomEdit(HWND ParentWindow) : Stdctrls::TEdit(
		ParentWindow) { }
	#pragma option pop
	
};

#pragma pack(pop)

#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacEditButton : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	TacCustomEdit* Edit;
	Buttons::TSpeedButton* Btn;
	Controls::TCursor __fastcall GetCursor(void);
	void __fastcall SetCursor(Controls::TCursor Value);
	bool __fastcall GetFlat(void);
	void __fastcall SetFlat(bool Value);
	Graphics::TBitmap* __fastcall GetGlyph(void);
	void __fastcall SetGlyph(Graphics::TBitmap* Value);
	Buttons::TNumGlyphs __fastcall GetNumGlyphs(void);
	void __fastcall SetNumGlyphs(Buttons::TNumGlyphs Value);
	AnsiString __fastcall GetHint();
	void __fastcall SetHint(AnsiString Value);
	Word __fastcall GetWidth(void);
	void __fastcall SetWidth(Word Value);
	bool __fastcall GetVisible(void);
	void __fastcall SetVisible(bool Value);
	
public:
	__fastcall TacEditButton(TacCustomEdit* AEdit, Buttons::TSpeedButton* ABtn);
	
__published:
	__property Controls::TCursor Cursor = {read=GetCursor, write=SetCursor, nodefault};
	__property bool Flat = {read=GetFlat, write=SetFlat, nodefault};
	__property Graphics::TBitmap* Glyph = {read=GetGlyph, write=SetGlyph};
	__property Buttons::TNumGlyphs NumGlyphs = {read=GetNumGlyphs, write=SetNumGlyphs, nodefault};
	__property AnsiString Hint = {read=GetHint, write=SetHint};
	__property Word Width = {read=GetWidth, write=SetWidth, default=20};
	__property bool Visible = {read=GetVisible, write=SetVisible, default=0};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacEditButton(void) { }
	#pragma option pop
	
};

#pragma pack(pop)

class DELPHICLASS TacEdit;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacEdit : public TacCustomEdit 
{
	typedef TacCustomEdit inherited;
	
__published:
	__property About ;
	__property Align ;
	__property Alignment ;
	__property AutoSelect ;
	__property Button ;
	__property Color ;
	__property ColorDisabled ;
	__property CursorBorder ;
	__property PasswordChar ;
	__property ValidChars ;
	__property ValidateChars ;
	__property OnButtonClick ;
	__property OnMouseEnter ;
	__property OnMouseLeave ;
public:
	#pragma option push -w-inl
	/* TacCustomEdit.Create */ inline __fastcall virtual TacEdit(Classes::TComponent* aOwner) : TacCustomEdit(
		aOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacCustomEdit.Destroy */ inline __fastcall virtual ~TacEdit(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacEdit(HWND ParentWindow) : TacCustomEdit(ParentWindow
		) { }
	#pragma option pop
	
};

#pragma pack(pop)

#pragma option push -b-
enum TacNumberEditKind { neDec, neHex, neBin };
#pragma option pop

class DELPHICLASS TacNumberEdit;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacNumberEdit : public TacCustomEdit 
{
	typedef TacCustomEdit inherited;
	
private:
	TacNumberEditKind FKind;
	int FValue;
	int FMaxValue;
	Classes::TNotifyEvent FOnChange;
	AnsiString PrevText;
	int PrevValue;
	int PrevPos;
	Word LastChar;
	bool DontChange;
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMChar(Messages::TWMKey &Message);
	
protected:
	DYNAMIC void __fastcall Change(void);
	virtual void __fastcall SetValue(int aValue);
	virtual void __fastcall SetMaxValue(int aValue);
	virtual void __fastcall SetKind(TacNumberEditKind aValue);
	
public:
	__fastcall virtual TacNumberEdit(Classes::TComponent* aOwner);
	
__published:
	__property About ;
	__property Align ;
	__property Alignment ;
	__property AutoSelect ;
	__property Button ;
	__property Color ;
	__property ColorDisabled ;
	__property CursorBorder ;
	__property OnButtonClick ;
	__property OnMouseEnter ;
	__property OnMouseLeave ;
	__property TacNumberEditKind Kind = {read=FKind, write=SetKind, default=0};
	__property int MaxValue = {read=FMaxValue, write=SetMaxValue, nodefault};
	__property int Value = {read=FValue, write=SetValue, nodefault};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	#pragma option push -w-inl
	/* TacCustomEdit.Destroy */ inline __fastcall virtual ~TacNumberEdit(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacNumberEdit(HWND ParentWindow) : TacCustomEdit(
		ParentWindow) { }
	#pragma option pop
	
};

#pragma pack(pop)

class DELPHICLASS TacIPMaskEdit;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacIPMaskEdit : public TacNumberEdit 
{
	typedef TacNumberEdit inherited;
	
private:
	int IPID;
	void __fastcall ClickHook(System::TObject* Sender);
	void __fastcall DblClickHook(System::TObject* Sender);
	void __fastcall KeyDownHook(System::TObject* Sender, Word &Key, Classes::TShiftState Shift);
	void __fastcall KeyPressHook(System::TObject* Sender, char &Key);
	void __fastcall KeyUpHook(System::TObject* Sender, Word &Key, Classes::TShiftState Shift);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Messages::TWMKey &Message);
	MESSAGE void __fastcall WMGetDlgCode(Messages::TMessage &Message);
	
protected:
	DYNAMIC void __fastcall Change(void);
	
public:
	__fastcall virtual TacIPMaskEdit(Classes::TComponent* aOwner);
public:
	#pragma option push -w-inl
	/* TacCustomEdit.Destroy */ inline __fastcall virtual ~TacIPMaskEdit(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacIPMaskEdit(HWND ParentWindow) : TacNumberEdit(
		ParentWindow) { }
	#pragma option pop
	
};

#pragma pack(pop)

class DELPHICLASS TacIPEdit;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacIPEdit : public Controls::TCustomControl 
{
	typedef Controls::TCustomControl inherited;
	
private:
	AnsiString FAbout;
	Classes::TAlignment FAlignment;
	bool FAutoSelect;
	bool FAutoSize;
	Graphics::TColor FColor;
	Graphics::TColor FColorDisabled;
	bool FCtl3D;
	Forms::TFormBorderStyle FBorderStyle;
	AnsiString FText;
	Byte FIP1;
	Byte FIP2;
	Byte FIP3;
	Byte FIP4;
	int FIPLong;
	TacIPMaskEdit* FIPSection[4];
	Classes::TNotifyEvent FOnChange;
	Controls::TKeyEvent FOnKeyDown;
	Controls::TKeyEvent FOnKeyUp;
	Controls::TKeyPressEvent FOnKeyPress;
	bool AllowChange;
	bool AllowSetValue;
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Messages::TMessage &Message);
	void __fastcall SetAlignment(Classes::TAlignment Value);
	HIDESBASE void __fastcall SetAutoSize(bool Value);
	void __fastcall SetBorderStyle(Forms::TBorderStyle Value);
	HIDESBASE void __fastcall SetColor(Graphics::TColor Value);
	void __fastcall SetColorDisabled(Graphics::TColor Value);
	HIDESBASE void __fastcall SetCtl3D(bool Value);
	HIDESBASE void __fastcall SetText(AnsiString Value);
	void __fastcall RefreshText(void);
	void __fastcall SetIP1(Byte Value);
	void __fastcall SetIP2(Byte Value);
	void __fastcall SetIP3(Byte Value);
	void __fastcall SetIP4(Byte Value);
	void __fastcall SetIPLong(int Value);
	void __fastcall ValueChanged(void);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Messages::TWMSetFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Msg);
	
protected:
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	
public:
	__fastcall virtual TacIPEdit(Classes::TComponent* aOwner);
	__fastcall virtual ~TacIPEdit(void);
	
__published:
	__property Align ;
	__property AnsiString About = {read=FAbout, write=FAbout, stored=false};
	__property Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, nodefault};
	__property bool AutoSelect = {read=FAutoSelect, write=FAutoSelect, nodefault};
	__property bool AutoSize = {read=FAutoSize, write=SetAutoSize, nodefault};
	__property Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, nodefault};
	__property Graphics::TColor Color = {read=FColor, write=SetColor, default=-2147483643};
	__property Graphics::TColor ColorDisabled = {read=FColorDisabled, write=SetColorDisabled, nodefault
		};
	__property bool Ctl3D = {read=FCtl3D, write=SetCtl3D, nodefault};
	__property Byte IP1 = {read=FIP1, write=SetIP1, nodefault};
	__property Byte IP2 = {read=FIP2, write=SetIP2, nodefault};
	__property Byte IP3 = {read=FIP3, write=SetIP3, nodefault};
	__property Byte IP4 = {read=FIP4, write=SetIP4, nodefault};
	__property int IPLong = {read=FIPLong, write=SetIPLong, nodefault};
	__property AnsiString Text = {read=FText, write=SetText};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property Controls::TKeyEvent OnKeyDown = {read=FOnKeyDown, write=FOnKeyDown};
	__property Controls::TKeyPressEvent OnKeyPress = {read=FOnKeyPress, write=FOnKeyPress};
	__property Controls::TKeyEvent OnKeyUp = {read=FOnKeyUp, write=FOnKeyUp};
	__property Anchors ;
	__property Constraints ;
	__property DragKind ;
	__property Cursor ;
	__property Font ;
	__property Hint ;
	__property ShowHint ;
	__property ParentFont ;
	__property ParentShowHint ;
	__property PopupMenu ;
	__property TabOrder ;
	__property TabStop ;
	__property Visible ;
	__property OnClick ;
	__property OnDblClick ;
	__property OnEnter ;
	__property OnExit ;
	__property OnStartDock ;
	__property OnStartDrag ;
	__property OnEndDock ;
	__property OnEndDrag ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacIPEdit(HWND ParentWindow) : Controls::TCustomControl(
		ParentWindow) { }
	#pragma option pop
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acedit */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acedit;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acEdit
