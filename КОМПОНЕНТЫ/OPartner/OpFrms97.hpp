// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'OpFrms97.pas' rev: 5.00

#ifndef OpFrms97HPP
#define OpFrms97HPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <StdVCL.hpp>	// Pascal unit
#include <OleCtrls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <ActiveX.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Opfrms97
{
//-- type declarations -------------------------------------------------------
typedef Activex::TOleEnum fmDropEffect;

typedef Activex::TOleEnum fmAction;

typedef Activex::TOleEnum fmMode;

typedef Activex::TOleEnum fmMousePointer;

typedef Activex::TOleEnum fmScrollBars;

typedef Activex::TOleEnum fmScrollAction;

typedef Activex::TOleEnum fmCycle;

typedef Activex::TOleEnum fmZOrder;

typedef Activex::TOleEnum fmBorderStyle;

typedef Activex::TOleEnum fmTextAlign;

typedef Activex::TOleEnum fmAlignment;

typedef Activex::TOleEnum fmBorders;

typedef Activex::TOleEnum fmBackStyle;

typedef Activex::TOleEnum fmButtonStyle;

typedef Activex::TOleEnum fmPicPosition;

typedef Activex::TOleEnum fmVerticalScrollBarSide;

typedef Activex::TOleEnum fmLayoutEffect;

typedef Activex::TOleEnum fmSpecialEffect;

typedef Activex::TOleEnum fmDragState;

typedef Activex::TOleEnum fmPictureSizeMode;

typedef Activex::TOleEnum fmPictureAlignment;

typedef Activex::TOleEnum fmButtonEffect;

typedef Activex::TOleEnum fmOrientation;

typedef Activex::TOleEnum fmSnapPoint;

typedef Activex::TOleEnum fmPicturePosition;

typedef Activex::TOleEnum fmDisplayStyle;

typedef Activex::TOleEnum fmShowListWhen;

typedef Activex::TOleEnum fmShowDropButtonWhen;

typedef Activex::TOleEnum fmMultiSelect;

typedef Activex::TOleEnum fmListStyle;

typedef Activex::TOleEnum fmEnterFieldBehavior;

typedef Activex::TOleEnum fmDragBehavior;

typedef Activex::TOleEnum fmMatchEntry;

typedef Activex::TOleEnum fmDropButtonStyle;

typedef Activex::TOleEnum fmStyle;

typedef Activex::TOleEnum fmTabOrientation;

typedef Activex::TOleEnum fmTabStyle;

typedef Activex::TOleEnum fmIMEMode;

typedef Activex::TOleEnum fmTransitionEffect;

typedef Activex::TOleEnum fmListBoxStyles;

typedef Activex::TOleEnum fmRepeatDirection;

typedef Activex::TOleEnum fmEnAutoSize;

__interface IReturnInteger;
typedef System::DelphiInterface<IReturnInteger> _di_IReturnInteger;
__interface INTERFACE_UUID("{82B02370-B5BC-11CF-810F-00A0C9030074}") IReturnInteger  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Set_Value(int Value) = 0 ;
	virtual HRESULT __safecall Get_Value(int &Get_Value_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Value() { int r; HRESULT hr = Get_Value(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Value = {read=_scw_Get_Value, write=Set_Value};
};
typedef IReturnInteger ReturnInteger;

__interface IReturnBoolean;
typedef System::DelphiInterface<IReturnBoolean> _di_IReturnBoolean;
__interface INTERFACE_UUID("{82B02371-B5BC-11CF-810F-00A0C9030074}") IReturnBoolean  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Set_Value(Word Value) = 0 ;
	virtual HRESULT __safecall Get_Value(Word &Get_Value_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Value() { Word r; HRESULT hr = Get_Value(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Value = {read=_scw_Get_Value, write=Set_Value};
};
typedef IReturnBoolean ReturnBoolean;

__interface IReturnString;
typedef System::DelphiInterface<IReturnString> _di_IReturnString;
__interface INTERFACE_UUID("{82B02372-B5BC-11CF-810F-00A0C9030074}") IReturnString  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Set_Value(const WideString Value) = 0 ;
	virtual HRESULT __safecall Get_Value(WideString &Get_Value_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Value() { WideString r; HRESULT hr = Get_Value(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Value = {read=_scw_Get_Value, write=Set_Value};
};
typedef IReturnString ReturnString;

__interface IReturnSingle;
typedef System::DelphiInterface<IReturnSingle> _di_IReturnSingle;
__interface INTERFACE_UUID("{8A683C90-BA84-11CF-8110-00A0C9030074}") IReturnSingle  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Set_Value(float Value) = 0 ;
	virtual HRESULT __safecall Get_Value(float &Get_Value_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Value() { float r; HRESULT hr = Get_Value(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Value = {read=_scw_Get_Value, write=Set_Value};
};
typedef IReturnSingle ReturnSingle;

__interface IReturnEffect;
typedef System::DelphiInterface<IReturnEffect> _di_IReturnEffect;
__interface INTERFACE_UUID("{8A683C91-BA84-11CF-8110-00A0C9030074}") IReturnEffect  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Set_Value(Activex::TOleEnum Value) = 0 ;
	virtual HRESULT __safecall Get_Value(Activex::TOleEnum &Get_Value_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Value() { Activex::TOleEnum r; HRESULT hr = Get_Value(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Value = {read=_scw_Get_Value, write=Set_Value};
};
typedef IReturnEffect ReturnEffect;

__interface IDataAutoWrapper;
typedef System::DelphiInterface<IDataAutoWrapper> _di_IDataAutoWrapper;
__interface INTERFACE_UUID("{EC72F590-F375-11CE-B9E8-00AA006B1A69}") IDataAutoWrapper  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Clear(void) = 0 ;
	virtual HRESULT __safecall GetFormat(const OleVariant Format, Word &GetFormat_result) = 0 ;
	virtual HRESULT __safecall GetText(const OleVariant Format, WideString &GetText_result) = 0 ;
	virtual HRESULT __safecall SetText(const WideString Text, const OleVariant Format) = 0 ;
	virtual HRESULT __safecall PutInClipboard(void) = 0 ;
	virtual HRESULT __safecall GetFromClipboard(void) = 0 ;
	virtual HRESULT __safecall StartDrag(const OleVariant OKEffect, Activex::TOleEnum &StartDrag_result
		) = 0 ;
};
typedef IDataAutoWrapper DataObject;

__interface IControl;
typedef System::DelphiInterface<IControl> _di_IControl;
__interface INTERFACE_UUID("{04598FC6-866C-11CF-AB7C-00AA00C08FCF}") IControl  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Set_Cancel(Word Cancel) = 0 ;
	virtual HRESULT __safecall Get_Cancel(Word &Get_Cancel_result) = 0 ;
	virtual HRESULT __safecall Set_ControlSource(const WideString ControlSource) = 0 ;
	virtual HRESULT __safecall Get_ControlSource(WideString &Get_ControlSource_result) = 0 ;
	virtual HRESULT __safecall Set_ControlTipText(const WideString ControlTipText) = 0 ;
	virtual HRESULT __safecall Get_ControlTipText(WideString &Get_ControlTipText_result) = 0 ;
	virtual HRESULT __safecall Set_Default(Word Default) = 0 ;
	virtual HRESULT __safecall Get_Default(Word &Get_Default_result) = 0 ;
	virtual HRESULT __safecall _SetHeight(int Height) = 0 ;
	virtual HRESULT __safecall _GetHeight(/* out */ int &Height) = 0 ;
	virtual HRESULT __safecall Set_Height(float Height) = 0 ;
	virtual HRESULT __safecall Get_Height(float &Get_Height_result) = 0 ;
	virtual HRESULT __safecall Set_HelpContextID(int HelpContextID) = 0 ;
	virtual HRESULT __safecall Get_HelpContextID(int &Get_HelpContextID_result) = 0 ;
	virtual HRESULT __safecall Set_InSelection(Word InSelection) = 0 ;
	virtual HRESULT __safecall Get_InSelection(Word &Get_InSelection_result) = 0 ;
	virtual HRESULT __safecall Get_LayoutEffect(Activex::TOleEnum &Get_LayoutEffect_result) = 0 ;
	virtual HRESULT __safecall _SetLeft(int Left) = 0 ;
	virtual HRESULT __safecall _GetLeft(/* out */ int &Left) = 0 ;
	virtual HRESULT __safecall Set_Left(float Left) = 0 ;
	virtual HRESULT __safecall Get_Left(float &Get_Left_result) = 0 ;
	virtual HRESULT __safecall Set_Name(const WideString Name) = 0 ;
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall _GetOldHeight(/* out */ int &OldHeight) = 0 ;
	virtual HRESULT __safecall Get_OldHeight(float &Get_OldHeight_result) = 0 ;
	virtual HRESULT __safecall _GetOldLeft(/* out */ int &OldLeft) = 0 ;
	virtual HRESULT __safecall Get_OldLeft(float &Get_OldLeft_result) = 0 ;
	virtual HRESULT __safecall _GetOldTop(/* out */ int &OldTop) = 0 ;
	virtual HRESULT __safecall Get_OldTop(float &Get_OldTop_result) = 0 ;
	virtual HRESULT __safecall _GetOldWidth(/* out */ int &OldWidth) = 0 ;
	virtual HRESULT __safecall Get_OldWidth(float &Get_OldWidth_result) = 0 ;
	virtual HRESULT __safecall Get_Object_(_di_IDispatch &Get_Object__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Set_RowSource(const WideString RowSource) = 0 ;
	virtual HRESULT __safecall Get_RowSource(WideString &Get_RowSource_result) = 0 ;
	virtual HRESULT __safecall Set_RowSourceType(short RowSourceType) = 0 ;
	virtual HRESULT __safecall Get_RowSourceType(short &Get_RowSourceType_result) = 0 ;
	virtual HRESULT __safecall Set_TabIndex(short TabIndex) = 0 ;
	virtual HRESULT __safecall Get_TabIndex(short &Get_TabIndex_result) = 0 ;
	virtual HRESULT __safecall Set_TabStop(Word TabStop) = 0 ;
	virtual HRESULT __safecall Get_TabStop(Word &Get_TabStop_result) = 0 ;
	virtual HRESULT __safecall Set_Tag(const WideString Tag) = 0 ;
	virtual HRESULT __safecall Get_Tag(WideString &Get_Tag_result) = 0 ;
	virtual HRESULT __safecall _SetTop(int Top) = 0 ;
	virtual HRESULT __safecall _GetTop(/* out */ int &Top) = 0 ;
	virtual HRESULT __safecall Set_Top(float Top) = 0 ;
	virtual HRESULT __safecall Get_Top(float &Get_Top_result) = 0 ;
	virtual HRESULT __safecall Set_BoundValue(OleVariant &BoundValue) = 0 ;
	virtual HRESULT __safecall Get_BoundValue(OleVariant &Get_BoundValue_result) = 0 ;
	virtual HRESULT __safecall Set_Visible(Word Visible) = 0 ;
	virtual HRESULT __safecall Get_Visible(Word &Get_Visible_result) = 0 ;
	virtual HRESULT __safecall _SetWidth(int Width) = 0 ;
	virtual HRESULT __safecall _GetWidth(/* out */ int &Width) = 0 ;
	virtual HRESULT __safecall Set_Width(float Width) = 0 ;
	virtual HRESULT __safecall Get_Width(float &Get_Width_result) = 0 ;
	virtual HRESULT __safecall Move(const OleVariant Left, const OleVariant Top, const OleVariant Width
		, const OleVariant Height, const OleVariant Layout) = 0 ;
	virtual HRESULT __safecall ZOrder(const OleVariant zPosition) = 0 ;
	virtual HRESULT __safecall Select(Word SelectInGroup) = 0 ;
	virtual HRESULT __safecall SetFocus(void) = 0 ;
	virtual HRESULT __safecall _GethWnd(int &_GethWnd_result) = 0 ;
	virtual HRESULT __safecall _GetID(int &_GetID_result) = 0 ;
	virtual HRESULT __safecall _Move(int Left, int Top, int Width, int Height) = 0 ;
	virtual HRESULT __safecall _ZOrder(Activex::TOleEnum zPosition) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Cancel() { Word r; HRESULT hr = Get_Cancel(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Cancel = {read=_scw_Get_Cancel, write=Set_Cancel};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_ControlSource() { WideString r; HRESULT hr = Get_ControlSource(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString ControlSource = {read=_scw_Get_ControlSource, write=Set_ControlSource};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_ControlTipText() { WideString r; HRESULT hr = Get_ControlTipText(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString ControlTipText = {read=_scw_Get_ControlTipText, write=Set_ControlTipText};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Default() { Word r; HRESULT hr = Get_Default(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Default = {read=_scw_Get_Default, write=Set_Default};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Height() { float r; HRESULT hr = Get_Height(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Height = {read=_scw_Get_Height, write=Set_Height};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_HelpContextID() { int r; HRESULT hr = Get_HelpContextID(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int HelpContextID = {read=_scw_Get_HelpContextID, write=Set_HelpContextID};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_InSelection() { Word r; HRESULT hr = Get_InSelection(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word InSelection = {read=_scw_Get_InSelection, write=Set_InSelection};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_LayoutEffect() { Activex::TOleEnum r; HRESULT hr = Get_LayoutEffect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum LayoutEffect = {read=_scw_Get_LayoutEffect};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Left() { float r; HRESULT hr = Get_Left(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Left = {read=_scw_Get_Left, write=Set_Left};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name, write=Set_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_OldHeight() { float r; HRESULT hr = Get_OldHeight(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float OldHeight = {read=_scw_Get_OldHeight};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_OldLeft() { float r; HRESULT hr = Get_OldLeft(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float OldLeft = {read=_scw_Get_OldLeft};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_OldTop() { float r; HRESULT hr = Get_OldTop(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float OldTop = {read=_scw_Get_OldTop};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_OldWidth() { float r; HRESULT hr = Get_OldWidth(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float OldWidth = {read=_scw_Get_OldWidth};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Object_() { _di_IDispatch r; HRESULT hr = Get_Object_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Object_ = {read=_scw_Get_Object_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_RowSource() { WideString r; HRESULT hr = Get_RowSource(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString RowSource = {read=_scw_Get_RowSource, write=Set_RowSource};
	#pragma option push -w-inl
	/* safecall wrapper */ inline short _scw_Get_RowSourceType() { short r; HRESULT hr = Get_RowSourceType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property short RowSourceType = {read=_scw_Get_RowSourceType, write=Set_RowSourceType};
	#pragma option push -w-inl
	/* safecall wrapper */ inline short _scw_Get_TabIndex() { short r; HRESULT hr = Get_TabIndex(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property short TabIndex = {read=_scw_Get_TabIndex, write=Set_TabIndex};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_TabStop() { Word r; HRESULT hr = Get_TabStop(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word TabStop = {read=_scw_Get_TabStop, write=Set_TabStop};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Tag() { WideString r; HRESULT hr = Get_Tag(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Tag = {read=_scw_Get_Tag, write=Set_Tag};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Top() { float r; HRESULT hr = Get_Top(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Top = {read=_scw_Get_Top, write=Set_Top};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Visible() { Word r; HRESULT hr = Get_Visible(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Visible = {read=_scw_Get_Visible, write=Set_Visible};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Width() { float r; HRESULT hr = Get_Width(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Width = {read=_scw_Get_Width, write=Set_Width};
};
typedef IControl Control;

__interface _UserForm;
typedef System::DelphiInterface<_UserForm> _di__UserForm;
__interface IOptionFrame;
typedef System::DelphiInterface<IOptionFrame> _di_IOptionFrame;
__interface Controls_;
typedef System::DelphiInterface<Controls_> _di_Controls_;
__interface INTERFACE_UUID("{29B86A70-F52E-11CE-9BCE-00AA00608E01}") IOptionFrame  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_ActiveControl(_di_IControl &Get_ActiveControl_result) = 0 ;
	virtual HRESULT __safecall Set_BackColor(int BackColor) = 0 ;
	virtual HRESULT __safecall Get_BackColor(int &Get_BackColor_result) = 0 ;
	virtual HRESULT __safecall Set_BorderColor(int BorderColor) = 0 ;
	virtual HRESULT __safecall Get_BorderColor(int &Get_BorderColor_result) = 0 ;
	virtual HRESULT __safecall Set_BorderStyle(Activex::TOleEnum BorderStyle) = 0 ;
	virtual HRESULT __safecall Get_BorderStyle(Activex::TOleEnum &Get_BorderStyle_result) = 0 ;
	virtual HRESULT __safecall Get_CanPaste(Word &Get_CanPaste_result) = 0 ;
	virtual HRESULT __safecall Get_CanRedo(Word &Get_CanRedo_result) = 0 ;
	virtual HRESULT __safecall Get_CanUndo(Word &Get_CanUndo_result) = 0 ;
	virtual HRESULT __safecall Set_Caption(const WideString Caption) = 0 ;
	virtual HRESULT __safecall Get_Caption(WideString &Get_Caption_result) = 0 ;
	virtual HRESULT __safecall Get_Controls_(_di_Controls_ &Get_Controls__result) = 0 ;
	virtual HRESULT __safecall Set_Cycle(Activex::TOleEnum Cycle) = 0 ;
	virtual HRESULT __safecall Get_Cycle(Activex::TOleEnum &Get_Cycle_result) = 0 ;
	virtual HRESULT __safecall Set_Enabled(Word Enabled) = 0 ;
	virtual HRESULT __safecall Get_Enabled(Word &Get_Enabled_result) = 0 ;
	virtual HRESULT __safecall Set__Font_Reserved(const _di_IFontDisp Param1) = 0 ;
	virtual HRESULT __safecall Set_Font(const _di_IFontDisp Font) = 0 ;
	virtual HRESULT __safecall Get_Font(_di_IFontDisp &Get_Font_result) = 0 ;
	virtual HRESULT __safecall Set_ForeColor(int ForeColor) = 0 ;
	virtual HRESULT __safecall Get_ForeColor(int &Get_ForeColor_result) = 0 ;
	virtual HRESULT __safecall _GetInsideHeight(/* out */ int &InsideHeight) = 0 ;
	virtual HRESULT __safecall Get_InsideHeight(float &Get_InsideHeight_result) = 0 ;
	virtual HRESULT __safecall _GetInsideWidth(/* out */ int &InsideWidth) = 0 ;
	virtual HRESULT __safecall Get_InsideWidth(float &Get_InsideWidth_result) = 0 ;
	virtual HRESULT __safecall Set_KeepScrollBarsVisible(Activex::TOleEnum ScrollBars) = 0 ;
	virtual HRESULT __safecall Get_KeepScrollBarsVisible(Activex::TOleEnum &Get_KeepScrollBarsVisible_result
		) = 0 ;
	virtual HRESULT __safecall _Set_MouseIcon(const _di_IPictureDisp MouseIcon) = 0 ;
	virtual HRESULT __safecall Set_MouseIcon(const _di_IPictureDisp MouseIcon) = 0 ;
	virtual HRESULT __safecall Get_MouseIcon(_di_IPictureDisp &Get_MouseIcon_result) = 0 ;
	virtual HRESULT __safecall Set_MousePointer(Activex::TOleEnum MousePointer) = 0 ;
	virtual HRESULT __safecall Get_MousePointer(Activex::TOleEnum &Get_MousePointer_result) = 0 ;
	virtual HRESULT __safecall Set_PictureAlignment(Activex::TOleEnum PictureAlignment) = 0 ;
	virtual HRESULT __safecall Get_PictureAlignment(Activex::TOleEnum &Get_PictureAlignment_result) = 0 
		;
	virtual HRESULT __safecall _Set_Picture(const _di_IPictureDisp Picture) = 0 ;
	virtual HRESULT __safecall Set_Picture(const _di_IPictureDisp Picture) = 0 ;
	virtual HRESULT __safecall Get_Picture(_di_IPictureDisp &Get_Picture_result) = 0 ;
	virtual HRESULT __safecall Set_PictureSizeMode(Activex::TOleEnum PictureSizeMode) = 0 ;
	virtual HRESULT __safecall Get_PictureSizeMode(Activex::TOleEnum &Get_PictureSizeMode_result) = 0 ;
		
	virtual HRESULT __safecall Set_PictureTiling(Word PictureTiling) = 0 ;
	virtual HRESULT __safecall Get_PictureTiling(Word &Get_PictureTiling_result) = 0 ;
	virtual HRESULT __safecall Set_ScrollBars(Activex::TOleEnum ScrollBars) = 0 ;
	virtual HRESULT __safecall Get_ScrollBars(Activex::TOleEnum &Get_ScrollBars_result) = 0 ;
	virtual HRESULT __safecall _SetScrollHeight(int ScrollHeight) = 0 ;
	virtual HRESULT __safecall _GetScrollHeight(/* out */ int &ScrollHeight) = 0 ;
	virtual HRESULT __safecall Set_ScrollHeight(float ScrollHeight) = 0 ;
	virtual HRESULT __safecall Get_ScrollHeight(float &Get_ScrollHeight_result) = 0 ;
	virtual HRESULT __safecall _SetScrollLeft(int ScrollLeft) = 0 ;
	virtual HRESULT __safecall _GetScrollLeft(/* out */ int &ScrollLeft) = 0 ;
	virtual HRESULT __safecall Set_ScrollLeft(float ScrollLeft) = 0 ;
	virtual HRESULT __safecall Get_ScrollLeft(float &Get_ScrollLeft_result) = 0 ;
	virtual HRESULT __safecall _SetScrollTop(int ScrollTop) = 0 ;
	virtual HRESULT __safecall _GetScrollTop(/* out */ int &ScrollTop) = 0 ;
	virtual HRESULT __safecall Set_ScrollTop(float ScrollTop) = 0 ;
	virtual HRESULT __safecall Get_ScrollTop(float &Get_ScrollTop_result) = 0 ;
	virtual HRESULT __safecall _SetScrollWidth(int ScrollWidth) = 0 ;
	virtual HRESULT __safecall _GetScrollWidth(/* out */ int &ScrollWidth) = 0 ;
	virtual HRESULT __safecall Set_ScrollWidth(float ScrollWidth) = 0 ;
	virtual HRESULT __safecall Get_ScrollWidth(float &Get_ScrollWidth_result) = 0 ;
	virtual HRESULT __safecall Get_Selected(_di_Controls_ &Get_Selected_result) = 0 ;
	virtual HRESULT __safecall Set_SpecialEffect(Activex::TOleEnum SpecialEffect) = 0 ;
	virtual HRESULT __safecall Get_SpecialEffect(Activex::TOleEnum &Get_SpecialEffect_result) = 0 ;
	virtual HRESULT __safecall Set_VerticalScrollBarSide(Activex::TOleEnum side) = 0 ;
	virtual HRESULT __safecall Get_VerticalScrollBarSide(Activex::TOleEnum &Get_VerticalScrollBarSide_result
		) = 0 ;
	virtual HRESULT __safecall Set_Zoom(short Zoom) = 0 ;
	virtual HRESULT __safecall Get_Zoom(short &Get_Zoom_result) = 0 ;
	virtual HRESULT __safecall Copy(void) = 0 ;
	virtual HRESULT __safecall Cut(void) = 0 ;
	virtual HRESULT __safecall Paste(void) = 0 ;
	virtual HRESULT __safecall RedoAction(void) = 0 ;
	virtual HRESULT __safecall Repaint(void) = 0 ;
	virtual HRESULT __safecall Scroll(const OleVariant xAction, const OleVariant yAction) = 0 ;
	virtual HRESULT __safecall SetDefaultTabOrder(void) = 0 ;
	virtual HRESULT __safecall UndoAction(void) = 0 ;
	virtual HRESULT __safecall Set_DesignMode(Activex::TOleEnum DesignMode) = 0 ;
	virtual HRESULT __safecall Get_DesignMode(Activex::TOleEnum &Get_DesignMode_result) = 0 ;
	virtual HRESULT __safecall Set_ShowToolbox(Activex::TOleEnum ShowToolbox) = 0 ;
	virtual HRESULT __safecall Get_ShowToolbox(Activex::TOleEnum &Get_ShowToolbox_result) = 0 ;
	virtual HRESULT __safecall Set_ShowGridDots(Activex::TOleEnum ShowGridDots) = 0 ;
	virtual HRESULT __safecall Get_ShowGridDots(Activex::TOleEnum &Get_ShowGridDots_result) = 0 ;
	virtual HRESULT __safecall Set_SnapToGrid(Activex::TOleEnum SnapToGrid) = 0 ;
	virtual HRESULT __safecall Get_SnapToGrid(Activex::TOleEnum &Get_SnapToGrid_result) = 0 ;
	virtual HRESULT __safecall Set_GridX(float GridX) = 0 ;
	virtual HRESULT __safecall Get_GridX(float &Get_GridX_result) = 0 ;
	virtual HRESULT __safecall _SetGridX(int GridX) = 0 ;
	virtual HRESULT __safecall _GetGridX(/* out */ int &GridX) = 0 ;
	virtual HRESULT __safecall Set_GridY(float GridY) = 0 ;
	virtual HRESULT __safecall Get_GridY(float &Get_GridY_result) = 0 ;
	virtual HRESULT __safecall _SetGridY(int GridY) = 0 ;
	virtual HRESULT __safecall _GetGridY(/* out */ int &GridY) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IControl _scw_Get_ActiveControl() { _di_IControl r; HRESULT hr = Get_ActiveControl(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IControl ActiveControl = {read=_scw_Get_ActiveControl};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_BackColor() { int r; HRESULT hr = Get_BackColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int BackColor = {read=_scw_Get_BackColor, write=Set_BackColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_BorderColor() { int r; HRESULT hr = Get_BorderColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int BorderColor = {read=_scw_Get_BorderColor, write=Set_BorderColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_BorderStyle() { Activex::TOleEnum r; HRESULT hr = Get_BorderStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum BorderStyle = {read=_scw_Get_BorderStyle, write=Set_BorderStyle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_CanPaste() { Word r; HRESULT hr = Get_CanPaste(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word CanPaste = {read=_scw_Get_CanPaste};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_CanRedo() { Word r; HRESULT hr = Get_CanRedo(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word CanRedo = {read=_scw_Get_CanRedo};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_CanUndo() { Word r; HRESULT hr = Get_CanUndo(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word CanUndo = {read=_scw_Get_CanUndo};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Caption() { WideString r; HRESULT hr = Get_Caption(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Caption = {read=_scw_Get_Caption, write=Set_Caption};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Controls_ _scw_Get_Controls_() { _di_Controls_ r; HRESULT hr = Get_Controls_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Controls_ Controls_ = {read=_scw_Get_Controls_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Cycle() { Activex::TOleEnum r; HRESULT hr = Get_Cycle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Cycle = {read=_scw_Get_Cycle, write=Set_Cycle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Enabled() { Word r; HRESULT hr = Get_Enabled(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Enabled = {read=_scw_Get_Enabled, write=Set_Enabled};
	__property _di_IFontDisp _Font_Reserved = {write=Set__Font_Reserved};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IFontDisp _scw_Get_Font() { _di_IFontDisp r; HRESULT hr = Get_Font(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IFontDisp Font = {read=_scw_Get_Font, write=Set_Font};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ForeColor() { int r; HRESULT hr = Get_ForeColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int ForeColor = {read=_scw_Get_ForeColor, write=Set_ForeColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_InsideHeight() { float r; HRESULT hr = Get_InsideHeight(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float InsideHeight = {read=_scw_Get_InsideHeight};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_InsideWidth() { float r; HRESULT hr = Get_InsideWidth(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float InsideWidth = {read=_scw_Get_InsideWidth};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_KeepScrollBarsVisible() { Activex::TOleEnum r; HRESULT hr = Get_KeepScrollBarsVisible(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum KeepScrollBarsVisible = {read=_scw_Get_KeepScrollBarsVisible, write=Set_KeepScrollBarsVisible
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IPictureDisp _scw_Get_MouseIcon() { _di_IPictureDisp r; HRESULT hr = Get_MouseIcon(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IPictureDisp MouseIcon = {read=_scw_Get_MouseIcon, write=_Set_MouseIcon};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_MousePointer() { Activex::TOleEnum r; HRESULT hr = Get_MousePointer(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum MousePointer = {read=_scw_Get_MousePointer, write=Set_MousePointer};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PictureAlignment() { Activex::TOleEnum r; HRESULT hr = Get_PictureAlignment(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PictureAlignment = {read=_scw_Get_PictureAlignment, write=Set_PictureAlignment
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IPictureDisp _scw_Get_Picture() { _di_IPictureDisp r; HRESULT hr = Get_Picture(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IPictureDisp Picture = {read=_scw_Get_Picture, write=_Set_Picture};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PictureSizeMode() { Activex::TOleEnum r; HRESULT hr = Get_PictureSizeMode(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PictureSizeMode = {read=_scw_Get_PictureSizeMode, write=Set_PictureSizeMode
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_PictureTiling() { Word r; HRESULT hr = Get_PictureTiling(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word PictureTiling = {read=_scw_Get_PictureTiling, write=Set_PictureTiling};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ScrollBars() { Activex::TOleEnum r; HRESULT hr = Get_ScrollBars(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ScrollBars = {read=_scw_Get_ScrollBars, write=Set_ScrollBars};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_ScrollHeight() { float r; HRESULT hr = Get_ScrollHeight(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float ScrollHeight = {read=_scw_Get_ScrollHeight, write=Set_ScrollHeight};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_ScrollLeft() { float r; HRESULT hr = Get_ScrollLeft(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float ScrollLeft = {read=_scw_Get_ScrollLeft, write=Set_ScrollLeft};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_ScrollTop() { float r; HRESULT hr = Get_ScrollTop(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float ScrollTop = {read=_scw_Get_ScrollTop, write=Set_ScrollTop};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_ScrollWidth() { float r; HRESULT hr = Get_ScrollWidth(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float ScrollWidth = {read=_scw_Get_ScrollWidth, write=Set_ScrollWidth};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Controls_ _scw_Get_Selected() { _di_Controls_ r; HRESULT hr = Get_Selected(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Controls_ Selected = {read=_scw_Get_Selected};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_SpecialEffect() { Activex::TOleEnum r; HRESULT hr = Get_SpecialEffect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum SpecialEffect = {read=_scw_Get_SpecialEffect, write=Set_SpecialEffect}
		;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_VerticalScrollBarSide() { Activex::TOleEnum r; HRESULT hr = Get_VerticalScrollBarSide(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum VerticalScrollBarSide = {read=_scw_Get_VerticalScrollBarSide, write=Set_VerticalScrollBarSide
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline short _scw_Get_Zoom() { short r; HRESULT hr = Get_Zoom(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property short Zoom = {read=_scw_Get_Zoom, write=Set_Zoom};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_DesignMode() { Activex::TOleEnum r; HRESULT hr = Get_DesignMode(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum DesignMode = {read=_scw_Get_DesignMode, write=Set_DesignMode};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ShowToolbox() { Activex::TOleEnum r; HRESULT hr = Get_ShowToolbox(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ShowToolbox = {read=_scw_Get_ShowToolbox, write=Set_ShowToolbox};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ShowGridDots() { Activex::TOleEnum r; HRESULT hr = Get_ShowGridDots(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ShowGridDots = {read=_scw_Get_ShowGridDots, write=Set_ShowGridDots};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_SnapToGrid() { Activex::TOleEnum r; HRESULT hr = Get_SnapToGrid(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum SnapToGrid = {read=_scw_Get_SnapToGrid, write=Set_SnapToGrid};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_GridX() { float r; HRESULT hr = Get_GridX(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float GridX = {read=_scw_Get_GridX, write=Set_GridX};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_GridY() { float r; HRESULT hr = Get_GridY(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float GridY = {read=_scw_Get_GridY, write=Set_GridY};
};

__interface INTERFACE_UUID("{04598FC8-866C-11CF-AB7C-00AA00C08FCF}") _UserForm  : public IOptionFrame 
	
{
	
public:
	virtual HRESULT __safecall Set_DrawBuffer(int DrawBuffer) = 0 ;
	virtual HRESULT __safecall Get_DrawBuffer(int &Get_DrawBuffer_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_DrawBuffer() { int r; HRESULT hr = Get_DrawBuffer(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int DrawBuffer = {read=_scw_Get_DrawBuffer, write=Set_DrawBuffer};
};
typedef _UserForm UserForm;

typedef IOptionFrame Frame;
;

__interface ILabelControl;
typedef System::DelphiInterface<ILabelControl> _di_ILabelControl;
__interface INTERFACE_UUID("{04598FC1-866C-11CF-AB7C-00AA00C08FCF}") ILabelControl  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Set_AutoSize(Word fvbAutoSize) = 0 ;
	virtual HRESULT __safecall Get_AutoSize(Word &Get_AutoSize_result) = 0 ;
	virtual HRESULT __safecall Set_BackColor(int BackColor) = 0 ;
	virtual HRESULT __safecall Get_BackColor(int &Get_BackColor_result) = 0 ;
	virtual HRESULT __safecall Set_BackStyle(Activex::TOleEnum BackStyle) = 0 ;
	virtual HRESULT __safecall Get_BackStyle(Activex::TOleEnum &Get_BackStyle_result) = 0 ;
	virtual HRESULT __safecall Set_BorderColor(int BorderColor) = 0 ;
	virtual HRESULT __safecall Get_BorderColor(int &Get_BorderColor_result) = 0 ;
	virtual HRESULT __safecall Set_BorderStyle(Activex::TOleEnum BorderStyle) = 0 ;
	virtual HRESULT __safecall Get_BorderStyle(Activex::TOleEnum &Get_BorderStyle_result) = 0 ;
	virtual HRESULT __safecall Set_Caption(const WideString bstrCaption) = 0 ;
	virtual HRESULT __safecall Get_Caption(WideString &Get_Caption_result) = 0 ;
	virtual HRESULT __safecall Set_Enabled(Word fEnabled) = 0 ;
	virtual HRESULT __safecall Get_Enabled(Word &Get_Enabled_result) = 0 ;
	virtual HRESULT __safecall Set__Font_Reserved(const _di_IFontDisp Param1) = 0 ;
	virtual HRESULT __safecall Set_Font(const _di_IFontDisp Font) = 0 ;
	virtual HRESULT __safecall Get_Font(_di_IFontDisp &Get_Font_result) = 0 ;
	virtual HRESULT __safecall Set_FontItalic(Word FontItalic) = 0 ;
	virtual HRESULT __safecall Get_FontItalic(Word &Get_FontItalic_result) = 0 ;
	virtual HRESULT __safecall Set_FontBold(Word FontBold) = 0 ;
	virtual HRESULT __safecall Get_FontBold(Word &Get_FontBold_result) = 0 ;
	virtual HRESULT __safecall Set_FontName(const WideString FontName) = 0 ;
	virtual HRESULT __safecall Get_FontName(WideString &Get_FontName_result) = 0 ;
	virtual HRESULT __safecall Set_FontSize(System::Currency FontSize) = 0 ;
	virtual HRESULT __safecall Get_FontSize(System::Currency &Get_FontSize_result) = 0 ;
	virtual HRESULT __safecall Set_FontStrikethru(Word FontStrikethru) = 0 ;
	virtual HRESULT __safecall Get_FontStrikethru(Word &Get_FontStrikethru_result) = 0 ;
	virtual HRESULT __safecall Set_FontUnderline(Word FontUnderline) = 0 ;
	virtual HRESULT __safecall Get_FontUnderline(Word &Get_FontUnderline_result) = 0 ;
	virtual HRESULT __safecall Set_ForeColor(int ForeColor) = 0 ;
	virtual HRESULT __safecall Get_ForeColor(int &Get_ForeColor_result) = 0 ;
	virtual HRESULT __safecall _Set_MouseIcon(const _di_IPictureDisp MouseIcon) = 0 ;
	virtual HRESULT __safecall Set_MouseIcon(const _di_IPictureDisp MouseIcon) = 0 ;
	virtual HRESULT __safecall Get_MouseIcon(_di_IPictureDisp &Get_MouseIcon_result) = 0 ;
	virtual HRESULT __safecall Set_MousePointer(Activex::TOleEnum MousePointer) = 0 ;
	virtual HRESULT __safecall Get_MousePointer(Activex::TOleEnum &Get_MousePointer_result) = 0 ;
	virtual HRESULT __safecall _Set_Picture(const _di_IPictureDisp pPicture) = 0 ;
	virtual HRESULT __safecall Set_Picture(const _di_IPictureDisp pPicture) = 0 ;
	virtual HRESULT __safecall Get_Picture(_di_IPictureDisp &Get_Picture_result) = 0 ;
	virtual HRESULT __safecall Set_PicturePosition(Activex::TOleEnum PicPos) = 0 ;
	virtual HRESULT __safecall Get_PicturePosition(Activex::TOleEnum &Get_PicturePosition_result) = 0 ;
		
	virtual HRESULT __safecall Set_SpecialEffect(Activex::TOleEnum SpecialEffect) = 0 ;
	virtual HRESULT __safecall Get_SpecialEffect(Activex::TOleEnum &Get_SpecialEffect_result) = 0 ;
	virtual HRESULT __safecall Set_TextAlign(Activex::TOleEnum TextAlign) = 0 ;
	virtual HRESULT __safecall Get_TextAlign(Activex::TOleEnum &Get_TextAlign_result) = 0 ;
	virtual HRESULT __safecall Set_WordWrap(Word WordWrap) = 0 ;
	virtual HRESULT __safecall Get_WordWrap(Word &Get_WordWrap_result) = 0 ;
	virtual HRESULT __safecall Set_Accelerator(const WideString Accelerator) = 0 ;
	virtual HRESULT __safecall Get_Accelerator(WideString &Get_Accelerator_result) = 0 ;
	virtual HRESULT __safecall Set_FontWeight(short FontWeight) = 0 ;
	virtual HRESULT __safecall Get_FontWeight(short &Get_FontWeight_result) = 0 ;
	virtual HRESULT __safecall Set__Value(const WideString bstrCaption) = 0 ;
	virtual HRESULT __safecall Get__Value(WideString &Get__Value_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_AutoSize() { Word r; HRESULT hr = Get_AutoSize(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word AutoSize = {read=_scw_Get_AutoSize, write=Set_AutoSize};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_BackColor() { int r; HRESULT hr = Get_BackColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int BackColor = {read=_scw_Get_BackColor, write=Set_BackColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_BackStyle() { Activex::TOleEnum r; HRESULT hr = Get_BackStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum BackStyle = {read=_scw_Get_BackStyle, write=Set_BackStyle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_BorderColor() { int r; HRESULT hr = Get_BorderColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int BorderColor = {read=_scw_Get_BorderColor, write=Set_BorderColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_BorderStyle() { Activex::TOleEnum r; HRESULT hr = Get_BorderStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum BorderStyle = {read=_scw_Get_BorderStyle, write=Set_BorderStyle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Caption() { WideString r; HRESULT hr = Get_Caption(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Caption = {read=_scw_Get_Caption, write=Set_Caption};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Enabled() { Word r; HRESULT hr = Get_Enabled(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Enabled = {read=_scw_Get_Enabled, write=Set_Enabled};
	__property _di_IFontDisp _Font_Reserved = {write=Set__Font_Reserved};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IFontDisp _scw_Get_Font() { _di_IFontDisp r; HRESULT hr = Get_Font(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IFontDisp Font = {read=_scw_Get_Font, write=Set_Font};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontItalic() { Word r; HRESULT hr = Get_FontItalic(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word FontItalic = {read=_scw_Get_FontItalic, write=Set_FontItalic};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontBold() { Word r; HRESULT hr = Get_FontBold(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word FontBold = {read=_scw_Get_FontBold, write=Set_FontBold};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_FontName() { WideString r; HRESULT hr = Get_FontName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString FontName = {read=_scw_Get_FontName, write=Set_FontName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::Currency _scw_Get_FontSize() { System::Currency r; HRESULT hr = Get_FontSize(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property System::Currency FontSize = {read=_scw_Get_FontSize, write=Set_FontSize};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontStrikethru() { Word r; HRESULT hr = Get_FontStrikethru(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word FontStrikethru = {read=_scw_Get_FontStrikethru, write=Set_FontStrikethru};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontUnderline() { Word r; HRESULT hr = Get_FontUnderline(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word FontUnderline = {read=_scw_Get_FontUnderline, write=Set_FontUnderline};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ForeColor() { int r; HRESULT hr = Get_ForeColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int ForeColor = {read=_scw_Get_ForeColor, write=Set_ForeColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IPictureDisp _scw_Get_MouseIcon() { _di_IPictureDisp r; HRESULT hr = Get_MouseIcon(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IPictureDisp MouseIcon = {read=_scw_Get_MouseIcon, write=_Set_MouseIcon};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_MousePointer() { Activex::TOleEnum r; HRESULT hr = Get_MousePointer(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum MousePointer = {read=_scw_Get_MousePointer, write=Set_MousePointer};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IPictureDisp _scw_Get_Picture() { _di_IPictureDisp r; HRESULT hr = Get_Picture(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IPictureDisp Picture = {read=_scw_Get_Picture, write=_Set_Picture};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PicturePosition() { Activex::TOleEnum r; HRESULT hr = Get_PicturePosition(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PicturePosition = {read=_scw_Get_PicturePosition, write=Set_PicturePosition
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_SpecialEffect() { Activex::TOleEnum r; HRESULT hr = Get_SpecialEffect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum SpecialEffect = {read=_scw_Get_SpecialEffect, write=Set_SpecialEffect}
		;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_TextAlign() { Activex::TOleEnum r; HRESULT hr = Get_TextAlign(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum TextAlign = {read=_scw_Get_TextAlign, write=Set_TextAlign};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_WordWrap() { Word r; HRESULT hr = Get_WordWrap(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word WordWrap = {read=_scw_Get_WordWrap, write=Set_WordWrap};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Accelerator() { WideString r; HRESULT hr = Get_Accelerator(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Accelerator = {read=_scw_Get_Accelerator, write=Set_Accelerator};
	#pragma option push -w-inl
	/* safecall wrapper */ inline short _scw_Get_FontWeight() { short r; HRESULT hr = Get_FontWeight(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property short FontWeight = {read=_scw_Get_FontWeight, write=Set_FontWeight};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get__Value() { WideString r; HRESULT hr = Get__Value(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString _Value = {read=_scw_Get__Value, write=Set__Value};
};
typedef ILabelControl Label_;

__interface ICommandButton;
typedef System::DelphiInterface<ICommandButton> _di_ICommandButton;
__interface INTERFACE_UUID("{04598FC4-866C-11CF-AB7C-00AA00C08FCF}") ICommandButton  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Set_AutoSize(Word fvbAutoSize) = 0 ;
	virtual HRESULT __safecall Get_AutoSize(Word &Get_AutoSize_result) = 0 ;
	virtual HRESULT __safecall Set_BackColor(int BackColor) = 0 ;
	virtual HRESULT __safecall Get_BackColor(int &Get_BackColor_result) = 0 ;
	virtual HRESULT __safecall Set_BackStyle(Activex::TOleEnum BackStyle) = 0 ;
	virtual HRESULT __safecall Get_BackStyle(Activex::TOleEnum &Get_BackStyle_result) = 0 ;
	virtual HRESULT __safecall Set_Caption(const WideString bstrCaption) = 0 ;
	virtual HRESULT __safecall Get_Caption(WideString &Get_Caption_result) = 0 ;
	virtual HRESULT __safecall Set_Enabled(Word fEnabled) = 0 ;
	virtual HRESULT __safecall Get_Enabled(Word &Get_Enabled_result) = 0 ;
	virtual HRESULT __safecall Set__Font_Reserved(const _di_IFontDisp Param1) = 0 ;
	virtual HRESULT __safecall Set_Font(const _di_IFontDisp Font) = 0 ;
	virtual HRESULT __safecall Get_Font(_di_IFontDisp &Get_Font_result) = 0 ;
	virtual HRESULT __safecall Set_FontBold(Word FontBold) = 0 ;
	virtual HRESULT __safecall Get_FontBold(Word &Get_FontBold_result) = 0 ;
	virtual HRESULT __safecall Set_FontItalic(Word FontItalic) = 0 ;
	virtual HRESULT __safecall Get_FontItalic(Word &Get_FontItalic_result) = 0 ;
	virtual HRESULT __safecall Set_FontName(const WideString FontName) = 0 ;
	virtual HRESULT __safecall Get_FontName(WideString &Get_FontName_result) = 0 ;
	virtual HRESULT __safecall Set_FontSize(System::Currency FontSize) = 0 ;
	virtual HRESULT __safecall Get_FontSize(System::Currency &Get_FontSize_result) = 0 ;
	virtual HRESULT __safecall Set_FontStrikethru(Word FontStrikethru) = 0 ;
	virtual HRESULT __safecall Get_FontStrikethru(Word &Get_FontStrikethru_result) = 0 ;
	virtual HRESULT __safecall Set_FontUnderline(Word FontUnderline) = 0 ;
	virtual HRESULT __safecall Get_FontUnderline(Word &Get_FontUnderline_result) = 0 ;
	virtual HRESULT __safecall Set_ForeColor(int ForeColor) = 0 ;
	virtual HRESULT __safecall Get_ForeColor(int &Get_ForeColor_result) = 0 ;
	virtual HRESULT __safecall Set_TakeFocusOnClick(Word TakeFocusOnClick) = 0 ;
	virtual HRESULT __safecall Get_TakeFocusOnClick(Word &Get_TakeFocusOnClick_result) = 0 ;
	virtual HRESULT __safecall Set_Locked(Word fLocked) = 0 ;
	virtual HRESULT __safecall Get_Locked(Word &Get_Locked_result) = 0 ;
	virtual HRESULT __safecall _Set_MouseIcon(const _di_IPictureDisp MouseIcon) = 0 ;
	virtual HRESULT __safecall Set_MouseIcon(const _di_IPictureDisp MouseIcon) = 0 ;
	virtual HRESULT __safecall Get_MouseIcon(_di_IPictureDisp &Get_MouseIcon_result) = 0 ;
	virtual HRESULT __safecall Set_MousePointer(Activex::TOleEnum mouseptr) = 0 ;
	virtual HRESULT __safecall Get_MousePointer(Activex::TOleEnum &Get_MousePointer_result) = 0 ;
	virtual HRESULT __safecall _Set_Picture(const _di_IPictureDisp Picture) = 0 ;
	virtual HRESULT __safecall Set_Picture(const _di_IPictureDisp Picture) = 0 ;
	virtual HRESULT __safecall Get_Picture(_di_IPictureDisp &Get_Picture_result) = 0 ;
	virtual HRESULT __safecall Set_PicturePosition(Activex::TOleEnum PicturePosition) = 0 ;
	virtual HRESULT __safecall Get_PicturePosition(Activex::TOleEnum &Get_PicturePosition_result) = 0 ;
		
	virtual HRESULT __safecall Set_Accelerator(const WideString Accelerator) = 0 ;
	virtual HRESULT __safecall Get_Accelerator(WideString &Get_Accelerator_result) = 0 ;
	virtual HRESULT __safecall Set_WordWrap(Word WordWrap) = 0 ;
	virtual HRESULT __safecall Get_WordWrap(Word &Get_WordWrap_result) = 0 ;
	virtual HRESULT __safecall Set_Value(Word fValue) = 0 ;
	virtual HRESULT __safecall Get_Value(Word &Get_Value_result) = 0 ;
	virtual HRESULT __safecall Set_FontWeight(short FontWeight) = 0 ;
	virtual HRESULT __safecall Get_FontWeight(short &Get_FontWeight_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_AutoSize() { Word r; HRESULT hr = Get_AutoSize(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word AutoSize = {read=_scw_Get_AutoSize, write=Set_AutoSize};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_BackColor() { int r; HRESULT hr = Get_BackColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int BackColor = {read=_scw_Get_BackColor, write=Set_BackColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_BackStyle() { Activex::TOleEnum r; HRESULT hr = Get_BackStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum BackStyle = {read=_scw_Get_BackStyle, write=Set_BackStyle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Caption() { WideString r; HRESULT hr = Get_Caption(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Caption = {read=_scw_Get_Caption, write=Set_Caption};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Enabled() { Word r; HRESULT hr = Get_Enabled(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Enabled = {read=_scw_Get_Enabled, write=Set_Enabled};
	__property _di_IFontDisp _Font_Reserved = {write=Set__Font_Reserved};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IFontDisp _scw_Get_Font() { _di_IFontDisp r; HRESULT hr = Get_Font(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IFontDisp Font = {read=_scw_Get_Font, write=Set_Font};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontBold() { Word r; HRESULT hr = Get_FontBold(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word FontBold = {read=_scw_Get_FontBold, write=Set_FontBold};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontItalic() { Word r; HRESULT hr = Get_FontItalic(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word FontItalic = {read=_scw_Get_FontItalic, write=Set_FontItalic};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_FontName() { WideString r; HRESULT hr = Get_FontName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString FontName = {read=_scw_Get_FontName, write=Set_FontName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::Currency _scw_Get_FontSize() { System::Currency r; HRESULT hr = Get_FontSize(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property System::Currency FontSize = {read=_scw_Get_FontSize, write=Set_FontSize};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontStrikethru() { Word r; HRESULT hr = Get_FontStrikethru(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word FontStrikethru = {read=_scw_Get_FontStrikethru, write=Set_FontStrikethru};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontUnderline() { Word r; HRESULT hr = Get_FontUnderline(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word FontUnderline = {read=_scw_Get_FontUnderline, write=Set_FontUnderline};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ForeColor() { int r; HRESULT hr = Get_ForeColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int ForeColor = {read=_scw_Get_ForeColor, write=Set_ForeColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_TakeFocusOnClick() { Word r; HRESULT hr = Get_TakeFocusOnClick(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word TakeFocusOnClick = {read=_scw_Get_TakeFocusOnClick, write=Set_TakeFocusOnClick};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Locked() { Word r; HRESULT hr = Get_Locked(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Locked = {read=_scw_Get_Locked, write=Set_Locked};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IPictureDisp _scw_Get_MouseIcon() { _di_IPictureDisp r; HRESULT hr = Get_MouseIcon(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IPictureDisp MouseIcon = {read=_scw_Get_MouseIcon, write=_Set_MouseIcon};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_MousePointer() { Activex::TOleEnum r; HRESULT hr = Get_MousePointer(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum MousePointer = {read=_scw_Get_MousePointer, write=Set_MousePointer};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IPictureDisp _scw_Get_Picture() { _di_IPictureDisp r; HRESULT hr = Get_Picture(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IPictureDisp Picture = {read=_scw_Get_Picture, write=_Set_Picture};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PicturePosition() { Activex::TOleEnum r; HRESULT hr = Get_PicturePosition(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PicturePosition = {read=_scw_Get_PicturePosition, write=Set_PicturePosition
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Accelerator() { WideString r; HRESULT hr = Get_Accelerator(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Accelerator = {read=_scw_Get_Accelerator, write=Set_Accelerator};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_WordWrap() { Word r; HRESULT hr = Get_WordWrap(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word WordWrap = {read=_scw_Get_WordWrap, write=Set_WordWrap};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Value() { Word r; HRESULT hr = Get_Value(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Value = {read=_scw_Get_Value, write=Set_Value};
	#pragma option push -w-inl
	/* safecall wrapper */ inline short _scw_Get_FontWeight() { short r; HRESULT hr = Get_FontWeight(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property short FontWeight = {read=_scw_Get_FontWeight, write=Set_FontWeight};
};
typedef ICommandButton CommandButton;

__interface IMdcText;
typedef System::DelphiInterface<IMdcText> _di_IMdcText;
__interface INTERFACE_UUID("{8BD21D13-EC42-11CE-9E0D-00AA006002F3}") IMdcText  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Set_AutoSize(Word AutoSize) = 0 ;
	virtual HRESULT __safecall Get_AutoSize(Word &Get_AutoSize_result) = 0 ;
	virtual HRESULT __safecall Set_AutoTab(Word AutoTab) = 0 ;
	virtual HRESULT __safecall Get_AutoTab(Word &Get_AutoTab_result) = 0 ;
	virtual HRESULT __safecall Set_AutoWordSelect(Word AutoWordSelect) = 0 ;
	virtual HRESULT __safecall Get_AutoWordSelect(Word &Get_AutoWordSelect_result) = 0 ;
	virtual HRESULT __safecall Set_BackColor(int BackColor) = 0 ;
	virtual HRESULT __safecall Get_BackColor(int &Get_BackColor_result) = 0 ;
	virtual HRESULT __safecall Set_BackStyle(Activex::TOleEnum BackStyle) = 0 ;
	virtual HRESULT __safecall Get_BackStyle(Activex::TOleEnum &Get_BackStyle_result) = 0 ;
	virtual HRESULT __safecall Set_BorderColor(int BorderColor) = 0 ;
	virtual HRESULT __safecall Get_BorderColor(int &Get_BorderColor_result) = 0 ;
	virtual HRESULT __safecall Set_BorderStyle(Activex::TOleEnum BorderStyle) = 0 ;
	virtual HRESULT __safecall Get_BorderStyle(Activex::TOleEnum &Get_BorderStyle_result) = 0 ;
	virtual HRESULT __safecall Set_BordersSuppress(Word BordersSuppress) = 0 ;
	virtual HRESULT __safecall Get_BordersSuppress(Word &Get_BordersSuppress_result) = 0 ;
	virtual HRESULT __safecall Get_CanPaste(Word &Get_CanPaste_result) = 0 ;
	virtual HRESULT __safecall Set_CurLine(int CurLine) = 0 ;
	virtual HRESULT __safecall Get_CurLine(int &Get_CurLine_result) = 0 ;
	virtual HRESULT __safecall Get_CurTargetX(int &Get_CurTargetX_result) = 0 ;
	virtual HRESULT __safecall Get_CurTargetY(int &Get_CurTargetY_result) = 0 ;
	virtual HRESULT __safecall Set_CurX(int CurX) = 0 ;
	virtual HRESULT __safecall Get_CurX(int &Get_CurX_result) = 0 ;
	virtual HRESULT __safecall Set_CurY(int CurY) = 0 ;
	virtual HRESULT __safecall Get_CurY(int &Get_CurY_result) = 0 ;
	virtual HRESULT __safecall Set_DropButtonStyle(Activex::TOleEnum DropButtonStyle) = 0 ;
	virtual HRESULT __safecall Get_DropButtonStyle(Activex::TOleEnum &Get_DropButtonStyle_result) = 0 ;
		
	virtual HRESULT __safecall Set_EnterKeyBehavior(Word EnterKeyBehavior) = 0 ;
	virtual HRESULT __safecall Get_EnterKeyBehavior(Word &Get_EnterKeyBehavior_result) = 0 ;
	virtual HRESULT __safecall Set_Enabled(Word Enabled) = 0 ;
	virtual HRESULT __safecall Get_Enabled(Word &Get_Enabled_result) = 0 ;
	virtual HRESULT __safecall Set__Font_Reserved(const _di_IFontDisp Param1) = 0 ;
	virtual HRESULT __safecall Set_Font(const _di_IFontDisp Font) = 0 ;
	virtual HRESULT __safecall Get_Font(_di_IFontDisp &Get_Font_result) = 0 ;
	virtual HRESULT __safecall Set_FontBold(Word FontBold) = 0 ;
	virtual HRESULT __safecall Get_FontBold(Word &Get_FontBold_result) = 0 ;
	virtual HRESULT __safecall Set_FontItalic(Word FontItalic) = 0 ;
	virtual HRESULT __safecall Get_FontItalic(Word &Get_FontItalic_result) = 0 ;
	virtual HRESULT __safecall Set_FontName(const WideString FontName) = 0 ;
	virtual HRESULT __safecall Get_FontName(WideString &Get_FontName_result) = 0 ;
	virtual HRESULT __safecall Set_FontSize(System::Currency FontSize) = 0 ;
	virtual HRESULT __safecall Get_FontSize(System::Currency &Get_FontSize_result) = 0 ;
	virtual HRESULT __safecall Set_FontStrikethru(Word FontStrikethru) = 0 ;
	virtual HRESULT __safecall Get_FontStrikethru(Word &Get_FontStrikethru_result) = 0 ;
	virtual HRESULT __safecall Set_FontUnderline(Word FontUnderline) = 0 ;
	virtual HRESULT __safecall Get_FontUnderline(Word &Get_FontUnderline_result) = 0 ;
	virtual HRESULT __safecall Set_FontWeight(short FontWeight) = 0 ;
	virtual HRESULT __safecall Get_FontWeight(short &Get_FontWeight_result) = 0 ;
	virtual HRESULT __safecall Set_ForeColor(int ForeColor) = 0 ;
	virtual HRESULT __safecall Get_ForeColor(int &Get_ForeColor_result) = 0 ;
	virtual HRESULT __safecall Set_HideSelection(Word HideSelection) = 0 ;
	virtual HRESULT __safecall Get_HideSelection(Word &Get_HideSelection_result) = 0 ;
	virtual HRESULT __safecall Set_IntegralHeight(Word IntegralHeight) = 0 ;
	virtual HRESULT __safecall Get_IntegralHeight(Word &Get_IntegralHeight_result) = 0 ;
	virtual HRESULT __safecall Get_LineCount(int &Get_LineCount_result) = 0 ;
	virtual HRESULT __safecall Set_Locked(Word Locked) = 0 ;
	virtual HRESULT __safecall Get_Locked(Word &Get_Locked_result) = 0 ;
	virtual HRESULT __safecall Set_MaxLength(int MaxLength) = 0 ;
	virtual HRESULT __safecall Get_MaxLength(int &Get_MaxLength_result) = 0 ;
	virtual HRESULT __safecall _Set_MouseIcon(const _di_IPictureDisp MouseIcon) = 0 ;
	virtual HRESULT __safecall Set_MouseIcon(const _di_IPictureDisp MouseIcon) = 0 ;
	virtual HRESULT __safecall Get_MouseIcon(_di_IPictureDisp &Get_MouseIcon_result) = 0 ;
	virtual HRESULT __safecall Set_MousePointer(Activex::TOleEnum MousePointer) = 0 ;
	virtual HRESULT __safecall Get_MousePointer(Activex::TOleEnum &Get_MousePointer_result) = 0 ;
	virtual HRESULT __safecall Set_MultiLine(Word MultiLine) = 0 ;
	virtual HRESULT __safecall Get_MultiLine(Word &Get_MultiLine_result) = 0 ;
	virtual HRESULT __safecall Set_PasswordChar(const WideString PasswordChar) = 0 ;
	virtual HRESULT __safecall Get_PasswordChar(WideString &Get_PasswordChar_result) = 0 ;
	virtual HRESULT __safecall Set_ScrollBars(Activex::TOleEnum ScrollBars) = 0 ;
	virtual HRESULT __safecall Get_ScrollBars(Activex::TOleEnum &Get_ScrollBars_result) = 0 ;
	virtual HRESULT __safecall Set_SelectionMargin(Word SelectionMargin) = 0 ;
	virtual HRESULT __safecall Get_SelectionMargin(Word &Get_SelectionMargin_result) = 0 ;
	virtual HRESULT __safecall Set_SelLength(int SelLength) = 0 ;
	virtual HRESULT __safecall Get_SelLength(int &Get_SelLength_result) = 0 ;
	virtual HRESULT __safecall Set_SelStart(int SelStart) = 0 ;
	virtual HRESULT __safecall Get_SelStart(int &Get_SelStart_result) = 0 ;
	virtual HRESULT __safecall Set_SelText(const WideString SelText) = 0 ;
	virtual HRESULT __safecall Get_SelText(WideString &Get_SelText_result) = 0 ;
	virtual HRESULT __safecall Set_ShowDropButtonWhen(Activex::TOleEnum ShowDropButtonWhen) = 0 ;
	virtual HRESULT __safecall Get_ShowDropButtonWhen(Activex::TOleEnum &Get_ShowDropButtonWhen_result)
		 = 0 ;
	virtual HRESULT __safecall Set_SpecialEffect(Activex::TOleEnum SpecialEffect) = 0 ;
	virtual HRESULT __safecall Get_SpecialEffect(Activex::TOleEnum &Get_SpecialEffect_result) = 0 ;
	virtual HRESULT __safecall Set_TabKeyBehavior(Word TabKeyBehavior) = 0 ;
	virtual HRESULT __safecall Get_TabKeyBehavior(Word &Get_TabKeyBehavior_result) = 0 ;
	virtual HRESULT __safecall Set_Text(const WideString Text) = 0 ;
	virtual HRESULT __safecall Get_Text(WideString &Get_Text_result) = 0 ;
	virtual HRESULT __safecall Set_TextAlign(Activex::TOleEnum TextAlign) = 0 ;
	virtual HRESULT __safecall Get_TextAlign(Activex::TOleEnum &Get_TextAlign_result) = 0 ;
	virtual HRESULT __safecall Get_TextLength(int &Get_TextLength_result) = 0 ;
	virtual HRESULT __safecall Get_Valid(Word &Get_Valid_result) = 0 ;
	virtual HRESULT __safecall Set_Value(OleVariant &Value) = 0 ;
	virtual HRESULT __safecall Get_Value(OleVariant &Get_Value_result) = 0 ;
	virtual HRESULT __safecall Set_WordWrap(Word WordWrap) = 0 ;
	virtual HRESULT __safecall Get_WordWrap(Word &Get_WordWrap_result) = 0 ;
	virtual HRESULT __safecall Copy(void) = 0 ;
	virtual HRESULT __safecall Cut(void) = 0 ;
	virtual HRESULT __safecall Paste(void) = 0 ;
	virtual HRESULT __safecall Set_IMEMode(Activex::TOleEnum IMEMode) = 0 ;
	virtual HRESULT __safecall Get_IMEMode(Activex::TOleEnum &Get_IMEMode_result) = 0 ;
	virtual HRESULT __safecall Set_EnterFieldBehavior(Activex::TOleEnum EnterFieldBehavior) = 0 ;
	virtual HRESULT __safecall Get_EnterFieldBehavior(Activex::TOleEnum &Get_EnterFieldBehavior_result)
		 = 0 ;
	virtual HRESULT __safecall Set_DragBehavior(Activex::TOleEnum DragBehavior) = 0 ;
	virtual HRESULT __safecall Get_DragBehavior(Activex::TOleEnum &Get_DragBehavior_result) = 0 ;
	virtual HRESULT __safecall Get_DisplayStyle(Activex::TOleEnum &Get_DisplayStyle_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_AutoSize() { Word r; HRESULT hr = Get_AutoSize(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word AutoSize = {read=_scw_Get_AutoSize, write=Set_AutoSize};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_AutoTab() { Word r; HRESULT hr = Get_AutoTab(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word AutoTab = {read=_scw_Get_AutoTab, write=Set_AutoTab};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_AutoWordSelect() { Word r; HRESULT hr = Get_AutoWordSelect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word AutoWordSelect = {read=_scw_Get_AutoWordSelect, write=Set_AutoWordSelect};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_BackColor() { int r; HRESULT hr = Get_BackColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int BackColor = {read=_scw_Get_BackColor, write=Set_BackColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_BackStyle() { Activex::TOleEnum r; HRESULT hr = Get_BackStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum BackStyle = {read=_scw_Get_BackStyle, write=Set_BackStyle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_BorderColor() { int r; HRESULT hr = Get_BorderColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int BorderColor = {read=_scw_Get_BorderColor, write=Set_BorderColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_BorderStyle() { Activex::TOleEnum r; HRESULT hr = Get_BorderStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum BorderStyle = {read=_scw_Get_BorderStyle, write=Set_BorderStyle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_BordersSuppress() { Word r; HRESULT hr = Get_BordersSuppress(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word BordersSuppress = {read=_scw_Get_BordersSuppress, write=Set_BordersSuppress};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_CanPaste() { Word r; HRESULT hr = Get_CanPaste(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word CanPaste = {read=_scw_Get_CanPaste};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_CurLine() { int r; HRESULT hr = Get_CurLine(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int CurLine = {read=_scw_Get_CurLine, write=Set_CurLine};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_CurTargetX() { int r; HRESULT hr = Get_CurTargetX(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int CurTargetX = {read=_scw_Get_CurTargetX};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_CurTargetY() { int r; HRESULT hr = Get_CurTargetY(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int CurTargetY = {read=_scw_Get_CurTargetY};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_CurX() { int r; HRESULT hr = Get_CurX(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int CurX = {read=_scw_Get_CurX, write=Set_CurX};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_CurY() { int r; HRESULT hr = Get_CurY(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int CurY = {read=_scw_Get_CurY, write=Set_CurY};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_DropButtonStyle() { Activex::TOleEnum r; HRESULT hr = Get_DropButtonStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum DropButtonStyle = {read=_scw_Get_DropButtonStyle, write=Set_DropButtonStyle
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_EnterKeyBehavior() { Word r; HRESULT hr = Get_EnterKeyBehavior(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word EnterKeyBehavior = {read=_scw_Get_EnterKeyBehavior, write=Set_EnterKeyBehavior};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Enabled() { Word r; HRESULT hr = Get_Enabled(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Enabled = {read=_scw_Get_Enabled, write=Set_Enabled};
	__property _di_IFontDisp _Font_Reserved = {write=Set__Font_Reserved};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IFontDisp _scw_Get_Font() { _di_IFontDisp r; HRESULT hr = Get_Font(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IFontDisp Font = {read=_scw_Get_Font, write=Set_Font};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontBold() { Word r; HRESULT hr = Get_FontBold(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word FontBold = {read=_scw_Get_FontBold, write=Set_FontBold};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontItalic() { Word r; HRESULT hr = Get_FontItalic(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word FontItalic = {read=_scw_Get_FontItalic, write=Set_FontItalic};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_FontName() { WideString r; HRESULT hr = Get_FontName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString FontName = {read=_scw_Get_FontName, write=Set_FontName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::Currency _scw_Get_FontSize() { System::Currency r; HRESULT hr = Get_FontSize(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property System::Currency FontSize = {read=_scw_Get_FontSize, write=Set_FontSize};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontStrikethru() { Word r; HRESULT hr = Get_FontStrikethru(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word FontStrikethru = {read=_scw_Get_FontStrikethru, write=Set_FontStrikethru};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontUnderline() { Word r; HRESULT hr = Get_FontUnderline(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word FontUnderline = {read=_scw_Get_FontUnderline, write=Set_FontUnderline};
	#pragma option push -w-inl
	/* safecall wrapper */ inline short _scw_Get_FontWeight() { short r; HRESULT hr = Get_FontWeight(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property short FontWeight = {read=_scw_Get_FontWeight, write=Set_FontWeight};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ForeColor() { int r; HRESULT hr = Get_ForeColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int ForeColor = {read=_scw_Get_ForeColor, write=Set_ForeColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_HideSelection() { Word r; HRESULT hr = Get_HideSelection(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word HideSelection = {read=_scw_Get_HideSelection, write=Set_HideSelection};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_IntegralHeight() { Word r; HRESULT hr = Get_IntegralHeight(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word IntegralHeight = {read=_scw_Get_IntegralHeight, write=Set_IntegralHeight};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_LineCount() { int r; HRESULT hr = Get_LineCount(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int LineCount = {read=_scw_Get_LineCount};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Locked() { Word r; HRESULT hr = Get_Locked(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Locked = {read=_scw_Get_Locked, write=Set_Locked};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_MaxLength() { int r; HRESULT hr = Get_MaxLength(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int MaxLength = {read=_scw_Get_MaxLength, write=Set_MaxLength};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IPictureDisp _scw_Get_MouseIcon() { _di_IPictureDisp r; HRESULT hr = Get_MouseIcon(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IPictureDisp MouseIcon = {read=_scw_Get_MouseIcon, write=_Set_MouseIcon};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_MousePointer() { Activex::TOleEnum r; HRESULT hr = Get_MousePointer(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum MousePointer = {read=_scw_Get_MousePointer, write=Set_MousePointer};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_MultiLine() { Word r; HRESULT hr = Get_MultiLine(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word MultiLine = {read=_scw_Get_MultiLine, write=Set_MultiLine};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_PasswordChar() { WideString r; HRESULT hr = Get_PasswordChar(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString PasswordChar = {read=_scw_Get_PasswordChar, write=Set_PasswordChar};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ScrollBars() { Activex::TOleEnum r; HRESULT hr = Get_ScrollBars(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ScrollBars = {read=_scw_Get_ScrollBars, write=Set_ScrollBars};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_SelectionMargin() { Word r; HRESULT hr = Get_SelectionMargin(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word SelectionMargin = {read=_scw_Get_SelectionMargin, write=Set_SelectionMargin};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_SelLength() { int r; HRESULT hr = Get_SelLength(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int SelLength = {read=_scw_Get_SelLength, write=Set_SelLength};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_SelStart() { int r; HRESULT hr = Get_SelStart(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int SelStart = {read=_scw_Get_SelStart, write=Set_SelStart};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_SelText() { WideString r; HRESULT hr = Get_SelText(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString SelText = {read=_scw_Get_SelText, write=Set_SelText};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ShowDropButtonWhen() { Activex::TOleEnum r; HRESULT hr = Get_ShowDropButtonWhen(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ShowDropButtonWhen = {read=_scw_Get_ShowDropButtonWhen, write=Set_ShowDropButtonWhen
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_SpecialEffect() { Activex::TOleEnum r; HRESULT hr = Get_SpecialEffect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum SpecialEffect = {read=_scw_Get_SpecialEffect, write=Set_SpecialEffect}
		;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_TabKeyBehavior() { Word r; HRESULT hr = Get_TabKeyBehavior(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word TabKeyBehavior = {read=_scw_Get_TabKeyBehavior, write=Set_TabKeyBehavior};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Text() { WideString r; HRESULT hr = Get_Text(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Text = {read=_scw_Get_Text, write=Set_Text};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_TextAlign() { Activex::TOleEnum r; HRESULT hr = Get_TextAlign(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum TextAlign = {read=_scw_Get_TextAlign, write=Set_TextAlign};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_TextLength() { int r; HRESULT hr = Get_TextLength(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int TextLength = {read=_scw_Get_TextLength};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Valid() { Word r; HRESULT hr = Get_Valid(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Valid = {read=_scw_Get_Valid};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_WordWrap() { Word r; HRESULT hr = Get_WordWrap(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word WordWrap = {read=_scw_Get_WordWrap, write=Set_WordWrap};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_IMEMode() { Activex::TOleEnum r; HRESULT hr = Get_IMEMode(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum IMEMode = {read=_scw_Get_IMEMode, write=Set_IMEMode};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_EnterFieldBehavior() { Activex::TOleEnum r; HRESULT hr = Get_EnterFieldBehavior(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum EnterFieldBehavior = {read=_scw_Get_EnterFieldBehavior, write=Set_EnterFieldBehavior
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_DragBehavior() { Activex::TOleEnum r; HRESULT hr = Get_DragBehavior(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum DragBehavior = {read=_scw_Get_DragBehavior, write=Set_DragBehavior};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_DisplayStyle() { Activex::TOleEnum r; HRESULT hr = Get_DisplayStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum DisplayStyle = {read=_scw_Get_DisplayStyle};
};
typedef IMdcText TextBox;

__interface IMdcList;
typedef System::DelphiInterface<IMdcList> _di_IMdcList;
__interface INTERFACE_UUID("{8BD21D23-EC42-11CE-9E0D-00AA006002F3}") IMdcList  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Set_BackColor(int BackColor) = 0 ;
	virtual HRESULT __safecall Get_BackColor(int &Get_BackColor_result) = 0 ;
	virtual HRESULT __safecall Set_BorderColor(int BorderColor) = 0 ;
	virtual HRESULT __safecall Get_BorderColor(int &Get_BorderColor_result) = 0 ;
	virtual HRESULT __safecall Set_BorderStyle(Activex::TOleEnum BorderStyle) = 0 ;
	virtual HRESULT __safecall Get_BorderStyle(Activex::TOleEnum &Get_BorderStyle_result) = 0 ;
	virtual HRESULT __safecall Set_BordersSuppress(Word BordersSuppress) = 0 ;
	virtual HRESULT __safecall Get_BordersSuppress(Word &Get_BordersSuppress_result) = 0 ;
	virtual HRESULT __safecall Set_BoundColumn(OleVariant &BoundColumn) = 0 ;
	virtual HRESULT __safecall Get_BoundColumn(OleVariant &Get_BoundColumn_result) = 0 ;
	virtual HRESULT __safecall Set_ColumnCount(int ColumnCount) = 0 ;
	virtual HRESULT __safecall Get_ColumnCount(int &Get_ColumnCount_result) = 0 ;
	virtual HRESULT __safecall Set_ColumnHeads(Word ColumnHeads) = 0 ;
	virtual HRESULT __safecall Get_ColumnHeads(Word &Get_ColumnHeads_result) = 0 ;
	virtual HRESULT __safecall Set_ColumnWidths(const WideString ColumnWidths) = 0 ;
	virtual HRESULT __safecall Get_ColumnWidths(WideString &Get_ColumnWidths_result) = 0 ;
	virtual HRESULT __safecall Set_Enabled(Word Enabled) = 0 ;
	virtual HRESULT __safecall Get_Enabled(Word &Get_Enabled_result) = 0 ;
	virtual HRESULT __safecall Set__Font_Reserved(const _di_IFontDisp Param1) = 0 ;
	virtual HRESULT __safecall Set_Font(const _di_IFontDisp Font) = 0 ;
	virtual HRESULT __safecall Get_Font(_di_IFontDisp &Get_Font_result) = 0 ;
	virtual HRESULT __safecall Set_FontBold(Word FontBold) = 0 ;
	virtual HRESULT __safecall Get_FontBold(Word &Get_FontBold_result) = 0 ;
	virtual HRESULT __safecall Set_FontItalic(Word FontItalic) = 0 ;
	virtual HRESULT __safecall Get_FontItalic(Word &Get_FontItalic_result) = 0 ;
	virtual HRESULT __safecall Set_FontName(const WideString FontName) = 0 ;
	virtual HRESULT __safecall Get_FontName(WideString &Get_FontName_result) = 0 ;
	virtual HRESULT __safecall Set_FontSize(System::Currency FontSize) = 0 ;
	virtual HRESULT __safecall Get_FontSize(System::Currency &Get_FontSize_result) = 0 ;
	virtual HRESULT __safecall Set_FontStrikethru(Word FontStrikethru) = 0 ;
	virtual HRESULT __safecall Get_FontStrikethru(Word &Get_FontStrikethru_result) = 0 ;
	virtual HRESULT __safecall Set_FontUnderline(Word FontUnderline) = 0 ;
	virtual HRESULT __safecall Get_FontUnderline(Word &Get_FontUnderline_result) = 0 ;
	virtual HRESULT __safecall Set_FontWeight(short FontWeight) = 0 ;
	virtual HRESULT __safecall Get_FontWeight(short &Get_FontWeight_result) = 0 ;
	virtual HRESULT __safecall Set_ForeColor(int ForeColor) = 0 ;
	virtual HRESULT __safecall Get_ForeColor(int &Get_ForeColor_result) = 0 ;
	virtual HRESULT __safecall Set_IntegralHeight(Word IntegralHeight) = 0 ;
	virtual HRESULT __safecall Get_IntegralHeight(Word &Get_IntegralHeight_result) = 0 ;
	virtual HRESULT __safecall Get_ListCount(int &Get_ListCount_result) = 0 ;
	virtual HRESULT __safecall Set_ListCursor(const _di_IUnknown ListCursor) = 0 ;
	virtual HRESULT __safecall Get_ListCursor(_di_IUnknown &Get_ListCursor_result) = 0 ;
	virtual HRESULT __safecall Set_ListIndex(OleVariant &ListIndex) = 0 ;
	virtual HRESULT __safecall Get_ListIndex(OleVariant &Get_ListIndex_result) = 0 ;
	virtual HRESULT __safecall Set_ListStyle(Activex::TOleEnum ListStyle) = 0 ;
	virtual HRESULT __safecall Get_ListStyle(Activex::TOleEnum &Get_ListStyle_result) = 0 ;
	virtual HRESULT __safecall Set_ListWidth(OleVariant &ListWidth) = 0 ;
	virtual HRESULT __safecall Get_ListWidth(OleVariant &Get_ListWidth_result) = 0 ;
	virtual HRESULT __safecall Set_Locked(Word Locked) = 0 ;
	virtual HRESULT __safecall Get_Locked(Word &Get_Locked_result) = 0 ;
	virtual HRESULT __safecall Set_MatchEntry(Activex::TOleEnum MatchEntry) = 0 ;
	virtual HRESULT __safecall Get_MatchEntry(Activex::TOleEnum &Get_MatchEntry_result) = 0 ;
	virtual HRESULT __safecall _Set_MouseIcon(const _di_IPictureDisp MouseIcon) = 0 ;
	virtual HRESULT __safecall Set_MouseIcon(const _di_IPictureDisp MouseIcon) = 0 ;
	virtual HRESULT __safecall Get_MouseIcon(_di_IPictureDisp &Get_MouseIcon_result) = 0 ;
	virtual HRESULT __safecall Set_MousePointer(Activex::TOleEnum MousePointer) = 0 ;
	virtual HRESULT __safecall Get_MousePointer(Activex::TOleEnum &Get_MousePointer_result) = 0 ;
	virtual HRESULT __safecall Set_MultiSelect(Activex::TOleEnum MultiSelect) = 0 ;
	virtual HRESULT __safecall Get_MultiSelect(Activex::TOleEnum &Get_MultiSelect_result) = 0 ;
	virtual HRESULT __safecall Set_SpecialEffect(Activex::TOleEnum SpecialEffect) = 0 ;
	virtual HRESULT __safecall Get_SpecialEffect(Activex::TOleEnum &Get_SpecialEffect_result) = 0 ;
	virtual HRESULT __safecall Set_Text(const WideString Text) = 0 ;
	virtual HRESULT __safecall Get_Text(WideString &Get_Text_result) = 0 ;
	virtual HRESULT __safecall Set_TextColumn(OleVariant &TextColumn) = 0 ;
	virtual HRESULT __safecall Get_TextColumn(OleVariant &Get_TextColumn_result) = 0 ;
	virtual HRESULT __safecall Set_TopIndex(OleVariant &TopIndex) = 0 ;
	virtual HRESULT __safecall Get_TopIndex(OleVariant &Get_TopIndex_result) = 0 ;
	virtual HRESULT __safecall Get_Valid(Word &Get_Valid_result) = 0 ;
	virtual HRESULT __safecall Set_Value(OleVariant &Value) = 0 ;
	virtual HRESULT __safecall Get_Value(OleVariant &Get_Value_result) = 0 ;
	virtual HRESULT __safecall Get_Column(OleVariant &pvargColumn, OleVariant &pvargIndex, OleVariant &Get_Column_result
		) = 0 ;
	virtual HRESULT __safecall Set_Column(OleVariant &pvargColumn, OleVariant &pvargIndex, OleVariant &
		pvargValue) = 0 ;
	virtual HRESULT __safecall Get_List(OleVariant &pvargIndex, OleVariant &pvargColumn, OleVariant &Get_List_result
		) = 0 ;
	virtual HRESULT __safecall Set_List(OleVariant &pvargIndex, OleVariant &pvargColumn, OleVariant &pvargValue
		) = 0 ;
	virtual HRESULT __safecall Get_Selected(OleVariant &pvargIndex, Word &Get_Selected_result) = 0 ;
	virtual HRESULT __safecall Set_Selected(OleVariant &pvargIndex, Word pfvb) = 0 ;
	virtual HRESULT __safecall AddItem(OleVariant &pvargItem, OleVariant &pvargIndex) = 0 ;
	virtual HRESULT __safecall Clear(void) = 0 ;
	virtual HRESULT __safecall RemoveItem(OleVariant &pvargIndex) = 0 ;
	virtual HRESULT __safecall Set_IMEMode(Activex::TOleEnum IMEMode) = 0 ;
	virtual HRESULT __safecall Get_IMEMode(Activex::TOleEnum &Get_IMEMode_result) = 0 ;
	virtual HRESULT __safecall Get_DisplayStyle(Activex::TOleEnum &Get_DisplayStyle_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_BackColor() { int r; HRESULT hr = Get_BackColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int BackColor = {read=_scw_Get_BackColor, write=Set_BackColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_BorderColor() { int r; HRESULT hr = Get_BorderColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int BorderColor = {read=_scw_Get_BorderColor, write=Set_BorderColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_BorderStyle() { Activex::TOleEnum r; HRESULT hr = Get_BorderStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum BorderStyle = {read=_scw_Get_BorderStyle, write=Set_BorderStyle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_BordersSuppress() { Word r; HRESULT hr = Get_BordersSuppress(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word BordersSuppress = {read=_scw_Get_BordersSuppress, write=Set_BordersSuppress};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ColumnCount() { int r; HRESULT hr = Get_ColumnCount(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int ColumnCount = {read=_scw_Get_ColumnCount, write=Set_ColumnCount};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_ColumnHeads() { Word r; HRESULT hr = Get_ColumnHeads(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word ColumnHeads = {read=_scw_Get_ColumnHeads, write=Set_ColumnHeads};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_ColumnWidths() { WideString r; HRESULT hr = Get_ColumnWidths(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString ColumnWidths = {read=_scw_Get_ColumnWidths, write=Set_ColumnWidths};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Enabled() { Word r; HRESULT hr = Get_Enabled(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Enabled = {read=_scw_Get_Enabled, write=Set_Enabled};
	__property _di_IFontDisp _Font_Reserved = {write=Set__Font_Reserved};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IFontDisp _scw_Get_Font() { _di_IFontDisp r; HRESULT hr = Get_Font(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IFontDisp Font = {read=_scw_Get_Font, write=Set_Font};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontBold() { Word r; HRESULT hr = Get_FontBold(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word FontBold = {read=_scw_Get_FontBold, write=Set_FontBold};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontItalic() { Word r; HRESULT hr = Get_FontItalic(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word FontItalic = {read=_scw_Get_FontItalic, write=Set_FontItalic};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_FontName() { WideString r; HRESULT hr = Get_FontName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString FontName = {read=_scw_Get_FontName, write=Set_FontName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::Currency _scw_Get_FontSize() { System::Currency r; HRESULT hr = Get_FontSize(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property System::Currency FontSize = {read=_scw_Get_FontSize, write=Set_FontSize};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontStrikethru() { Word r; HRESULT hr = Get_FontStrikethru(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word FontStrikethru = {read=_scw_Get_FontStrikethru, write=Set_FontStrikethru};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontUnderline() { Word r; HRESULT hr = Get_FontUnderline(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word FontUnderline = {read=_scw_Get_FontUnderline, write=Set_FontUnderline};
	#pragma option push -w-inl
	/* safecall wrapper */ inline short _scw_Get_FontWeight() { short r; HRESULT hr = Get_FontWeight(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property short FontWeight = {read=_scw_Get_FontWeight, write=Set_FontWeight};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ForeColor() { int r; HRESULT hr = Get_ForeColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int ForeColor = {read=_scw_Get_ForeColor, write=Set_ForeColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_IntegralHeight() { Word r; HRESULT hr = Get_IntegralHeight(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word IntegralHeight = {read=_scw_Get_IntegralHeight, write=Set_IntegralHeight};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ListCount() { int r; HRESULT hr = Get_ListCount(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int ListCount = {read=_scw_Get_ListCount};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IUnknown _scw_Get_ListCursor() { _di_IUnknown r; HRESULT hr = Get_ListCursor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IUnknown ListCursor = {read=_scw_Get_ListCursor, write=Set_ListCursor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ListStyle() { Activex::TOleEnum r; HRESULT hr = Get_ListStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ListStyle = {read=_scw_Get_ListStyle, write=Set_ListStyle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Locked() { Word r; HRESULT hr = Get_Locked(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Locked = {read=_scw_Get_Locked, write=Set_Locked};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_MatchEntry() { Activex::TOleEnum r; HRESULT hr = Get_MatchEntry(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum MatchEntry = {read=_scw_Get_MatchEntry, write=Set_MatchEntry};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IPictureDisp _scw_Get_MouseIcon() { _di_IPictureDisp r; HRESULT hr = Get_MouseIcon(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IPictureDisp MouseIcon = {read=_scw_Get_MouseIcon, write=_Set_MouseIcon};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_MousePointer() { Activex::TOleEnum r; HRESULT hr = Get_MousePointer(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum MousePointer = {read=_scw_Get_MousePointer, write=Set_MousePointer};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_MultiSelect() { Activex::TOleEnum r; HRESULT hr = Get_MultiSelect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum MultiSelect = {read=_scw_Get_MultiSelect, write=Set_MultiSelect};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_SpecialEffect() { Activex::TOleEnum r; HRESULT hr = Get_SpecialEffect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum SpecialEffect = {read=_scw_Get_SpecialEffect, write=Set_SpecialEffect}
		;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Text() { WideString r; HRESULT hr = Get_Text(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Text = {read=_scw_Get_Text, write=Set_Text};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Valid() { Word r; HRESULT hr = Get_Valid(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Valid = {read=_scw_Get_Valid};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Selected(OleVariant &pvargIndex) { Word r; HRESULT hr = Get_Selected(
		pvargIndex, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word Selected[OleVariant pvargIndex] = {read=_scw_Get_Selected, write=Set_Selected};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_IMEMode() { Activex::TOleEnum r; HRESULT hr = Get_IMEMode(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum IMEMode = {read=_scw_Get_IMEMode, write=Set_IMEMode};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_DisplayStyle() { Activex::TOleEnum r; HRESULT hr = Get_DisplayStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum DisplayStyle = {read=_scw_Get_DisplayStyle};
};
typedef IMdcList ListBox;

__interface IMdcCombo;
typedef System::DelphiInterface<IMdcCombo> _di_IMdcCombo;
__interface INTERFACE_UUID("{8BD21D33-EC42-11CE-9E0D-00AA006002F3}") IMdcCombo  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Set_AutoSize(Word AutoSize) = 0 ;
	virtual HRESULT __safecall Get_AutoSize(Word &Get_AutoSize_result) = 0 ;
	virtual HRESULT __safecall Set_AutoTab(Word AutoTab) = 0 ;
	virtual HRESULT __safecall Get_AutoTab(Word &Get_AutoTab_result) = 0 ;
	virtual HRESULT __safecall Set_AutoWordSelect(Word AutoWordSelect) = 0 ;
	virtual HRESULT __safecall Get_AutoWordSelect(Word &Get_AutoWordSelect_result) = 0 ;
	virtual HRESULT __safecall Set_BackColor(int BackColor) = 0 ;
	virtual HRESULT __safecall Get_BackColor(int &Get_BackColor_result) = 0 ;
	virtual HRESULT __safecall Set_BackStyle(Activex::TOleEnum BackStyle) = 0 ;
	virtual HRESULT __safecall Get_BackStyle(Activex::TOleEnum &Get_BackStyle_result) = 0 ;
	virtual HRESULT __safecall Set_BorderColor(int BorderColor) = 0 ;
	virtual HRESULT __safecall Get_BorderColor(int &Get_BorderColor_result) = 0 ;
	virtual HRESULT __safecall Set_BorderStyle(Activex::TOleEnum BorderStyle) = 0 ;
	virtual HRESULT __safecall Get_BorderStyle(Activex::TOleEnum &Get_BorderStyle_result) = 0 ;
	virtual HRESULT __safecall Set_BordersSuppress(Word BordersSuppress) = 0 ;
	virtual HRESULT __safecall Get_BordersSuppress(Word &Get_BordersSuppress_result) = 0 ;
	virtual HRESULT __safecall Set_BoundColumn(OleVariant &BoundColumn) = 0 ;
	virtual HRESULT __safecall Get_BoundColumn(OleVariant &Get_BoundColumn_result) = 0 ;
	virtual HRESULT __safecall Get_CanPaste(Word &Get_CanPaste_result) = 0 ;
	virtual HRESULT __safecall Set_ColumnCount(int ColumnCount) = 0 ;
	virtual HRESULT __safecall Get_ColumnCount(int &Get_ColumnCount_result) = 0 ;
	virtual HRESULT __safecall Set_ColumnHeads(Word ColumnHeads) = 0 ;
	virtual HRESULT __safecall Get_ColumnHeads(Word &Get_ColumnHeads_result) = 0 ;
	virtual HRESULT __safecall Set_ColumnWidths(const WideString ColumnWidths) = 0 ;
	virtual HRESULT __safecall Get_ColumnWidths(WideString &Get_ColumnWidths_result) = 0 ;
	virtual HRESULT __safecall Get_CurTargetX(int &Get_CurTargetX_result) = 0 ;
	virtual HRESULT __safecall Get_CurTargetY(int &Get_CurTargetY_result) = 0 ;
	virtual HRESULT __safecall Set_CurX(int CurX) = 0 ;
	virtual HRESULT __safecall Get_CurX(int &Get_CurX_result) = 0 ;
	virtual HRESULT __safecall Set_DropButtonStyle(Activex::TOleEnum DropButtonStyle) = 0 ;
	virtual HRESULT __safecall Get_DropButtonStyle(Activex::TOleEnum &Get_DropButtonStyle_result) = 0 ;
		
	virtual HRESULT __safecall Set_Enabled(Word Enabled) = 0 ;
	virtual HRESULT __safecall Get_Enabled(Word &Get_Enabled_result) = 0 ;
	virtual HRESULT __safecall Set__Font_Reserved(const _di_IFontDisp Param1) = 0 ;
	virtual HRESULT __safecall Set_Font(const _di_IFontDisp Font) = 0 ;
	virtual HRESULT __safecall Get_Font(_di_IFontDisp &Get_Font_result) = 0 ;
	virtual HRESULT __safecall Set_FontBold(Word FontBold) = 0 ;
	virtual HRESULT __safecall Get_FontBold(Word &Get_FontBold_result) = 0 ;
	virtual HRESULT __safecall Set_FontItalic(Word FontItalic) = 0 ;
	virtual HRESULT __safecall Get_FontItalic(Word &Get_FontItalic_result) = 0 ;
	virtual HRESULT __safecall Set_FontName(const WideString FontName) = 0 ;
	virtual HRESULT __safecall Get_FontName(WideString &Get_FontName_result) = 0 ;
	virtual HRESULT __safecall Set_FontSize(System::Currency FontSize) = 0 ;
	virtual HRESULT __safecall Get_FontSize(System::Currency &Get_FontSize_result) = 0 ;
	virtual HRESULT __safecall Set_FontStrikethru(Word FontStrikethru) = 0 ;
	virtual HRESULT __safecall Get_FontStrikethru(Word &Get_FontStrikethru_result) = 0 ;
	virtual HRESULT __safecall Set_FontUnderline(Word FontUnderline) = 0 ;
	virtual HRESULT __safecall Get_FontUnderline(Word &Get_FontUnderline_result) = 0 ;
	virtual HRESULT __safecall Set_FontWeight(short FontWeight) = 0 ;
	virtual HRESULT __safecall Get_FontWeight(short &Get_FontWeight_result) = 0 ;
	virtual HRESULT __safecall Set_ForeColor(int ForeColor) = 0 ;
	virtual HRESULT __safecall Get_ForeColor(int &Get_ForeColor_result) = 0 ;
	virtual HRESULT __safecall Set_HideSelection(Word HideSelection) = 0 ;
	virtual HRESULT __safecall Get_HideSelection(Word &Get_HideSelection_result) = 0 ;
	virtual HRESULT __safecall Get_LineCount(int &Get_LineCount_result) = 0 ;
	virtual HRESULT __safecall Get_ListCount(int &Get_ListCount_result) = 0 ;
	virtual HRESULT __safecall Set_ListCursor(const _di_IUnknown ListCursor) = 0 ;
	virtual HRESULT __safecall Get_ListCursor(_di_IUnknown &Get_ListCursor_result) = 0 ;
	virtual HRESULT __safecall Set_ListIndex(OleVariant &ListIndex) = 0 ;
	virtual HRESULT __safecall Get_ListIndex(OleVariant &Get_ListIndex_result) = 0 ;
	virtual HRESULT __safecall Set_ListRows(int ListRows) = 0 ;
	virtual HRESULT __safecall Get_ListRows(int &Get_ListRows_result) = 0 ;
	virtual HRESULT __safecall Set_ListStyle(Activex::TOleEnum ListStyle) = 0 ;
	virtual HRESULT __safecall Get_ListStyle(Activex::TOleEnum &Get_ListStyle_result) = 0 ;
	virtual HRESULT __safecall Set_ListWidth(OleVariant &ListWidth) = 0 ;
	virtual HRESULT __safecall Get_ListWidth(OleVariant &Get_ListWidth_result) = 0 ;
	virtual HRESULT __safecall Set_Locked(Word Locked) = 0 ;
	virtual HRESULT __safecall Get_Locked(Word &Get_Locked_result) = 0 ;
	virtual HRESULT __safecall Set_MatchEntry(Activex::TOleEnum MatchEntry) = 0 ;
	virtual HRESULT __safecall Get_MatchEntry(Activex::TOleEnum &Get_MatchEntry_result) = 0 ;
	virtual HRESULT __safecall Get_MatchFound(Word &Get_MatchFound_result) = 0 ;
	virtual HRESULT __safecall Set_MatchRequired(Word MatchRequired) = 0 ;
	virtual HRESULT __safecall Get_MatchRequired(Word &Get_MatchRequired_result) = 0 ;
	virtual HRESULT __safecall Set_MaxLength(int MaxLength) = 0 ;
	virtual HRESULT __safecall Get_MaxLength(int &Get_MaxLength_result) = 0 ;
	virtual HRESULT __safecall _Set_MouseIcon(const _di_IPictureDisp MouseIcon) = 0 ;
	virtual HRESULT __safecall Set_MouseIcon(const _di_IPictureDisp MouseIcon) = 0 ;
	virtual HRESULT __safecall Get_MouseIcon(_di_IPictureDisp &Get_MouseIcon_result) = 0 ;
	virtual HRESULT __safecall Set_MousePointer(Activex::TOleEnum MousePointer) = 0 ;
	virtual HRESULT __safecall Get_MousePointer(Activex::TOleEnum &Get_MousePointer_result) = 0 ;
	virtual HRESULT __safecall Set_SelectionMargin(Word SelectionMargin) = 0 ;
	virtual HRESULT __safecall Get_SelectionMargin(Word &Get_SelectionMargin_result) = 0 ;
	virtual HRESULT __safecall Set_SelLength(int SelLength) = 0 ;
	virtual HRESULT __safecall Get_SelLength(int &Get_SelLength_result) = 0 ;
	virtual HRESULT __safecall Set_SelStart(int SelStart) = 0 ;
	virtual HRESULT __safecall Get_SelStart(int &Get_SelStart_result) = 0 ;
	virtual HRESULT __safecall Set_SelText(const WideString SelText) = 0 ;
	virtual HRESULT __safecall Get_SelText(WideString &Get_SelText_result) = 0 ;
	virtual HRESULT __safecall Set_ShowDropButtonWhen(Activex::TOleEnum ShowDropButtonWhen) = 0 ;
	virtual HRESULT __safecall Get_ShowDropButtonWhen(Activex::TOleEnum &Get_ShowDropButtonWhen_result)
		 = 0 ;
	virtual HRESULT __safecall Set_SpecialEffect(Activex::TOleEnum SpecialEffect) = 0 ;
	virtual HRESULT __safecall Get_SpecialEffect(Activex::TOleEnum &Get_SpecialEffect_result) = 0 ;
	virtual HRESULT __safecall Set_Style(Activex::TOleEnum Style) = 0 ;
	virtual HRESULT __safecall Get_Style(Activex::TOleEnum &Get_Style_result) = 0 ;
	virtual HRESULT __safecall Set_Text(const WideString Text) = 0 ;
	virtual HRESULT __safecall Get_Text(WideString &Get_Text_result) = 0 ;
	virtual HRESULT __safecall Set_TextAlign(Activex::TOleEnum TextAlign) = 0 ;
	virtual HRESULT __safecall Get_TextAlign(Activex::TOleEnum &Get_TextAlign_result) = 0 ;
	virtual HRESULT __safecall Set_TextColumn(OleVariant &TextColumn) = 0 ;
	virtual HRESULT __safecall Get_TextColumn(OleVariant &Get_TextColumn_result) = 0 ;
	virtual HRESULT __safecall Get_TextLength(int &Get_TextLength_result) = 0 ;
	virtual HRESULT __safecall Set_TopIndex(OleVariant &TopIndex) = 0 ;
	virtual HRESULT __safecall Get_TopIndex(OleVariant &Get_TopIndex_result) = 0 ;
	virtual HRESULT __safecall Get_Valid(Word &Get_Valid_result) = 0 ;
	virtual HRESULT __safecall Set_Value(OleVariant &Value) = 0 ;
	virtual HRESULT __safecall Get_Value(OleVariant &Get_Value_result) = 0 ;
	virtual HRESULT __safecall Get_Column(OleVariant &pvargColumn, OleVariant &pvargIndex, OleVariant &Get_Column_result
		) = 0 ;
	virtual HRESULT __safecall Set_Column(OleVariant &pvargColumn, OleVariant &pvargIndex, OleVariant &
		pvargValue) = 0 ;
	virtual HRESULT __safecall Get_List(OleVariant &pvargIndex, OleVariant &pvargColumn, OleVariant &Get_List_result
		) = 0 ;
	virtual HRESULT __safecall Set_List(OleVariant &pvargIndex, OleVariant &pvargColumn, OleVariant &pvargValue
		) = 0 ;
	virtual HRESULT __safecall AddItem(OleVariant &pvargItem, OleVariant &pvargIndex) = 0 ;
	virtual HRESULT __safecall Clear(void) = 0 ;
	virtual HRESULT __safecall DropDown(void) = 0 ;
	virtual HRESULT __safecall RemoveItem(OleVariant &pvargIndex) = 0 ;
	virtual HRESULT __safecall Copy(void) = 0 ;
	virtual HRESULT __safecall Cut(void) = 0 ;
	virtual HRESULT __safecall Paste(void) = 0 ;
	virtual HRESULT __safecall Set_IMEMode(Activex::TOleEnum IMEMode) = 0 ;
	virtual HRESULT __safecall Get_IMEMode(Activex::TOleEnum &Get_IMEMode_result) = 0 ;
	virtual HRESULT __safecall Set_EnterFieldBehavior(Activex::TOleEnum EnterFieldBehavior) = 0 ;
	virtual HRESULT __safecall Get_EnterFieldBehavior(Activex::TOleEnum &Get_EnterFieldBehavior_result)
		 = 0 ;
	virtual HRESULT __safecall Set_DragBehavior(Activex::TOleEnum DragBehavior) = 0 ;
	virtual HRESULT __safecall Get_DragBehavior(Activex::TOleEnum &Get_DragBehavior_result) = 0 ;
	virtual HRESULT __safecall Get_DisplayStyle(Activex::TOleEnum &Get_DisplayStyle_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_AutoSize() { Word r; HRESULT hr = Get_AutoSize(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word AutoSize = {read=_scw_Get_AutoSize, write=Set_AutoSize};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_AutoTab() { Word r; HRESULT hr = Get_AutoTab(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word AutoTab = {read=_scw_Get_AutoTab, write=Set_AutoTab};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_AutoWordSelect() { Word r; HRESULT hr = Get_AutoWordSelect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word AutoWordSelect = {read=_scw_Get_AutoWordSelect, write=Set_AutoWordSelect};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_BackColor() { int r; HRESULT hr = Get_BackColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int BackColor = {read=_scw_Get_BackColor, write=Set_BackColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_BackStyle() { Activex::TOleEnum r; HRESULT hr = Get_BackStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum BackStyle = {read=_scw_Get_BackStyle, write=Set_BackStyle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_BorderColor() { int r; HRESULT hr = Get_BorderColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int BorderColor = {read=_scw_Get_BorderColor, write=Set_BorderColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_BorderStyle() { Activex::TOleEnum r; HRESULT hr = Get_BorderStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum BorderStyle = {read=_scw_Get_BorderStyle, write=Set_BorderStyle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_BordersSuppress() { Word r; HRESULT hr = Get_BordersSuppress(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word BordersSuppress = {read=_scw_Get_BordersSuppress, write=Set_BordersSuppress};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_CanPaste() { Word r; HRESULT hr = Get_CanPaste(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word CanPaste = {read=_scw_Get_CanPaste};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ColumnCount() { int r; HRESULT hr = Get_ColumnCount(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int ColumnCount = {read=_scw_Get_ColumnCount, write=Set_ColumnCount};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_ColumnHeads() { Word r; HRESULT hr = Get_ColumnHeads(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word ColumnHeads = {read=_scw_Get_ColumnHeads, write=Set_ColumnHeads};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_ColumnWidths() { WideString r; HRESULT hr = Get_ColumnWidths(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString ColumnWidths = {read=_scw_Get_ColumnWidths, write=Set_ColumnWidths};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_CurTargetX() { int r; HRESULT hr = Get_CurTargetX(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int CurTargetX = {read=_scw_Get_CurTargetX};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_CurTargetY() { int r; HRESULT hr = Get_CurTargetY(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int CurTargetY = {read=_scw_Get_CurTargetY};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_CurX() { int r; HRESULT hr = Get_CurX(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int CurX = {read=_scw_Get_CurX, write=Set_CurX};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_DropButtonStyle() { Activex::TOleEnum r; HRESULT hr = Get_DropButtonStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum DropButtonStyle = {read=_scw_Get_DropButtonStyle, write=Set_DropButtonStyle
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Enabled() { Word r; HRESULT hr = Get_Enabled(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Enabled = {read=_scw_Get_Enabled, write=Set_Enabled};
	__property _di_IFontDisp _Font_Reserved = {write=Set__Font_Reserved};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IFontDisp _scw_Get_Font() { _di_IFontDisp r; HRESULT hr = Get_Font(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IFontDisp Font = {read=_scw_Get_Font, write=Set_Font};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontBold() { Word r; HRESULT hr = Get_FontBold(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word FontBold = {read=_scw_Get_FontBold, write=Set_FontBold};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontItalic() { Word r; HRESULT hr = Get_FontItalic(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word FontItalic = {read=_scw_Get_FontItalic, write=Set_FontItalic};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_FontName() { WideString r; HRESULT hr = Get_FontName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString FontName = {read=_scw_Get_FontName, write=Set_FontName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::Currency _scw_Get_FontSize() { System::Currency r; HRESULT hr = Get_FontSize(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property System::Currency FontSize = {read=_scw_Get_FontSize, write=Set_FontSize};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontStrikethru() { Word r; HRESULT hr = Get_FontStrikethru(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word FontStrikethru = {read=_scw_Get_FontStrikethru, write=Set_FontStrikethru};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontUnderline() { Word r; HRESULT hr = Get_FontUnderline(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word FontUnderline = {read=_scw_Get_FontUnderline, write=Set_FontUnderline};
	#pragma option push -w-inl
	/* safecall wrapper */ inline short _scw_Get_FontWeight() { short r; HRESULT hr = Get_FontWeight(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property short FontWeight = {read=_scw_Get_FontWeight, write=Set_FontWeight};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ForeColor() { int r; HRESULT hr = Get_ForeColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int ForeColor = {read=_scw_Get_ForeColor, write=Set_ForeColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_HideSelection() { Word r; HRESULT hr = Get_HideSelection(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word HideSelection = {read=_scw_Get_HideSelection, write=Set_HideSelection};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_LineCount() { int r; HRESULT hr = Get_LineCount(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int LineCount = {read=_scw_Get_LineCount};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ListCount() { int r; HRESULT hr = Get_ListCount(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int ListCount = {read=_scw_Get_ListCount};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IUnknown _scw_Get_ListCursor() { _di_IUnknown r; HRESULT hr = Get_ListCursor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IUnknown ListCursor = {read=_scw_Get_ListCursor, write=Set_ListCursor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ListRows() { int r; HRESULT hr = Get_ListRows(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int ListRows = {read=_scw_Get_ListRows, write=Set_ListRows};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ListStyle() { Activex::TOleEnum r; HRESULT hr = Get_ListStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ListStyle = {read=_scw_Get_ListStyle, write=Set_ListStyle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Locked() { Word r; HRESULT hr = Get_Locked(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Locked = {read=_scw_Get_Locked, write=Set_Locked};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_MatchEntry() { Activex::TOleEnum r; HRESULT hr = Get_MatchEntry(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum MatchEntry = {read=_scw_Get_MatchEntry, write=Set_MatchEntry};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_MatchFound() { Word r; HRESULT hr = Get_MatchFound(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word MatchFound = {read=_scw_Get_MatchFound};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_MatchRequired() { Word r; HRESULT hr = Get_MatchRequired(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word MatchRequired = {read=_scw_Get_MatchRequired, write=Set_MatchRequired};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_MaxLength() { int r; HRESULT hr = Get_MaxLength(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int MaxLength = {read=_scw_Get_MaxLength, write=Set_MaxLength};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IPictureDisp _scw_Get_MouseIcon() { _di_IPictureDisp r; HRESULT hr = Get_MouseIcon(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IPictureDisp MouseIcon = {read=_scw_Get_MouseIcon, write=_Set_MouseIcon};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_MousePointer() { Activex::TOleEnum r; HRESULT hr = Get_MousePointer(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum MousePointer = {read=_scw_Get_MousePointer, write=Set_MousePointer};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_SelectionMargin() { Word r; HRESULT hr = Get_SelectionMargin(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word SelectionMargin = {read=_scw_Get_SelectionMargin, write=Set_SelectionMargin};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_SelLength() { int r; HRESULT hr = Get_SelLength(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int SelLength = {read=_scw_Get_SelLength, write=Set_SelLength};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_SelStart() { int r; HRESULT hr = Get_SelStart(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int SelStart = {read=_scw_Get_SelStart, write=Set_SelStart};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_SelText() { WideString r; HRESULT hr = Get_SelText(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString SelText = {read=_scw_Get_SelText, write=Set_SelText};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ShowDropButtonWhen() { Activex::TOleEnum r; HRESULT hr = Get_ShowDropButtonWhen(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ShowDropButtonWhen = {read=_scw_Get_ShowDropButtonWhen, write=Set_ShowDropButtonWhen
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_SpecialEffect() { Activex::TOleEnum r; HRESULT hr = Get_SpecialEffect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum SpecialEffect = {read=_scw_Get_SpecialEffect, write=Set_SpecialEffect}
		;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Style() { Activex::TOleEnum r; HRESULT hr = Get_Style(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Style = {read=_scw_Get_Style, write=Set_Style};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Text() { WideString r; HRESULT hr = Get_Text(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Text = {read=_scw_Get_Text, write=Set_Text};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_TextAlign() { Activex::TOleEnum r; HRESULT hr = Get_TextAlign(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum TextAlign = {read=_scw_Get_TextAlign, write=Set_TextAlign};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_TextLength() { int r; HRESULT hr = Get_TextLength(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int TextLength = {read=_scw_Get_TextLength};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Valid() { Word r; HRESULT hr = Get_Valid(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Valid = {read=_scw_Get_Valid};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_IMEMode() { Activex::TOleEnum r; HRESULT hr = Get_IMEMode(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum IMEMode = {read=_scw_Get_IMEMode, write=Set_IMEMode};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_EnterFieldBehavior() { Activex::TOleEnum r; HRESULT hr = Get_EnterFieldBehavior(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum EnterFieldBehavior = {read=_scw_Get_EnterFieldBehavior, write=Set_EnterFieldBehavior
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_DragBehavior() { Activex::TOleEnum r; HRESULT hr = Get_DragBehavior(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum DragBehavior = {read=_scw_Get_DragBehavior, write=Set_DragBehavior};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_DisplayStyle() { Activex::TOleEnum r; HRESULT hr = Get_DisplayStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum DisplayStyle = {read=_scw_Get_DisplayStyle};
};
typedef IMdcCombo ComboBox;

__interface IMdcCheckBox;
typedef System::DelphiInterface<IMdcCheckBox> _di_IMdcCheckBox;
__interface INTERFACE_UUID("{8BD21D43-EC42-11CE-9E0D-00AA006002F3}") IMdcCheckBox  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Set_Accelerator(const WideString Accelerator) = 0 ;
	virtual HRESULT __safecall Get_Accelerator(WideString &Get_Accelerator_result) = 0 ;
	virtual HRESULT __safecall Set_Alignment(Activex::TOleEnum Alignment) = 0 ;
	virtual HRESULT __safecall Get_Alignment(Activex::TOleEnum &Get_Alignment_result) = 0 ;
	virtual HRESULT __safecall Set_AutoSize(Word AutoSize) = 0 ;
	virtual HRESULT __safecall Get_AutoSize(Word &Get_AutoSize_result) = 0 ;
	virtual HRESULT __safecall Set_BackColor(int BackColor) = 0 ;
	virtual HRESULT __safecall Get_BackColor(int &Get_BackColor_result) = 0 ;
	virtual HRESULT __safecall Set_BackStyle(Activex::TOleEnum BackStyle) = 0 ;
	virtual HRESULT __safecall Get_BackStyle(Activex::TOleEnum &Get_BackStyle_result) = 0 ;
	virtual HRESULT __safecall Set_BordersSuppress(Word BordersSuppress) = 0 ;
	virtual HRESULT __safecall Get_BordersSuppress(Word &Get_BordersSuppress_result) = 0 ;
	virtual HRESULT __safecall Set_Caption(const WideString Caption) = 0 ;
	virtual HRESULT __safecall Get_Caption(WideString &Get_Caption_result) = 0 ;
	virtual HRESULT __safecall Set_Enabled(Word Enabled) = 0 ;
	virtual HRESULT __safecall Get_Enabled(Word &Get_Enabled_result) = 0 ;
	virtual HRESULT __safecall Set__Font_Reserved(const _di_IFontDisp Param1) = 0 ;
	virtual HRESULT __safecall Set_Font(const _di_IFontDisp Font) = 0 ;
	virtual HRESULT __safecall Get_Font(_di_IFontDisp &Get_Font_result) = 0 ;
	virtual HRESULT __safecall Set_FontBold(Word FontBold) = 0 ;
	virtual HRESULT __safecall Get_FontBold(Word &Get_FontBold_result) = 0 ;
	virtual HRESULT __safecall Set_FontItalic(Word FontItalic) = 0 ;
	virtual HRESULT __safecall Get_FontItalic(Word &Get_FontItalic_result) = 0 ;
	virtual HRESULT __safecall Set_FontName(const WideString FontName) = 0 ;
	virtual HRESULT __safecall Get_FontName(WideString &Get_FontName_result) = 0 ;
	virtual HRESULT __safecall Set_FontSize(System::Currency FontSize) = 0 ;
	virtual HRESULT __safecall Get_FontSize(System::Currency &Get_FontSize_result) = 0 ;
	virtual HRESULT __safecall Set_FontStrikethru(Word FontStrikethru) = 0 ;
	virtual HRESULT __safecall Get_FontStrikethru(Word &Get_FontStrikethru_result) = 0 ;
	virtual HRESULT __safecall Set_FontUnderline(Word FontUnderline) = 0 ;
	virtual HRESULT __safecall Get_FontUnderline(Word &Get_FontUnderline_result) = 0 ;
	virtual HRESULT __safecall Set_FontWeight(short FontWeight) = 0 ;
	virtual HRESULT __safecall Get_FontWeight(short &Get_FontWeight_result) = 0 ;
	virtual HRESULT __safecall Set_ForeColor(int ForeColor) = 0 ;
	virtual HRESULT __safecall Get_ForeColor(int &Get_ForeColor_result) = 0 ;
	virtual HRESULT __safecall Set_Locked(Word Locked) = 0 ;
	virtual HRESULT __safecall Get_Locked(Word &Get_Locked_result) = 0 ;
	virtual HRESULT __safecall _Set_MouseIcon(const _di_IPictureDisp MouseIcon) = 0 ;
	virtual HRESULT __safecall Set_MouseIcon(const _di_IPictureDisp MouseIcon) = 0 ;
	virtual HRESULT __safecall Get_MouseIcon(_di_IPictureDisp &Get_MouseIcon_result) = 0 ;
	virtual HRESULT __safecall Set_MousePointer(Activex::TOleEnum MousePointer) = 0 ;
	virtual HRESULT __safecall Get_MousePointer(Activex::TOleEnum &Get_MousePointer_result) = 0 ;
	virtual HRESULT __safecall Set_MultiSelect(Activex::TOleEnum MultiSelect) = 0 ;
	virtual HRESULT __safecall Get_MultiSelect(Activex::TOleEnum &Get_MultiSelect_result) = 0 ;
	virtual HRESULT __safecall _Set_Picture(const _di_IPictureDisp Picture) = 0 ;
	virtual HRESULT __safecall Set_Picture(const _di_IPictureDisp Picture) = 0 ;
	virtual HRESULT __safecall Get_Picture(_di_IPictureDisp &Get_Picture_result) = 0 ;
	virtual HRESULT __safecall Set_PicturePosition(Activex::TOleEnum PicPos) = 0 ;
	virtual HRESULT __safecall Get_PicturePosition(Activex::TOleEnum &Get_PicturePosition_result) = 0 ;
		
	virtual HRESULT __safecall Set_SpecialEffect(Activex::TOleEnum SpecialEffect) = 0 ;
	virtual HRESULT __safecall Get_SpecialEffect(Activex::TOleEnum &Get_SpecialEffect_result) = 0 ;
	virtual HRESULT __safecall Set_TripleState(Word TripleState) = 0 ;
	virtual HRESULT __safecall Get_TripleState(Word &Get_TripleState_result) = 0 ;
	virtual HRESULT __safecall Get_Valid(Word &Get_Valid_result) = 0 ;
	virtual HRESULT __safecall Set_Value(OleVariant &Value) = 0 ;
	virtual HRESULT __safecall Get_Value(OleVariant &Get_Value_result) = 0 ;
	virtual HRESULT __safecall Set_WordWrap(Word WordWrap) = 0 ;
	virtual HRESULT __safecall Get_WordWrap(Word &Get_WordWrap_result) = 0 ;
	virtual HRESULT __safecall Get_DisplayStyle(Activex::TOleEnum &Get_DisplayStyle_result) = 0 ;
	virtual HRESULT __safecall Set_GroupName(const WideString GroupName) = 0 ;
	virtual HRESULT __safecall Get_GroupName(WideString &Get_GroupName_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Accelerator() { WideString r; HRESULT hr = Get_Accelerator(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Accelerator = {read=_scw_Get_Accelerator, write=Set_Accelerator};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Alignment() { Activex::TOleEnum r; HRESULT hr = Get_Alignment(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Alignment = {read=_scw_Get_Alignment, write=Set_Alignment};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_AutoSize() { Word r; HRESULT hr = Get_AutoSize(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word AutoSize = {read=_scw_Get_AutoSize, write=Set_AutoSize};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_BackColor() { int r; HRESULT hr = Get_BackColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int BackColor = {read=_scw_Get_BackColor, write=Set_BackColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_BackStyle() { Activex::TOleEnum r; HRESULT hr = Get_BackStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum BackStyle = {read=_scw_Get_BackStyle, write=Set_BackStyle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_BordersSuppress() { Word r; HRESULT hr = Get_BordersSuppress(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word BordersSuppress = {read=_scw_Get_BordersSuppress, write=Set_BordersSuppress};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Caption() { WideString r; HRESULT hr = Get_Caption(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Caption = {read=_scw_Get_Caption, write=Set_Caption};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Enabled() { Word r; HRESULT hr = Get_Enabled(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Enabled = {read=_scw_Get_Enabled, write=Set_Enabled};
	__property _di_IFontDisp _Font_Reserved = {write=Set__Font_Reserved};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IFontDisp _scw_Get_Font() { _di_IFontDisp r; HRESULT hr = Get_Font(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IFontDisp Font = {read=_scw_Get_Font, write=Set_Font};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontBold() { Word r; HRESULT hr = Get_FontBold(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word FontBold = {read=_scw_Get_FontBold, write=Set_FontBold};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontItalic() { Word r; HRESULT hr = Get_FontItalic(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word FontItalic = {read=_scw_Get_FontItalic, write=Set_FontItalic};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_FontName() { WideString r; HRESULT hr = Get_FontName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString FontName = {read=_scw_Get_FontName, write=Set_FontName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::Currency _scw_Get_FontSize() { System::Currency r; HRESULT hr = Get_FontSize(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property System::Currency FontSize = {read=_scw_Get_FontSize, write=Set_FontSize};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontStrikethru() { Word r; HRESULT hr = Get_FontStrikethru(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word FontStrikethru = {read=_scw_Get_FontStrikethru, write=Set_FontStrikethru};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontUnderline() { Word r; HRESULT hr = Get_FontUnderline(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word FontUnderline = {read=_scw_Get_FontUnderline, write=Set_FontUnderline};
	#pragma option push -w-inl
	/* safecall wrapper */ inline short _scw_Get_FontWeight() { short r; HRESULT hr = Get_FontWeight(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property short FontWeight = {read=_scw_Get_FontWeight, write=Set_FontWeight};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ForeColor() { int r; HRESULT hr = Get_ForeColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int ForeColor = {read=_scw_Get_ForeColor, write=Set_ForeColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Locked() { Word r; HRESULT hr = Get_Locked(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Locked = {read=_scw_Get_Locked, write=Set_Locked};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IPictureDisp _scw_Get_MouseIcon() { _di_IPictureDisp r; HRESULT hr = Get_MouseIcon(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IPictureDisp MouseIcon = {read=_scw_Get_MouseIcon, write=_Set_MouseIcon};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_MousePointer() { Activex::TOleEnum r; HRESULT hr = Get_MousePointer(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum MousePointer = {read=_scw_Get_MousePointer, write=Set_MousePointer};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_MultiSelect() { Activex::TOleEnum r; HRESULT hr = Get_MultiSelect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum MultiSelect = {read=_scw_Get_MultiSelect, write=Set_MultiSelect};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IPictureDisp _scw_Get_Picture() { _di_IPictureDisp r; HRESULT hr = Get_Picture(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IPictureDisp Picture = {read=_scw_Get_Picture, write=_Set_Picture};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PicturePosition() { Activex::TOleEnum r; HRESULT hr = Get_PicturePosition(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PicturePosition = {read=_scw_Get_PicturePosition, write=Set_PicturePosition
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_SpecialEffect() { Activex::TOleEnum r; HRESULT hr = Get_SpecialEffect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum SpecialEffect = {read=_scw_Get_SpecialEffect, write=Set_SpecialEffect}
		;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_TripleState() { Word r; HRESULT hr = Get_TripleState(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word TripleState = {read=_scw_Get_TripleState, write=Set_TripleState};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Valid() { Word r; HRESULT hr = Get_Valid(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Valid = {read=_scw_Get_Valid};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_WordWrap() { Word r; HRESULT hr = Get_WordWrap(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word WordWrap = {read=_scw_Get_WordWrap, write=Set_WordWrap};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_DisplayStyle() { Activex::TOleEnum r; HRESULT hr = Get_DisplayStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum DisplayStyle = {read=_scw_Get_DisplayStyle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_GroupName() { WideString r; HRESULT hr = Get_GroupName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString GroupName = {read=_scw_Get_GroupName, write=Set_GroupName};
};
typedef IMdcCheckBox CheckBox;

__interface IMdcOptionButton;
typedef System::DelphiInterface<IMdcOptionButton> _di_IMdcOptionButton;
__interface INTERFACE_UUID("{8BD21D53-EC42-11CE-9E0D-00AA006002F3}") IMdcOptionButton  : public IMdcCheckBox 
	
{
	
};
typedef IMdcOptionButton OptionButton;

__interface IMdcToggleButton;
typedef System::DelphiInterface<IMdcToggleButton> _di_IMdcToggleButton;
__interface INTERFACE_UUID("{8BD21D63-EC42-11CE-9E0D-00AA006002F3}") IMdcToggleButton  : public IMdcCheckBox 
	
{
	
};
typedef IMdcToggleButton ToggleButton;

__dispinterface Font;
typedef System::DelphiInterface<Font> _di_Font;
__dispinterface INTERFACE_UUID("{BEF6E003-A874-101A-8BBA-00AA00300CAB}") Font  : public IDispatch 
{
	
};
typedef Font NewFont;

__interface IScrollbar;
typedef System::DelphiInterface<IScrollbar> _di_IScrollbar;
__interface INTERFACE_UUID("{04598FC3-866C-11CF-AB7C-00AA00C08FCF}") IScrollbar  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Set_BackColor(int BackColor) = 0 ;
	virtual HRESULT __safecall Get_BackColor(int &Get_BackColor_result) = 0 ;
	virtual HRESULT __safecall Set_ForeColor(int ForeColor) = 0 ;
	virtual HRESULT __safecall Get_ForeColor(int &Get_ForeColor_result) = 0 ;
	virtual HRESULT __safecall Set_Enabled(Word Enabled) = 0 ;
	virtual HRESULT __safecall Get_Enabled(Word &Get_Enabled_result) = 0 ;
	virtual HRESULT __safecall Set_MousePointer(Activex::TOleEnum MousePointer) = 0 ;
	virtual HRESULT __safecall Get_MousePointer(Activex::TOleEnum &Get_MousePointer_result) = 0 ;
	virtual HRESULT __safecall Set_Value(int Value) = 0 ;
	virtual HRESULT __safecall Get_Value(int &Get_Value_result) = 0 ;
	virtual HRESULT __safecall Set_Min(int Min) = 0 ;
	virtual HRESULT __safecall Get_Min(int &Get_Min_result) = 0 ;
	virtual HRESULT __safecall Set_Max(int Max) = 0 ;
	virtual HRESULT __safecall Get_Max(int &Get_Max_result) = 0 ;
	virtual HRESULT __safecall Set_SmallChange(int SmallChange) = 0 ;
	virtual HRESULT __safecall Get_SmallChange(int &Get_SmallChange_result) = 0 ;
	virtual HRESULT __safecall Set_LargeChange(int LargeChange) = 0 ;
	virtual HRESULT __safecall Get_LargeChange(int &Get_LargeChange_result) = 0 ;
	virtual HRESULT __safecall Set_ProportionalThumb(Word ProportionalThumb) = 0 ;
	virtual HRESULT __safecall Get_ProportionalThumb(Word &Get_ProportionalThumb_result) = 0 ;
	virtual HRESULT __safecall Set_Orientation(Activex::TOleEnum Orientation) = 0 ;
	virtual HRESULT __safecall Get_Orientation(Activex::TOleEnum &Get_Orientation_result) = 0 ;
	virtual HRESULT __safecall Set_Delay(int Delay) = 0 ;
	virtual HRESULT __safecall Get_Delay(int &Get_Delay_result) = 0 ;
	virtual HRESULT __safecall _Set_MouseIcon(const _di_IPictureDisp MouseIcon) = 0 ;
	virtual HRESULT __safecall Set_MouseIcon(const _di_IPictureDisp MouseIcon) = 0 ;
	virtual HRESULT __safecall Get_MouseIcon(_di_IPictureDisp &Get_MouseIcon_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_BackColor() { int r; HRESULT hr = Get_BackColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int BackColor = {read=_scw_Get_BackColor, write=Set_BackColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ForeColor() { int r; HRESULT hr = Get_ForeColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int ForeColor = {read=_scw_Get_ForeColor, write=Set_ForeColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Enabled() { Word r; HRESULT hr = Get_Enabled(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Enabled = {read=_scw_Get_Enabled, write=Set_Enabled};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_MousePointer() { Activex::TOleEnum r; HRESULT hr = Get_MousePointer(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum MousePointer = {read=_scw_Get_MousePointer, write=Set_MousePointer};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Value() { int r; HRESULT hr = Get_Value(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Value = {read=_scw_Get_Value, write=Set_Value};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Min() { int r; HRESULT hr = Get_Min(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Min = {read=_scw_Get_Min, write=Set_Min};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Max() { int r; HRESULT hr = Get_Max(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Max = {read=_scw_Get_Max, write=Set_Max};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_SmallChange() { int r; HRESULT hr = Get_SmallChange(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int SmallChange = {read=_scw_Get_SmallChange, write=Set_SmallChange};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_LargeChange() { int r; HRESULT hr = Get_LargeChange(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int LargeChange = {read=_scw_Get_LargeChange, write=Set_LargeChange};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_ProportionalThumb() { Word r; HRESULT hr = Get_ProportionalThumb(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word ProportionalThumb = {read=_scw_Get_ProportionalThumb, write=Set_ProportionalThumb};
		
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Orientation() { Activex::TOleEnum r; HRESULT hr = Get_Orientation(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Orientation = {read=_scw_Get_Orientation, write=Set_Orientation};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Delay() { int r; HRESULT hr = Get_Delay(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Delay = {read=_scw_Get_Delay, write=Set_Delay};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IPictureDisp _scw_Get_MouseIcon() { _di_IPictureDisp r; HRESULT hr = Get_MouseIcon(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IPictureDisp MouseIcon = {read=_scw_Get_MouseIcon, write=_Set_MouseIcon};
};
typedef IScrollbar ScrollBar;

__interface ITabStrip;
typedef System::DelphiInterface<ITabStrip> _di_ITabStrip;
__interface Tabs;
typedef System::DelphiInterface<Tabs> _di_Tabs;
__interface Tab;
typedef System::DelphiInterface<Tab> _di_Tab;
__interface INTERFACE_UUID("{04598FC2-866C-11CF-AB7C-00AA00C08FCF}") ITabStrip  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Set_BackColor(int BackColor) = 0 ;
	virtual HRESULT __safecall Get_BackColor(int &Get_BackColor_result) = 0 ;
	virtual HRESULT __safecall Set_ForeColor(int ForeColor) = 0 ;
	virtual HRESULT __safecall Get_ForeColor(int &Get_ForeColor_result) = 0 ;
	virtual HRESULT __safecall Set__Font_Reserved(const _di_IFontDisp Param1) = 0 ;
	virtual HRESULT __safecall Set_Font(const _di_IFontDisp Font) = 0 ;
	virtual HRESULT __safecall Get_Font(_di_IFontDisp &Get_Font_result) = 0 ;
	virtual HRESULT __safecall Set_FontName(const WideString FontName) = 0 ;
	virtual HRESULT __safecall Get_FontName(WideString &Get_FontName_result) = 0 ;
	virtual HRESULT __safecall Set_FontBold(Word FontBold) = 0 ;
	virtual HRESULT __safecall Get_FontBold(Word &Get_FontBold_result) = 0 ;
	virtual HRESULT __safecall Set_FontItalic(Word FontItalic) = 0 ;
	virtual HRESULT __safecall Get_FontItalic(Word &Get_FontItalic_result) = 0 ;
	virtual HRESULT __safecall Set_FontUnderline(Word FontUnder) = 0 ;
	virtual HRESULT __safecall Get_FontUnderline(Word &Get_FontUnderline_result) = 0 ;
	virtual HRESULT __safecall Set_FontStrikethru(Word FontStrike) = 0 ;
	virtual HRESULT __safecall Get_FontStrikethru(Word &Get_FontStrikethru_result) = 0 ;
	virtual HRESULT __safecall Set_FontSize(System::Currency FontSize) = 0 ;
	virtual HRESULT __safecall Get_FontSize(System::Currency &Get_FontSize_result) = 0 ;
	virtual HRESULT __safecall Set_Enabled(Word fnabled) = 0 ;
	virtual HRESULT __safecall Get_Enabled(Word &Get_Enabled_result) = 0 ;
	virtual HRESULT __safecall _Set_MouseIcon(const _di_IPictureDisp MouseIcon) = 0 ;
	virtual HRESULT __safecall Set_MouseIcon(const _di_IPictureDisp MouseIcon) = 0 ;
	virtual HRESULT __safecall Get_MouseIcon(_di_IPictureDisp &Get_MouseIcon_result) = 0 ;
	virtual HRESULT __safecall Set_MousePointer(Activex::TOleEnum MousePointer) = 0 ;
	virtual HRESULT __safecall Get_MousePointer(Activex::TOleEnum &Get_MousePointer_result) = 0 ;
	virtual HRESULT __safecall Set_MultiRow(Word MultiRow) = 0 ;
	virtual HRESULT __safecall Get_MultiRow(Word &Get_MultiRow_result) = 0 ;
	virtual HRESULT __safecall Set_Style(Activex::TOleEnum TabStyle) = 0 ;
	virtual HRESULT __safecall Get_Style(Activex::TOleEnum &Get_Style_result) = 0 ;
	virtual HRESULT __safecall Set_TabOrientation(Activex::TOleEnum TabOrientation) = 0 ;
	virtual HRESULT __safecall Get_TabOrientation(Activex::TOleEnum &Get_TabOrientation_result) = 0 ;
	virtual HRESULT __safecall _SetTabFixedWidth(int TabFixedWidth) = 0 ;
	virtual HRESULT __safecall _GetTabFixedWidth(/* out */ int &TabFixedWidth) = 0 ;
	virtual HRESULT __safecall _SetTabFixedHeight(int TabFixedHeight) = 0 ;
	virtual HRESULT __safecall _GetTabFixedHeight(/* out */ int &TabFixedHeight) = 0 ;
	virtual HRESULT __safecall _GetClientTop(/* out */ int &ClientTop) = 0 ;
	virtual HRESULT __safecall Get_ClientTop(float &Get_ClientTop_result) = 0 ;
	virtual HRESULT __safecall _GetClientLeft(/* out */ int &ClientLeft) = 0 ;
	virtual HRESULT __safecall Get_ClientLeft(float &Get_ClientLeft_result) = 0 ;
	virtual HRESULT __safecall _GetClientWidth(/* out */ int &ClientWidth) = 0 ;
	virtual HRESULT __safecall Get_ClientWidth(float &Get_ClientWidth_result) = 0 ;
	virtual HRESULT __safecall _GetClientHeight(/* out */ int &ClientHeight) = 0 ;
	virtual HRESULT __safecall Get_ClientHeight(float &Get_ClientHeight_result) = 0 ;
	virtual HRESULT __safecall Get_Tabs(_di_Tabs &Get_Tabs_result) = 0 ;
	virtual HRESULT __safecall Get_SelectedItem(_di_Tab &Get_SelectedItem_result) = 0 ;
	virtual HRESULT __safecall Set_Value(int Index) = 0 ;
	virtual HRESULT __safecall Get_Value(int &Get_Value_result) = 0 ;
	virtual HRESULT __safecall Set_TabFixedWidth(float TabFixedWidth) = 0 ;
	virtual HRESULT __safecall Get_TabFixedWidth(float &Get_TabFixedWidth_result) = 0 ;
	virtual HRESULT __safecall Set_TabFixedHeight(float TabFixedHeight) = 0 ;
	virtual HRESULT __safecall Get_TabFixedHeight(float &Get_TabFixedHeight_result) = 0 ;
	virtual HRESULT __safecall Set_FontWeight(short FontWeight) = 0 ;
	virtual HRESULT __safecall Get_FontWeight(short &Get_FontWeight_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_BackColor() { int r; HRESULT hr = Get_BackColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int BackColor = {read=_scw_Get_BackColor, write=Set_BackColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ForeColor() { int r; HRESULT hr = Get_ForeColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int ForeColor = {read=_scw_Get_ForeColor, write=Set_ForeColor};
	__property _di_IFontDisp _Font_Reserved = {write=Set__Font_Reserved};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IFontDisp _scw_Get_Font() { _di_IFontDisp r; HRESULT hr = Get_Font(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IFontDisp Font = {read=_scw_Get_Font, write=Set_Font};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_FontName() { WideString r; HRESULT hr = Get_FontName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString FontName = {read=_scw_Get_FontName, write=Set_FontName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontBold() { Word r; HRESULT hr = Get_FontBold(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word FontBold = {read=_scw_Get_FontBold, write=Set_FontBold};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontItalic() { Word r; HRESULT hr = Get_FontItalic(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word FontItalic = {read=_scw_Get_FontItalic, write=Set_FontItalic};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontUnderline() { Word r; HRESULT hr = Get_FontUnderline(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word FontUnderline = {read=_scw_Get_FontUnderline, write=Set_FontUnderline};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontStrikethru() { Word r; HRESULT hr = Get_FontStrikethru(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word FontStrikethru = {read=_scw_Get_FontStrikethru, write=Set_FontStrikethru};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::Currency _scw_Get_FontSize() { System::Currency r; HRESULT hr = Get_FontSize(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property System::Currency FontSize = {read=_scw_Get_FontSize, write=Set_FontSize};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Enabled() { Word r; HRESULT hr = Get_Enabled(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Enabled = {read=_scw_Get_Enabled, write=Set_Enabled};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IPictureDisp _scw_Get_MouseIcon() { _di_IPictureDisp r; HRESULT hr = Get_MouseIcon(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IPictureDisp MouseIcon = {read=_scw_Get_MouseIcon, write=_Set_MouseIcon};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_MousePointer() { Activex::TOleEnum r; HRESULT hr = Get_MousePointer(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum MousePointer = {read=_scw_Get_MousePointer, write=Set_MousePointer};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_MultiRow() { Word r; HRESULT hr = Get_MultiRow(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word MultiRow = {read=_scw_Get_MultiRow, write=Set_MultiRow};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Style() { Activex::TOleEnum r; HRESULT hr = Get_Style(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Style = {read=_scw_Get_Style, write=Set_Style};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_TabOrientation() { Activex::TOleEnum r; HRESULT hr = Get_TabOrientation(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum TabOrientation = {read=_scw_Get_TabOrientation, write=Set_TabOrientation
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_ClientTop() { float r; HRESULT hr = Get_ClientTop(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float ClientTop = {read=_scw_Get_ClientTop};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_ClientLeft() { float r; HRESULT hr = Get_ClientLeft(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float ClientLeft = {read=_scw_Get_ClientLeft};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_ClientWidth() { float r; HRESULT hr = Get_ClientWidth(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float ClientWidth = {read=_scw_Get_ClientWidth};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_ClientHeight() { float r; HRESULT hr = Get_ClientHeight(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float ClientHeight = {read=_scw_Get_ClientHeight};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Tabs _scw_Get_Tabs() { _di_Tabs r; HRESULT hr = Get_Tabs(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Tabs Tabs = {read=_scw_Get_Tabs};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Tab _scw_Get_SelectedItem() { _di_Tab r; HRESULT hr = Get_SelectedItem(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Tab SelectedItem = {read=_scw_Get_SelectedItem};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Value() { int r; HRESULT hr = Get_Value(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Value = {read=_scw_Get_Value, write=Set_Value};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_TabFixedWidth() { float r; HRESULT hr = Get_TabFixedWidth(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float TabFixedWidth = {read=_scw_Get_TabFixedWidth, write=Set_TabFixedWidth};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_TabFixedHeight() { float r; HRESULT hr = Get_TabFixedHeight(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float TabFixedHeight = {read=_scw_Get_TabFixedHeight, write=Set_TabFixedHeight};
	#pragma option push -w-inl
	/* safecall wrapper */ inline short _scw_Get_FontWeight() { short r; HRESULT hr = Get_FontWeight(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property short FontWeight = {read=_scw_Get_FontWeight, write=Set_FontWeight};
};
typedef ITabStrip TabStrip;

__interface ISpinbutton;
typedef System::DelphiInterface<ISpinbutton> _di_ISpinbutton;
__interface INTERFACE_UUID("{79176FB3-B7F2-11CE-97EF-00AA006D2776}") ISpinbutton  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Set_BackColor(int BackColor) = 0 ;
	virtual HRESULT __safecall Get_BackColor(int &Get_BackColor_result) = 0 ;
	virtual HRESULT __safecall Set_ForeColor(int ForeColor) = 0 ;
	virtual HRESULT __safecall Get_ForeColor(int &Get_ForeColor_result) = 0 ;
	virtual HRESULT __safecall Set_Enabled(Word Enabled) = 0 ;
	virtual HRESULT __safecall Get_Enabled(Word &Get_Enabled_result) = 0 ;
	virtual HRESULT __safecall Set_MousePointer(Activex::TOleEnum MousePointer) = 0 ;
	virtual HRESULT __safecall Get_MousePointer(Activex::TOleEnum &Get_MousePointer_result) = 0 ;
	virtual HRESULT __safecall Set_Value(int Value) = 0 ;
	virtual HRESULT __safecall Get_Value(int &Get_Value_result) = 0 ;
	virtual HRESULT __safecall Set_Min(int Min) = 0 ;
	virtual HRESULT __safecall Get_Min(int &Get_Min_result) = 0 ;
	virtual HRESULT __safecall Set_Max(int Max) = 0 ;
	virtual HRESULT __safecall Get_Max(int &Get_Max_result) = 0 ;
	virtual HRESULT __safecall Set_SmallChange(int SmallChange) = 0 ;
	virtual HRESULT __safecall Get_SmallChange(int &Get_SmallChange_result) = 0 ;
	virtual HRESULT __safecall Set_Orientation(Activex::TOleEnum Orientation) = 0 ;
	virtual HRESULT __safecall Get_Orientation(Activex::TOleEnum &Get_Orientation_result) = 0 ;
	virtual HRESULT __safecall _Set_MouseIcon(const _di_IPictureDisp MouseIcon) = 0 ;
	virtual HRESULT __safecall Set_MouseIcon(const _di_IPictureDisp MouseIcon) = 0 ;
	virtual HRESULT __safecall Get_MouseIcon(_di_IPictureDisp &Get_MouseIcon_result) = 0 ;
	virtual HRESULT __safecall Set_Delay(int Delay) = 0 ;
	virtual HRESULT __safecall Get_Delay(int &Get_Delay_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_BackColor() { int r; HRESULT hr = Get_BackColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int BackColor = {read=_scw_Get_BackColor, write=Set_BackColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ForeColor() { int r; HRESULT hr = Get_ForeColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int ForeColor = {read=_scw_Get_ForeColor, write=Set_ForeColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Enabled() { Word r; HRESULT hr = Get_Enabled(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Enabled = {read=_scw_Get_Enabled, write=Set_Enabled};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_MousePointer() { Activex::TOleEnum r; HRESULT hr = Get_MousePointer(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum MousePointer = {read=_scw_Get_MousePointer, write=Set_MousePointer};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Value() { int r; HRESULT hr = Get_Value(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Value = {read=_scw_Get_Value, write=Set_Value};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Min() { int r; HRESULT hr = Get_Min(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Min = {read=_scw_Get_Min, write=Set_Min};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Max() { int r; HRESULT hr = Get_Max(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Max = {read=_scw_Get_Max, write=Set_Max};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_SmallChange() { int r; HRESULT hr = Get_SmallChange(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int SmallChange = {read=_scw_Get_SmallChange, write=Set_SmallChange};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Orientation() { Activex::TOleEnum r; HRESULT hr = Get_Orientation(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Orientation = {read=_scw_Get_Orientation, write=Set_Orientation};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IPictureDisp _scw_Get_MouseIcon() { _di_IPictureDisp r; HRESULT hr = Get_MouseIcon(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IPictureDisp MouseIcon = {read=_scw_Get_MouseIcon, write=_Set_MouseIcon};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Delay() { int r; HRESULT hr = Get_Delay(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Delay = {read=_scw_Get_Delay, write=Set_Delay};
};
typedef ISpinbutton SpinButton;

__interface IImage;
typedef System::DelphiInterface<IImage> _di_IImage;
__interface INTERFACE_UUID("{4C599243-6926-101B-9992-00000B65C6F9}") IImage  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Set_Enabled(Word fEnabled) = 0 ;
	virtual HRESULT __safecall Get_Enabled(Word &Get_Enabled_result) = 0 ;
	virtual HRESULT __safecall Set_MousePointer(Activex::TOleEnum MousePointer) = 0 ;
	virtual HRESULT __safecall Get_MousePointer(Activex::TOleEnum &Get_MousePointer_result) = 0 ;
	virtual HRESULT __safecall Set_AutoSize(Word fAutoSize) = 0 ;
	virtual HRESULT __safecall Get_AutoSize(Word &Get_AutoSize_result) = 0 ;
	virtual HRESULT __safecall Set_BackColor(int BackColor) = 0 ;
	virtual HRESULT __safecall Get_BackColor(int &Get_BackColor_result) = 0 ;
	virtual HRESULT __safecall Set_BackStyle(Activex::TOleEnum BackStyle) = 0 ;
	virtual HRESULT __safecall Get_BackStyle(Activex::TOleEnum &Get_BackStyle_result) = 0 ;
	virtual HRESULT __safecall Set_BorderColor(int BorderColor) = 0 ;
	virtual HRESULT __safecall Get_BorderColor(int &Get_BorderColor_result) = 0 ;
	virtual HRESULT __safecall Set_BorderStyle(Activex::TOleEnum Style) = 0 ;
	virtual HRESULT __safecall Get_BorderStyle(Activex::TOleEnum &Get_BorderStyle_result) = 0 ;
	virtual HRESULT __safecall _Set_Picture(const _di_IPictureDisp Picture) = 0 ;
	virtual HRESULT __safecall Set_Picture(const _di_IPictureDisp Picture) = 0 ;
	virtual HRESULT __safecall Get_Picture(_di_IPictureDisp &Get_Picture_result) = 0 ;
	virtual HRESULT __safecall _Set_MouseIcon(const _di_IPictureDisp MouseIcon) = 0 ;
	virtual HRESULT __safecall Set_MouseIcon(const _di_IPictureDisp MouseIcon) = 0 ;
	virtual HRESULT __safecall Get_MouseIcon(_di_IPictureDisp &Get_MouseIcon_result) = 0 ;
	virtual HRESULT __safecall Set_PictureSizeMode(Activex::TOleEnum PictureSizeMode) = 0 ;
	virtual HRESULT __safecall Get_PictureSizeMode(Activex::TOleEnum &Get_PictureSizeMode_result) = 0 ;
		
	virtual HRESULT __safecall Set_PictureAlignment(Activex::TOleEnum PictureAlignment) = 0 ;
	virtual HRESULT __safecall Get_PictureAlignment(Activex::TOleEnum &Get_PictureAlignment_result) = 0 
		;
	virtual HRESULT __safecall Set_PictureTiling(Word PictureTiling) = 0 ;
	virtual HRESULT __safecall Get_PictureTiling(Word &Get_PictureTiling_result) = 0 ;
	virtual HRESULT __safecall Set_SpecialEffect(Activex::TOleEnum SpecialEffect) = 0 ;
	virtual HRESULT __safecall Get_SpecialEffect(Activex::TOleEnum &Get_SpecialEffect_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Enabled() { Word r; HRESULT hr = Get_Enabled(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Enabled = {read=_scw_Get_Enabled, write=Set_Enabled};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_MousePointer() { Activex::TOleEnum r; HRESULT hr = Get_MousePointer(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum MousePointer = {read=_scw_Get_MousePointer, write=Set_MousePointer};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_AutoSize() { Word r; HRESULT hr = Get_AutoSize(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word AutoSize = {read=_scw_Get_AutoSize, write=Set_AutoSize};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_BackColor() { int r; HRESULT hr = Get_BackColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int BackColor = {read=_scw_Get_BackColor, write=Set_BackColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_BackStyle() { Activex::TOleEnum r; HRESULT hr = Get_BackStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum BackStyle = {read=_scw_Get_BackStyle, write=Set_BackStyle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_BorderColor() { int r; HRESULT hr = Get_BorderColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int BorderColor = {read=_scw_Get_BorderColor, write=Set_BorderColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_BorderStyle() { Activex::TOleEnum r; HRESULT hr = Get_BorderStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum BorderStyle = {read=_scw_Get_BorderStyle, write=Set_BorderStyle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IPictureDisp _scw_Get_Picture() { _di_IPictureDisp r; HRESULT hr = Get_Picture(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IPictureDisp Picture = {read=_scw_Get_Picture, write=_Set_Picture};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IPictureDisp _scw_Get_MouseIcon() { _di_IPictureDisp r; HRESULT hr = Get_MouseIcon(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IPictureDisp MouseIcon = {read=_scw_Get_MouseIcon, write=_Set_MouseIcon};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PictureSizeMode() { Activex::TOleEnum r; HRESULT hr = Get_PictureSizeMode(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PictureSizeMode = {read=_scw_Get_PictureSizeMode, write=Set_PictureSizeMode
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PictureAlignment() { Activex::TOleEnum r; HRESULT hr = Get_PictureAlignment(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PictureAlignment = {read=_scw_Get_PictureAlignment, write=Set_PictureAlignment
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_PictureTiling() { Word r; HRESULT hr = Get_PictureTiling(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word PictureTiling = {read=_scw_Get_PictureTiling, write=Set_PictureTiling};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_SpecialEffect() { Activex::TOleEnum r; HRESULT hr = Get_SpecialEffect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum SpecialEffect = {read=_scw_Get_SpecialEffect, write=Set_SpecialEffect}
		;
};
typedef IImage Image;

__interface IWHTMLSubmitButton;
typedef System::DelphiInterface<IWHTMLSubmitButton> _di_IWHTMLSubmitButton;
__interface INTERFACE_UUID("{5512D111-5CC6-11CF-8D67-00AA00BDCE1D}") IWHTMLSubmitButton  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Set_Action(const WideString Action) = 0 ;
	virtual HRESULT __safecall Get_Action(WideString &Get_Action_result) = 0 ;
	virtual HRESULT __safecall Set_Caption(const WideString Caption) = 0 ;
	virtual HRESULT __safecall Get_Caption(WideString &Get_Caption_result) = 0 ;
	virtual HRESULT __safecall Set_Encoding(const WideString Encoding) = 0 ;
	virtual HRESULT __safecall Get_Encoding(WideString &Get_Encoding_result) = 0 ;
	virtual HRESULT __safecall Set_Method(const WideString Method) = 0 ;
	virtual HRESULT __safecall Get_Method(WideString &Get_Method_result) = 0 ;
	virtual HRESULT __safecall Set_HTMLName(const WideString HTMLName) = 0 ;
	virtual HRESULT __safecall Get_HTMLName(WideString &Get_HTMLName_result) = 0 ;
	virtual HRESULT __safecall Set_HTMLType(const WideString HTMLType) = 0 ;
	virtual HRESULT __safecall Get_HTMLType(WideString &Get_HTMLType_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Action() { WideString r; HRESULT hr = Get_Action(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Action = {read=_scw_Get_Action, write=Set_Action};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Caption() { WideString r; HRESULT hr = Get_Caption(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Caption = {read=_scw_Get_Caption, write=Set_Caption};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Encoding() { WideString r; HRESULT hr = Get_Encoding(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Encoding = {read=_scw_Get_Encoding, write=Set_Encoding};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Method() { WideString r; HRESULT hr = Get_Method(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Method = {read=_scw_Get_Method, write=Set_Method};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_HTMLName() { WideString r; HRESULT hr = Get_HTMLName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString HTMLName = {read=_scw_Get_HTMLName, write=Set_HTMLName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_HTMLType() { WideString r; HRESULT hr = Get_HTMLType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString HTMLType = {read=_scw_Get_HTMLType, write=Set_HTMLType};
};
typedef IWHTMLSubmitButton HTMLSubmit;

__interface IWHTMLImage;
typedef System::DelphiInterface<IWHTMLImage> _di_IWHTMLImage;
__interface INTERFACE_UUID("{5512D113-5CC6-11CF-8D67-00AA00BDCE1D}") IWHTMLImage  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Set_Action(const WideString Action) = 0 ;
	virtual HRESULT __safecall Get_Action(WideString &Get_Action_result) = 0 ;
	virtual HRESULT __safecall Set_Source(const WideString Source) = 0 ;
	virtual HRESULT __safecall Get_Source(WideString &Get_Source_result) = 0 ;
	virtual HRESULT __safecall Set_Encoding(const WideString Encoding) = 0 ;
	virtual HRESULT __safecall Get_Encoding(WideString &Get_Encoding_result) = 0 ;
	virtual HRESULT __safecall Set_Method(const WideString Method) = 0 ;
	virtual HRESULT __safecall Get_Method(WideString &Get_Method_result) = 0 ;
	virtual HRESULT __safecall Set_HTMLName(const WideString HTMLName) = 0 ;
	virtual HRESULT __safecall Get_HTMLName(WideString &Get_HTMLName_result) = 0 ;
	virtual HRESULT __safecall Set_HTMLType(const WideString HTMLType) = 0 ;
	virtual HRESULT __safecall Get_HTMLType(WideString &Get_HTMLType_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Action() { WideString r; HRESULT hr = Get_Action(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Action = {read=_scw_Get_Action, write=Set_Action};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Source() { WideString r; HRESULT hr = Get_Source(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Source = {read=_scw_Get_Source, write=Set_Source};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Encoding() { WideString r; HRESULT hr = Get_Encoding(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Encoding = {read=_scw_Get_Encoding, write=Set_Encoding};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Method() { WideString r; HRESULT hr = Get_Method(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Method = {read=_scw_Get_Method, write=Set_Method};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_HTMLName() { WideString r; HRESULT hr = Get_HTMLName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString HTMLName = {read=_scw_Get_HTMLName, write=Set_HTMLName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_HTMLType() { WideString r; HRESULT hr = Get_HTMLType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString HTMLType = {read=_scw_Get_HTMLType, write=Set_HTMLType};
};
typedef IWHTMLImage HTMLImage;

__interface IWHTMLReset;
typedef System::DelphiInterface<IWHTMLReset> _di_IWHTMLReset;
__interface INTERFACE_UUID("{5512D115-5CC6-11CF-8D67-00AA00BDCE1D}") IWHTMLReset  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Set_Caption(const WideString Caption) = 0 ;
	virtual HRESULT __safecall Get_Caption(WideString &Get_Caption_result) = 0 ;
	virtual HRESULT __safecall Set_HTMLName(const WideString HTMLName) = 0 ;
	virtual HRESULT __safecall Get_HTMLName(WideString &Get_HTMLName_result) = 0 ;
	virtual HRESULT __safecall Set_HTMLType(const WideString HTMLType) = 0 ;
	virtual HRESULT __safecall Get_HTMLType(WideString &Get_HTMLType_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Caption() { WideString r; HRESULT hr = Get_Caption(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Caption = {read=_scw_Get_Caption, write=Set_Caption};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_HTMLName() { WideString r; HRESULT hr = Get_HTMLName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString HTMLName = {read=_scw_Get_HTMLName, write=Set_HTMLName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_HTMLType() { WideString r; HRESULT hr = Get_HTMLType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString HTMLType = {read=_scw_Get_HTMLType, write=Set_HTMLType};
};
typedef IWHTMLReset HTMLReset;

__interface IWHTMLCheckbox;
typedef System::DelphiInterface<IWHTMLCheckbox> _di_IWHTMLCheckbox;
__interface INTERFACE_UUID("{5512D117-5CC6-11CF-8D67-00AA00BDCE1D}") IWHTMLCheckbox  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Set_HTMLName(const WideString HTMLName) = 0 ;
	virtual HRESULT __safecall Get_HTMLName(WideString &Get_HTMLName_result) = 0 ;
	virtual HRESULT __safecall Set_Value(const WideString Value) = 0 ;
	virtual HRESULT __safecall Get_Value(WideString &Get_Value_result) = 0 ;
	virtual HRESULT __safecall Set_Checked(Word Checked) = 0 ;
	virtual HRESULT __safecall Get_Checked(Word &Get_Checked_result) = 0 ;
	virtual HRESULT __safecall Set_HTMLType(const WideString HTMLType) = 0 ;
	virtual HRESULT __safecall Get_HTMLType(WideString &Get_HTMLType_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_HTMLName() { WideString r; HRESULT hr = Get_HTMLName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString HTMLName = {read=_scw_Get_HTMLName, write=Set_HTMLName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Value() { WideString r; HRESULT hr = Get_Value(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Value = {read=_scw_Get_Value, write=Set_Value};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Checked() { Word r; HRESULT hr = Get_Checked(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Checked = {read=_scw_Get_Checked, write=Set_Checked};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_HTMLType() { WideString r; HRESULT hr = Get_HTMLType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString HTMLType = {read=_scw_Get_HTMLType, write=Set_HTMLType};
};
typedef IWHTMLCheckbox HTMLCheckbox;

__interface IWHTMLOption;
typedef System::DelphiInterface<IWHTMLOption> _di_IWHTMLOption;
__interface INTERFACE_UUID("{5512D119-5CC6-11CF-8D67-00AA00BDCE1D}") IWHTMLOption  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Set_HTMLName(const WideString HTMLName) = 0 ;
	virtual HRESULT __safecall Get_HTMLName(WideString &Get_HTMLName_result) = 0 ;
	virtual HRESULT __safecall Set_Value(const WideString Value) = 0 ;
	virtual HRESULT __safecall Get_Value(WideString &Get_Value_result) = 0 ;
	virtual HRESULT __safecall Set_Checked(Word Checked) = 0 ;
	virtual HRESULT __safecall Get_Checked(Word &Get_Checked_result) = 0 ;
	virtual HRESULT __safecall Set_HTMLType(const WideString HTMLType) = 0 ;
	virtual HRESULT __safecall Get_HTMLType(WideString &Get_HTMLType_result) = 0 ;
	virtual HRESULT __safecall Get_DisplayStyle(Activex::TOleEnum &Get_DisplayStyle_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_HTMLName() { WideString r; HRESULT hr = Get_HTMLName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString HTMLName = {read=_scw_Get_HTMLName, write=Set_HTMLName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Value() { WideString r; HRESULT hr = Get_Value(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Value = {read=_scw_Get_Value, write=Set_Value};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Checked() { Word r; HRESULT hr = Get_Checked(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Checked = {read=_scw_Get_Checked, write=Set_Checked};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_HTMLType() { WideString r; HRESULT hr = Get_HTMLType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString HTMLType = {read=_scw_Get_HTMLType, write=Set_HTMLType};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_DisplayStyle() { Activex::TOleEnum r; HRESULT hr = Get_DisplayStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum DisplayStyle = {read=_scw_Get_DisplayStyle};
};
typedef IWHTMLOption HTMLOption;

__interface IWHTMLText;
typedef System::DelphiInterface<IWHTMLText> _di_IWHTMLText;
__interface INTERFACE_UUID("{5512D11B-5CC6-11CF-8D67-00AA00BDCE1D}") IWHTMLText  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Set_HTMLName(const WideString HTMLName) = 0 ;
	virtual HRESULT __safecall Get_HTMLName(WideString &Get_HTMLName_result) = 0 ;
	virtual HRESULT __safecall Set_Value(const WideString Value) = 0 ;
	virtual HRESULT __safecall Get_Value(WideString &Get_Value_result) = 0 ;
	virtual HRESULT __safecall Set_MaxLength(int MaxLength) = 0 ;
	virtual HRESULT __safecall Get_MaxLength(int &Get_MaxLength_result) = 0 ;
	virtual HRESULT __safecall Set_Width(int Width) = 0 ;
	virtual HRESULT __safecall Get_Width(int &Get_Width_result) = 0 ;
	virtual HRESULT __safecall Set_HTMLType(const WideString HTMLType) = 0 ;
	virtual HRESULT __safecall Get_HTMLType(WideString &Get_HTMLType_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_HTMLName() { WideString r; HRESULT hr = Get_HTMLName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString HTMLName = {read=_scw_Get_HTMLName, write=Set_HTMLName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Value() { WideString r; HRESULT hr = Get_Value(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Value = {read=_scw_Get_Value, write=Set_Value};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_MaxLength() { int r; HRESULT hr = Get_MaxLength(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int MaxLength = {read=_scw_Get_MaxLength, write=Set_MaxLength};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Width() { int r; HRESULT hr = Get_Width(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Width = {read=_scw_Get_Width, write=Set_Width};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_HTMLType() { WideString r; HRESULT hr = Get_HTMLType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString HTMLType = {read=_scw_Get_HTMLType, write=Set_HTMLType};
};
typedef IWHTMLText HTMLText;

__interface IWHTMLHidden;
typedef System::DelphiInterface<IWHTMLHidden> _di_IWHTMLHidden;
__interface INTERFACE_UUID("{5512D11D-5CC6-11CF-8D67-00AA00BDCE1D}") IWHTMLHidden  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Set_HTMLName(const WideString HTMLName) = 0 ;
	virtual HRESULT __safecall Get_HTMLName(WideString &Get_HTMLName_result) = 0 ;
	virtual HRESULT __safecall Set_Value(const WideString Value) = 0 ;
	virtual HRESULT __safecall Get_Value(WideString &Get_Value_result) = 0 ;
	virtual HRESULT __safecall Set_HTMLType(const WideString HTMLType) = 0 ;
	virtual HRESULT __safecall Get_HTMLType(WideString &Get_HTMLType_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_HTMLName() { WideString r; HRESULT hr = Get_HTMLName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString HTMLName = {read=_scw_Get_HTMLName, write=Set_HTMLName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Value() { WideString r; HRESULT hr = Get_Value(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Value = {read=_scw_Get_Value, write=Set_Value};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_HTMLType() { WideString r; HRESULT hr = Get_HTMLType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString HTMLType = {read=_scw_Get_HTMLType, write=Set_HTMLType};
};
typedef IWHTMLHidden HTMLHidden;

__interface IWHTMLPassword;
typedef System::DelphiInterface<IWHTMLPassword> _di_IWHTMLPassword;
__interface INTERFACE_UUID("{5512D11F-5CC6-11CF-8D67-00AA00BDCE1D}") IWHTMLPassword  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Set_HTMLName(const WideString HTMLName) = 0 ;
	virtual HRESULT __safecall Get_HTMLName(WideString &Get_HTMLName_result) = 0 ;
	virtual HRESULT __safecall Set_Value(const WideString Value) = 0 ;
	virtual HRESULT __safecall Get_Value(WideString &Get_Value_result) = 0 ;
	virtual HRESULT __safecall Set_MaxLength(int MaxLength) = 0 ;
	virtual HRESULT __safecall Get_MaxLength(int &Get_MaxLength_result) = 0 ;
	virtual HRESULT __safecall Set_Width(int Width) = 0 ;
	virtual HRESULT __safecall Get_Width(int &Get_Width_result) = 0 ;
	virtual HRESULT __safecall Set_HTMLType(const WideString HTMLType) = 0 ;
	virtual HRESULT __safecall Get_HTMLType(WideString &Get_HTMLType_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_HTMLName() { WideString r; HRESULT hr = Get_HTMLName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString HTMLName = {read=_scw_Get_HTMLName, write=Set_HTMLName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Value() { WideString r; HRESULT hr = Get_Value(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Value = {read=_scw_Get_Value, write=Set_Value};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_MaxLength() { int r; HRESULT hr = Get_MaxLength(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int MaxLength = {read=_scw_Get_MaxLength, write=Set_MaxLength};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Width() { int r; HRESULT hr = Get_Width(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Width = {read=_scw_Get_Width, write=Set_Width};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_HTMLType() { WideString r; HRESULT hr = Get_HTMLType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString HTMLType = {read=_scw_Get_HTMLType, write=Set_HTMLType};
};
typedef IWHTMLPassword HTMLPassword;

__interface IWHTMLSelect;
typedef System::DelphiInterface<IWHTMLSelect> _di_IWHTMLSelect;
__interface INTERFACE_UUID("{5512D123-5CC6-11CF-8D67-00AA00BDCE1D}") IWHTMLSelect  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Set_HTMLName(const WideString HTMLName) = 0 ;
	virtual HRESULT __safecall Get_HTMLName(WideString &Get_HTMLName_result) = 0 ;
	virtual HRESULT __safecall Set_Values(OleVariant &Values) = 0 ;
	virtual HRESULT __safecall Get_Values(OleVariant &Get_Values_result) = 0 ;
	virtual HRESULT __safecall Set_DisplayValues(OleVariant &DisplayValues) = 0 ;
	virtual HRESULT __safecall Get_DisplayValues(OleVariant &Get_DisplayValues_result) = 0 ;
	virtual HRESULT __safecall Set_Selected(const WideString Selected) = 0 ;
	virtual HRESULT __safecall Get_Selected(WideString &Get_Selected_result) = 0 ;
	virtual HRESULT __safecall Set_MultiSelect(Word MultiSelect) = 0 ;
	virtual HRESULT __safecall Get_MultiSelect(Word &Get_MultiSelect_result) = 0 ;
	virtual HRESULT __safecall Set_Size(int Size) = 0 ;
	virtual HRESULT __safecall Get_Size(int &Get_Size_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_HTMLName() { WideString r; HRESULT hr = Get_HTMLName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString HTMLName = {read=_scw_Get_HTMLName, write=Set_HTMLName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Selected() { WideString r; HRESULT hr = Get_Selected(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Selected = {read=_scw_Get_Selected, write=Set_Selected};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_MultiSelect() { Word r; HRESULT hr = Get_MultiSelect(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word MultiSelect = {read=_scw_Get_MultiSelect, write=Set_MultiSelect};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Size() { int r; HRESULT hr = Get_Size(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Size = {read=_scw_Get_Size, write=Set_Size};
};
typedef IWHTMLSelect HTMLSelect;

__interface IWHTMLTextArea;
typedef System::DelphiInterface<IWHTMLTextArea> _di_IWHTMLTextArea;
__interface INTERFACE_UUID("{5512D125-5CC6-11CF-8D67-00AA00BDCE1D}") IWHTMLTextArea  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Set_HTMLName(const WideString HTMLName) = 0 ;
	virtual HRESULT __safecall Get_HTMLName(WideString &Get_HTMLName_result) = 0 ;
	virtual HRESULT __safecall Set_Value(const WideString Value) = 0 ;
	virtual HRESULT __safecall Get_Value(WideString &Get_Value_result) = 0 ;
	virtual HRESULT __safecall Set_Rows(int Rows) = 0 ;
	virtual HRESULT __safecall Get_Rows(int &Get_Rows_result) = 0 ;
	virtual HRESULT __safecall Set_Columns(int Columns) = 0 ;
	virtual HRESULT __safecall Get_Columns(int &Get_Columns_result) = 0 ;
	virtual HRESULT __safecall Set_WordWrap(const WideString WordWrap) = 0 ;
	virtual HRESULT __safecall Get_WordWrap(WideString &Get_WordWrap_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_HTMLName() { WideString r; HRESULT hr = Get_HTMLName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString HTMLName = {read=_scw_Get_HTMLName, write=Set_HTMLName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Value() { WideString r; HRESULT hr = Get_Value(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Value = {read=_scw_Get_Value, write=Set_Value};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Rows() { int r; HRESULT hr = Get_Rows(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Rows = {read=_scw_Get_Rows, write=Set_Rows};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Columns() { int r; HRESULT hr = Get_Columns(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Columns = {read=_scw_Get_Columns, write=Set_Columns};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_WordWrap() { WideString r; HRESULT hr = Get_WordWrap(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString WordWrap = {read=_scw_Get_WordWrap, write=Set_WordWrap};
};
typedef IWHTMLTextArea HTMLTextArea;

__interface IMultiPage;
typedef System::DelphiInterface<IMultiPage> _di_IMultiPage;
__interface IPage;
typedef System::DelphiInterface<IPage> _di_IPage;
__interface Pages;
typedef System::DelphiInterface<Pages> _di_Pages;
__interface INTERFACE_UUID("{04598FC9-866C-11CF-AB7C-00AA00C08FCF}") IMultiPage  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Set_BackColor(int color) = 0 ;
	virtual HRESULT __safecall Get_BackColor(int &Get_BackColor_result) = 0 ;
	virtual HRESULT __safecall Set_ForeColor(int color) = 0 ;
	virtual HRESULT __safecall Get_ForeColor(int &Get_ForeColor_result) = 0 ;
	virtual HRESULT __safecall Set__Font_Reserved(const _di_IFontDisp Param1) = 0 ;
	virtual HRESULT __safecall Set_Font(const _di_IFontDisp Font) = 0 ;
	virtual HRESULT __safecall Get_Font(_di_IFontDisp &Get_Font_result) = 0 ;
	virtual HRESULT __safecall Set_FontName(const WideString FontName) = 0 ;
	virtual HRESULT __safecall Get_FontName(WideString &Get_FontName_result) = 0 ;
	virtual HRESULT __safecall Set_FontBold(Word fBold) = 0 ;
	virtual HRESULT __safecall Get_FontBold(Word &Get_FontBold_result) = 0 ;
	virtual HRESULT __safecall Set_FontItalic(Word fItalic) = 0 ;
	virtual HRESULT __safecall Get_FontItalic(Word &Get_FontItalic_result) = 0 ;
	virtual HRESULT __safecall Set_FontUnderline(Word fUnder) = 0 ;
	virtual HRESULT __safecall Get_FontUnderline(Word &Get_FontUnderline_result) = 0 ;
	virtual HRESULT __safecall Set_FontStrikethru(Word fStrike) = 0 ;
	virtual HRESULT __safecall Get_FontStrikethru(Word &Get_FontStrikethru_result) = 0 ;
	virtual HRESULT __safecall Set_FontSize(System::Currency Size) = 0 ;
	virtual HRESULT __safecall Get_FontSize(System::Currency &Get_FontSize_result) = 0 ;
	virtual HRESULT __safecall Set_MultiRow(Word fMultiRow) = 0 ;
	virtual HRESULT __safecall Get_MultiRow(Word &Get_MultiRow_result) = 0 ;
	virtual HRESULT __safecall Set_Style(Activex::TOleEnum Style) = 0 ;
	virtual HRESULT __safecall Get_Style(Activex::TOleEnum &Get_Style_result) = 0 ;
	virtual HRESULT __safecall Set_TabOrientation(Activex::TOleEnum Layout) = 0 ;
	virtual HRESULT __safecall Get_TabOrientation(Activex::TOleEnum &Get_TabOrientation_result) = 0 ;
	virtual HRESULT __safecall _SetTabFixedWidth(int Width) = 0 ;
	virtual HRESULT __safecall _GetTabFixedWidth(/* out */ int &Width) = 0 ;
	virtual HRESULT __safecall _SetTabFixedHeight(int Height) = 0 ;
	virtual HRESULT __safecall _GetTabFixedHeight(/* out */ int &Height) = 0 ;
	virtual HRESULT __safecall Set_Enabled(Word Enabled) = 0 ;
	virtual HRESULT __safecall Get_Enabled(Word &Get_Enabled_result) = 0 ;
	virtual HRESULT __safecall Get_SelectedItem(_di_IPage &Get_SelectedItem_result) = 0 ;
	virtual HRESULT __safecall Get_Pages(_di_Pages &Get_Pages_result) = 0 ;
	virtual HRESULT __safecall Set_Value(int Index) = 0 ;
	virtual HRESULT __safecall Get_Value(int &Get_Value_result) = 0 ;
	virtual HRESULT __safecall Set_TabFixedWidth(float Width) = 0 ;
	virtual HRESULT __safecall Get_TabFixedWidth(float &Get_TabFixedWidth_result) = 0 ;
	virtual HRESULT __safecall Set_TabFixedHeight(float Height) = 0 ;
	virtual HRESULT __safecall Get_TabFixedHeight(float &Get_TabFixedHeight_result) = 0 ;
	virtual HRESULT __safecall Set_FontWeight(short FontWeight) = 0 ;
	virtual HRESULT __safecall Get_FontWeight(short &Get_FontWeight_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_BackColor() { int r; HRESULT hr = Get_BackColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int BackColor = {read=_scw_Get_BackColor, write=Set_BackColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ForeColor() { int r; HRESULT hr = Get_ForeColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int ForeColor = {read=_scw_Get_ForeColor, write=Set_ForeColor};
	__property _di_IFontDisp _Font_Reserved = {write=Set__Font_Reserved};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IFontDisp _scw_Get_Font() { _di_IFontDisp r; HRESULT hr = Get_Font(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IFontDisp Font = {read=_scw_Get_Font, write=Set_Font};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_FontName() { WideString r; HRESULT hr = Get_FontName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString FontName = {read=_scw_Get_FontName, write=Set_FontName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontBold() { Word r; HRESULT hr = Get_FontBold(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word FontBold = {read=_scw_Get_FontBold, write=Set_FontBold};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontItalic() { Word r; HRESULT hr = Get_FontItalic(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word FontItalic = {read=_scw_Get_FontItalic, write=Set_FontItalic};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontUnderline() { Word r; HRESULT hr = Get_FontUnderline(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word FontUnderline = {read=_scw_Get_FontUnderline, write=Set_FontUnderline};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FontStrikethru() { Word r; HRESULT hr = Get_FontStrikethru(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word FontStrikethru = {read=_scw_Get_FontStrikethru, write=Set_FontStrikethru};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::Currency _scw_Get_FontSize() { System::Currency r; HRESULT hr = Get_FontSize(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property System::Currency FontSize = {read=_scw_Get_FontSize, write=Set_FontSize};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_MultiRow() { Word r; HRESULT hr = Get_MultiRow(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word MultiRow = {read=_scw_Get_MultiRow, write=Set_MultiRow};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Style() { Activex::TOleEnum r; HRESULT hr = Get_Style(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Style = {read=_scw_Get_Style, write=Set_Style};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_TabOrientation() { Activex::TOleEnum r; HRESULT hr = Get_TabOrientation(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum TabOrientation = {read=_scw_Get_TabOrientation, write=Set_TabOrientation
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Enabled() { Word r; HRESULT hr = Get_Enabled(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Enabled = {read=_scw_Get_Enabled, write=Set_Enabled};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IPage _scw_Get_SelectedItem() { _di_IPage r; HRESULT hr = Get_SelectedItem(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IPage SelectedItem = {read=_scw_Get_SelectedItem};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Pages _scw_Get_Pages() { _di_Pages r; HRESULT hr = Get_Pages(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Pages Pages = {read=_scw_Get_Pages};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Value() { int r; HRESULT hr = Get_Value(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Value = {read=_scw_Get_Value, write=Set_Value};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_TabFixedWidth() { float r; HRESULT hr = Get_TabFixedWidth(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float TabFixedWidth = {read=_scw_Get_TabFixedWidth, write=Set_TabFixedWidth};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_TabFixedHeight() { float r; HRESULT hr = Get_TabFixedHeight(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float TabFixedHeight = {read=_scw_Get_TabFixedHeight, write=Set_TabFixedHeight};
	#pragma option push -w-inl
	/* safecall wrapper */ inline short _scw_Get_FontWeight() { short r; HRESULT hr = Get_FontWeight(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property short FontWeight = {read=_scw_Get_FontWeight, write=Set_FontWeight};
};
typedef IMultiPage MultiPage;

typedef IPage Page;
;

typedef OleVariant *POleVariant1;

typedef int *PInteger1;

typedef int OLE_COLOR;

typedef int OLE_HANDLE;

typedef Word OLE_OPTEXCLUSIVE;

typedef IUnknown PIROWSET;
;

__interface IFont;
typedef System::DelphiInterface<IFont> _di_IFont;
__interface INTERFACE_UUID("{BEF6E002-A874-101A-8BBA-00AA00300CAB}") IFont  : public IUnknown 
{
	
public:
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &pname) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString pname) = 0 ;
	virtual HRESULT __stdcall Get_Size(/* out */ System::Currency &psize) = 0 ;
	virtual HRESULT __stdcall Set_Size(System::Currency psize) = 0 ;
	virtual HRESULT __stdcall Get_Bold(/* out */ Word &pbold) = 0 ;
	virtual HRESULT __stdcall Set_Bold(Word pbold) = 0 ;
	virtual HRESULT __stdcall Get_Italic(/* out */ Word &pitalic) = 0 ;
	virtual HRESULT __stdcall Set_Italic(Word pitalic) = 0 ;
	virtual HRESULT __stdcall Get_Underline(/* out */ Word &punderline) = 0 ;
	virtual HRESULT __stdcall Set_Underline(Word punderline) = 0 ;
	virtual HRESULT __stdcall Get_Strikethrough(/* out */ Word &pstrikethrough) = 0 ;
	virtual HRESULT __stdcall Set_Strikethrough(Word pstrikethrough) = 0 ;
	virtual HRESULT __stdcall Get_Weight(/* out */ short &pweight) = 0 ;
	virtual HRESULT __stdcall Set_Weight(short pweight) = 0 ;
	virtual HRESULT __stdcall Get_Charset(/* out */ short &pcharset) = 0 ;
	virtual HRESULT __stdcall Set_Charset(short pcharset) = 0 ;
	virtual HRESULT __stdcall Get_hFont(/* out */ int &phfont) = 0 ;
	virtual HRESULT __stdcall Clone(/* out */ _di_IFont &lplpfont) = 0 ;
	virtual HRESULT __stdcall IsEqual(const _di_IFont lpFontOther) = 0 ;
	virtual HRESULT __stdcall SetRatio(int cyLogical, int cyHimetric) = 0 ;
	virtual HRESULT __stdcall AddRefHfont(int hFont) = 0 ;
	virtual HRESULT __stdcall ReleaseHfont(int hFont) = 0 ;
};

__dispinterface IDataAutoWrapperDisp;
typedef System::DelphiInterface<IDataAutoWrapperDisp> _di_IDataAutoWrapperDisp;
__dispinterface INTERFACE_UUID("{EC72F590-F375-11CE-B9E8-00AA006B1A69}") IDataAutoWrapperDisp  : public IDispatch 
	
{
	
};

__dispinterface IReturnIntegerDisp;
typedef System::DelphiInterface<IReturnIntegerDisp> _di_IReturnIntegerDisp;
__dispinterface INTERFACE_UUID("{82B02370-B5BC-11CF-810F-00A0C9030074}") IReturnIntegerDisp  : public IDispatch 
	
{
	
};

__dispinterface IReturnBooleanDisp;
typedef System::DelphiInterface<IReturnBooleanDisp> _di_IReturnBooleanDisp;
__dispinterface INTERFACE_UUID("{82B02371-B5BC-11CF-810F-00A0C9030074}") IReturnBooleanDisp  : public IDispatch 
	
{
	
};

__dispinterface IReturnStringDisp;
typedef System::DelphiInterface<IReturnStringDisp> _di_IReturnStringDisp;
__dispinterface INTERFACE_UUID("{82B02372-B5BC-11CF-810F-00A0C9030074}") IReturnStringDisp  : public IDispatch 
	
{
	
};

__dispinterface IReturnSingleDisp;
typedef System::DelphiInterface<IReturnSingleDisp> _di_IReturnSingleDisp;
__dispinterface INTERFACE_UUID("{8A683C90-BA84-11CF-8110-00A0C9030074}") IReturnSingleDisp  : public IDispatch 
	
{
	
};

__dispinterface IReturnEffectDisp;
typedef System::DelphiInterface<IReturnEffectDisp> _di_IReturnEffectDisp;
__dispinterface INTERFACE_UUID("{8A683C91-BA84-11CF-8110-00A0C9030074}") IReturnEffectDisp  : public IDispatch 
	
{
	
};

__dispinterface IControlDisp;
typedef System::DelphiInterface<IControlDisp> _di_IControlDisp;
__dispinterface INTERFACE_UUID("{04598FC6-866C-11CF-AB7C-00AA00C08FCF}") IControlDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{04598FC7-866C-11CF-AB7C-00AA00C08FCF}") Controls_  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Get__NewEnum(_di_IUnknown &Get__NewEnum_result) = 0 ;
	virtual HRESULT __safecall Item(const OleVariant varg, _di_IDispatch &Item_result) = 0 ;
	virtual HRESULT __safecall Clear(void) = 0 ;
	virtual HRESULT __safecall _Move(int cx, int cy) = 0 ;
	virtual HRESULT __safecall SelectAll(void) = 0 ;
	virtual HRESULT __safecall _AddByClass(int &clsid, _di_IControl &_AddByClass_result) = 0 ;
	virtual HRESULT __safecall AlignToGrid(void) = 0 ;
	virtual HRESULT __safecall BringForward(void) = 0 ;
	virtual HRESULT __safecall BringToFront(void) = 0 ;
	virtual HRESULT __safecall Copy(void) = 0 ;
	virtual HRESULT __safecall Cut(void) = 0 ;
	virtual HRESULT __safecall Enum(_di_IUnknown &Enum_result) = 0 ;
	virtual HRESULT __safecall _GetItemByIndex(int lIndex, _di_IControl &_GetItemByIndex_result) = 0 ;
	virtual HRESULT __safecall _GetItemByName(const WideString pstr, _di_IControl &_GetItemByName_result
		) = 0 ;
	virtual HRESULT __safecall _GetItemByID(int ID, _di_IControl &_GetItemByID_result) = 0 ;
	virtual HRESULT __safecall SendBackward(void) = 0 ;
	virtual HRESULT __safecall SendToBack(void) = 0 ;
	virtual HRESULT __safecall Move(float cx, float cy) = 0 ;
	virtual HRESULT __safecall Add(const WideString bstrProgID, const OleVariant Name, const OleVariant 
		Visible, _di_IControl &Add_result) = 0 ;
	virtual HRESULT __safecall Remove(const OleVariant varg) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Count() { int r; HRESULT hr = Get_Count(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Count = {read=_scw_Get_Count};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IUnknown _scw_Get__NewEnum() { _di_IUnknown r; HRESULT hr = Get__NewEnum(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IUnknown _NewEnum = {read=_scw_Get__NewEnum};
};

__dispinterface Controls_Disp;
typedef System::DelphiInterface<Controls_Disp> _di_Controls_Disp;
__dispinterface INTERFACE_UUID("{04598FC7-866C-11CF-AB7C-00AA00C08FCF}") Controls_Disp  : public IDispatch 
	
{
	
};

__dispinterface IOptionFrameDisp;
typedef System::DelphiInterface<IOptionFrameDisp> _di_IOptionFrameDisp;
__dispinterface INTERFACE_UUID("{29B86A70-F52E-11CE-9BCE-00AA00608E01}") IOptionFrameDisp  : public IDispatch 
	
{
	
};

__dispinterface _UserFormDisp;
typedef System::DelphiInterface<_UserFormDisp> _di__UserFormDisp;
__dispinterface INTERFACE_UUID("{04598FC8-866C-11CF-AB7C-00AA00C08FCF}") _UserFormDisp  : public IDispatch 
	
{
	
};

__dispinterface ControlEvents;
typedef System::DelphiInterface<ControlEvents> _di_ControlEvents;
__dispinterface INTERFACE_UUID("{9A4BBF53-4E46-101B-8BBD-00AA003E3B29}") ControlEvents  : public IDispatch 
	
{
	
};

__dispinterface FormEvents;
typedef System::DelphiInterface<FormEvents> _di_FormEvents;
__dispinterface INTERFACE_UUID("{5B9D8FC8-4A71-101B-97A6-00000B65C08B}") FormEvents  : public IDispatch 
	
{
	
};

__dispinterface OptionFrameEvents;
typedef System::DelphiInterface<OptionFrameEvents> _di_OptionFrameEvents;
__dispinterface INTERFACE_UUID("{CF3F94A0-F546-11CE-9BCE-00AA00608E01}") OptionFrameEvents  : public IDispatch 
	
{
	
};

__dispinterface ILabelControlDisp;
typedef System::DelphiInterface<ILabelControlDisp> _di_ILabelControlDisp;
__dispinterface INTERFACE_UUID("{04598FC1-866C-11CF-AB7C-00AA00C08FCF}") ILabelControlDisp  : public IDispatch 
	
{
	
};

__dispinterface ICommandButtonDisp;
typedef System::DelphiInterface<ICommandButtonDisp> _di_ICommandButtonDisp;
__dispinterface INTERFACE_UUID("{04598FC4-866C-11CF-AB7C-00AA00C08FCF}") ICommandButtonDisp  : public IDispatch 
	
{
	
};

__dispinterface IMdcTextDisp;
typedef System::DelphiInterface<IMdcTextDisp> _di_IMdcTextDisp;
__dispinterface INTERFACE_UUID("{8BD21D13-EC42-11CE-9E0D-00AA006002F3}") IMdcTextDisp  : public IDispatch 
	
{
	
};

__dispinterface IMdcListDisp;
typedef System::DelphiInterface<IMdcListDisp> _di_IMdcListDisp;
__dispinterface INTERFACE_UUID("{8BD21D23-EC42-11CE-9E0D-00AA006002F3}") IMdcListDisp  : public IDispatch 
	
{
	
};

__dispinterface IMdcComboDisp;
typedef System::DelphiInterface<IMdcComboDisp> _di_IMdcComboDisp;
__dispinterface INTERFACE_UUID("{8BD21D33-EC42-11CE-9E0D-00AA006002F3}") IMdcComboDisp  : public IDispatch 
	
{
	
};

__dispinterface IMdcCheckBoxDisp;
typedef System::DelphiInterface<IMdcCheckBoxDisp> _di_IMdcCheckBoxDisp;
__dispinterface INTERFACE_UUID("{8BD21D43-EC42-11CE-9E0D-00AA006002F3}") IMdcCheckBoxDisp  : public IDispatch 
	
{
	
};

__dispinterface IMdcOptionButtonDisp;
typedef System::DelphiInterface<IMdcOptionButtonDisp> _di_IMdcOptionButtonDisp;
__dispinterface INTERFACE_UUID("{8BD21D53-EC42-11CE-9E0D-00AA006002F3}") IMdcOptionButtonDisp  : public IDispatch 
	
{
	
};

__dispinterface IMdcToggleButtonDisp;
typedef System::DelphiInterface<IMdcToggleButtonDisp> _di_IMdcToggleButtonDisp;
__dispinterface INTERFACE_UUID("{8BD21D63-EC42-11CE-9E0D-00AA006002F3}") IMdcToggleButtonDisp  : public IDispatch 
	
{
	
};

__dispinterface IScrollbarDisp;
typedef System::DelphiInterface<IScrollbarDisp> _di_IScrollbarDisp;
__dispinterface INTERFACE_UUID("{04598FC3-866C-11CF-AB7C-00AA00C08FCF}") IScrollbarDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{A38BFFC3-A5A0-11CE-8107-00AA00611080}") Tab  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Set_Caption(const WideString Caption) = 0 ;
	virtual HRESULT __safecall Get_Caption(WideString &Get_Caption_result) = 0 ;
	virtual HRESULT __safecall Set_ControlTipText(const WideString ControlTipText) = 0 ;
	virtual HRESULT __safecall Get_ControlTipText(WideString &Get_ControlTipText_result) = 0 ;
	virtual HRESULT __safecall Set_Enabled(Word fEnabled) = 0 ;
	virtual HRESULT __safecall Get_Enabled(Word &Get_Enabled_result) = 0 ;
	virtual HRESULT __safecall Set_Index(int Index) = 0 ;
	virtual HRESULT __safecall Get_Index(int &Get_Index_result) = 0 ;
	virtual HRESULT __safecall Set_Name(const WideString Name) = 0 ;
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Set_Tag(const WideString Tag) = 0 ;
	virtual HRESULT __safecall Get_Tag(WideString &Get_Tag_result) = 0 ;
	virtual HRESULT __safecall Set_Visible(Word Visible) = 0 ;
	virtual HRESULT __safecall Get_Visible(Word &Get_Visible_result) = 0 ;
	virtual HRESULT __safecall Set_Accelerator(const WideString Accelerator) = 0 ;
	virtual HRESULT __safecall Get_Accelerator(WideString &Get_Accelerator_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Caption() { WideString r; HRESULT hr = Get_Caption(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Caption = {read=_scw_Get_Caption, write=Set_Caption};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_ControlTipText() { WideString r; HRESULT hr = Get_ControlTipText(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString ControlTipText = {read=_scw_Get_ControlTipText, write=Set_ControlTipText};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Enabled() { Word r; HRESULT hr = Get_Enabled(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Enabled = {read=_scw_Get_Enabled, write=Set_Enabled};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Index() { int r; HRESULT hr = Get_Index(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Index = {read=_scw_Get_Index, write=Set_Index};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name, write=Set_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Tag() { WideString r; HRESULT hr = Get_Tag(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Tag = {read=_scw_Get_Tag, write=Set_Tag};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Visible() { Word r; HRESULT hr = Get_Visible(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Visible = {read=_scw_Get_Visible, write=Set_Visible};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Accelerator() { WideString r; HRESULT hr = Get_Accelerator(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Accelerator = {read=_scw_Get_Accelerator, write=Set_Accelerator};
};

__dispinterface TabDisp;
typedef System::DelphiInterface<TabDisp> _di_TabDisp;
__dispinterface INTERFACE_UUID("{A38BFFC3-A5A0-11CE-8107-00AA00611080}") TabDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{944ACF93-A1E6-11CE-8104-00AA00611080}") Tabs  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Get__NewEnum(_di_IUnknown &Get__NewEnum_result) = 0 ;
	virtual HRESULT __safecall _GetItemByIndex(int lIndex, _di_Tab &_GetItemByIndex_result) = 0 ;
	virtual HRESULT __safecall _GetItemByName(const WideString bstr, _di_Tab &_GetItemByName_result) = 0 
		;
	virtual HRESULT __safecall Item(const OleVariant varg, _di_IDispatch &Item_result) = 0 ;
	virtual HRESULT __safecall Enum(_di_IUnknown &Enum_result) = 0 ;
	virtual HRESULT __safecall Add(const OleVariant bstrName, const OleVariant bstrCaption, const OleVariant 
		lIndex, _di_Tab &Add_result) = 0 ;
	virtual HRESULT __safecall _Add(const WideString bstrName, const WideString bstrCaption, _di_Tab &_Add_result
		) = 0 ;
	virtual HRESULT __safecall _Insert(const WideString bstrName, const WideString bstrCaption, int lIndex
		, _di_Tab &_Insert_result) = 0 ;
	virtual HRESULT __safecall Remove(const OleVariant varg) = 0 ;
	virtual HRESULT __safecall Clear(void) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Count() { int r; HRESULT hr = Get_Count(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Count = {read=_scw_Get_Count};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IUnknown _scw_Get__NewEnum() { _di_IUnknown r; HRESULT hr = Get__NewEnum(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IUnknown _NewEnum = {read=_scw_Get__NewEnum};
};

__dispinterface TabsDisp;
typedef System::DelphiInterface<TabsDisp> _di_TabsDisp;
__dispinterface INTERFACE_UUID("{944ACF93-A1E6-11CE-8104-00AA00611080}") TabsDisp  : public IDispatch 
	
{
	
};

__dispinterface ITabStripDisp;
typedef System::DelphiInterface<ITabStripDisp> _di_ITabStripDisp;
__dispinterface INTERFACE_UUID("{04598FC2-866C-11CF-AB7C-00AA00C08FCF}") ITabStripDisp  : public IDispatch 
	
{
	
};

__dispinterface ISpinbuttonDisp;
typedef System::DelphiInterface<ISpinbuttonDisp> _di_ISpinbuttonDisp;
__dispinterface INTERFACE_UUID("{79176FB3-B7F2-11CE-97EF-00AA006D2776}") ISpinbuttonDisp  : public IDispatch 
	
{
	
};

__dispinterface IImageDisp;
typedef System::DelphiInterface<IImageDisp> _di_IImageDisp;
__dispinterface INTERFACE_UUID("{4C599243-6926-101B-9992-00000B65C6F9}") IImageDisp  : public IDispatch 
	
{
	
};

__dispinterface IWHTMLSubmitButtonDisp;
typedef System::DelphiInterface<IWHTMLSubmitButtonDisp> _di_IWHTMLSubmitButtonDisp;
__dispinterface INTERFACE_UUID("{5512D111-5CC6-11CF-8D67-00AA00BDCE1D}") IWHTMLSubmitButtonDisp  : public IDispatch 
	
{
	
};

__dispinterface IWHTMLImageDisp;
typedef System::DelphiInterface<IWHTMLImageDisp> _di_IWHTMLImageDisp;
__dispinterface INTERFACE_UUID("{5512D113-5CC6-11CF-8D67-00AA00BDCE1D}") IWHTMLImageDisp  : public IDispatch 
	
{
	
};

__dispinterface IWHTMLResetDisp;
typedef System::DelphiInterface<IWHTMLResetDisp> _di_IWHTMLResetDisp;
__dispinterface INTERFACE_UUID("{5512D115-5CC6-11CF-8D67-00AA00BDCE1D}") IWHTMLResetDisp  : public IDispatch 
	
{
	
};

__dispinterface IWHTMLCheckboxDisp;
typedef System::DelphiInterface<IWHTMLCheckboxDisp> _di_IWHTMLCheckboxDisp;
__dispinterface INTERFACE_UUID("{5512D117-5CC6-11CF-8D67-00AA00BDCE1D}") IWHTMLCheckboxDisp  : public IDispatch 
	
{
	
};

__dispinterface IWHTMLOptionDisp;
typedef System::DelphiInterface<IWHTMLOptionDisp> _di_IWHTMLOptionDisp;
__dispinterface INTERFACE_UUID("{5512D119-5CC6-11CF-8D67-00AA00BDCE1D}") IWHTMLOptionDisp  : public IDispatch 
	
{
	
};

__dispinterface IWHTMLTextDisp;
typedef System::DelphiInterface<IWHTMLTextDisp> _di_IWHTMLTextDisp;
__dispinterface INTERFACE_UUID("{5512D11B-5CC6-11CF-8D67-00AA00BDCE1D}") IWHTMLTextDisp  : public IDispatch 
	
{
	
};

__dispinterface IWHTMLHiddenDisp;
typedef System::DelphiInterface<IWHTMLHiddenDisp> _di_IWHTMLHiddenDisp;
__dispinterface INTERFACE_UUID("{5512D11D-5CC6-11CF-8D67-00AA00BDCE1D}") IWHTMLHiddenDisp  : public IDispatch 
	
{
	
};

__dispinterface IWHTMLPasswordDisp;
typedef System::DelphiInterface<IWHTMLPasswordDisp> _di_IWHTMLPasswordDisp;
__dispinterface INTERFACE_UUID("{5512D11F-5CC6-11CF-8D67-00AA00BDCE1D}") IWHTMLPasswordDisp  : public IDispatch 
	
{
	
};

__dispinterface IWHTMLSelectDisp;
typedef System::DelphiInterface<IWHTMLSelectDisp> _di_IWHTMLSelectDisp;
__dispinterface INTERFACE_UUID("{5512D123-5CC6-11CF-8D67-00AA00BDCE1D}") IWHTMLSelectDisp  : public IDispatch 
	
{
	
};

__dispinterface IWHTMLTextAreaDisp;
typedef System::DelphiInterface<IWHTMLTextAreaDisp> _di_IWHTMLTextAreaDisp;
__dispinterface INTERFACE_UUID("{5512D125-5CC6-11CF-8D67-00AA00BDCE1D}") IWHTMLTextAreaDisp  : public IDispatch 
	
{
	
};

__dispinterface LabelControlEvents;
typedef System::DelphiInterface<LabelControlEvents> _di_LabelControlEvents;
__dispinterface INTERFACE_UUID("{978C9E22-D4B0-11CE-BF2D-00AA003F40D0}") LabelControlEvents  : public IDispatch 
	
{
	
};

__dispinterface CommandButtonEvents;
typedef System::DelphiInterface<CommandButtonEvents> _di_CommandButtonEvents;
__dispinterface INTERFACE_UUID("{7B020EC1-AF6C-11CE-9F46-00AA00574A4F}") CommandButtonEvents  : public IDispatch 
	
{
	
};

__dispinterface MdcTextEvents;
typedef System::DelphiInterface<MdcTextEvents> _di_MdcTextEvents;
__dispinterface INTERFACE_UUID("{8BD21D12-EC42-11CE-9E0D-00AA006002F3}") MdcTextEvents  : public IDispatch 
	
{
	
};

__dispinterface MdcListEvents;
typedef System::DelphiInterface<MdcListEvents> _di_MdcListEvents;
__dispinterface INTERFACE_UUID("{8BD21D22-EC42-11CE-9E0D-00AA006002F3}") MdcListEvents  : public IDispatch 
	
{
	
};

__dispinterface MdcComboEvents;
typedef System::DelphiInterface<MdcComboEvents> _di_MdcComboEvents;
__dispinterface INTERFACE_UUID("{8BD21D32-EC42-11CE-9E0D-00AA006002F3}") MdcComboEvents  : public IDispatch 
	
{
	
};

__dispinterface MdcCheckBoxEvents;
typedef System::DelphiInterface<MdcCheckBoxEvents> _di_MdcCheckBoxEvents;
__dispinterface INTERFACE_UUID("{8BD21D42-EC42-11CE-9E0D-00AA006002F3}") MdcCheckBoxEvents  : public IDispatch 
	
{
	
};

__dispinterface MdcOptionButtonEvents;
typedef System::DelphiInterface<MdcOptionButtonEvents> _di_MdcOptionButtonEvents;
__dispinterface INTERFACE_UUID("{8BD21D52-EC42-11CE-9E0D-00AA006002F3}") MdcOptionButtonEvents  : public IDispatch 
	
{
	
};

__dispinterface MdcToggleButtonEvents;
typedef System::DelphiInterface<MdcToggleButtonEvents> _di_MdcToggleButtonEvents;
__dispinterface INTERFACE_UUID("{8BD21D62-EC42-11CE-9E0D-00AA006002F3}") MdcToggleButtonEvents  : public IDispatch 
	
{
	
};

__dispinterface ScrollbarEvents;
typedef System::DelphiInterface<ScrollbarEvents> _di_ScrollbarEvents;
__dispinterface INTERFACE_UUID("{7B020EC2-AF6C-11CE-9F46-00AA00574A4F}") ScrollbarEvents  : public IDispatch 
	
{
	
};

__dispinterface TabStripEvents;
typedef System::DelphiInterface<TabStripEvents> _di_TabStripEvents;
__dispinterface INTERFACE_UUID("{7B020EC7-AF6C-11CE-9F46-00AA00574A4F}") TabStripEvents  : public IDispatch 
	
{
	
};

__dispinterface SpinbuttonEvents;
typedef System::DelphiInterface<SpinbuttonEvents> _di_SpinbuttonEvents;
__dispinterface INTERFACE_UUID("{79176FB2-B7F2-11CE-97EF-00AA006D2776}") SpinbuttonEvents  : public IDispatch 
	
{
	
};

__dispinterface ImageEvents;
typedef System::DelphiInterface<ImageEvents> _di_ImageEvents;
__dispinterface INTERFACE_UUID("{4C5992A5-6926-101B-9992-00000B65C6F9}") ImageEvents  : public IDispatch 
	
{
	
};

__dispinterface WHTMLControlEvents;
typedef System::DelphiInterface<WHTMLControlEvents> _di_WHTMLControlEvents;
__dispinterface INTERFACE_UUID("{796ED650-5FE9-11CF-8D68-00AA00BDCE1D}") WHTMLControlEvents  : public IDispatch 
	
{
	
};

__dispinterface WHTMLControlEvents1;
typedef System::DelphiInterface<WHTMLControlEvents1> _di_WHTMLControlEvents1;
__dispinterface INTERFACE_UUID("{47FF8FE0-6198-11CF-8CE8-00AA006CB389}") WHTMLControlEvents1  : public IDispatch 
	
{
	
};

__dispinterface WHTMLControlEvents2;
typedef System::DelphiInterface<WHTMLControlEvents2> _di_WHTMLControlEvents2;
__dispinterface INTERFACE_UUID("{47FF8FE1-6198-11CF-8CE8-00AA006CB389}") WHTMLControlEvents2  : public IDispatch 
	
{
	
};

__dispinterface WHTMLControlEvents3;
typedef System::DelphiInterface<WHTMLControlEvents3> _di_WHTMLControlEvents3;
__dispinterface INTERFACE_UUID("{47FF8FE2-6198-11CF-8CE8-00AA006CB389}") WHTMLControlEvents3  : public IDispatch 
	
{
	
};

__dispinterface WHTMLControlEvents4;
typedef System::DelphiInterface<WHTMLControlEvents4> _di_WHTMLControlEvents4;
__dispinterface INTERFACE_UUID("{47FF8FE3-6198-11CF-8CE8-00AA006CB389}") WHTMLControlEvents4  : public IDispatch 
	
{
	
};

__dispinterface WHTMLControlEvents5;
typedef System::DelphiInterface<WHTMLControlEvents5> _di_WHTMLControlEvents5;
__dispinterface INTERFACE_UUID("{47FF8FE4-6198-11CF-8CE8-00AA006CB389}") WHTMLControlEvents5  : public IDispatch 
	
{
	
};

__dispinterface WHTMLControlEvents6;
typedef System::DelphiInterface<WHTMLControlEvents6> _di_WHTMLControlEvents6;
__dispinterface INTERFACE_UUID("{47FF8FE5-6198-11CF-8CE8-00AA006CB389}") WHTMLControlEvents6  : public IDispatch 
	
{
	
};

__dispinterface WHTMLControlEvents7;
typedef System::DelphiInterface<WHTMLControlEvents7> _di_WHTMLControlEvents7;
__dispinterface INTERFACE_UUID("{47FF8FE6-6198-11CF-8CE8-00AA006CB389}") WHTMLControlEvents7  : public IDispatch 
	
{
	
};

__dispinterface WHTMLControlEvents9;
typedef System::DelphiInterface<WHTMLControlEvents9> _di_WHTMLControlEvents9;
__dispinterface INTERFACE_UUID("{47FF8FE8-6198-11CF-8CE8-00AA006CB389}") WHTMLControlEvents9  : public IDispatch 
	
{
	
};

__dispinterface WHTMLControlEvents10;
typedef System::DelphiInterface<WHTMLControlEvents10> _di_WHTMLControlEvents10;
__dispinterface INTERFACE_UUID("{47FF8FE9-6198-11CF-8CE8-00AA006CB389}") WHTMLControlEvents10  : public IDispatch 
	
{
	
};

__dispinterface IPageDisp;
typedef System::DelphiInterface<IPageDisp> _di_IPageDisp;
__dispinterface INTERFACE_UUID("{5CEF5613-713D-11CE-80C9-00AA00611080}") IPageDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{92E11A03-7358-11CE-80CB-00AA00611080}") Pages  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Get__NewEnum(_di_IUnknown &Get__NewEnum_result) = 0 ;
	virtual HRESULT __safecall Item(const OleVariant varg, _di_IDispatch &Item_result) = 0 ;
	virtual HRESULT __safecall Enum(_di_IUnknown &Enum_result) = 0 ;
	virtual HRESULT __safecall Add(const OleVariant bstrName, const OleVariant bstrCaption, const OleVariant 
		lIndex, _di_IPage &Add_result) = 0 ;
	virtual HRESULT __safecall _AddCtrl(int &clsid, const WideString bstrName, const WideString bstrCaption
		, _di_IPage &_AddCtrl_result) = 0 ;
	virtual HRESULT __safecall _InsertCtrl(int &clsid, const WideString bstrName, const WideString bstrCaption
		, int lIndex, _di_IPage &_InsertCtrl_result) = 0 ;
	virtual HRESULT __safecall _GetItemByIndex(int lIndex, _di_IControl &_GetItemByIndex_result) = 0 ;
	virtual HRESULT __safecall _GetItemByName(const WideString pstrName, _di_IControl &_GetItemByName_result
		) = 0 ;
	virtual HRESULT __safecall Remove(const OleVariant varg) = 0 ;
	virtual HRESULT __safecall Clear(void) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Count() { int r; HRESULT hr = Get_Count(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Count = {read=_scw_Get_Count};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IUnknown _scw_Get__NewEnum() { _di_IUnknown r; HRESULT hr = Get__NewEnum(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IUnknown _NewEnum = {read=_scw_Get__NewEnum};
};

__dispinterface PagesDisp;
typedef System::DelphiInterface<PagesDisp> _di_PagesDisp;
__dispinterface INTERFACE_UUID("{92E11A03-7358-11CE-80CB-00AA00611080}") PagesDisp  : public IDispatch 
	
{
	
};

__dispinterface IMultiPageDisp;
typedef System::DelphiInterface<IMultiPageDisp> _di_IMultiPageDisp;
__dispinterface INTERFACE_UUID("{04598FC9-866C-11CF-AB7C-00AA00C08FCF}") IMultiPageDisp  : public IDispatch 
	
{
	
};

__dispinterface MultiPageEvents;
typedef System::DelphiInterface<MultiPageEvents> _di_MultiPageEvents;
__dispinterface INTERFACE_UUID("{7B020EC8-AF6C-11CE-9F46-00AA00574A4F}") MultiPageEvents  : public IDispatch 
	
{
	
};

class DELPHICLASS CoReturnInteger;
class PASCALIMPLEMENTATION CoReturnInteger : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di_IReturnInteger __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di_IReturnInteger __fastcall CreateRemote(TMetaClass* vmt, const 
		AnsiString MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoReturnInteger(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoReturnInteger(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoReturnBoolean;
class PASCALIMPLEMENTATION CoReturnBoolean : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di_IReturnBoolean __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di_IReturnBoolean __fastcall CreateRemote(TMetaClass* vmt, const 
		AnsiString MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoReturnBoolean(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoReturnBoolean(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoReturnString;
class PASCALIMPLEMENTATION CoReturnString : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di_IReturnString __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di_IReturnString __fastcall CreateRemote(TMetaClass* vmt, const 
		AnsiString MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoReturnString(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoReturnString(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoReturnSingle;
class PASCALIMPLEMENTATION CoReturnSingle : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di_IReturnSingle __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di_IReturnSingle __fastcall CreateRemote(TMetaClass* vmt, const 
		AnsiString MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoReturnSingle(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoReturnSingle(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoReturnEffect;
class PASCALIMPLEMENTATION CoReturnEffect : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di_IReturnEffect __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di_IReturnEffect __fastcall CreateRemote(TMetaClass* vmt, const 
		AnsiString MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoReturnEffect(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoReturnEffect(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoDataObject;
class PASCALIMPLEMENTATION CoDataObject : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di_IDataAutoWrapper __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di_IDataAutoWrapper __fastcall CreateRemote(TMetaClass* vmt, const 
		AnsiString MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoDataObject(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoDataObject(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoControl;
class PASCALIMPLEMENTATION CoControl : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di_IControl __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di_IControl __fastcall CreateRemote(TMetaClass* vmt, const AnsiString 
		MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoControl(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoControl(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoPage;
class PASCALIMPLEMENTATION CoPage : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di_IPage __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di_IPage __fastcall CreateRemote(TMetaClass* vmt, const AnsiString 
		MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoPage(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoPage(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE GUID LIBID_MSForms;
extern PACKAGE GUID IID_IFont;
extern PACKAGE GUID DIID_Font;
extern PACKAGE GUID IID_IDataAutoWrapper;
extern PACKAGE GUID IID_IReturnInteger;
extern PACKAGE GUID IID_IReturnBoolean;
extern PACKAGE GUID IID_IReturnString;
extern PACKAGE GUID IID_IReturnSingle;
extern PACKAGE GUID IID_IReturnEffect;
extern PACKAGE GUID CLASS_ReturnInteger;
extern PACKAGE GUID CLASS_ReturnBoolean;
extern PACKAGE GUID CLASS_ReturnString;
extern PACKAGE GUID CLASS_ReturnSingle;
extern PACKAGE GUID CLASS_ReturnEffect;
extern PACKAGE GUID CLASS_DataObject;
extern PACKAGE GUID IID_IControl;
extern PACKAGE GUID IID_Controls_;
extern PACKAGE GUID IID_IOptionFrame;
extern PACKAGE GUID IID__UserForm;
extern PACKAGE GUID DIID_ControlEvents;
extern PACKAGE GUID CLASS_Control;
extern PACKAGE GUID DIID_FormEvents;
extern PACKAGE GUID DIID_OptionFrameEvents;
extern PACKAGE GUID CLASS_UserForm;
extern PACKAGE GUID CLASS_Frame;
extern PACKAGE GUID IID_ILabelControl;
extern PACKAGE GUID IID_ICommandButton;
extern PACKAGE GUID IID_IMdcText;
extern PACKAGE GUID IID_IMdcList;
extern PACKAGE GUID IID_IMdcCombo;
extern PACKAGE GUID IID_IMdcCheckBox;
extern PACKAGE GUID IID_IMdcOptionButton;
extern PACKAGE GUID IID_IMdcToggleButton;
extern PACKAGE GUID IID_IScrollbar;
extern PACKAGE GUID IID_Tab;
extern PACKAGE GUID IID_Tabs;
extern PACKAGE GUID IID_ITabStrip;
extern PACKAGE GUID IID_ISpinbutton;
extern PACKAGE GUID IID_IImage;
extern PACKAGE GUID IID_IWHTMLSubmitButton;
extern PACKAGE GUID IID_IWHTMLImage;
extern PACKAGE GUID IID_IWHTMLReset;
extern PACKAGE GUID IID_IWHTMLCheckbox;
extern PACKAGE GUID IID_IWHTMLOption;
extern PACKAGE GUID IID_IWHTMLText;
extern PACKAGE GUID IID_IWHTMLHidden;
extern PACKAGE GUID IID_IWHTMLPassword;
extern PACKAGE GUID IID_IWHTMLSelect;
extern PACKAGE GUID IID_IWHTMLTextArea;
extern PACKAGE GUID DIID_LabelControlEvents;
extern PACKAGE GUID CLASS_Label_;
extern PACKAGE GUID DIID_CommandButtonEvents;
extern PACKAGE GUID CLASS_CommandButton;
extern PACKAGE GUID DIID_MdcTextEvents;
extern PACKAGE GUID CLASS_TextBox;
extern PACKAGE GUID DIID_MdcListEvents;
extern PACKAGE GUID CLASS_ListBox;
extern PACKAGE GUID DIID_MdcComboEvents;
extern PACKAGE GUID CLASS_ComboBox;
extern PACKAGE GUID DIID_MdcCheckBoxEvents;
extern PACKAGE GUID DIID_MdcOptionButtonEvents;
extern PACKAGE GUID DIID_MdcToggleButtonEvents;
extern PACKAGE GUID CLASS_CheckBox;
extern PACKAGE GUID CLASS_OptionButton;
extern PACKAGE GUID CLASS_ToggleButton;
extern PACKAGE GUID CLASS_NewFont;
extern PACKAGE GUID DIID_ScrollbarEvents;
extern PACKAGE GUID CLASS_ScrollBar;
extern PACKAGE GUID DIID_TabStripEvents;
extern PACKAGE GUID CLASS_TabStrip;
extern PACKAGE GUID DIID_SpinbuttonEvents;
extern PACKAGE GUID CLASS_SpinButton;
extern PACKAGE GUID DIID_ImageEvents;
extern PACKAGE GUID CLASS_Image;
extern PACKAGE GUID DIID_WHTMLControlEvents;
extern PACKAGE GUID DIID_WHTMLControlEvents1;
extern PACKAGE GUID DIID_WHTMLControlEvents2;
extern PACKAGE GUID DIID_WHTMLControlEvents3;
extern PACKAGE GUID DIID_WHTMLControlEvents4;
extern PACKAGE GUID DIID_WHTMLControlEvents5;
extern PACKAGE GUID DIID_WHTMLControlEvents6;
extern PACKAGE GUID DIID_WHTMLControlEvents7;
extern PACKAGE GUID DIID_WHTMLControlEvents9;
extern PACKAGE GUID DIID_WHTMLControlEvents10;
extern PACKAGE GUID CLASS_HTMLSubmit;
extern PACKAGE GUID CLASS_HTMLImage;
extern PACKAGE GUID CLASS_HTMLReset;
extern PACKAGE GUID CLASS_HTMLCheckbox;
extern PACKAGE GUID CLASS_HTMLOption;
extern PACKAGE GUID CLASS_HTMLText;
extern PACKAGE GUID CLASS_HTMLHidden;
extern PACKAGE GUID CLASS_HTMLPassword;
extern PACKAGE GUID CLASS_HTMLSelect;
extern PACKAGE GUID CLASS_HTMLTextArea;
extern PACKAGE GUID IID_IPage;
extern PACKAGE GUID IID_Pages;
extern PACKAGE GUID IID_IMultiPage;
extern PACKAGE GUID DIID_MultiPageEvents;
extern PACKAGE GUID CLASS_MultiPage;
extern PACKAGE GUID CLASS_Page;
static const Shortint fmDropEffectNone = 0x0;
static const Shortint fmDropEffectCopy = 0x1;
static const Shortint fmDropEffectMove = 0x2;
static const Shortint fmDropEffectCopyOrMove = 0x3;
static const Shortint fmActionCut = 0x0;
static const Shortint fmActionCopy = 0x1;
static const Shortint fmActionPaste = 0x2;
static const Shortint fmActionDragDrop = 0x3;
static const unsigned fmModeInherit = 0xfffffffe;
static const unsigned fmModeOn = 0xffffffff;
static const Shortint fmModeOff = 0x0;
static const Shortint fmMousePointerDefault = 0x0;
static const Shortint fmMousePointerArrow = 0x1;
static const Shortint fmMousePointerCross = 0x2;
static const Shortint fmMousePointerIBeam = 0x3;
static const Shortint fmMousePointerSizeNESW = 0x6;
static const Shortint fmMousePointerSizeNS = 0x7;
static const Shortint fmMousePointerSizeNWSE = 0x8;
static const Shortint fmMousePointerSizeWE = 0x9;
static const Shortint fmMousePointerUpArrow = 0xa;
static const Shortint fmMousePointerHourGlass = 0xb;
static const Shortint fmMousePointerNoDrop = 0xc;
static const Shortint fmMousePointerAppStarting = 0xd;
static const Shortint fmMousePointerHelp = 0xe;
static const Shortint fmMousePointerSizeAll = 0xf;
static const Shortint fmMousePointerCustom = 0x63;
static const Shortint fmScrollBarsNone = 0x0;
static const Shortint fmScrollBarsHorizontal = 0x1;
static const Shortint fmScrollBarsVertical = 0x2;
static const Shortint fmScrollBarsBoth = 0x3;
static const Shortint fmScrollActionNoChange = 0x0;
static const Shortint fmScrollActionLineUp = 0x1;
static const Shortint fmScrollActionLineDown = 0x2;
static const Shortint fmScrollActionPageUp = 0x3;
static const Shortint fmScrollActionPageDown = 0x4;
static const Shortint fmScrollActionBegin = 0x5;
static const Shortint fmScrollActionEnd = 0x6;
static const Shortint _fmScrollActionAbsoluteChange = 0x7;
static const Shortint fmScrollActionPropertyChange = 0x8;
static const Shortint fmScrollActionControlRequest = 0x9;
static const Shortint fmScrollActionFocusRequest = 0xa;
static const Shortint fmCycleAllForms = 0x0;
static const Shortint fmCycleCurrentForm = 0x2;
static const Shortint fmZOrderFront = 0x0;
static const Shortint fmZOrderBack = 0x1;
static const Shortint fmBorderStyleNone = 0x0;
static const Shortint fmBorderStyleSingle = 0x1;
static const Shortint fmTextAlignLeft = 0x1;
static const Shortint fmTextAlignCenter = 0x2;
static const Shortint fmTextAlignRight = 0x3;
static const Shortint fmAlignmentLeft = 0x0;
static const Shortint fmAlignmentRight = 0x1;
static const Shortint fmBordersNone = 0x0;
static const Shortint fmBordersBox = 0x1;
static const Shortint fmBordersLeft = 0x2;
static const Shortint fmBordersTop = 0x3;
static const Shortint fmBackStyleTransparent = 0x0;
static const Shortint fmBackStyleOpaque = 0x1;
static const Shortint fmButtonStylePushButton = 0x0;
static const Shortint fmButtonStyleToggleButton = 0x1;
static const Shortint fmPicPositionCenter = 0x0;
static const Shortint fmPicPositionTopLeft = 0x1;
static const Shortint fmPicPositionTopCenter = 0x2;
static const Shortint fmPicPositionTopRight = 0x3;
static const Shortint fmPicPositionCenterLeft = 0x4;
static const Shortint fmPicPositionCenterRight = 0x5;
static const Shortint fmPicPositionBottomLeft = 0x6;
static const Shortint fmPicPositionBottomCenter = 0x7;
static const Shortint fmPicPositionBottomRight = 0x8;
static const Shortint fmVerticalScrollBarSideRight = 0x0;
static const Shortint fmVerticalScrollBarSideLeft = 0x1;
static const Shortint fmLayoutEffectNone = 0x0;
static const Shortint fmLayoutEffectInitiate = 0x1;
static const Shortint _fmLayoutEffectRespond = 0x2;
static const Shortint fmSpecialEffectFlat = 0x0;
static const Shortint fmSpecialEffectRaised = 0x1;
static const Shortint fmSpecialEffectSunken = 0x2;
static const Shortint fmSpecialEffectEtched = 0x3;
static const Shortint fmSpecialEffectBump = 0x6;
static const Shortint fmDragStateEnter = 0x0;
static const Shortint fmDragStateLeave = 0x1;
static const Shortint fmDragStateOver = 0x2;
static const Shortint fmPictureSizeModeClip = 0x0;
static const Shortint fmPictureSizeModeStretch = 0x1;
static const Shortint fmPictureSizeModeZoom = 0x3;
static const Shortint fmPictureAlignmentTopLeft = 0x0;
static const Shortint fmPictureAlignmentTopRight = 0x1;
static const Shortint fmPictureAlignmentCenter = 0x2;
static const Shortint fmPictureAlignmentBottomLeft = 0x3;
static const Shortint fmPictureAlignmentBottomRight = 0x4;
static const Shortint fmButtonEffectFlat = 0x0;
static const Shortint fmButtonEffectSunken = 0x2;
static const unsigned fmOrientationAuto = 0xffffffff;
static const Shortint fmOrientationVertical = 0x0;
static const Shortint fmOrientationHorizontal = 0x1;
static const Shortint fmSnapPointTopLeft = 0x0;
static const Shortint fmSnapPointTopCenter = 0x1;
static const Shortint fmSnapPointTopRight = 0x2;
static const Shortint fmSnapPointCenterLeft = 0x3;
static const Shortint fmSnapPointCenter = 0x4;
static const Shortint fmSnapPointCenterRight = 0x5;
static const Shortint fmSnapPointBottomLeft = 0x6;
static const Shortint fmSnapPointBottomCenter = 0x7;
static const Shortint fmSnapPointBottomRight = 0x8;
static const Shortint fmPicturePositionLeftTop = 0x0;
static const Shortint fmPicturePositionLeftCenter = 0x1;
static const Shortint fmPicturePositionLeftBottom = 0x2;
static const Shortint fmPicturePositionRightTop = 0x3;
static const Shortint fmPicturePositionRightCenter = 0x4;
static const Shortint fmPicturePositionRightBottom = 0x5;
static const Shortint fmPicturePositionAboveLeft = 0x6;
static const Shortint fmPicturePositionAboveCenter = 0x7;
static const Shortint fmPicturePositionAboveRight = 0x8;
static const Shortint fmPicturePositionBelowLeft = 0x9;
static const Shortint fmPicturePositionBelowCenter = 0xa;
static const Shortint fmPicturePositionBelowRight = 0xb;
static const Shortint fmPicturePositionCenter = 0xc;
static const Shortint fmDisplayStyleText = 0x1;
static const Shortint fmDisplayStyleList = 0x2;
static const Shortint fmDisplayStyleCombo = 0x3;
static const Shortint fmDisplayStyleCheckBox = 0x4;
static const Shortint fmDisplayStyleOptionButton = 0x5;
static const Shortint fmDisplayStyleToggle = 0x6;
static const Shortint fmDisplayStyleDropList = 0x7;
static const Shortint fmShowListWhenNever = 0x0;
static const Shortint fmShowListWhenButton = 0x1;
static const Shortint fmShowListWhenFocus = 0x2;
static const Shortint fmShowListWhenAlways = 0x3;
static const Shortint fmShowDropButtonWhenNever = 0x0;
static const Shortint fmShowDropButtonWhenFocus = 0x1;
static const Shortint fmShowDropButtonWhenAlways = 0x2;
static const Shortint fmMultiSelectSingle = 0x0;
static const Shortint fmMultiSelectMulti = 0x1;
static const Shortint fmMultiSelectExtended = 0x2;
static const Shortint fmListStylePlain = 0x0;
static const Shortint fmListStyleOption = 0x1;
static const Shortint fmEnterFieldBehaviorSelectAll = 0x0;
static const Shortint fmEnterFieldBehaviorRecallSelection = 0x1;
static const Shortint fmDragBehaviorDisabled = 0x0;
static const Shortint fmDragBehaviorEnabled = 0x1;
static const Shortint fmMatchEntryFirstLetter = 0x0;
static const Shortint fmMatchEntryComplete = 0x1;
static const Shortint fmMatchEntryNone = 0x2;
static const Shortint fmDropButtonStylePlain = 0x0;
static const Shortint fmDropButtonStyleArrow = 0x1;
static const Shortint fmDropButtonStyleEllipsis = 0x2;
static const Shortint fmDropButtonStyleReduce = 0x3;
static const Shortint fmStyleDropDownCombo = 0x0;
static const Shortint fmStyleDropDownList = 0x2;
static const Shortint fmTabOrientationTop = 0x0;
static const Shortint fmTabOrientationBottom = 0x1;
static const Shortint fmTabOrientationLeft = 0x2;
static const Shortint fmTabOrientationRight = 0x3;
static const Shortint fmTabStyleTabs = 0x0;
static const Shortint fmTabStyleButtons = 0x1;
static const Shortint fmTabStyleNone = 0x2;
static const Shortint fmIMEModeNoControl = 0x0;
static const Shortint fmIMEModeOn = 0x1;
static const Shortint fmIMEModeOff = 0x2;
static const Shortint fmIMEModeDisable = 0x3;
static const Shortint fmIMEModeHiragana = 0x4;
static const Shortint fmIMEModeKatakana = 0x5;
static const Shortint fmIMEModeKatakanaHalf = 0x6;
static const Shortint fmIMEModeAlphaFull = 0x7;
static const Shortint fmIMEModeAlpha = 0x8;
static const Shortint fmIMEModeHangulFull = 0x9;
static const Shortint fmIMEModeHangul = 0xa;
static const Shortint fmIMEModeHanziFull = 0xb;
static const Shortint fmIMEModeHanzi = 0xc;
static const Shortint fmTransitionEffectNone = 0x0;
static const Shortint fmTransitionEffectCoverUp = 0x1;
static const Shortint fmTransitionEffectCoverRightUp = 0x2;
static const Shortint fmTransitionEffectCoverRight = 0x3;
static const Shortint fmTransitionEffectCoverRightDown = 0x4;
static const Shortint fmTransitionEffectCoverDown = 0x5;
static const Shortint fmTransitionEffectCoverLeftDown = 0x6;
static const Shortint fmTransitionEffectCoverLeft = 0x7;
static const Shortint fmTransitionEffectCoverLeftUp = 0x8;
static const Shortint fmTransitionEffectPushUp = 0x9;
static const Shortint fmTransitionEffectPushRight = 0xa;
static const Shortint fmTransitionEffectPushDown = 0xb;
static const Shortint fmTransitionEffectPushLeft = 0xc;
static const Shortint _fmListBoxStylesNone = 0x0;
static const Shortint _fmListBoxStylesListBox = 0x1;
static const Shortint _fmListBoxStylesComboBox = 0x2;
static const Shortint _fmRepeatDirectionHorizontal = 0x0;
static const Shortint _fmRepeatDirectionVertical = 0x1;
static const Shortint _fmEnAutoSizeNone = 0x0;
static const Shortint _fmEnAutoSizeHorizontal = 0x1;
static const Shortint _fmEnAutoSizeVertical = 0x2;
static const Shortint _fmEnAutoSizeBoth = 0x3;

}	/* namespace Opfrms97 */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Opfrms97;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// OpFrms97
