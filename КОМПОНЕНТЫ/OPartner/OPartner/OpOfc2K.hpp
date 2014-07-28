// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'OpOfc2K.pas' rev: 5.00

#ifndef OpOfc2KHPP
#define OpOfc2KHPP

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

namespace Opofc2k
{
//-- type declarations -------------------------------------------------------
typedef Activex::TOleEnum MsoLineDashStyle;

typedef Activex::TOleEnum MsoLineStyle;

typedef Activex::TOleEnum MsoArrowheadStyle;

typedef Activex::TOleEnum MsoArrowheadWidth;

typedef Activex::TOleEnum MsoArrowheadLength;

typedef Activex::TOleEnum MsoFillType;

typedef Activex::TOleEnum MsoGradientStyle;

typedef Activex::TOleEnum MsoGradientColorType;

typedef Activex::TOleEnum MsoTextureType;

typedef Activex::TOleEnum MsoPresetTexture;

typedef Activex::TOleEnum MsoPatternType;

typedef Activex::TOleEnum MsoPresetGradientType;

typedef Activex::TOleEnum MsoShadowType;

typedef Activex::TOleEnum MsoPresetTextEffect;

typedef Activex::TOleEnum MsoPresetTextEffectShape;

typedef Activex::TOleEnum MsoTextEffectAlignment;

typedef Activex::TOleEnum MsoPresetLightingDirection;

typedef Activex::TOleEnum MsoPresetLightingSoftness;

typedef Activex::TOleEnum MsoPresetMaterial;

typedef Activex::TOleEnum MsoPresetExtrusionDirection;

typedef Activex::TOleEnum MsoPresetThreeDFormat;

typedef Activex::TOleEnum MsoExtrusionColorType;

typedef Activex::TOleEnum MsoAlignCmd;

typedef Activex::TOleEnum MsoDistributeCmd;

typedef Activex::TOleEnum MsoConnectorType;

typedef Activex::TOleEnum MsoHorizontalAnchor;

typedef Activex::TOleEnum MsoVerticalAnchor;

typedef Activex::TOleEnum MsoOrientation;

typedef Activex::TOleEnum MsoZOrderCmd;

typedef Activex::TOleEnum MsoSegmentType;

typedef Activex::TOleEnum MsoEditingType;

typedef Activex::TOleEnum MsoAutoShapeType;

typedef Activex::TOleEnum MsoShapeType;

typedef Activex::TOleEnum MsoFlipCmd;

typedef Activex::TOleEnum MsoTriState;

typedef Activex::TOleEnum MsoColorType;

typedef Activex::TOleEnum MsoPictureColorType;

typedef Activex::TOleEnum MsoCalloutAngleType;

typedef Activex::TOleEnum MsoCalloutDropType;

typedef Activex::TOleEnum MsoCalloutType;

typedef Activex::TOleEnum MsoBlackWhiteMode;

typedef Activex::TOleEnum MsoMixedType;

typedef Activex::TOleEnum MsoTextOrientation;

typedef Activex::TOleEnum MsoScaleFrom;

typedef Activex::TOleEnum MsoBarPosition;

typedef Activex::TOleEnum MsoBarProtection;

typedef Activex::TOleEnum MsoBarType;

typedef Activex::TOleEnum MsoControlType;

typedef Activex::TOleEnum MsoButtonState;

typedef Activex::TOleEnum MsoControlOLEUsage;

typedef Activex::TOleEnum MsoButtonStyleHidden;

typedef Activex::TOleEnum MsoButtonStyle;

typedef Activex::TOleEnum MsoComboStyle;

typedef Activex::TOleEnum MsoOLEMenuGroup;

typedef Activex::TOleEnum MsoMenuAnimation;

typedef Activex::TOleEnum MsoBarRow;

typedef Activex::TOleEnum MsoCommandBarButtonHyperlinkType;

typedef Activex::TOleEnum MsoHyperlinkType;

typedef Activex::TOleEnum MsoExtraInfoMethod;

typedef Activex::TOleEnum MsoAnimationType;

typedef Activex::TOleEnum MsoButtonSetType;

typedef Activex::TOleEnum MsoIconType;

typedef Activex::TOleEnum MsoBalloonType;

typedef Activex::TOleEnum MsoModeType;

typedef Activex::TOleEnum MsoBalloonErrorType;

typedef Activex::TOleEnum MsoWizardActType;

typedef Activex::TOleEnum MsoWizardMsgType;

typedef Activex::TOleEnum MsoBalloonButtonType;

typedef Activex::TOleEnum DocProperties;

typedef Activex::TOleEnum MsoDocProperties;

typedef Activex::TOleEnum MsoAppLanguageID;

typedef Activex::TOleEnum MsoFarEastLineBreakLanguageID;

typedef Activex::TOleEnum MsoFeatureInstall;

typedef Activex::TOleEnum MsoScriptLanguage;

typedef Activex::TOleEnum MsoScriptLocation;

typedef Activex::TOleEnum MsoFileFindOptions;

typedef Activex::TOleEnum MsoFileFindView;

typedef Activex::TOleEnum MsoFileFindSortBy;

typedef Activex::TOleEnum MsoFileFindListBy;

typedef Activex::TOleEnum MsoLastModified;

typedef Activex::TOleEnum MsoSortBy;

typedef Activex::TOleEnum MsoSortOrder;

typedef Activex::TOleEnum MsoConnector;

typedef Activex::TOleEnum MsoCondition;

typedef Activex::TOleEnum MsoFileType;

typedef Activex::TOleEnum MsoLanguageID;

typedef Activex::TOleEnum MsoScreenSize;

typedef Activex::TOleEnum MsoCharacterSet;

typedef Activex::TOleEnum MsoEncoding;

typedef Activex::TOleEnum MsoHTMLProjectOpen;

typedef Activex::TOleEnum MsoHTMLProjectState;

__interface _CommandBars;
typedef System::DelphiInterface<_CommandBars> _di__CommandBars;
__interface _IMsoDispObj;
typedef System::DelphiInterface<_IMsoDispObj> _di__IMsoDispObj;
__interface INTERFACE_UUID("{000C0300-0000-0000-C000-000000000046}") _IMsoDispObj  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di_IDispatch &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Creator(int &Get_Creator_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Application_() { _di_IDispatch r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Creator() { int r; HRESULT hr = Get_Creator(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Creator = {read=_scw_Get_Creator};
};

__interface CommandBarControl;
typedef System::DelphiInterface<CommandBarControl> _di_CommandBarControl;
__interface CommandBar;
typedef System::DelphiInterface<CommandBar> _di_CommandBar;
__interface CommandBarControls;
typedef System::DelphiInterface<CommandBarControls> _di_CommandBarControls;
__interface INTERFACE_UUID("{000C0302-0000-0000-C000-000000000046}") _CommandBars  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_ActionControl(_di_CommandBarControl &Get_ActionControl_result) = 0 ;
		
	virtual HRESULT __safecall Get_ActiveMenuBar(_di_CommandBar &Get_ActiveMenuBar_result) = 0 ;
	virtual HRESULT __safecall Add(const OleVariant Name, const OleVariant Position, const OleVariant MenuBar
		, const OleVariant Temporary, _di_CommandBar &Add_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Get_DisplayTooltips(Word &Get_DisplayTooltips_result) = 0 ;
	virtual HRESULT __safecall Set_DisplayTooltips(Word pvarfDisplayTooltips) = 0 ;
	virtual HRESULT __safecall Get_DisplayKeysInTooltips(Word &Get_DisplayKeysInTooltips_result) = 0 ;
	virtual HRESULT __safecall Set_DisplayKeysInTooltips(Word pvarfDisplayKeys) = 0 ;
	virtual HRESULT __safecall FindControl(const OleVariant Type_, const OleVariant Id, const OleVariant 
		Tag, const OleVariant Visible, _di_CommandBarControl &FindControl_result) = 0 ;
	virtual HRESULT __safecall Get_Item(const OleVariant Index, _di_CommandBar &Get_Item_result) = 0 ;
	virtual HRESULT __safecall Get_LargeButtons(Word &Get_LargeButtons_result) = 0 ;
	virtual HRESULT __safecall Set_LargeButtons(Word pvarfLargeButtons) = 0 ;
	virtual HRESULT __safecall Get_MenuAnimationStyle(Activex::TOleEnum &Get_MenuAnimationStyle_result)
		 = 0 ;
	virtual HRESULT __safecall Set_MenuAnimationStyle(Activex::TOleEnum pma) = 0 ;
	virtual HRESULT __safecall Get__NewEnum(_di_IUnknown &Get__NewEnum_result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall ReleaseFocus(void) = 0 ;
	virtual HRESULT __safecall Get_IdsString(int ids, /* out */ WideString &pbstrName, int &Get_IdsString_result
		) = 0 ;
	virtual HRESULT __safecall Get_TmcGetName(int tmc, /* out */ WideString &pbstrName, int &Get_TmcGetName_result
		) = 0 ;
	virtual HRESULT __safecall Get_AdaptiveMenus(Word &Get_AdaptiveMenus_result) = 0 ;
	virtual HRESULT __safecall Set_AdaptiveMenus(Word pvarfAdaptiveMenus) = 0 ;
	virtual HRESULT __safecall FindControls(const OleVariant Type_, const OleVariant Id, const OleVariant 
		Tag, const OleVariant Visible, _di_CommandBarControls &FindControls_result) = 0 ;
	virtual HRESULT __safecall AddEx(const OleVariant TbidOrName, const OleVariant Position, const OleVariant 
		MenuBar, const OleVariant Temporary, const OleVariant TbtrProtection, _di_CommandBar &AddEx_result
		) = 0 ;
	virtual HRESULT __safecall Get_DisplayFonts(Word &Get_DisplayFonts_result) = 0 ;
	virtual HRESULT __safecall Set_DisplayFonts(Word pvarfDisplayFonts) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_CommandBarControl _scw_Get_ActionControl() { _di_CommandBarControl r; HRESULT hr = Get_ActionControl(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_CommandBarControl ActionControl = {read=_scw_Get_ActionControl};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_CommandBar _scw_Get_ActiveMenuBar() { _di_CommandBar r; HRESULT hr = Get_ActiveMenuBar(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_CommandBar ActiveMenuBar = {read=_scw_Get_ActiveMenuBar};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Count() { int r; HRESULT hr = Get_Count(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Count = {read=_scw_Get_Count};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_DisplayTooltips() { Word r; HRESULT hr = Get_DisplayTooltips(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word DisplayTooltips = {read=_scw_Get_DisplayTooltips, write=Set_DisplayTooltips};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_DisplayKeysInTooltips() { Word r; HRESULT hr = Get_DisplayKeysInTooltips(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word DisplayKeysInTooltips = {read=_scw_Get_DisplayKeysInTooltips, write=Set_DisplayKeysInTooltips
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_CommandBar _scw_Get_Item(const OleVariant Index) { _di_CommandBar r; HRESULT hr = Get_Item(
		Index, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_CommandBar Item[OleVariant Index] = {read=_scw_Get_Item/*, default*/};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_LargeButtons() { Word r; HRESULT hr = Get_LargeButtons(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word LargeButtons = {read=_scw_Get_LargeButtons, write=Set_LargeButtons};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_MenuAnimationStyle() { Activex::TOleEnum r; HRESULT hr = Get_MenuAnimationStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum MenuAnimationStyle = {read=_scw_Get_MenuAnimationStyle, write=Set_MenuAnimationStyle
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IUnknown _scw_Get__NewEnum() { _di_IUnknown r; HRESULT hr = Get__NewEnum(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IUnknown _NewEnum = {read=_scw_Get__NewEnum};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_IdsString(int ids, /* out */ WideString &pbstrName) { int r; HRESULT hr = Get_IdsString(
		ids, pbstrName, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int IdsString[int ids][WideString pbstrName] = {read=_scw_Get_IdsString};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_TmcGetName(int tmc, /* out */ WideString &pbstrName) { int r; HRESULT hr = Get_TmcGetName(
		tmc, pbstrName, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int TmcGetName[int tmc][WideString pbstrName] = {read=_scw_Get_TmcGetName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_AdaptiveMenus() { Word r; HRESULT hr = Get_AdaptiveMenus(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word AdaptiveMenus = {read=_scw_Get_AdaptiveMenus, write=Set_AdaptiveMenus};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_DisplayFonts() { Word r; HRESULT hr = Get_DisplayFonts(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word DisplayFonts = {read=_scw_Get_DisplayFonts, write=Set_DisplayFonts};
};
typedef _CommandBars CommandBars;

__interface _CommandBarComboBox;
typedef System::DelphiInterface<_CommandBarComboBox> _di__CommandBarComboBox;
__interface _IMsoOleAccDispObj;
typedef System::DelphiInterface<_IMsoOleAccDispObj> _di__IMsoOleAccDispObj;
__interface IAccessible;
typedef System::DelphiInterface<IAccessible> _di_IAccessible;
__interface INTERFACE_UUID("{618736E0-3C3D-11CF-810C-00AA00389B71}") IAccessible  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_accParent(_di_IDispatch &Get_accParent_result) = 0 ;
	virtual HRESULT __safecall Get_accChildCount(int &Get_accChildCount_result) = 0 ;
	virtual HRESULT __safecall Get_accChild(const OleVariant varChild, _di_IDispatch &Get_accChild_result
		) = 0 ;
	virtual HRESULT __safecall Get_accName(const OleVariant varChild, WideString &Get_accName_result) = 0 
		;
	virtual HRESULT __safecall Get_accValue(const OleVariant varChild, WideString &Get_accValue_result)
		 = 0 ;
	virtual HRESULT __safecall Get_accDescription(const OleVariant varChild, WideString &Get_accDescription_result
		) = 0 ;
	virtual HRESULT __safecall Get_accRole(const OleVariant varChild, OleVariant &Get_accRole_result) = 0 
		;
	virtual HRESULT __safecall Get_accState(const OleVariant varChild, OleVariant &Get_accState_result)
		 = 0 ;
	virtual HRESULT __safecall Get_accHelp(const OleVariant varChild, WideString &Get_accHelp_result) = 0 
		;
	virtual HRESULT __safecall Get_accHelpTopic(/* out */ WideString &pszHelpFile, const OleVariant varChild
		, int &Get_accHelpTopic_result) = 0 ;
	virtual HRESULT __safecall Get_accKeyboardShortcut(const OleVariant varChild, WideString &Get_accKeyboardShortcut_result
		) = 0 ;
	virtual HRESULT __safecall Get_accFocus(OleVariant &Get_accFocus_result) = 0 ;
	virtual HRESULT __safecall Get_accSelection(OleVariant &Get_accSelection_result) = 0 ;
	virtual HRESULT __safecall Get_accDefaultAction(const OleVariant varChild, WideString &Get_accDefaultAction_result
		) = 0 ;
	virtual HRESULT __safecall accSelect(int flagsSelect, const OleVariant varChild) = 0 ;
	virtual HRESULT __safecall accLocation(/* out */ int &pxLeft, /* out */ int &pyTop, /* out */ int &
		pcxWidth, /* out */ int &pcyHeight, const OleVariant varChild) = 0 ;
	virtual HRESULT __safecall accNavigate(int navDir, const OleVariant varStart, OleVariant &accNavigate_result
		) = 0 ;
	virtual HRESULT __safecall accHitTest(int xLeft, int yTop, OleVariant &accHitTest_result) = 0 ;
	virtual HRESULT __safecall accDoDefaultAction(const OleVariant varChild) = 0 ;
	virtual HRESULT __safecall Set_accName(const OleVariant varChild, const WideString pszName) = 0 ;
	virtual HRESULT __safecall Set_accValue(const OleVariant varChild, const WideString pszValue) = 0 ;
		
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_accParent() { _di_IDispatch r; HRESULT hr = Get_accParent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch accParent = {read=_scw_Get_accParent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_accChildCount() { int r; HRESULT hr = Get_accChildCount(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int accChildCount = {read=_scw_Get_accChildCount};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_accChild(const OleVariant varChild) { _di_IDispatch r; HRESULT hr = Get_accChild(
		varChild, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch accChild[OleVariant varChild] = {read=_scw_Get_accChild};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_accName(const OleVariant varChild) { WideString r; HRESULT hr = Get_accName(
		varChild, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString accName[OleVariant varChild] = {read=_scw_Get_accName, write=Set_accName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_accValue(const OleVariant varChild) { WideString r; HRESULT hr = Get_accValue(
		varChild, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString accValue[OleVariant varChild] = {read=_scw_Get_accValue, write=Set_accValue};
		
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_accDescription(const OleVariant varChild) { WideString r; HRESULT hr = Get_accDescription(
		varChild, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString accDescription[OleVariant varChild] = {read=_scw_Get_accDescription};
	#pragma option push -w-inl
	/* safecall wrapper */ inline OleVariant _scw_Get_accRole(const OleVariant varChild) { OleVariant r; HRESULT hr = Get_accRole(
		varChild, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property OleVariant accRole[OleVariant varChild] = {read=_scw_Get_accRole};
	#pragma option push -w-inl
	/* safecall wrapper */ inline OleVariant _scw_Get_accState(const OleVariant varChild) { OleVariant r; HRESULT hr = Get_accState(
		varChild, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property OleVariant accState[OleVariant varChild] = {read=_scw_Get_accState};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_accHelp(const OleVariant varChild) { WideString r; HRESULT hr = Get_accHelp(
		varChild, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString accHelp[OleVariant varChild] = {read=_scw_Get_accHelp};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_accHelpTopic(/* out */ WideString &pszHelpFile, const OleVariant 
		varChild) { int r; HRESULT hr = Get_accHelpTopic(pszHelpFile, varChild, r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int accHelpTopic[WideString pszHelpFile][OleVariant varChild] = {read=_scw_Get_accHelpTopic
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_accKeyboardShortcut(const OleVariant varChild) { WideString r; HRESULT hr = Get_accKeyboardShortcut(
		varChild, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString accKeyboardShortcut[OleVariant varChild] = {read=_scw_Get_accKeyboardShortcut
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline OleVariant _scw_Get_accFocus() { OleVariant r; HRESULT hr = Get_accFocus(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property OleVariant accFocus = {read=_scw_Get_accFocus};
	#pragma option push -w-inl
	/* safecall wrapper */ inline OleVariant _scw_Get_accSelection() { OleVariant r; HRESULT hr = Get_accSelection(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property OleVariant accSelection = {read=_scw_Get_accSelection};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_accDefaultAction(const OleVariant varChild) { WideString r; HRESULT hr = Get_accDefaultAction(
		varChild, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString accDefaultAction[OleVariant varChild] = {read=_scw_Get_accDefaultAction};
};

__interface INTERFACE_UUID("{000C0301-0000-0000-C000-000000000046}") _IMsoOleAccDispObj  : public IAccessible 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di_IDispatch &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Creator(int &Get_Creator_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Application_() { _di_IDispatch r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Creator() { int r; HRESULT hr = Get_Creator(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Creator = {read=_scw_Get_Creator};
};

__interface INTERFACE_UUID("{000C0308-0000-0000-C000-000000000046}") CommandBarControl  : public _IMsoOleAccDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_BeginGroup(Word &Get_BeginGroup_result) = 0 ;
	virtual HRESULT __safecall Set_BeginGroup(Word pvarfBeginGroup) = 0 ;
	virtual HRESULT __safecall Get_BuiltIn(Word &Get_BuiltIn_result) = 0 ;
	virtual HRESULT __safecall Get_Caption(WideString &Get_Caption_result) = 0 ;
	virtual HRESULT __safecall Set_Caption(const WideString pbstrCaption) = 0 ;
	virtual HRESULT __safecall Get_Control(_di_IDispatch &Get_Control_result) = 0 ;
	virtual HRESULT __safecall Copy(const OleVariant Bar, const OleVariant Before, _di_CommandBarControl &Copy_result
		) = 0 ;
	virtual HRESULT __safecall Delete(const OleVariant Temporary) = 0 ;
	virtual HRESULT __safecall Get_DescriptionText(WideString &Get_DescriptionText_result) = 0 ;
	virtual HRESULT __safecall Set_DescriptionText(const WideString pbstrText) = 0 ;
	virtual HRESULT __safecall Get_Enabled(Word &Get_Enabled_result) = 0 ;
	virtual HRESULT __safecall Set_Enabled(Word pvarfEnabled) = 0 ;
	virtual HRESULT __safecall Execute(void) = 0 ;
	virtual HRESULT __safecall Get_Height(int &Get_Height_result) = 0 ;
	virtual HRESULT __safecall Set_Height(int pdy) = 0 ;
	virtual HRESULT __safecall Get_HelpContextId(int &Get_HelpContextId_result) = 0 ;
	virtual HRESULT __safecall Set_HelpContextId(int pid) = 0 ;
	virtual HRESULT __safecall Get_HelpFile(WideString &Get_HelpFile_result) = 0 ;
	virtual HRESULT __safecall Set_HelpFile(const WideString pbstrFilename) = 0 ;
	virtual HRESULT __safecall Get_Id(int &Get_Id_result) = 0 ;
	virtual HRESULT __safecall Get_Index(int &Get_Index_result) = 0 ;
	virtual HRESULT __safecall Get_InstanceId(int &Get_InstanceId_result) = 0 ;
	virtual HRESULT __safecall Move(const OleVariant Bar, const OleVariant Before, _di_CommandBarControl &Move_result
		) = 0 ;
	virtual HRESULT __safecall Get_Left(int &Get_Left_result) = 0 ;
	virtual HRESULT __safecall Get_OLEUsage(Activex::TOleEnum &Get_OLEUsage_result) = 0 ;
	virtual HRESULT __safecall Set_OLEUsage(Activex::TOleEnum pcou) = 0 ;
	virtual HRESULT __safecall Get_OnAction(WideString &Get_OnAction_result) = 0 ;
	virtual HRESULT __safecall Set_OnAction(const WideString pbstrOnAction) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_CommandBar &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Parameter(WideString &Get_Parameter_result) = 0 ;
	virtual HRESULT __safecall Set_Parameter(const WideString pbstrParam) = 0 ;
	virtual HRESULT __safecall Get_Priority(int &Get_Priority_result) = 0 ;
	virtual HRESULT __safecall Set_Priority(int pnPri) = 0 ;
	virtual HRESULT __safecall Reset(void) = 0 ;
	virtual HRESULT __safecall SetFocus(void) = 0 ;
	virtual HRESULT __safecall Get_Tag(WideString &Get_Tag_result) = 0 ;
	virtual HRESULT __safecall Set_Tag(const WideString pbstrTag) = 0 ;
	virtual HRESULT __safecall Get_TooltipText(WideString &Get_TooltipText_result) = 0 ;
	virtual HRESULT __safecall Set_TooltipText(const WideString pbstrTooltip) = 0 ;
	virtual HRESULT __safecall Get_Top(int &Get_Top_result) = 0 ;
	virtual HRESULT __safecall Get_Type_(Activex::TOleEnum &Get_Type__result) = 0 ;
	virtual HRESULT __safecall Get_Visible(Word &Get_Visible_result) = 0 ;
	virtual HRESULT __safecall Set_Visible(Word pvarfVisible) = 0 ;
	virtual HRESULT __safecall Get_Width(int &Get_Width_result) = 0 ;
	virtual HRESULT __safecall Set_Width(int pdx) = 0 ;
	virtual HRESULT __safecall Get_IsPriorityDropped(Word &Get_IsPriorityDropped_result) = 0 ;
	virtual HRESULT __safecall Reserved1(void) = 0 ;
	virtual HRESULT __safecall Reserved2(void) = 0 ;
	virtual HRESULT __safecall Reserved3(void) = 0 ;
	virtual HRESULT __safecall Reserved4(void) = 0 ;
	virtual HRESULT __safecall Reserved5(void) = 0 ;
	virtual HRESULT __safecall Reserved6(void) = 0 ;
	virtual HRESULT __safecall Reserved7(void) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_BeginGroup() { Word r; HRESULT hr = Get_BeginGroup(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word BeginGroup = {read=_scw_Get_BeginGroup, write=Set_BeginGroup};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_BuiltIn() { Word r; HRESULT hr = Get_BuiltIn(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word BuiltIn = {read=_scw_Get_BuiltIn};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Caption() { WideString r; HRESULT hr = Get_Caption(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Caption = {read=_scw_Get_Caption, write=Set_Caption};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Control() { _di_IDispatch r; HRESULT hr = Get_Control(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Control = {read=_scw_Get_Control};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_DescriptionText() { WideString r; HRESULT hr = Get_DescriptionText(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString DescriptionText = {read=_scw_Get_DescriptionText, write=Set_DescriptionText};
		
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Enabled() { Word r; HRESULT hr = Get_Enabled(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Enabled = {read=_scw_Get_Enabled, write=Set_Enabled};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Height() { int r; HRESULT hr = Get_Height(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Height = {read=_scw_Get_Height, write=Set_Height};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_HelpContextId() { int r; HRESULT hr = Get_HelpContextId(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int HelpContextId = {read=_scw_Get_HelpContextId, write=Set_HelpContextId};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_HelpFile() { WideString r; HRESULT hr = Get_HelpFile(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString HelpFile = {read=_scw_Get_HelpFile, write=Set_HelpFile};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Id() { int r; HRESULT hr = Get_Id(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Id = {read=_scw_Get_Id};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Index() { int r; HRESULT hr = Get_Index(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Index = {read=_scw_Get_Index};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_InstanceId() { int r; HRESULT hr = Get_InstanceId(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int InstanceId = {read=_scw_Get_InstanceId};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Left() { int r; HRESULT hr = Get_Left(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Left = {read=_scw_Get_Left};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_OLEUsage() { Activex::TOleEnum r; HRESULT hr = Get_OLEUsage(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum OLEUsage = {read=_scw_Get_OLEUsage, write=Set_OLEUsage};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnAction() { WideString r; HRESULT hr = Get_OnAction(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnAction = {read=_scw_Get_OnAction, write=Set_OnAction};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_CommandBar _scw_Get_Parent() { _di_CommandBar r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_CommandBar Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Parameter() { WideString r; HRESULT hr = Get_Parameter(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Parameter = {read=_scw_Get_Parameter, write=Set_Parameter};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Priority() { int r; HRESULT hr = Get_Priority(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Priority = {read=_scw_Get_Priority, write=Set_Priority};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Tag() { WideString r; HRESULT hr = Get_Tag(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Tag = {read=_scw_Get_Tag, write=Set_Tag};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_TooltipText() { WideString r; HRESULT hr = Get_TooltipText(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString TooltipText = {read=_scw_Get_TooltipText, write=Set_TooltipText};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Top() { int r; HRESULT hr = Get_Top(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Top = {read=_scw_Get_Top};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Type_() { Activex::TOleEnum r; HRESULT hr = Get_Type_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Type_ = {read=_scw_Get_Type_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Visible() { Word r; HRESULT hr = Get_Visible(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Visible = {read=_scw_Get_Visible, write=Set_Visible};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Width() { int r; HRESULT hr = Get_Width(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Width = {read=_scw_Get_Width, write=Set_Width};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_IsPriorityDropped() { Word r; HRESULT hr = Get_IsPriorityDropped(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word IsPriorityDropped = {read=_scw_Get_IsPriorityDropped};
};

__interface INTERFACE_UUID("{000C030C-0000-0000-C000-000000000046}") _CommandBarComboBox  : public CommandBarControl 
	
{
	
public:
	virtual HRESULT __safecall AddItem(const WideString Text, const OleVariant Index) = 0 ;
	virtual HRESULT __safecall Clear(void) = 0 ;
	virtual HRESULT __safecall Get_DropDownLines(int &Get_DropDownLines_result) = 0 ;
	virtual HRESULT __safecall Set_DropDownLines(int pcLines) = 0 ;
	virtual HRESULT __safecall Get_DropDownWidth(int &Get_DropDownWidth_result) = 0 ;
	virtual HRESULT __safecall Set_DropDownWidth(int pdx) = 0 ;
	virtual HRESULT __safecall Get_List(int Index, WideString &Get_List_result) = 0 ;
	virtual HRESULT __safecall Set_List(int Index, const WideString pbstrItem) = 0 ;
	virtual HRESULT __safecall Get_ListCount(int &Get_ListCount_result) = 0 ;
	virtual HRESULT __safecall Get_ListHeaderCount(int &Get_ListHeaderCount_result) = 0 ;
	virtual HRESULT __safecall Set_ListHeaderCount(int pcItems) = 0 ;
	virtual HRESULT __safecall Get_ListIndex(int &Get_ListIndex_result) = 0 ;
	virtual HRESULT __safecall Set_ListIndex(int pi) = 0 ;
	virtual HRESULT __safecall RemoveItem(int Index) = 0 ;
	virtual HRESULT __safecall Get_Style(Activex::TOleEnum &Get_Style_result) = 0 ;
	virtual HRESULT __safecall Set_Style(Activex::TOleEnum pstyle) = 0 ;
	virtual HRESULT __safecall Get_Text(WideString &Get_Text_result) = 0 ;
	virtual HRESULT __safecall Set_Text(const WideString pbstrText) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_DropDownLines() { int r; HRESULT hr = Get_DropDownLines(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int DropDownLines = {read=_scw_Get_DropDownLines, write=Set_DropDownLines};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_DropDownWidth() { int r; HRESULT hr = Get_DropDownWidth(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int DropDownWidth = {read=_scw_Get_DropDownWidth, write=Set_DropDownWidth};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_List(int Index) { WideString r; HRESULT hr = Get_List(
		Index, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString List[int Index] = {read=_scw_Get_List, write=Set_List};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ListCount() { int r; HRESULT hr = Get_ListCount(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int ListCount = {read=_scw_Get_ListCount};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ListHeaderCount() { int r; HRESULT hr = Get_ListHeaderCount(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int ListHeaderCount = {read=_scw_Get_ListHeaderCount, write=Set_ListHeaderCount};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ListIndex() { int r; HRESULT hr = Get_ListIndex(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int ListIndex = {read=_scw_Get_ListIndex, write=Set_ListIndex};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Style() { Activex::TOleEnum r; HRESULT hr = Get_Style(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Style = {read=_scw_Get_Style, write=Set_Style};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Text() { WideString r; HRESULT hr = Get_Text(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Text = {read=_scw_Get_Text, write=Set_Text};
};
typedef _CommandBarComboBox CommandBarComboBox;

__interface _CommandBarButton;
typedef System::DelphiInterface<_CommandBarButton> _di__CommandBarButton;
__interface INTERFACE_UUID("{000C030E-0000-0000-C000-000000000046}") _CommandBarButton  : public CommandBarControl 
	
{
	
public:
	virtual HRESULT __safecall Get_BuiltInFace(Word &Get_BuiltInFace_result) = 0 ;
	virtual HRESULT __safecall Set_BuiltInFace(Word pvarfBuiltIn) = 0 ;
	virtual HRESULT __safecall CopyFace(void) = 0 ;
	virtual HRESULT __safecall Get_FaceId(int &Get_FaceId_result) = 0 ;
	virtual HRESULT __safecall Set_FaceId(int pid) = 0 ;
	virtual HRESULT __safecall PasteFace(void) = 0 ;
	virtual HRESULT __safecall Get_ShortcutText(WideString &Get_ShortcutText_result) = 0 ;
	virtual HRESULT __safecall Set_ShortcutText(const WideString pbstrText) = 0 ;
	virtual HRESULT __safecall Get_State(Activex::TOleEnum &Get_State_result) = 0 ;
	virtual HRESULT __safecall Set_State(Activex::TOleEnum pstate) = 0 ;
	virtual HRESULT __safecall Get_Style(Activex::TOleEnum &Get_Style_result) = 0 ;
	virtual HRESULT __safecall Set_Style(Activex::TOleEnum pstyle) = 0 ;
	virtual HRESULT __safecall Get_HyperlinkType(Activex::TOleEnum &Get_HyperlinkType_result) = 0 ;
	virtual HRESULT __safecall Set_HyperlinkType(Activex::TOleEnum phlType) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_BuiltInFace() { Word r; HRESULT hr = Get_BuiltInFace(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word BuiltInFace = {read=_scw_Get_BuiltInFace, write=Set_BuiltInFace};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_FaceId() { int r; HRESULT hr = Get_FaceId(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int FaceId = {read=_scw_Get_FaceId, write=Set_FaceId};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_ShortcutText() { WideString r; HRESULT hr = Get_ShortcutText(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString ShortcutText = {read=_scw_Get_ShortcutText, write=Set_ShortcutText};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_State() { Activex::TOleEnum r; HRESULT hr = Get_State(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum State = {read=_scw_Get_State, write=Set_State};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Style() { Activex::TOleEnum r; HRESULT hr = Get_Style(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Style = {read=_scw_Get_Style, write=Set_Style};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_HyperlinkType() { Activex::TOleEnum r; HRESULT hr = Get_HyperlinkType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum HyperlinkType = {read=_scw_Get_HyperlinkType, write=Set_HyperlinkType}
		;
};
typedef _CommandBarButton CommandBarButton;

typedef OleVariant *POleVariant1;

typedef GUID *PUserType1;

typedef Shortint *PShortint1;

typedef PShortint1 *PPShortint1;

typedef int MsoRGBType;

__dispinterface IAccessibleDisp;
typedef System::DelphiInterface<IAccessibleDisp> _di_IAccessibleDisp;
__dispinterface INTERFACE_UUID("{618736E0-3C3D-11CF-810C-00AA00389B71}") IAccessibleDisp  : public IDispatch 
	
{
	
};

__dispinterface _IMsoDispObjDisp;
typedef System::DelphiInterface<_IMsoDispObjDisp> _di__IMsoDispObjDisp;
__dispinterface INTERFACE_UUID("{000C0300-0000-0000-C000-000000000046}") _IMsoDispObjDisp  : public IDispatch 
	
{
	
};

__dispinterface _IMsoOleAccDispObjDisp;
typedef System::DelphiInterface<_IMsoOleAccDispObjDisp> _di__IMsoOleAccDispObjDisp;
__dispinterface INTERFACE_UUID("{000C0301-0000-0000-C000-000000000046}") _IMsoOleAccDispObjDisp  : public IDispatch 
	
{
	
};

__dispinterface _CommandBarsDisp;
typedef System::DelphiInterface<_CommandBarsDisp> _di__CommandBarsDisp;
__dispinterface INTERFACE_UUID("{000C0302-0000-0000-C000-000000000046}") _CommandBarsDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{000C0304-0000-0000-C000-000000000046}") CommandBar  : public _IMsoOleAccDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_BuiltIn(Word &Get_BuiltIn_result) = 0 ;
	virtual HRESULT __safecall Get_Context(WideString &Get_Context_result) = 0 ;
	virtual HRESULT __safecall Set_Context(const WideString pbstrContext) = 0 ;
	virtual HRESULT __safecall Get_Controls_(_di_CommandBarControls &Get_Controls__result) = 0 ;
	virtual HRESULT __safecall Delete(void) = 0 ;
	virtual HRESULT __safecall Get_Enabled(Word &Get_Enabled_result) = 0 ;
	virtual HRESULT __safecall Set_Enabled(Word pvarfEnabled) = 0 ;
	virtual HRESULT __safecall FindControl(const OleVariant Type_, const OleVariant Id, const OleVariant 
		Tag, const OleVariant Visible, const OleVariant Recursive, _di_CommandBarControl &FindControl_result
		) = 0 ;
	virtual HRESULT __safecall Get_Height(int &Get_Height_result) = 0 ;
	virtual HRESULT __safecall Set_Height(int pdy) = 0 ;
	virtual HRESULT __safecall Get_Index(int &Get_Index_result) = 0 ;
	virtual HRESULT __safecall Get_InstanceId(int &Get_InstanceId_result) = 0 ;
	virtual HRESULT __safecall Get_Left(int &Get_Left_result) = 0 ;
	virtual HRESULT __safecall Set_Left(int pxpLeft) = 0 ;
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Set_Name(const WideString pbstrName) = 0 ;
	virtual HRESULT __safecall Get_NameLocal(WideString &Get_NameLocal_result) = 0 ;
	virtual HRESULT __safecall Set_NameLocal(const WideString pbstrNameLocal) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Position(Activex::TOleEnum &Get_Position_result) = 0 ;
	virtual HRESULT __safecall Set_Position(Activex::TOleEnum ppos) = 0 ;
	virtual HRESULT __safecall Get_RowIndex(int &Get_RowIndex_result) = 0 ;
	virtual HRESULT __safecall Set_RowIndex(int piRow) = 0 ;
	virtual HRESULT __safecall Get_Protection(Activex::TOleEnum &Get_Protection_result) = 0 ;
	virtual HRESULT __safecall Set_Protection(Activex::TOleEnum pprot) = 0 ;
	virtual HRESULT __safecall Reset(void) = 0 ;
	virtual HRESULT __safecall ShowPopup(const OleVariant x, const OleVariant y) = 0 ;
	virtual HRESULT __safecall Get_Top(int &Get_Top_result) = 0 ;
	virtual HRESULT __safecall Set_Top(int pypTop) = 0 ;
	virtual HRESULT __safecall Get_Type_(Activex::TOleEnum &Get_Type__result) = 0 ;
	virtual HRESULT __safecall Get_Visible(Word &Get_Visible_result) = 0 ;
	virtual HRESULT __safecall Set_Visible(Word pvarfVisible) = 0 ;
	virtual HRESULT __safecall Get_Width(int &Get_Width_result) = 0 ;
	virtual HRESULT __safecall Set_Width(int pdx) = 0 ;
	virtual HRESULT __safecall Get_AdaptiveMenu(Word &Get_AdaptiveMenu_result) = 0 ;
	virtual HRESULT __safecall Set_AdaptiveMenu(Word pvarfAdaptiveMenu) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_BuiltIn() { Word r; HRESULT hr = Get_BuiltIn(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word BuiltIn = {read=_scw_Get_BuiltIn};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Context() { WideString r; HRESULT hr = Get_Context(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Context = {read=_scw_Get_Context, write=Set_Context};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_CommandBarControls _scw_Get_Controls_() { _di_CommandBarControls r; HRESULT hr = Get_Controls_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_CommandBarControls Controls_ = {read=_scw_Get_Controls_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Enabled() { Word r; HRESULT hr = Get_Enabled(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Enabled = {read=_scw_Get_Enabled, write=Set_Enabled};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Height() { int r; HRESULT hr = Get_Height(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Height = {read=_scw_Get_Height, write=Set_Height};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Index() { int r; HRESULT hr = Get_Index(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Index = {read=_scw_Get_Index};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_InstanceId() { int r; HRESULT hr = Get_InstanceId(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int InstanceId = {read=_scw_Get_InstanceId};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Left() { int r; HRESULT hr = Get_Left(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Left = {read=_scw_Get_Left, write=Set_Left};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name, write=Set_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_NameLocal() { WideString r; HRESULT hr = Get_NameLocal(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString NameLocal = {read=_scw_Get_NameLocal, write=Set_NameLocal};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Position() { Activex::TOleEnum r; HRESULT hr = Get_Position(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Position = {read=_scw_Get_Position, write=Set_Position};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_RowIndex() { int r; HRESULT hr = Get_RowIndex(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int RowIndex = {read=_scw_Get_RowIndex, write=Set_RowIndex};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Protection() { Activex::TOleEnum r; HRESULT hr = Get_Protection(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Protection = {read=_scw_Get_Protection, write=Set_Protection};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Top() { int r; HRESULT hr = Get_Top(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Top = {read=_scw_Get_Top, write=Set_Top};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Type_() { Activex::TOleEnum r; HRESULT hr = Get_Type_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Type_ = {read=_scw_Get_Type_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Visible() { Word r; HRESULT hr = Get_Visible(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Visible = {read=_scw_Get_Visible, write=Set_Visible};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Width() { int r; HRESULT hr = Get_Width(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Width = {read=_scw_Get_Width, write=Set_Width};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_AdaptiveMenu() { Word r; HRESULT hr = Get_AdaptiveMenu(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word AdaptiveMenu = {read=_scw_Get_AdaptiveMenu, write=Set_AdaptiveMenu};
};

__dispinterface CommandBarDisp;
typedef System::DelphiInterface<CommandBarDisp> _di_CommandBarDisp;
__dispinterface INTERFACE_UUID("{000C0304-0000-0000-C000-000000000046}") CommandBarDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{000C0306-0000-0000-C000-000000000046}") CommandBarControls  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Add(const OleVariant Type_, const OleVariant Id, const OleVariant Parameter
		, const OleVariant Before, const OleVariant Temporary, _di_CommandBarControl &Add_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Get_Item(const OleVariant Index, _di_CommandBarControl &Get_Item_result)
		 = 0 ;
	virtual HRESULT __safecall Get__NewEnum(_di_IUnknown &Get__NewEnum_result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_CommandBar &Get_Parent_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Count() { int r; HRESULT hr = Get_Count(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Count = {read=_scw_Get_Count};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_CommandBarControl _scw_Get_Item(const OleVariant Index) { _di_CommandBarControl r; HRESULT hr = Get_Item(
		Index, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_CommandBarControl Item[OleVariant Index] = {read=_scw_Get_Item/*, default*/};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IUnknown _scw_Get__NewEnum() { _di_IUnknown r; HRESULT hr = Get__NewEnum(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IUnknown _NewEnum = {read=_scw_Get__NewEnum};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_CommandBar _scw_Get_Parent() { _di_CommandBar r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_CommandBar Parent = {read=_scw_Get_Parent};
};

__dispinterface CommandBarControlsDisp;
typedef System::DelphiInterface<CommandBarControlsDisp> _di_CommandBarControlsDisp;
__dispinterface INTERFACE_UUID("{000C0306-0000-0000-C000-000000000046}") CommandBarControlsDisp  : public IDispatch 
	
{
	
};

__dispinterface CommandBarControlDisp;
typedef System::DelphiInterface<CommandBarControlDisp> _di_CommandBarControlDisp;
__dispinterface INTERFACE_UUID("{000C0308-0000-0000-C000-000000000046}") CommandBarControlDisp  : public IDispatch 
	
{
	
};

__dispinterface _CommandBarButtonDisp;
typedef System::DelphiInterface<_CommandBarButtonDisp> _di__CommandBarButtonDisp;
__dispinterface INTERFACE_UUID("{000C030E-0000-0000-C000-000000000046}") _CommandBarButtonDisp  : public IDispatch 
	
{
	
};

__interface CommandBarPopup;
typedef System::DelphiInterface<CommandBarPopup> _di_CommandBarPopup;
__interface INTERFACE_UUID("{000C030A-0000-0000-C000-000000000046}") CommandBarPopup  : public CommandBarControl 
	
{
	
public:
	virtual HRESULT __safecall Get_CommandBar(_di_CommandBar &Get_CommandBar_result) = 0 ;
	virtual HRESULT __safecall Get_Controls_(_di_CommandBarControls &Get_Controls__result) = 0 ;
	virtual HRESULT __safecall Get_OLEMenuGroup(Activex::TOleEnum &Get_OLEMenuGroup_result) = 0 ;
	virtual HRESULT __safecall Set_OLEMenuGroup(Activex::TOleEnum pomg) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_CommandBar _scw_Get_CommandBar() { _di_CommandBar r; HRESULT hr = Get_CommandBar(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_CommandBar CommandBar = {read=_scw_Get_CommandBar};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_CommandBarControls _scw_Get_Controls_() { _di_CommandBarControls r; HRESULT hr = Get_Controls_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_CommandBarControls Controls_ = {read=_scw_Get_Controls_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_OLEMenuGroup() { Activex::TOleEnum r; HRESULT hr = Get_OLEMenuGroup(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum OLEMenuGroup = {read=_scw_Get_OLEMenuGroup, write=Set_OLEMenuGroup};
};

__dispinterface CommandBarPopupDisp;
typedef System::DelphiInterface<CommandBarPopupDisp> _di_CommandBarPopupDisp;
__dispinterface INTERFACE_UUID("{000C030A-0000-0000-C000-000000000046}") CommandBarPopupDisp  : public IDispatch 
	
{
	
};

__dispinterface _CommandBarComboBoxDisp;
typedef System::DelphiInterface<_CommandBarComboBoxDisp> _di__CommandBarComboBoxDisp;
__dispinterface INTERFACE_UUID("{000C030C-0000-0000-C000-000000000046}") _CommandBarComboBoxDisp  : public IDispatch 
	
{
	
};

__interface _CommandBarActiveX;
typedef System::DelphiInterface<_CommandBarActiveX> _di__CommandBarActiveX;
__interface INTERFACE_UUID("{000C030D-0000-0000-C000-000000000046}") _CommandBarActiveX  : public CommandBarControl 
	
{
	
public:
	virtual HRESULT __safecall Get_ControlCLSID(WideString &Get_ControlCLSID_result) = 0 ;
	virtual HRESULT __safecall Set_ControlCLSID(const WideString pbstrClsid) = 0 ;
	virtual HRESULT __safecall Get_QueryControlInterface(const WideString bstrIid, _di_IUnknown &Get_QueryControlInterface_result
		) = 0 ;
	virtual HRESULT __safecall SetInnerObjectFactory(const _di_IUnknown pUnk) = 0 ;
	virtual HRESULT __safecall EnsureControl(void) = 0 ;
	virtual HRESULT __safecall Set_InitWith(const _di_IUnknown Param1) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_ControlCLSID() { WideString r; HRESULT hr = Get_ControlCLSID(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString ControlCLSID = {read=_scw_Get_ControlCLSID, write=Set_ControlCLSID};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IUnknown _scw_Get_QueryControlInterface(const WideString bstrIid) { _di_IUnknown r; HRESULT hr = Get_QueryControlInterface(
		bstrIid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IUnknown QueryControlInterface[WideString bstrIid] = {read=_scw_Get_QueryControlInterface
		};
	__property _di_IUnknown InitWith = {write=Set_InitWith};
};

__dispinterface _CommandBarActiveXDisp;
typedef System::DelphiInterface<_CommandBarActiveXDisp> _di__CommandBarActiveXDisp;
__dispinterface INTERFACE_UUID("{000C030D-0000-0000-C000-000000000046}") _CommandBarActiveXDisp  : public IDispatch 
	
{
	
};

__interface Adjustments;
typedef System::DelphiInterface<Adjustments> _di_Adjustments;
__interface INTERFACE_UUID("{000C0310-0000-0000-C000-000000000046}") Adjustments  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Get_Item(int Index, float &Get_Item_result) = 0 ;
	virtual HRESULT __safecall Set_Item(int Index, float Val) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Count() { int r; HRESULT hr = Get_Count(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Count = {read=_scw_Get_Count};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Item(int Index) { float r; HRESULT hr = Get_Item(Index
		, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float Item[int Index] = {read=_scw_Get_Item, write=Set_Item/*, default*/};
};

__dispinterface AdjustmentsDisp;
typedef System::DelphiInterface<AdjustmentsDisp> _di_AdjustmentsDisp;
__dispinterface INTERFACE_UUID("{000C0310-0000-0000-C000-000000000046}") AdjustmentsDisp  : public IDispatch 
	
{
	
};

__interface CalloutFormat;
typedef System::DelphiInterface<CalloutFormat> _di_CalloutFormat;
__interface INTERFACE_UUID("{000C0311-0000-0000-C000-000000000046}") CalloutFormat  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall AutomaticLength(void) = 0 ;
	virtual HRESULT __safecall CustomDrop(float Drop) = 0 ;
	virtual HRESULT __safecall CustomLength(float Length) = 0 ;
	virtual HRESULT __safecall PresetDrop(Activex::TOleEnum DropType) = 0 ;
	virtual HRESULT __safecall Get_Accent(Activex::TOleEnum &Get_Accent_result) = 0 ;
	virtual HRESULT __safecall Set_Accent(Activex::TOleEnum Accent) = 0 ;
	virtual HRESULT __safecall Get_Angle(Activex::TOleEnum &Get_Angle_result) = 0 ;
	virtual HRESULT __safecall Set_Angle(Activex::TOleEnum Angle) = 0 ;
	virtual HRESULT __safecall Get_AutoAttach(Activex::TOleEnum &Get_AutoAttach_result) = 0 ;
	virtual HRESULT __safecall Set_AutoAttach(Activex::TOleEnum AutoAttach) = 0 ;
	virtual HRESULT __safecall Get_AutoLength(Activex::TOleEnum &Get_AutoLength_result) = 0 ;
	virtual HRESULT __safecall Get_Border(Activex::TOleEnum &Get_Border_result) = 0 ;
	virtual HRESULT __safecall Set_Border(Activex::TOleEnum Border) = 0 ;
	virtual HRESULT __safecall Get_Drop(float &Get_Drop_result) = 0 ;
	virtual HRESULT __safecall Get_DropType(Activex::TOleEnum &Get_DropType_result) = 0 ;
	virtual HRESULT __safecall Get_Gap(float &Get_Gap_result) = 0 ;
	virtual HRESULT __safecall Set_Gap(float Gap) = 0 ;
	virtual HRESULT __safecall Get_Length(float &Get_Length_result) = 0 ;
	virtual HRESULT __safecall Get_Type_(Activex::TOleEnum &Get_Type__result) = 0 ;
	virtual HRESULT __safecall Set_Type_(Activex::TOleEnum Type_) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Accent() { Activex::TOleEnum r; HRESULT hr = Get_Accent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Accent = {read=_scw_Get_Accent, write=Set_Accent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Angle() { Activex::TOleEnum r; HRESULT hr = Get_Angle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Angle = {read=_scw_Get_Angle, write=Set_Angle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_AutoAttach() { Activex::TOleEnum r; HRESULT hr = Get_AutoAttach(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum AutoAttach = {read=_scw_Get_AutoAttach, write=Set_AutoAttach};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_AutoLength() { Activex::TOleEnum r; HRESULT hr = Get_AutoLength(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum AutoLength = {read=_scw_Get_AutoLength};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Border() { Activex::TOleEnum r; HRESULT hr = Get_Border(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Border = {read=_scw_Get_Border, write=Set_Border};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Drop() { float r; HRESULT hr = Get_Drop(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Drop = {read=_scw_Get_Drop};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_DropType() { Activex::TOleEnum r; HRESULT hr = Get_DropType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum DropType = {read=_scw_Get_DropType};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Gap() { float r; HRESULT hr = Get_Gap(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Gap = {read=_scw_Get_Gap, write=Set_Gap};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Length() { float r; HRESULT hr = Get_Length(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Length = {read=_scw_Get_Length};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Type_() { Activex::TOleEnum r; HRESULT hr = Get_Type_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Type_ = {read=_scw_Get_Type_, write=Set_Type_};
};

__dispinterface CalloutFormatDisp;
typedef System::DelphiInterface<CalloutFormatDisp> _di_CalloutFormatDisp;
__dispinterface INTERFACE_UUID("{000C0311-0000-0000-C000-000000000046}") CalloutFormatDisp  : public IDispatch 
	
{
	
};

__interface ColorFormat;
typedef System::DelphiInterface<ColorFormat> _di_ColorFormat;
__interface INTERFACE_UUID("{000C0312-0000-0000-C000-000000000046}") ColorFormat  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_RGB_(int &Get_RGB__result) = 0 ;
	virtual HRESULT __safecall Set_RGB_(int RGB_) = 0 ;
	virtual HRESULT __safecall Get_SchemeColor(int &Get_SchemeColor_result) = 0 ;
	virtual HRESULT __safecall Set_SchemeColor(int SchemeColor) = 0 ;
	virtual HRESULT __safecall Get_Type_(Activex::TOleEnum &Get_Type__result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_RGB_() { int r; HRESULT hr = Get_RGB_(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int RGB_ = {read=_scw_Get_RGB_, write=Set_RGB_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_SchemeColor() { int r; HRESULT hr = Get_SchemeColor(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int SchemeColor = {read=_scw_Get_SchemeColor, write=Set_SchemeColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Type_() { Activex::TOleEnum r; HRESULT hr = Get_Type_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Type_ = {read=_scw_Get_Type_};
};

__dispinterface ColorFormatDisp;
typedef System::DelphiInterface<ColorFormatDisp> _di_ColorFormatDisp;
__dispinterface INTERFACE_UUID("{000C0312-0000-0000-C000-000000000046}") ColorFormatDisp  : public IDispatch 
	
{
	
};

__interface ConnectorFormat;
typedef System::DelphiInterface<ConnectorFormat> _di_ConnectorFormat;
__interface Shape;
typedef System::DelphiInterface<Shape> _di_Shape;
__interface INTERFACE_UUID("{000C0313-0000-0000-C000-000000000046}") ConnectorFormat  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall BeginConnect(const _di_Shape ConnectedShape, int ConnectionSite) = 0 ;
	virtual HRESULT __safecall BeginDisconnect(void) = 0 ;
	virtual HRESULT __safecall EndConnect(const _di_Shape ConnectedShape, int ConnectionSite) = 0 ;
	virtual HRESULT __safecall EndDisconnect(void) = 0 ;
	virtual HRESULT __safecall Get_BeginConnected(Activex::TOleEnum &Get_BeginConnected_result) = 0 ;
	virtual HRESULT __safecall Get_BeginConnectedShape(_di_Shape &Get_BeginConnectedShape_result) = 0 ;
		
	virtual HRESULT __safecall Get_BeginConnectionSite(int &Get_BeginConnectionSite_result) = 0 ;
	virtual HRESULT __safecall Get_EndConnected(Activex::TOleEnum &Get_EndConnected_result) = 0 ;
	virtual HRESULT __safecall Get_EndConnectedShape(_di_Shape &Get_EndConnectedShape_result) = 0 ;
	virtual HRESULT __safecall Get_EndConnectionSite(int &Get_EndConnectionSite_result) = 0 ;
	virtual HRESULT __safecall Get_Type_(Activex::TOleEnum &Get_Type__result) = 0 ;
	virtual HRESULT __safecall Set_Type_(Activex::TOleEnum Type_) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_BeginConnected() { Activex::TOleEnum r; HRESULT hr = Get_BeginConnected(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum BeginConnected = {read=_scw_Get_BeginConnected};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Shape _scw_Get_BeginConnectedShape() { _di_Shape r; HRESULT hr = Get_BeginConnectedShape(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Shape BeginConnectedShape = {read=_scw_Get_BeginConnectedShape};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_BeginConnectionSite() { int r; HRESULT hr = Get_BeginConnectionSite(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int BeginConnectionSite = {read=_scw_Get_BeginConnectionSite};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_EndConnected() { Activex::TOleEnum r; HRESULT hr = Get_EndConnected(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum EndConnected = {read=_scw_Get_EndConnected};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Shape _scw_Get_EndConnectedShape() { _di_Shape r; HRESULT hr = Get_EndConnectedShape(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Shape EndConnectedShape = {read=_scw_Get_EndConnectedShape};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_EndConnectionSite() { int r; HRESULT hr = Get_EndConnectionSite(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int EndConnectionSite = {read=_scw_Get_EndConnectionSite};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Type_() { Activex::TOleEnum r; HRESULT hr = Get_Type_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Type_ = {read=_scw_Get_Type_, write=Set_Type_};
};

__dispinterface ConnectorFormatDisp;
typedef System::DelphiInterface<ConnectorFormatDisp> _di_ConnectorFormatDisp;
__dispinterface INTERFACE_UUID("{000C0313-0000-0000-C000-000000000046}") ConnectorFormatDisp  : public IDispatch 
	
{
	
};

__interface FillFormat;
typedef System::DelphiInterface<FillFormat> _di_FillFormat;
__interface INTERFACE_UUID("{000C0314-0000-0000-C000-000000000046}") FillFormat  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Background(void) = 0 ;
	virtual HRESULT __safecall OneColorGradient(Activex::TOleEnum Style, int Variant, float Degree) = 0 
		;
	virtual HRESULT __safecall Patterned(Activex::TOleEnum Pattern) = 0 ;
	virtual HRESULT __safecall PresetGradient(Activex::TOleEnum Style, int Variant, Activex::TOleEnum PresetGradientType
		) = 0 ;
	virtual HRESULT __safecall PresetTextured(Activex::TOleEnum PresetTexture) = 0 ;
	virtual HRESULT __safecall Solid(void) = 0 ;
	virtual HRESULT __safecall TwoColorGradient(Activex::TOleEnum Style, int Variant) = 0 ;
	virtual HRESULT __safecall UserPicture(const WideString PictureFile) = 0 ;
	virtual HRESULT __safecall UserTextured(const WideString TextureFile) = 0 ;
	virtual HRESULT __safecall Get_BackColor(_di_ColorFormat &Get_BackColor_result) = 0 ;
	virtual HRESULT __safecall Set_BackColor(const _di_ColorFormat BackColor) = 0 ;
	virtual HRESULT __safecall Get_ForeColor(_di_ColorFormat &Get_ForeColor_result) = 0 ;
	virtual HRESULT __safecall Set_ForeColor(const _di_ColorFormat ForeColor) = 0 ;
	virtual HRESULT __safecall Get_GradientColorType(Activex::TOleEnum &Get_GradientColorType_result) = 0 
		;
	virtual HRESULT __safecall Get_GradientDegree(float &Get_GradientDegree_result) = 0 ;
	virtual HRESULT __safecall Get_GradientStyle(Activex::TOleEnum &Get_GradientStyle_result) = 0 ;
	virtual HRESULT __safecall Get_GradientVariant(int &Get_GradientVariant_result) = 0 ;
	virtual HRESULT __safecall Get_Pattern(Activex::TOleEnum &Get_Pattern_result) = 0 ;
	virtual HRESULT __safecall Get_PresetGradientType(Activex::TOleEnum &Get_PresetGradientType_result)
		 = 0 ;
	virtual HRESULT __safecall Get_PresetTexture(Activex::TOleEnum &Get_PresetTexture_result) = 0 ;
	virtual HRESULT __safecall Get_TextureName(WideString &Get_TextureName_result) = 0 ;
	virtual HRESULT __safecall Get_TextureType(Activex::TOleEnum &Get_TextureType_result) = 0 ;
	virtual HRESULT __safecall Get_Transparency(float &Get_Transparency_result) = 0 ;
	virtual HRESULT __safecall Set_Transparency(float Transparency) = 0 ;
	virtual HRESULT __safecall Get_Type_(Activex::TOleEnum &Get_Type__result) = 0 ;
	virtual HRESULT __safecall Get_Visible(Activex::TOleEnum &Get_Visible_result) = 0 ;
	virtual HRESULT __safecall Set_Visible(Activex::TOleEnum Visible) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ColorFormat _scw_Get_BackColor() { _di_ColorFormat r; HRESULT hr = Get_BackColor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ColorFormat BackColor = {read=_scw_Get_BackColor, write=Set_BackColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ColorFormat _scw_Get_ForeColor() { _di_ColorFormat r; HRESULT hr = Get_ForeColor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ColorFormat ForeColor = {read=_scw_Get_ForeColor, write=Set_ForeColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_GradientColorType() { Activex::TOleEnum r; HRESULT hr = Get_GradientColorType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum GradientColorType = {read=_scw_Get_GradientColorType};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_GradientDegree() { float r; HRESULT hr = Get_GradientDegree(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float GradientDegree = {read=_scw_Get_GradientDegree};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_GradientStyle() { Activex::TOleEnum r; HRESULT hr = Get_GradientStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum GradientStyle = {read=_scw_Get_GradientStyle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_GradientVariant() { int r; HRESULT hr = Get_GradientVariant(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int GradientVariant = {read=_scw_Get_GradientVariant};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Pattern() { Activex::TOleEnum r; HRESULT hr = Get_Pattern(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Pattern = {read=_scw_Get_Pattern};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PresetGradientType() { Activex::TOleEnum r; HRESULT hr = Get_PresetGradientType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PresetGradientType = {read=_scw_Get_PresetGradientType};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PresetTexture() { Activex::TOleEnum r; HRESULT hr = Get_PresetTexture(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PresetTexture = {read=_scw_Get_PresetTexture};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_TextureName() { WideString r; HRESULT hr = Get_TextureName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString TextureName = {read=_scw_Get_TextureName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_TextureType() { Activex::TOleEnum r; HRESULT hr = Get_TextureType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum TextureType = {read=_scw_Get_TextureType};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Transparency() { float r; HRESULT hr = Get_Transparency(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float Transparency = {read=_scw_Get_Transparency, write=Set_Transparency};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Type_() { Activex::TOleEnum r; HRESULT hr = Get_Type_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Type_ = {read=_scw_Get_Type_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Visible() { Activex::TOleEnum r; HRESULT hr = Get_Visible(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Visible = {read=_scw_Get_Visible, write=Set_Visible};
};

__dispinterface FillFormatDisp;
typedef System::DelphiInterface<FillFormatDisp> _di_FillFormatDisp;
__dispinterface INTERFACE_UUID("{000C0314-0000-0000-C000-000000000046}") FillFormatDisp  : public IDispatch 
	
{
	
};

__interface FreeformBuilder;
typedef System::DelphiInterface<FreeformBuilder> _di_FreeformBuilder;
__interface INTERFACE_UUID("{000C0315-0000-0000-C000-000000000046}") FreeformBuilder  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall AddNodes(Activex::TOleEnum SegmentType, Activex::TOleEnum EditingType, float 
		X1, float Y1, float X2, float Y2, float X3, float Y3) = 0 ;
	virtual HRESULT __safecall ConvertToShape(_di_Shape &ConvertToShape_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface FreeformBuilderDisp;
typedef System::DelphiInterface<FreeformBuilderDisp> _di_FreeformBuilderDisp;
__dispinterface INTERFACE_UUID("{000C0315-0000-0000-C000-000000000046}") FreeformBuilderDisp  : public IDispatch 
	
{
	
};

__interface GroupShapes;
typedef System::DelphiInterface<GroupShapes> _di_GroupShapes;
__interface INTERFACE_UUID("{000C0316-0000-0000-C000-000000000046}") GroupShapes  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Item(const OleVariant Index, _di_Shape &Item_result) = 0 ;
	virtual HRESULT __safecall Get__NewEnum(_di_IUnknown &Get__NewEnum_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
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

__dispinterface GroupShapesDisp;
typedef System::DelphiInterface<GroupShapesDisp> _di_GroupShapesDisp;
__dispinterface INTERFACE_UUID("{000C0316-0000-0000-C000-000000000046}") GroupShapesDisp  : public IDispatch 
	
{
	
};

__interface LineFormat;
typedef System::DelphiInterface<LineFormat> _di_LineFormat;
__interface INTERFACE_UUID("{000C0317-0000-0000-C000-000000000046}") LineFormat  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_BackColor(_di_ColorFormat &Get_BackColor_result) = 0 ;
	virtual HRESULT __safecall Set_BackColor(const _di_ColorFormat BackColor) = 0 ;
	virtual HRESULT __safecall Get_BeginArrowheadLength(Activex::TOleEnum &Get_BeginArrowheadLength_result
		) = 0 ;
	virtual HRESULT __safecall Set_BeginArrowheadLength(Activex::TOleEnum BeginArrowheadLength) = 0 ;
	virtual HRESULT __safecall Get_BeginArrowheadStyle(Activex::TOleEnum &Get_BeginArrowheadStyle_result
		) = 0 ;
	virtual HRESULT __safecall Set_BeginArrowheadStyle(Activex::TOleEnum BeginArrowheadStyle) = 0 ;
	virtual HRESULT __safecall Get_BeginArrowheadWidth(Activex::TOleEnum &Get_BeginArrowheadWidth_result
		) = 0 ;
	virtual HRESULT __safecall Set_BeginArrowheadWidth(Activex::TOleEnum BeginArrowheadWidth) = 0 ;
	virtual HRESULT __safecall Get_DashStyle(Activex::TOleEnum &Get_DashStyle_result) = 0 ;
	virtual HRESULT __safecall Set_DashStyle(Activex::TOleEnum DashStyle) = 0 ;
	virtual HRESULT __safecall Get_EndArrowheadLength(Activex::TOleEnum &Get_EndArrowheadLength_result)
		 = 0 ;
	virtual HRESULT __safecall Set_EndArrowheadLength(Activex::TOleEnum EndArrowheadLength) = 0 ;
	virtual HRESULT __safecall Get_EndArrowheadStyle(Activex::TOleEnum &Get_EndArrowheadStyle_result) = 0 
		;
	virtual HRESULT __safecall Set_EndArrowheadStyle(Activex::TOleEnum EndArrowheadStyle) = 0 ;
	virtual HRESULT __safecall Get_EndArrowheadWidth(Activex::TOleEnum &Get_EndArrowheadWidth_result) = 0 
		;
	virtual HRESULT __safecall Set_EndArrowheadWidth(Activex::TOleEnum EndArrowheadWidth) = 0 ;
	virtual HRESULT __safecall Get_ForeColor(_di_ColorFormat &Get_ForeColor_result) = 0 ;
	virtual HRESULT __safecall Set_ForeColor(const _di_ColorFormat ForeColor) = 0 ;
	virtual HRESULT __safecall Get_Pattern(Activex::TOleEnum &Get_Pattern_result) = 0 ;
	virtual HRESULT __safecall Set_Pattern(Activex::TOleEnum Pattern) = 0 ;
	virtual HRESULT __safecall Get_Style(Activex::TOleEnum &Get_Style_result) = 0 ;
	virtual HRESULT __safecall Set_Style(Activex::TOleEnum Style) = 0 ;
	virtual HRESULT __safecall Get_Transparency(float &Get_Transparency_result) = 0 ;
	virtual HRESULT __safecall Set_Transparency(float Transparency) = 0 ;
	virtual HRESULT __safecall Get_Visible(Activex::TOleEnum &Get_Visible_result) = 0 ;
	virtual HRESULT __safecall Set_Visible(Activex::TOleEnum Visible) = 0 ;
	virtual HRESULT __safecall Get_Weight(float &Get_Weight_result) = 0 ;
	virtual HRESULT __safecall Set_Weight(float Weight) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ColorFormat _scw_Get_BackColor() { _di_ColorFormat r; HRESULT hr = Get_BackColor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ColorFormat BackColor = {read=_scw_Get_BackColor, write=Set_BackColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_BeginArrowheadLength() { Activex::TOleEnum r; HRESULT hr = Get_BeginArrowheadLength(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum BeginArrowheadLength = {read=_scw_Get_BeginArrowheadLength, write=Set_BeginArrowheadLength
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_BeginArrowheadStyle() { Activex::TOleEnum r; HRESULT hr = Get_BeginArrowheadStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum BeginArrowheadStyle = {read=_scw_Get_BeginArrowheadStyle, write=Set_BeginArrowheadStyle
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_BeginArrowheadWidth() { Activex::TOleEnum r; HRESULT hr = Get_BeginArrowheadWidth(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum BeginArrowheadWidth = {read=_scw_Get_BeginArrowheadWidth, write=Set_BeginArrowheadWidth
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_DashStyle() { Activex::TOleEnum r; HRESULT hr = Get_DashStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum DashStyle = {read=_scw_Get_DashStyle, write=Set_DashStyle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_EndArrowheadLength() { Activex::TOleEnum r; HRESULT hr = Get_EndArrowheadLength(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum EndArrowheadLength = {read=_scw_Get_EndArrowheadLength, write=Set_EndArrowheadLength
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_EndArrowheadStyle() { Activex::TOleEnum r; HRESULT hr = Get_EndArrowheadStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum EndArrowheadStyle = {read=_scw_Get_EndArrowheadStyle, write=Set_EndArrowheadStyle
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_EndArrowheadWidth() { Activex::TOleEnum r; HRESULT hr = Get_EndArrowheadWidth(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum EndArrowheadWidth = {read=_scw_Get_EndArrowheadWidth, write=Set_EndArrowheadWidth
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ColorFormat _scw_Get_ForeColor() { _di_ColorFormat r; HRESULT hr = Get_ForeColor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ColorFormat ForeColor = {read=_scw_Get_ForeColor, write=Set_ForeColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Pattern() { Activex::TOleEnum r; HRESULT hr = Get_Pattern(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Pattern = {read=_scw_Get_Pattern, write=Set_Pattern};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Style() { Activex::TOleEnum r; HRESULT hr = Get_Style(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Style = {read=_scw_Get_Style, write=Set_Style};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Transparency() { float r; HRESULT hr = Get_Transparency(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float Transparency = {read=_scw_Get_Transparency, write=Set_Transparency};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Visible() { Activex::TOleEnum r; HRESULT hr = Get_Visible(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Visible = {read=_scw_Get_Visible, write=Set_Visible};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Weight() { float r; HRESULT hr = Get_Weight(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Weight = {read=_scw_Get_Weight, write=Set_Weight};
};

__dispinterface LineFormatDisp;
typedef System::DelphiInterface<LineFormatDisp> _di_LineFormatDisp;
__dispinterface INTERFACE_UUID("{000C0317-0000-0000-C000-000000000046}") LineFormatDisp  : public IDispatch 
	
{
	
};

__interface ShapeNode;
typedef System::DelphiInterface<ShapeNode> _di_ShapeNode;
__interface INTERFACE_UUID("{000C0318-0000-0000-C000-000000000046}") ShapeNode  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_EditingType(Activex::TOleEnum &Get_EditingType_result) = 0 ;
	virtual HRESULT __safecall Get_Points(OleVariant &Get_Points_result) = 0 ;
	virtual HRESULT __safecall Get_SegmentType(Activex::TOleEnum &Get_SegmentType_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_EditingType() { Activex::TOleEnum r; HRESULT hr = Get_EditingType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum EditingType = {read=_scw_Get_EditingType};
	#pragma option push -w-inl
	/* safecall wrapper */ inline OleVariant _scw_Get_Points() { OleVariant r; HRESULT hr = Get_Points(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property OleVariant Points = {read=_scw_Get_Points};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_SegmentType() { Activex::TOleEnum r; HRESULT hr = Get_SegmentType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum SegmentType = {read=_scw_Get_SegmentType};
};

__dispinterface ShapeNodeDisp;
typedef System::DelphiInterface<ShapeNodeDisp> _di_ShapeNodeDisp;
__dispinterface INTERFACE_UUID("{000C0318-0000-0000-C000-000000000046}") ShapeNodeDisp  : public IDispatch 
	
{
	
};

__interface ShapeNodes;
typedef System::DelphiInterface<ShapeNodes> _di_ShapeNodes;
__interface INTERFACE_UUID("{000C0319-0000-0000-C000-000000000046}") ShapeNodes  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Item(const OleVariant Index, _di_ShapeNode &Item_result) = 0 ;
	virtual HRESULT __safecall Get__NewEnum(_di_IUnknown &Get__NewEnum_result) = 0 ;
	virtual HRESULT __safecall Delete(int Index) = 0 ;
	virtual HRESULT __safecall Insert(int Index, Activex::TOleEnum SegmentType, Activex::TOleEnum EditingType
		, float X1, float Y1, float X2, float Y2, float X3, float Y3) = 0 ;
	virtual HRESULT __safecall SetEditingType(int Index, Activex::TOleEnum EditingType) = 0 ;
	virtual HRESULT __safecall SetPosition(int Index, float X1, float Y1) = 0 ;
	virtual HRESULT __safecall SetSegmentType(int Index, Activex::TOleEnum SegmentType) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
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

__dispinterface ShapeNodesDisp;
typedef System::DelphiInterface<ShapeNodesDisp> _di_ShapeNodesDisp;
__dispinterface INTERFACE_UUID("{000C0319-0000-0000-C000-000000000046}") ShapeNodesDisp  : public IDispatch 
	
{
	
};

__interface PictureFormat;
typedef System::DelphiInterface<PictureFormat> _di_PictureFormat;
__interface INTERFACE_UUID("{000C031A-0000-0000-C000-000000000046}") PictureFormat  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall IncrementBrightness(float Increment) = 0 ;
	virtual HRESULT __safecall IncrementContrast(float Increment) = 0 ;
	virtual HRESULT __safecall Get_Brightness(float &Get_Brightness_result) = 0 ;
	virtual HRESULT __safecall Set_Brightness(float Brightness) = 0 ;
	virtual HRESULT __safecall Get_ColorType(Activex::TOleEnum &Get_ColorType_result) = 0 ;
	virtual HRESULT __safecall Set_ColorType(Activex::TOleEnum ColorType) = 0 ;
	virtual HRESULT __safecall Get_Contrast(float &Get_Contrast_result) = 0 ;
	virtual HRESULT __safecall Set_Contrast(float Contrast) = 0 ;
	virtual HRESULT __safecall Get_CropBottom(float &Get_CropBottom_result) = 0 ;
	virtual HRESULT __safecall Set_CropBottom(float CropBottom) = 0 ;
	virtual HRESULT __safecall Get_CropLeft(float &Get_CropLeft_result) = 0 ;
	virtual HRESULT __safecall Set_CropLeft(float CropLeft) = 0 ;
	virtual HRESULT __safecall Get_CropRight(float &Get_CropRight_result) = 0 ;
	virtual HRESULT __safecall Set_CropRight(float CropRight) = 0 ;
	virtual HRESULT __safecall Get_CropTop(float &Get_CropTop_result) = 0 ;
	virtual HRESULT __safecall Set_CropTop(float CropTop) = 0 ;
	virtual HRESULT __safecall Get_TransparencyColor(int &Get_TransparencyColor_result) = 0 ;
	virtual HRESULT __safecall Set_TransparencyColor(int TransparencyColor) = 0 ;
	virtual HRESULT __safecall Get_TransparentBackground(Activex::TOleEnum &Get_TransparentBackground_result
		) = 0 ;
	virtual HRESULT __safecall Set_TransparentBackground(Activex::TOleEnum TransparentBackground) = 0 ;
		
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Brightness() { float r; HRESULT hr = Get_Brightness(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Brightness = {read=_scw_Get_Brightness, write=Set_Brightness};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ColorType() { Activex::TOleEnum r; HRESULT hr = Get_ColorType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ColorType = {read=_scw_Get_ColorType, write=Set_ColorType};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Contrast() { float r; HRESULT hr = Get_Contrast(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Contrast = {read=_scw_Get_Contrast, write=Set_Contrast};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_CropBottom() { float r; HRESULT hr = Get_CropBottom(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float CropBottom = {read=_scw_Get_CropBottom, write=Set_CropBottom};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_CropLeft() { float r; HRESULT hr = Get_CropLeft(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float CropLeft = {read=_scw_Get_CropLeft, write=Set_CropLeft};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_CropRight() { float r; HRESULT hr = Get_CropRight(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float CropRight = {read=_scw_Get_CropRight, write=Set_CropRight};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_CropTop() { float r; HRESULT hr = Get_CropTop(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float CropTop = {read=_scw_Get_CropTop, write=Set_CropTop};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_TransparencyColor() { int r; HRESULT hr = Get_TransparencyColor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int TransparencyColor = {read=_scw_Get_TransparencyColor, write=Set_TransparencyColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_TransparentBackground() { Activex::TOleEnum r; HRESULT hr = Get_TransparentBackground(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum TransparentBackground = {read=_scw_Get_TransparentBackground, write=Set_TransparentBackground
		};
};

__dispinterface PictureFormatDisp;
typedef System::DelphiInterface<PictureFormatDisp> _di_PictureFormatDisp;
__dispinterface INTERFACE_UUID("{000C031A-0000-0000-C000-000000000046}") PictureFormatDisp  : public IDispatch 
	
{
	
};

__interface ShadowFormat;
typedef System::DelphiInterface<ShadowFormat> _di_ShadowFormat;
__interface INTERFACE_UUID("{000C031B-0000-0000-C000-000000000046}") ShadowFormat  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall IncrementOffsetX(float Increment) = 0 ;
	virtual HRESULT __safecall IncrementOffsetY(float Increment) = 0 ;
	virtual HRESULT __safecall Get_ForeColor(_di_ColorFormat &Get_ForeColor_result) = 0 ;
	virtual HRESULT __safecall Set_ForeColor(const _di_ColorFormat ForeColor) = 0 ;
	virtual HRESULT __safecall Get_Obscured(Activex::TOleEnum &Get_Obscured_result) = 0 ;
	virtual HRESULT __safecall Set_Obscured(Activex::TOleEnum Obscured) = 0 ;
	virtual HRESULT __safecall Get_OffsetX(float &Get_OffsetX_result) = 0 ;
	virtual HRESULT __safecall Set_OffsetX(float OffsetX) = 0 ;
	virtual HRESULT __safecall Get_OffsetY(float &Get_OffsetY_result) = 0 ;
	virtual HRESULT __safecall Set_OffsetY(float OffsetY) = 0 ;
	virtual HRESULT __safecall Get_Transparency(float &Get_Transparency_result) = 0 ;
	virtual HRESULT __safecall Set_Transparency(float Transparency) = 0 ;
	virtual HRESULT __safecall Get_Type_(Activex::TOleEnum &Get_Type__result) = 0 ;
	virtual HRESULT __safecall Set_Type_(Activex::TOleEnum Type_) = 0 ;
	virtual HRESULT __safecall Get_Visible(Activex::TOleEnum &Get_Visible_result) = 0 ;
	virtual HRESULT __safecall Set_Visible(Activex::TOleEnum Visible) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ColorFormat _scw_Get_ForeColor() { _di_ColorFormat r; HRESULT hr = Get_ForeColor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ColorFormat ForeColor = {read=_scw_Get_ForeColor, write=Set_ForeColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Obscured() { Activex::TOleEnum r; HRESULT hr = Get_Obscured(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Obscured = {read=_scw_Get_Obscured, write=Set_Obscured};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_OffsetX() { float r; HRESULT hr = Get_OffsetX(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float OffsetX = {read=_scw_Get_OffsetX, write=Set_OffsetX};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_OffsetY() { float r; HRESULT hr = Get_OffsetY(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float OffsetY = {read=_scw_Get_OffsetY, write=Set_OffsetY};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Transparency() { float r; HRESULT hr = Get_Transparency(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float Transparency = {read=_scw_Get_Transparency, write=Set_Transparency};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Type_() { Activex::TOleEnum r; HRESULT hr = Get_Type_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Type_ = {read=_scw_Get_Type_, write=Set_Type_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Visible() { Activex::TOleEnum r; HRESULT hr = Get_Visible(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Visible = {read=_scw_Get_Visible, write=Set_Visible};
};

__dispinterface ShadowFormatDisp;
typedef System::DelphiInterface<ShadowFormatDisp> _di_ShadowFormatDisp;
__dispinterface INTERFACE_UUID("{000C031B-0000-0000-C000-000000000046}") ShadowFormatDisp  : public IDispatch 
	
{
	
};

__interface Script;
typedef System::DelphiInterface<Script> _di_Script;
__interface INTERFACE_UUID("{000C0341-0000-0000-C000-000000000046}") Script  : public _IMsoDispObj 
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Extended(WideString &Get_Extended_result) = 0 ;
	virtual HRESULT __safecall Set_Extended(const WideString Extended) = 0 ;
	virtual HRESULT __safecall Get_Id(WideString &Get_Id_result) = 0 ;
	virtual HRESULT __safecall Set_Id(const WideString Id) = 0 ;
	virtual HRESULT __safecall Get_Language(Activex::TOleEnum &Get_Language_result) = 0 ;
	virtual HRESULT __safecall Set_Language(Activex::TOleEnum Language) = 0 ;
	virtual HRESULT __safecall Get_Location(Activex::TOleEnum &Get_Location_result) = 0 ;
	virtual HRESULT __safecall Delete(void) = 0 ;
	virtual HRESULT __safecall Get_Shape(_di_IDispatch &Get_Shape_result) = 0 ;
	virtual HRESULT __safecall Get_ScriptText(WideString &Get_ScriptText_result) = 0 ;
	virtual HRESULT __safecall Set_ScriptText(const WideString Script) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Extended() { WideString r; HRESULT hr = Get_Extended(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Extended = {read=_scw_Get_Extended, write=Set_Extended};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Id() { WideString r; HRESULT hr = Get_Id(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Id = {read=_scw_Get_Id, write=Set_Id};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Language() { Activex::TOleEnum r; HRESULT hr = Get_Language(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Language = {read=_scw_Get_Language, write=Set_Language};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Location() { Activex::TOleEnum r; HRESULT hr = Get_Location(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Location = {read=_scw_Get_Location};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Shape() { _di_IDispatch r; HRESULT hr = Get_Shape(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Shape = {read=_scw_Get_Shape};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_ScriptText() { WideString r; HRESULT hr = Get_ScriptText(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString ScriptText = {read=_scw_Get_ScriptText, write=Set_ScriptText};
};

__dispinterface ScriptDisp;
typedef System::DelphiInterface<ScriptDisp> _di_ScriptDisp;
__dispinterface INTERFACE_UUID("{000C0341-0000-0000-C000-000000000046}") ScriptDisp  : public IDispatch 
	
{
	
};

__interface Scripts;
typedef System::DelphiInterface<Scripts> _di_Scripts;
__interface INTERFACE_UUID("{000C0340-0000-0000-C000-000000000046}") Scripts  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Get__NewEnum(_di_IUnknown &Get__NewEnum_result) = 0 ;
	virtual HRESULT __safecall Item(const OleVariant Index, _di_Script &Item_result) = 0 ;
	virtual HRESULT __safecall Add(const _di_IDispatch Anchor, Activex::TOleEnum Location, Activex::TOleEnum 
		Language, const WideString Id, const WideString Extended, const WideString ScriptText, _di_Script &Add_result
		) = 0 ;
	virtual HRESULT __safecall Delete(void) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
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

__dispinterface ScriptsDisp;
typedef System::DelphiInterface<ScriptsDisp> _di_ScriptsDisp;
__dispinterface INTERFACE_UUID("{000C0340-0000-0000-C000-000000000046}") ScriptsDisp  : public IDispatch 
	
{
	
};

__interface ShapeRange;
typedef System::DelphiInterface<ShapeRange> _di_ShapeRange;
__interface TextEffectFormat;
typedef System::DelphiInterface<TextEffectFormat> _di_TextEffectFormat;
__interface TextFrame;
typedef System::DelphiInterface<TextFrame> _di_TextFrame;
__interface ThreeDFormat;
typedef System::DelphiInterface<ThreeDFormat> _di_ThreeDFormat;
__interface INTERFACE_UUID("{000C031C-0000-0000-C000-000000000046}") Shape  : public _IMsoDispObj 
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Apply(void) = 0 ;
	virtual HRESULT __safecall Delete(void) = 0 ;
	virtual HRESULT __safecall Duplicate(_di_Shape &Duplicate_result) = 0 ;
	virtual HRESULT __safecall Flip(Activex::TOleEnum FlipCmd) = 0 ;
	virtual HRESULT __safecall IncrementLeft(float Increment) = 0 ;
	virtual HRESULT __safecall IncrementRotation(float Increment) = 0 ;
	virtual HRESULT __safecall IncrementTop(float Increment) = 0 ;
	virtual HRESULT __safecall PickUp(void) = 0 ;
	virtual HRESULT __safecall RerouteConnections(void) = 0 ;
	virtual HRESULT __safecall ScaleHeight(float Factor, Activex::TOleEnum RelativeToOriginalSize, Activex::TOleEnum 
		fScale) = 0 ;
	virtual HRESULT __safecall ScaleWidth(float Factor, Activex::TOleEnum RelativeToOriginalSize, Activex::TOleEnum 
		fScale) = 0 ;
	virtual HRESULT __safecall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __safecall SetShapesDefaultProperties(void) = 0 ;
	virtual HRESULT __safecall Ungroup(_di_ShapeRange &Ungroup_result) = 0 ;
	virtual HRESULT __safecall ZOrder(Activex::TOleEnum ZOrderCmd) = 0 ;
	virtual HRESULT __safecall Get_Adjustments(_di_Adjustments &Get_Adjustments_result) = 0 ;
	virtual HRESULT __safecall Get_AutoShapeType(Activex::TOleEnum &Get_AutoShapeType_result) = 0 ;
	virtual HRESULT __safecall Set_AutoShapeType(Activex::TOleEnum AutoShapeType) = 0 ;
	virtual HRESULT __safecall Get_BlackWhiteMode(Activex::TOleEnum &Get_BlackWhiteMode_result) = 0 ;
	virtual HRESULT __safecall Set_BlackWhiteMode(Activex::TOleEnum BlackWhiteMode) = 0 ;
	virtual HRESULT __safecall Get_Callout(_di_CalloutFormat &Get_Callout_result) = 0 ;
	virtual HRESULT __safecall Get_ConnectionSiteCount(int &Get_ConnectionSiteCount_result) = 0 ;
	virtual HRESULT __safecall Get_Connector(Activex::TOleEnum &Get_Connector_result) = 0 ;
	virtual HRESULT __safecall Get_ConnectorFormat(_di_ConnectorFormat &Get_ConnectorFormat_result) = 0 
		;
	virtual HRESULT __safecall Get_Fill(_di_FillFormat &Get_Fill_result) = 0 ;
	virtual HRESULT __safecall Get_GroupItems(_di_GroupShapes &Get_GroupItems_result) = 0 ;
	virtual HRESULT __safecall Get_Height(float &Get_Height_result) = 0 ;
	virtual HRESULT __safecall Set_Height(float Height) = 0 ;
	virtual HRESULT __safecall Get_HorizontalFlip(Activex::TOleEnum &Get_HorizontalFlip_result) = 0 ;
	virtual HRESULT __safecall Get_Left(float &Get_Left_result) = 0 ;
	virtual HRESULT __safecall Set_Left(float Left) = 0 ;
	virtual HRESULT __safecall Get_Line(_di_LineFormat &Get_Line_result) = 0 ;
	virtual HRESULT __safecall Get_LockAspectRatio(Activex::TOleEnum &Get_LockAspectRatio_result) = 0 ;
		
	virtual HRESULT __safecall Set_LockAspectRatio(Activex::TOleEnum LockAspectRatio) = 0 ;
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Set_Name(const WideString Name) = 0 ;
	virtual HRESULT __safecall Get_Nodes(_di_ShapeNodes &Get_Nodes_result) = 0 ;
	virtual HRESULT __safecall Get_Rotation(float &Get_Rotation_result) = 0 ;
	virtual HRESULT __safecall Set_Rotation(float Rotation) = 0 ;
	virtual HRESULT __safecall Get_PictureFormat(_di_PictureFormat &Get_PictureFormat_result) = 0 ;
	virtual HRESULT __safecall Get_Shadow(_di_ShadowFormat &Get_Shadow_result) = 0 ;
	virtual HRESULT __safecall Get_TextEffect(_di_TextEffectFormat &Get_TextEffect_result) = 0 ;
	virtual HRESULT __safecall Get_TextFrame(_di_TextFrame &Get_TextFrame_result) = 0 ;
	virtual HRESULT __safecall Get_ThreeD(_di_ThreeDFormat &Get_ThreeD_result) = 0 ;
	virtual HRESULT __safecall Get_Top(float &Get_Top_result) = 0 ;
	virtual HRESULT __safecall Set_Top(float Top) = 0 ;
	virtual HRESULT __safecall Get_Type_(Activex::TOleEnum &Get_Type__result) = 0 ;
	virtual HRESULT __safecall Get_VerticalFlip(Activex::TOleEnum &Get_VerticalFlip_result) = 0 ;
	virtual HRESULT __safecall Get_Vertices(OleVariant &Get_Vertices_result) = 0 ;
	virtual HRESULT __safecall Get_Visible(Activex::TOleEnum &Get_Visible_result) = 0 ;
	virtual HRESULT __safecall Set_Visible(Activex::TOleEnum Visible) = 0 ;
	virtual HRESULT __safecall Get_Width(float &Get_Width_result) = 0 ;
	virtual HRESULT __safecall Set_Width(float Width) = 0 ;
	virtual HRESULT __safecall Get_ZOrderPosition(int &Get_ZOrderPosition_result) = 0 ;
	virtual HRESULT __safecall Get_Script(_di_Script &Get_Script_result) = 0 ;
	virtual HRESULT __safecall Get_AlternativeText(WideString &Get_AlternativeText_result) = 0 ;
	virtual HRESULT __safecall Set_AlternativeText(const WideString AlternativeText) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Adjustments _scw_Get_Adjustments() { _di_Adjustments r; HRESULT hr = Get_Adjustments(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Adjustments Adjustments = {read=_scw_Get_Adjustments};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_AutoShapeType() { Activex::TOleEnum r; HRESULT hr = Get_AutoShapeType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum AutoShapeType = {read=_scw_Get_AutoShapeType, write=Set_AutoShapeType}
		;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_BlackWhiteMode() { Activex::TOleEnum r; HRESULT hr = Get_BlackWhiteMode(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum BlackWhiteMode = {read=_scw_Get_BlackWhiteMode, write=Set_BlackWhiteMode
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_CalloutFormat _scw_Get_Callout() { _di_CalloutFormat r; HRESULT hr = Get_Callout(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_CalloutFormat Callout = {read=_scw_Get_Callout};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ConnectionSiteCount() { int r; HRESULT hr = Get_ConnectionSiteCount(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int ConnectionSiteCount = {read=_scw_Get_ConnectionSiteCount};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Connector() { Activex::TOleEnum r; HRESULT hr = Get_Connector(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Connector = {read=_scw_Get_Connector};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ConnectorFormat _scw_Get_ConnectorFormat() { _di_ConnectorFormat r; HRESULT hr = Get_ConnectorFormat(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ConnectorFormat ConnectorFormat = {read=_scw_Get_ConnectorFormat};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_FillFormat _scw_Get_Fill() { _di_FillFormat r; HRESULT hr = Get_Fill(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_FillFormat Fill = {read=_scw_Get_Fill};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_GroupShapes _scw_Get_GroupItems() { _di_GroupShapes r; HRESULT hr = Get_GroupItems(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_GroupShapes GroupItems = {read=_scw_Get_GroupItems};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Height() { float r; HRESULT hr = Get_Height(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Height = {read=_scw_Get_Height, write=Set_Height};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_HorizontalFlip() { Activex::TOleEnum r; HRESULT hr = Get_HorizontalFlip(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum HorizontalFlip = {read=_scw_Get_HorizontalFlip};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Left() { float r; HRESULT hr = Get_Left(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Left = {read=_scw_Get_Left, write=Set_Left};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_LineFormat _scw_Get_Line() { _di_LineFormat r; HRESULT hr = Get_Line(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_LineFormat Line = {read=_scw_Get_Line};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_LockAspectRatio() { Activex::TOleEnum r; HRESULT hr = Get_LockAspectRatio(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum LockAspectRatio = {read=_scw_Get_LockAspectRatio, write=Set_LockAspectRatio
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name, write=Set_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ShapeNodes _scw_Get_Nodes() { _di_ShapeNodes r; HRESULT hr = Get_Nodes(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ShapeNodes Nodes = {read=_scw_Get_Nodes};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Rotation() { float r; HRESULT hr = Get_Rotation(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Rotation = {read=_scw_Get_Rotation, write=Set_Rotation};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_PictureFormat _scw_Get_PictureFormat() { _di_PictureFormat r; HRESULT hr = Get_PictureFormat(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_PictureFormat PictureFormat = {read=_scw_Get_PictureFormat};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ShadowFormat _scw_Get_Shadow() { _di_ShadowFormat r; HRESULT hr = Get_Shadow(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ShadowFormat Shadow = {read=_scw_Get_Shadow};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_TextEffectFormat _scw_Get_TextEffect() { _di_TextEffectFormat r; HRESULT hr = Get_TextEffect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_TextEffectFormat TextEffect = {read=_scw_Get_TextEffect};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_TextFrame _scw_Get_TextFrame() { _di_TextFrame r; HRESULT hr = Get_TextFrame(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_TextFrame TextFrame = {read=_scw_Get_TextFrame};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ThreeDFormat _scw_Get_ThreeD() { _di_ThreeDFormat r; HRESULT hr = Get_ThreeD(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ThreeDFormat ThreeD = {read=_scw_Get_ThreeD};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Top() { float r; HRESULT hr = Get_Top(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Top = {read=_scw_Get_Top, write=Set_Top};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Type_() { Activex::TOleEnum r; HRESULT hr = Get_Type_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Type_ = {read=_scw_Get_Type_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_VerticalFlip() { Activex::TOleEnum r; HRESULT hr = Get_VerticalFlip(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum VerticalFlip = {read=_scw_Get_VerticalFlip};
	#pragma option push -w-inl
	/* safecall wrapper */ inline OleVariant _scw_Get_Vertices() { OleVariant r; HRESULT hr = Get_Vertices(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property OleVariant Vertices = {read=_scw_Get_Vertices};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Visible() { Activex::TOleEnum r; HRESULT hr = Get_Visible(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Visible = {read=_scw_Get_Visible, write=Set_Visible};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Width() { float r; HRESULT hr = Get_Width(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Width = {read=_scw_Get_Width, write=Set_Width};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ZOrderPosition() { int r; HRESULT hr = Get_ZOrderPosition(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int ZOrderPosition = {read=_scw_Get_ZOrderPosition};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Script _scw_Get_Script() { _di_Script r; HRESULT hr = Get_Script(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Script Script = {read=_scw_Get_Script};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_AlternativeText() { WideString r; HRESULT hr = Get_AlternativeText(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString AlternativeText = {read=_scw_Get_AlternativeText, write=Set_AlternativeText};
		
};

__dispinterface ShapeDisp;
typedef System::DelphiInterface<ShapeDisp> _di_ShapeDisp;
__dispinterface INTERFACE_UUID("{000C031C-0000-0000-C000-000000000046}") ShapeDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{000C031D-0000-0000-C000-000000000046}") ShapeRange  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Item(const OleVariant Index, _di_Shape &Item_result) = 0 ;
	virtual HRESULT __safecall Get__NewEnum(_di_IUnknown &Get__NewEnum_result) = 0 ;
	virtual HRESULT __safecall Align(Activex::TOleEnum AlignCmd, Activex::TOleEnum RelativeTo) = 0 ;
	virtual HRESULT __safecall Apply(void) = 0 ;
	virtual HRESULT __safecall Delete(void) = 0 ;
	virtual HRESULT __safecall Distribute(Activex::TOleEnum DistributeCmd, Activex::TOleEnum RelativeTo
		) = 0 ;
	virtual HRESULT __safecall Duplicate(_di_ShapeRange &Duplicate_result) = 0 ;
	virtual HRESULT __safecall Flip(Activex::TOleEnum FlipCmd) = 0 ;
	virtual HRESULT __safecall IncrementLeft(float Increment) = 0 ;
	virtual HRESULT __safecall IncrementRotation(float Increment) = 0 ;
	virtual HRESULT __safecall IncrementTop(float Increment) = 0 ;
	virtual HRESULT __safecall Group(_di_Shape &Group_result) = 0 ;
	virtual HRESULT __safecall PickUp(void) = 0 ;
	virtual HRESULT __safecall Regroup(_di_Shape &Regroup_result) = 0 ;
	virtual HRESULT __safecall RerouteConnections(void) = 0 ;
	virtual HRESULT __safecall ScaleHeight(float Factor, Activex::TOleEnum RelativeToOriginalSize, Activex::TOleEnum 
		fScale) = 0 ;
	virtual HRESULT __safecall ScaleWidth(float Factor, Activex::TOleEnum RelativeToOriginalSize, Activex::TOleEnum 
		fScale) = 0 ;
	virtual HRESULT __safecall Select(const OleVariant Replace) = 0 ;
	virtual HRESULT __safecall SetShapesDefaultProperties(void) = 0 ;
	virtual HRESULT __safecall Ungroup(_di_ShapeRange &Ungroup_result) = 0 ;
	virtual HRESULT __safecall ZOrder(Activex::TOleEnum ZOrderCmd) = 0 ;
	virtual HRESULT __safecall Get_Adjustments(_di_Adjustments &Get_Adjustments_result) = 0 ;
	virtual HRESULT __safecall Get_AutoShapeType(Activex::TOleEnum &Get_AutoShapeType_result) = 0 ;
	virtual HRESULT __safecall Set_AutoShapeType(Activex::TOleEnum AutoShapeType) = 0 ;
	virtual HRESULT __safecall Get_BlackWhiteMode(Activex::TOleEnum &Get_BlackWhiteMode_result) = 0 ;
	virtual HRESULT __safecall Set_BlackWhiteMode(Activex::TOleEnum BlackWhiteMode) = 0 ;
	virtual HRESULT __safecall Get_Callout(_di_CalloutFormat &Get_Callout_result) = 0 ;
	virtual HRESULT __safecall Get_ConnectionSiteCount(int &Get_ConnectionSiteCount_result) = 0 ;
	virtual HRESULT __safecall Get_Connector(Activex::TOleEnum &Get_Connector_result) = 0 ;
	virtual HRESULT __safecall Get_ConnectorFormat(_di_ConnectorFormat &Get_ConnectorFormat_result) = 0 
		;
	virtual HRESULT __safecall Get_Fill(_di_FillFormat &Get_Fill_result) = 0 ;
	virtual HRESULT __safecall Get_GroupItems(_di_GroupShapes &Get_GroupItems_result) = 0 ;
	virtual HRESULT __safecall Get_Height(float &Get_Height_result) = 0 ;
	virtual HRESULT __safecall Set_Height(float Height) = 0 ;
	virtual HRESULT __safecall Get_HorizontalFlip(Activex::TOleEnum &Get_HorizontalFlip_result) = 0 ;
	virtual HRESULT __safecall Get_Left(float &Get_Left_result) = 0 ;
	virtual HRESULT __safecall Set_Left(float Left) = 0 ;
	virtual HRESULT __safecall Get_Line(_di_LineFormat &Get_Line_result) = 0 ;
	virtual HRESULT __safecall Get_LockAspectRatio(Activex::TOleEnum &Get_LockAspectRatio_result) = 0 ;
		
	virtual HRESULT __safecall Set_LockAspectRatio(Activex::TOleEnum LockAspectRatio) = 0 ;
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Set_Name(const WideString Name) = 0 ;
	virtual HRESULT __safecall Get_Nodes(_di_ShapeNodes &Get_Nodes_result) = 0 ;
	virtual HRESULT __safecall Get_Rotation(float &Get_Rotation_result) = 0 ;
	virtual HRESULT __safecall Set_Rotation(float Rotation) = 0 ;
	virtual HRESULT __safecall Get_PictureFormat(_di_PictureFormat &Get_PictureFormat_result) = 0 ;
	virtual HRESULT __safecall Get_Shadow(_di_ShadowFormat &Get_Shadow_result) = 0 ;
	virtual HRESULT __safecall Get_TextEffect(_di_TextEffectFormat &Get_TextEffect_result) = 0 ;
	virtual HRESULT __safecall Get_TextFrame(_di_TextFrame &Get_TextFrame_result) = 0 ;
	virtual HRESULT __safecall Get_ThreeD(_di_ThreeDFormat &Get_ThreeD_result) = 0 ;
	virtual HRESULT __safecall Get_Top(float &Get_Top_result) = 0 ;
	virtual HRESULT __safecall Set_Top(float Top) = 0 ;
	virtual HRESULT __safecall Get_Type_(Activex::TOleEnum &Get_Type__result) = 0 ;
	virtual HRESULT __safecall Get_VerticalFlip(Activex::TOleEnum &Get_VerticalFlip_result) = 0 ;
	virtual HRESULT __safecall Get_Vertices(OleVariant &Get_Vertices_result) = 0 ;
	virtual HRESULT __safecall Get_Visible(Activex::TOleEnum &Get_Visible_result) = 0 ;
	virtual HRESULT __safecall Set_Visible(Activex::TOleEnum Visible) = 0 ;
	virtual HRESULT __safecall Get_Width(float &Get_Width_result) = 0 ;
	virtual HRESULT __safecall Set_Width(float Width) = 0 ;
	virtual HRESULT __safecall Get_ZOrderPosition(int &Get_ZOrderPosition_result) = 0 ;
	virtual HRESULT __safecall Get_Script(_di_Script &Get_Script_result) = 0 ;
	virtual HRESULT __safecall Get_AlternativeText(WideString &Get_AlternativeText_result) = 0 ;
	virtual HRESULT __safecall Set_AlternativeText(const WideString AlternativeText) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Count() { int r; HRESULT hr = Get_Count(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Count = {read=_scw_Get_Count};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IUnknown _scw_Get__NewEnum() { _di_IUnknown r; HRESULT hr = Get__NewEnum(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IUnknown _NewEnum = {read=_scw_Get__NewEnum};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Adjustments _scw_Get_Adjustments() { _di_Adjustments r; HRESULT hr = Get_Adjustments(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Adjustments Adjustments = {read=_scw_Get_Adjustments};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_AutoShapeType() { Activex::TOleEnum r; HRESULT hr = Get_AutoShapeType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum AutoShapeType = {read=_scw_Get_AutoShapeType, write=Set_AutoShapeType}
		;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_BlackWhiteMode() { Activex::TOleEnum r; HRESULT hr = Get_BlackWhiteMode(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum BlackWhiteMode = {read=_scw_Get_BlackWhiteMode, write=Set_BlackWhiteMode
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_CalloutFormat _scw_Get_Callout() { _di_CalloutFormat r; HRESULT hr = Get_Callout(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_CalloutFormat Callout = {read=_scw_Get_Callout};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ConnectionSiteCount() { int r; HRESULT hr = Get_ConnectionSiteCount(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int ConnectionSiteCount = {read=_scw_Get_ConnectionSiteCount};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Connector() { Activex::TOleEnum r; HRESULT hr = Get_Connector(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Connector = {read=_scw_Get_Connector};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ConnectorFormat _scw_Get_ConnectorFormat() { _di_ConnectorFormat r; HRESULT hr = Get_ConnectorFormat(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ConnectorFormat ConnectorFormat = {read=_scw_Get_ConnectorFormat};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_FillFormat _scw_Get_Fill() { _di_FillFormat r; HRESULT hr = Get_Fill(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_FillFormat Fill = {read=_scw_Get_Fill};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_GroupShapes _scw_Get_GroupItems() { _di_GroupShapes r; HRESULT hr = Get_GroupItems(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_GroupShapes GroupItems = {read=_scw_Get_GroupItems};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Height() { float r; HRESULT hr = Get_Height(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Height = {read=_scw_Get_Height, write=Set_Height};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_HorizontalFlip() { Activex::TOleEnum r; HRESULT hr = Get_HorizontalFlip(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum HorizontalFlip = {read=_scw_Get_HorizontalFlip};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Left() { float r; HRESULT hr = Get_Left(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Left = {read=_scw_Get_Left, write=Set_Left};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_LineFormat _scw_Get_Line() { _di_LineFormat r; HRESULT hr = Get_Line(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_LineFormat Line = {read=_scw_Get_Line};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_LockAspectRatio() { Activex::TOleEnum r; HRESULT hr = Get_LockAspectRatio(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum LockAspectRatio = {read=_scw_Get_LockAspectRatio, write=Set_LockAspectRatio
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name, write=Set_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ShapeNodes _scw_Get_Nodes() { _di_ShapeNodes r; HRESULT hr = Get_Nodes(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ShapeNodes Nodes = {read=_scw_Get_Nodes};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Rotation() { float r; HRESULT hr = Get_Rotation(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Rotation = {read=_scw_Get_Rotation, write=Set_Rotation};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_PictureFormat _scw_Get_PictureFormat() { _di_PictureFormat r; HRESULT hr = Get_PictureFormat(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_PictureFormat PictureFormat = {read=_scw_Get_PictureFormat};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ShadowFormat _scw_Get_Shadow() { _di_ShadowFormat r; HRESULT hr = Get_Shadow(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ShadowFormat Shadow = {read=_scw_Get_Shadow};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_TextEffectFormat _scw_Get_TextEffect() { _di_TextEffectFormat r; HRESULT hr = Get_TextEffect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_TextEffectFormat TextEffect = {read=_scw_Get_TextEffect};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_TextFrame _scw_Get_TextFrame() { _di_TextFrame r; HRESULT hr = Get_TextFrame(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_TextFrame TextFrame = {read=_scw_Get_TextFrame};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ThreeDFormat _scw_Get_ThreeD() { _di_ThreeDFormat r; HRESULT hr = Get_ThreeD(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ThreeDFormat ThreeD = {read=_scw_Get_ThreeD};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Top() { float r; HRESULT hr = Get_Top(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Top = {read=_scw_Get_Top, write=Set_Top};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Type_() { Activex::TOleEnum r; HRESULT hr = Get_Type_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Type_ = {read=_scw_Get_Type_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_VerticalFlip() { Activex::TOleEnum r; HRESULT hr = Get_VerticalFlip(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum VerticalFlip = {read=_scw_Get_VerticalFlip};
	#pragma option push -w-inl
	/* safecall wrapper */ inline OleVariant _scw_Get_Vertices() { OleVariant r; HRESULT hr = Get_Vertices(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property OleVariant Vertices = {read=_scw_Get_Vertices};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Visible() { Activex::TOleEnum r; HRESULT hr = Get_Visible(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Visible = {read=_scw_Get_Visible, write=Set_Visible};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Width() { float r; HRESULT hr = Get_Width(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Width = {read=_scw_Get_Width, write=Set_Width};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ZOrderPosition() { int r; HRESULT hr = Get_ZOrderPosition(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int ZOrderPosition = {read=_scw_Get_ZOrderPosition};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Script _scw_Get_Script() { _di_Script r; HRESULT hr = Get_Script(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Script Script = {read=_scw_Get_Script};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_AlternativeText() { WideString r; HRESULT hr = Get_AlternativeText(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString AlternativeText = {read=_scw_Get_AlternativeText, write=Set_AlternativeText};
		
};

__dispinterface ShapeRangeDisp;
typedef System::DelphiInterface<ShapeRangeDisp> _di_ShapeRangeDisp;
__dispinterface INTERFACE_UUID("{000C031D-0000-0000-C000-000000000046}") ShapeRangeDisp  : public IDispatch 
	
{
	
};

__interface Shapes;
typedef System::DelphiInterface<Shapes> _di_Shapes;
__interface INTERFACE_UUID("{000C031E-0000-0000-C000-000000000046}") Shapes  : public _IMsoDispObj 
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Item(const OleVariant Index, _di_Shape &Item_result) = 0 ;
	virtual HRESULT __safecall Get__NewEnum(_di_IUnknown &Get__NewEnum_result) = 0 ;
	virtual HRESULT __safecall AddCallout(Activex::TOleEnum Type_, float Left, float Top, float Width, 
		float Height, _di_Shape &AddCallout_result) = 0 ;
	virtual HRESULT __safecall AddConnector(Activex::TOleEnum Type_, float BeginX, float BeginY, float 
		EndX, float EndY, _di_Shape &AddConnector_result) = 0 ;
	virtual HRESULT __safecall AddCurve(const OleVariant SafeArrayOfPoints, _di_Shape &AddCurve_result)
		 = 0 ;
	virtual HRESULT __safecall AddLabel(Activex::TOleEnum Orientation, float Left, float Top, float Width
		, float Height, _di_Shape &AddLabel_result) = 0 ;
	virtual HRESULT __safecall AddLine(float BeginX, float BeginY, float EndX, float EndY, _di_Shape &AddLine_result
		) = 0 ;
	virtual HRESULT __safecall AddPicture(const WideString FileName, Activex::TOleEnum LinkToFile, Activex::TOleEnum 
		SaveWithDocument, float Left, float Top, float Width, float Height, _di_Shape &AddPicture_result) = 0 
		;
	virtual HRESULT __safecall AddPolyline(const OleVariant SafeArrayOfPoints, _di_Shape &AddPolyline_result
		) = 0 ;
	virtual HRESULT __safecall AddShape(Activex::TOleEnum Type_, float Left, float Top, float Width, float 
		Height, _di_Shape &AddShape_result) = 0 ;
	virtual HRESULT __safecall AddTextEffect(Activex::TOleEnum PresetTextEffect, const WideString Text, 
		const WideString FontName, float FontSize, Activex::TOleEnum FontBold, Activex::TOleEnum FontItalic
		, float Left, float Top, _di_Shape &AddTextEffect_result) = 0 ;
	virtual HRESULT __safecall AddTextbox(Activex::TOleEnum Orientation, float Left, float Top, float Width
		, float Height, _di_Shape &AddTextbox_result) = 0 ;
	virtual HRESULT __safecall BuildFreeform(Activex::TOleEnum EditingType, float X1, float Y1, _di_FreeformBuilder &BuildFreeform_result
		) = 0 ;
	virtual HRESULT __safecall Range(const OleVariant Index, _di_ShapeRange &Range_result) = 0 ;
	virtual HRESULT __safecall SelectAll(void) = 0 ;
	virtual HRESULT __safecall Get_Background(_di_Shape &Get_Background_result) = 0 ;
	virtual HRESULT __safecall Get_Default(_di_Shape &Get_Default_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Count() { int r; HRESULT hr = Get_Count(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Count = {read=_scw_Get_Count};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IUnknown _scw_Get__NewEnum() { _di_IUnknown r; HRESULT hr = Get__NewEnum(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IUnknown _NewEnum = {read=_scw_Get__NewEnum};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Shape _scw_Get_Background() { _di_Shape r; HRESULT hr = Get_Background(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Shape Background = {read=_scw_Get_Background};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Shape _scw_Get_Default() { _di_Shape r; HRESULT hr = Get_Default(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Shape Default = {read=_scw_Get_Default};
};

__dispinterface ShapesDisp;
typedef System::DelphiInterface<ShapesDisp> _di_ShapesDisp;
__dispinterface INTERFACE_UUID("{000C031E-0000-0000-C000-000000000046}") ShapesDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{000C031F-0000-0000-C000-000000000046}") TextEffectFormat  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall ToggleVerticalText(void) = 0 ;
	virtual HRESULT __safecall Get_Alignment(Activex::TOleEnum &Get_Alignment_result) = 0 ;
	virtual HRESULT __safecall Set_Alignment(Activex::TOleEnum Alignment) = 0 ;
	virtual HRESULT __safecall Get_FontBold(Activex::TOleEnum &Get_FontBold_result) = 0 ;
	virtual HRESULT __safecall Set_FontBold(Activex::TOleEnum FontBold) = 0 ;
	virtual HRESULT __safecall Get_FontItalic(Activex::TOleEnum &Get_FontItalic_result) = 0 ;
	virtual HRESULT __safecall Set_FontItalic(Activex::TOleEnum FontItalic) = 0 ;
	virtual HRESULT __safecall Get_FontName(WideString &Get_FontName_result) = 0 ;
	virtual HRESULT __safecall Set_FontName(const WideString FontName) = 0 ;
	virtual HRESULT __safecall Get_FontSize(float &Get_FontSize_result) = 0 ;
	virtual HRESULT __safecall Set_FontSize(float FontSize) = 0 ;
	virtual HRESULT __safecall Get_KernedPairs(Activex::TOleEnum &Get_KernedPairs_result) = 0 ;
	virtual HRESULT __safecall Set_KernedPairs(Activex::TOleEnum KernedPairs) = 0 ;
	virtual HRESULT __safecall Get_NormalizedHeight(Activex::TOleEnum &Get_NormalizedHeight_result) = 0 
		;
	virtual HRESULT __safecall Set_NormalizedHeight(Activex::TOleEnum NormalizedHeight) = 0 ;
	virtual HRESULT __safecall Get_PresetShape(Activex::TOleEnum &Get_PresetShape_result) = 0 ;
	virtual HRESULT __safecall Set_PresetShape(Activex::TOleEnum PresetShape) = 0 ;
	virtual HRESULT __safecall Get_PresetTextEffect(Activex::TOleEnum &Get_PresetTextEffect_result) = 0 
		;
	virtual HRESULT __safecall Set_PresetTextEffect(Activex::TOleEnum Preset) = 0 ;
	virtual HRESULT __safecall Get_RotatedChars(Activex::TOleEnum &Get_RotatedChars_result) = 0 ;
	virtual HRESULT __safecall Set_RotatedChars(Activex::TOleEnum RotatedChars) = 0 ;
	virtual HRESULT __safecall Get_Text(WideString &Get_Text_result) = 0 ;
	virtual HRESULT __safecall Set_Text(const WideString Text) = 0 ;
	virtual HRESULT __safecall Get_Tracking(float &Get_Tracking_result) = 0 ;
	virtual HRESULT __safecall Set_Tracking(float Tracking) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Alignment() { Activex::TOleEnum r; HRESULT hr = Get_Alignment(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Alignment = {read=_scw_Get_Alignment, write=Set_Alignment};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_FontBold() { Activex::TOleEnum r; HRESULT hr = Get_FontBold(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum FontBold = {read=_scw_Get_FontBold, write=Set_FontBold};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_FontItalic() { Activex::TOleEnum r; HRESULT hr = Get_FontItalic(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum FontItalic = {read=_scw_Get_FontItalic, write=Set_FontItalic};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_FontName() { WideString r; HRESULT hr = Get_FontName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString FontName = {read=_scw_Get_FontName, write=Set_FontName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_FontSize() { float r; HRESULT hr = Get_FontSize(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float FontSize = {read=_scw_Get_FontSize, write=Set_FontSize};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_KernedPairs() { Activex::TOleEnum r; HRESULT hr = Get_KernedPairs(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum KernedPairs = {read=_scw_Get_KernedPairs, write=Set_KernedPairs};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_NormalizedHeight() { Activex::TOleEnum r; HRESULT hr = Get_NormalizedHeight(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum NormalizedHeight = {read=_scw_Get_NormalizedHeight, write=Set_NormalizedHeight
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PresetShape() { Activex::TOleEnum r; HRESULT hr = Get_PresetShape(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PresetShape = {read=_scw_Get_PresetShape, write=Set_PresetShape};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PresetTextEffect() { Activex::TOleEnum r; HRESULT hr = Get_PresetTextEffect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PresetTextEffect = {read=_scw_Get_PresetTextEffect, write=Set_PresetTextEffect
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_RotatedChars() { Activex::TOleEnum r; HRESULT hr = Get_RotatedChars(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum RotatedChars = {read=_scw_Get_RotatedChars, write=Set_RotatedChars};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Text() { WideString r; HRESULT hr = Get_Text(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Text = {read=_scw_Get_Text, write=Set_Text};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Tracking() { float r; HRESULT hr = Get_Tracking(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Tracking = {read=_scw_Get_Tracking, write=Set_Tracking};
};

__dispinterface TextEffectFormatDisp;
typedef System::DelphiInterface<TextEffectFormatDisp> _di_TextEffectFormatDisp;
__dispinterface INTERFACE_UUID("{000C031F-0000-0000-C000-000000000046}") TextEffectFormatDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{000C0320-0000-0000-C000-000000000046}") TextFrame  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_MarginBottom(float &Get_MarginBottom_result) = 0 ;
	virtual HRESULT __safecall Set_MarginBottom(float MarginBottom) = 0 ;
	virtual HRESULT __safecall Get_MarginLeft(float &Get_MarginLeft_result) = 0 ;
	virtual HRESULT __safecall Set_MarginLeft(float MarginLeft) = 0 ;
	virtual HRESULT __safecall Get_MarginRight(float &Get_MarginRight_result) = 0 ;
	virtual HRESULT __safecall Set_MarginRight(float MarginRight) = 0 ;
	virtual HRESULT __safecall Get_MarginTop(float &Get_MarginTop_result) = 0 ;
	virtual HRESULT __safecall Set_MarginTop(float MarginTop) = 0 ;
	virtual HRESULT __safecall Get_Orientation(Activex::TOleEnum &Get_Orientation_result) = 0 ;
	virtual HRESULT __safecall Set_Orientation(Activex::TOleEnum Orientation) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_MarginBottom() { float r; HRESULT hr = Get_MarginBottom(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float MarginBottom = {read=_scw_Get_MarginBottom, write=Set_MarginBottom};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_MarginLeft() { float r; HRESULT hr = Get_MarginLeft(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float MarginLeft = {read=_scw_Get_MarginLeft, write=Set_MarginLeft};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_MarginRight() { float r; HRESULT hr = Get_MarginRight(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float MarginRight = {read=_scw_Get_MarginRight, write=Set_MarginRight};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_MarginTop() { float r; HRESULT hr = Get_MarginTop(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float MarginTop = {read=_scw_Get_MarginTop, write=Set_MarginTop};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Orientation() { Activex::TOleEnum r; HRESULT hr = Get_Orientation(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Orientation = {read=_scw_Get_Orientation, write=Set_Orientation};
};

__dispinterface TextFrameDisp;
typedef System::DelphiInterface<TextFrameDisp> _di_TextFrameDisp;
__dispinterface INTERFACE_UUID("{000C0320-0000-0000-C000-000000000046}") TextFrameDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{000C0321-0000-0000-C000-000000000046}") ThreeDFormat  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall IncrementRotationX(float Increment) = 0 ;
	virtual HRESULT __safecall IncrementRotationY(float Increment) = 0 ;
	virtual HRESULT __safecall ResetRotation(void) = 0 ;
	virtual HRESULT __safecall SetThreeDFormat(Activex::TOleEnum PresetThreeDFormat) = 0 ;
	virtual HRESULT __safecall SetExtrusionDirection(Activex::TOleEnum PresetExtrusionDirection) = 0 ;
	virtual HRESULT __safecall Get_Depth(float &Get_Depth_result) = 0 ;
	virtual HRESULT __safecall Set_Depth(float Depth) = 0 ;
	virtual HRESULT __safecall Get_ExtrusionColor(_di_ColorFormat &Get_ExtrusionColor_result) = 0 ;
	virtual HRESULT __safecall Get_ExtrusionColorType(Activex::TOleEnum &Get_ExtrusionColorType_result)
		 = 0 ;
	virtual HRESULT __safecall Set_ExtrusionColorType(Activex::TOleEnum ExtrusionColorType) = 0 ;
	virtual HRESULT __safecall Get_Perspective(Activex::TOleEnum &Get_Perspective_result) = 0 ;
	virtual HRESULT __safecall Set_Perspective(Activex::TOleEnum Perspective) = 0 ;
	virtual HRESULT __safecall Get_PresetExtrusionDirection(Activex::TOleEnum &Get_PresetExtrusionDirection_result
		) = 0 ;
	virtual HRESULT __safecall Get_PresetLightingDirection(Activex::TOleEnum &Get_PresetLightingDirection_result
		) = 0 ;
	virtual HRESULT __safecall Set_PresetLightingDirection(Activex::TOleEnum PresetLightingDirection) = 0 
		;
	virtual HRESULT __safecall Get_PresetLightingSoftness(Activex::TOleEnum &Get_PresetLightingSoftness_result
		) = 0 ;
	virtual HRESULT __safecall Set_PresetLightingSoftness(Activex::TOleEnum PresetLightingSoftness) = 0 
		;
	virtual HRESULT __safecall Get_PresetMaterial(Activex::TOleEnum &Get_PresetMaterial_result) = 0 ;
	virtual HRESULT __safecall Set_PresetMaterial(Activex::TOleEnum PresetMaterial) = 0 ;
	virtual HRESULT __safecall Get_PresetThreeDFormat(Activex::TOleEnum &Get_PresetThreeDFormat_result)
		 = 0 ;
	virtual HRESULT __safecall Get_RotationX(float &Get_RotationX_result) = 0 ;
	virtual HRESULT __safecall Set_RotationX(float RotationX) = 0 ;
	virtual HRESULT __safecall Get_RotationY(float &Get_RotationY_result) = 0 ;
	virtual HRESULT __safecall Set_RotationY(float RotationY) = 0 ;
	virtual HRESULT __safecall Get_Visible(Activex::TOleEnum &Get_Visible_result) = 0 ;
	virtual HRESULT __safecall Set_Visible(Activex::TOleEnum Visible) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Depth() { float r; HRESULT hr = Get_Depth(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Depth = {read=_scw_Get_Depth, write=Set_Depth};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ColorFormat _scw_Get_ExtrusionColor() { _di_ColorFormat r; HRESULT hr = Get_ExtrusionColor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ColorFormat ExtrusionColor = {read=_scw_Get_ExtrusionColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ExtrusionColorType() { Activex::TOleEnum r; HRESULT hr = Get_ExtrusionColorType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ExtrusionColorType = {read=_scw_Get_ExtrusionColorType, write=Set_ExtrusionColorType
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Perspective() { Activex::TOleEnum r; HRESULT hr = Get_Perspective(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Perspective = {read=_scw_Get_Perspective, write=Set_Perspective};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PresetExtrusionDirection() { Activex::TOleEnum r; HRESULT hr = Get_PresetExtrusionDirection(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PresetExtrusionDirection = {read=_scw_Get_PresetExtrusionDirection};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PresetLightingDirection() { Activex::TOleEnum r; HRESULT hr = Get_PresetLightingDirection(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PresetLightingDirection = {read=_scw_Get_PresetLightingDirection, write=
		Set_PresetLightingDirection};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PresetLightingSoftness() { Activex::TOleEnum r; HRESULT hr = Get_PresetLightingSoftness(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PresetLightingSoftness = {read=_scw_Get_PresetLightingSoftness, write=
		Set_PresetLightingSoftness};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PresetMaterial() { Activex::TOleEnum r; HRESULT hr = Get_PresetMaterial(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PresetMaterial = {read=_scw_Get_PresetMaterial, write=Set_PresetMaterial
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PresetThreeDFormat() { Activex::TOleEnum r; HRESULT hr = Get_PresetThreeDFormat(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PresetThreeDFormat = {read=_scw_Get_PresetThreeDFormat};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_RotationX() { float r; HRESULT hr = Get_RotationX(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float RotationX = {read=_scw_Get_RotationX, write=Set_RotationX};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_RotationY() { float r; HRESULT hr = Get_RotationY(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float RotationY = {read=_scw_Get_RotationY, write=Set_RotationY};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Visible() { Activex::TOleEnum r; HRESULT hr = Get_Visible(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Visible = {read=_scw_Get_Visible, write=Set_Visible};
};

__dispinterface ThreeDFormatDisp;
typedef System::DelphiInterface<ThreeDFormatDisp> _di_ThreeDFormatDisp;
__dispinterface INTERFACE_UUID("{000C0321-0000-0000-C000-000000000046}") ThreeDFormatDisp  : public IDispatch 
	
{
	
};

__interface IMsoDispCagNotifySink;
typedef System::DelphiInterface<IMsoDispCagNotifySink> _di_IMsoDispCagNotifySink;
__interface INTERFACE_UUID("{000C0359-0000-0000-C000-000000000046}") IMsoDispCagNotifySink  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall InsertClip(const _di_IUnknown pClipMoniker, const _di_IUnknown pItemMoniker
		) = 0 ;
	virtual HRESULT __safecall WindowIsClosing(void) = 0 ;
};

__dispinterface IMsoDispCagNotifySinkDisp;
typedef System::DelphiInterface<IMsoDispCagNotifySinkDisp> _di_IMsoDispCagNotifySinkDisp;
__dispinterface INTERFACE_UUID("{000C0359-0000-0000-C000-000000000046}") IMsoDispCagNotifySinkDisp  : public IDispatch 
	
{
	
};

__interface Balloon;
typedef System::DelphiInterface<Balloon> _di_Balloon;
__interface INTERFACE_UUID("{000C0324-0000-0000-C000-000000000046}") Balloon  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Checkboxes(_di_IDispatch &Get_Checkboxes_result) = 0 ;
	virtual HRESULT __safecall Get_Labels(_di_IDispatch &Get_Labels_result) = 0 ;
	virtual HRESULT __safecall Set_BalloonType(Activex::TOleEnum pbty) = 0 ;
	virtual HRESULT __safecall Get_BalloonType(Activex::TOleEnum &Get_BalloonType_result) = 0 ;
	virtual HRESULT __safecall Set_Icon(Activex::TOleEnum picn) = 0 ;
	virtual HRESULT __safecall Get_Icon(Activex::TOleEnum &Get_Icon_result) = 0 ;
	virtual HRESULT __safecall Set_Heading(const WideString pbstr) = 0 ;
	virtual HRESULT __safecall Get_Heading(WideString &Get_Heading_result) = 0 ;
	virtual HRESULT __safecall Set_Text(const WideString pbstr) = 0 ;
	virtual HRESULT __safecall Get_Text(WideString &Get_Text_result) = 0 ;
	virtual HRESULT __safecall Set_Mode(Activex::TOleEnum pmd) = 0 ;
	virtual HRESULT __safecall Get_Mode(Activex::TOleEnum &Get_Mode_result) = 0 ;
	virtual HRESULT __safecall Set_Animation(Activex::TOleEnum pfca) = 0 ;
	virtual HRESULT __safecall Get_Animation(Activex::TOleEnum &Get_Animation_result) = 0 ;
	virtual HRESULT __safecall Set_Button(Activex::TOleEnum psbs) = 0 ;
	virtual HRESULT __safecall Get_Button(Activex::TOleEnum &Get_Button_result) = 0 ;
	virtual HRESULT __safecall Set_Callback(const WideString pbstr) = 0 ;
	virtual HRESULT __safecall Get_Callback(WideString &Get_Callback_result) = 0 ;
	virtual HRESULT __safecall Set_Private_(int plPrivate) = 0 ;
	virtual HRESULT __safecall Get_Private_(int &Get_Private__result) = 0 ;
	virtual HRESULT __safecall SetAvoidRectangle(int Left, int Top, int Right, int Bottom) = 0 ;
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Show(Activex::TOleEnum &Show_result) = 0 ;
	virtual HRESULT __safecall Close(void) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Checkboxes() { _di_IDispatch r; HRESULT hr = Get_Checkboxes(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Checkboxes = {read=_scw_Get_Checkboxes};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Labels() { _di_IDispatch r; HRESULT hr = Get_Labels(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Labels = {read=_scw_Get_Labels};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_BalloonType() { Activex::TOleEnum r; HRESULT hr = Get_BalloonType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum BalloonType = {read=_scw_Get_BalloonType, write=Set_BalloonType};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Icon() { Activex::TOleEnum r; HRESULT hr = Get_Icon(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Icon = {read=_scw_Get_Icon, write=Set_Icon};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Heading() { WideString r; HRESULT hr = Get_Heading(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Heading = {read=_scw_Get_Heading, write=Set_Heading};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Text() { WideString r; HRESULT hr = Get_Text(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Text = {read=_scw_Get_Text, write=Set_Text};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Mode() { Activex::TOleEnum r; HRESULT hr = Get_Mode(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Mode = {read=_scw_Get_Mode, write=Set_Mode};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Animation() { Activex::TOleEnum r; HRESULT hr = Get_Animation(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Animation = {read=_scw_Get_Animation, write=Set_Animation};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Button() { Activex::TOleEnum r; HRESULT hr = Get_Button(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Button = {read=_scw_Get_Button, write=Set_Button};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Callback() { WideString r; HRESULT hr = Get_Callback(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Callback = {read=_scw_Get_Callback, write=Set_Callback};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Private_() { int r; HRESULT hr = Get_Private_(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Private_ = {read=_scw_Get_Private_, write=Set_Private_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name};
};

__dispinterface BalloonDisp;
typedef System::DelphiInterface<BalloonDisp> _di_BalloonDisp;
__dispinterface INTERFACE_UUID("{000C0324-0000-0000-C000-000000000046}") BalloonDisp  : public IDispatch 
	
{
	
};

__interface BalloonCheckboxes;
typedef System::DelphiInterface<BalloonCheckboxes> _di_BalloonCheckboxes;
__interface INTERFACE_UUID("{000C0326-0000-0000-C000-000000000046}") BalloonCheckboxes  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Item(int Index, _di_IDispatch &Get_Item_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Set_Count(int pccbx) = 0 ;
	virtual HRESULT __safecall Get__NewEnum(_di_IUnknown &Get__NewEnum_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Item(int Index) { _di_IDispatch r; HRESULT hr = Get_Item(
		Index, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Item[int Index] = {read=_scw_Get_Item/*, default*/};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Count() { int r; HRESULT hr = Get_Count(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Count = {read=_scw_Get_Count, write=Set_Count};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IUnknown _scw_Get__NewEnum() { _di_IUnknown r; HRESULT hr = Get__NewEnum(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IUnknown _NewEnum = {read=_scw_Get__NewEnum};
};

__dispinterface BalloonCheckboxesDisp;
typedef System::DelphiInterface<BalloonCheckboxesDisp> _di_BalloonCheckboxesDisp;
__dispinterface INTERFACE_UUID("{000C0326-0000-0000-C000-000000000046}") BalloonCheckboxesDisp  : public IDispatch 
	
{
	
};

__interface BalloonCheckbox;
typedef System::DelphiInterface<BalloonCheckbox> _di_BalloonCheckbox;
__interface INTERFACE_UUID("{000C0328-0000-0000-C000-000000000046}") BalloonCheckbox  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Item(WideString &Get_Item_result) = 0 ;
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Set_Checked(Word pvarfChecked) = 0 ;
	virtual HRESULT __safecall Get_Checked(Word &Get_Checked_result) = 0 ;
	virtual HRESULT __safecall Set_Text(const WideString pbstr) = 0 ;
	virtual HRESULT __safecall Get_Text(WideString &Get_Text_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Item() { WideString r; HRESULT hr = Get_Item(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Item = {read=_scw_Get_Item};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Checked() { Word r; HRESULT hr = Get_Checked(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Checked = {read=_scw_Get_Checked, write=Set_Checked};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Text() { WideString r; HRESULT hr = Get_Text(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Text = {read=_scw_Get_Text, write=Set_Text};
};

__dispinterface BalloonCheckboxDisp;
typedef System::DelphiInterface<BalloonCheckboxDisp> _di_BalloonCheckboxDisp;
__dispinterface INTERFACE_UUID("{000C0328-0000-0000-C000-000000000046}") BalloonCheckboxDisp  : public IDispatch 
	
{
	
};

__interface BalloonLabels;
typedef System::DelphiInterface<BalloonLabels> _di_BalloonLabels;
__interface INTERFACE_UUID("{000C032E-0000-0000-C000-000000000046}") BalloonLabels  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Item(int Index, _di_IDispatch &Get_Item_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Set_Count(int pcwz) = 0 ;
	virtual HRESULT __safecall Get__NewEnum(_di_IUnknown &Get__NewEnum_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Item(int Index) { _di_IDispatch r; HRESULT hr = Get_Item(
		Index, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Item[int Index] = {read=_scw_Get_Item/*, default*/};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Count() { int r; HRESULT hr = Get_Count(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Count = {read=_scw_Get_Count, write=Set_Count};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IUnknown _scw_Get__NewEnum() { _di_IUnknown r; HRESULT hr = Get__NewEnum(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IUnknown _NewEnum = {read=_scw_Get__NewEnum};
};

__dispinterface BalloonLabelsDisp;
typedef System::DelphiInterface<BalloonLabelsDisp> _di_BalloonLabelsDisp;
__dispinterface INTERFACE_UUID("{000C032E-0000-0000-C000-000000000046}") BalloonLabelsDisp  : public IDispatch 
	
{
	
};

__interface BalloonLabel;
typedef System::DelphiInterface<BalloonLabel> _di_BalloonLabel;
__interface INTERFACE_UUID("{000C0330-0000-0000-C000-000000000046}") BalloonLabel  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Item(WideString &Get_Item_result) = 0 ;
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Set_Text(const WideString pbstr) = 0 ;
	virtual HRESULT __safecall Get_Text(WideString &Get_Text_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Item() { WideString r; HRESULT hr = Get_Item(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Item = {read=_scw_Get_Item};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Text() { WideString r; HRESULT hr = Get_Text(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Text = {read=_scw_Get_Text, write=Set_Text};
};

__dispinterface BalloonLabelDisp;
typedef System::DelphiInterface<BalloonLabelDisp> _di_BalloonLabelDisp;
__dispinterface INTERFACE_UUID("{000C0330-0000-0000-C000-000000000046}") BalloonLabelDisp  : public IDispatch 
	
{
	
};

__interface AnswerWizardFiles;
typedef System::DelphiInterface<AnswerWizardFiles> _di_AnswerWizardFiles;
__interface INTERFACE_UUID("{000C0361-0000-0000-C000-000000000046}") AnswerWizardFiles  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Item(int Index, WideString &Get_Item_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Add(const WideString FileName) = 0 ;
	virtual HRESULT __safecall Delete(const WideString FileName) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Item(int Index) { WideString r; HRESULT hr = Get_Item(
		Index, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Item[int Index] = {read=_scw_Get_Item/*, default*/};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Count() { int r; HRESULT hr = Get_Count(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Count = {read=_scw_Get_Count};
};

__dispinterface AnswerWizardFilesDisp;
typedef System::DelphiInterface<AnswerWizardFilesDisp> _di_AnswerWizardFilesDisp;
__dispinterface INTERFACE_UUID("{000C0361-0000-0000-C000-000000000046}") AnswerWizardFilesDisp  : public IDispatch 
	
{
	
};

__interface AnswerWizard;
typedef System::DelphiInterface<AnswerWizard> _di_AnswerWizard;
__interface INTERFACE_UUID("{000C0360-0000-0000-C000-000000000046}") AnswerWizard  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Files(_di_AnswerWizardFiles &Get_Files_result) = 0 ;
	virtual HRESULT __safecall ClearFileList(void) = 0 ;
	virtual HRESULT __safecall ResetFileList(void) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_AnswerWizardFiles _scw_Get_Files() { _di_AnswerWizardFiles r; HRESULT hr = Get_Files(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_AnswerWizardFiles Files = {read=_scw_Get_Files};
};

__dispinterface AnswerWizardDisp;
typedef System::DelphiInterface<AnswerWizardDisp> _di_AnswerWizardDisp;
__dispinterface INTERFACE_UUID("{000C0360-0000-0000-C000-000000000046}") AnswerWizardDisp  : public IDispatch 
	
{
	
};

__interface Assistant;
typedef System::DelphiInterface<Assistant> _di_Assistant;
__interface INTERFACE_UUID("{000C0322-0000-0000-C000-000000000046}") Assistant  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Move(int xLeft, int yTop) = 0 ;
	virtual HRESULT __safecall Set_Top(int pyTop) = 0 ;
	virtual HRESULT __safecall Get_Top(int &Get_Top_result) = 0 ;
	virtual HRESULT __safecall Set_Left(int pxLeft) = 0 ;
	virtual HRESULT __safecall Get_Left(int &Get_Left_result) = 0 ;
	virtual HRESULT __safecall Help(void) = 0 ;
	virtual HRESULT __safecall StartWizard(Word On_, const WideString Callback, int PrivateX, const OleVariant 
		Animation, const OleVariant CustomTeaser, const OleVariant Top, const OleVariant Left, const OleVariant 
		Bottom, const OleVariant Right, int &StartWizard_result) = 0 ;
	virtual HRESULT __safecall EndWizard(int WizardID, Word varfSuccess, const OleVariant Animation) = 0 
		;
	virtual HRESULT __safecall ActivateWizard(int WizardID, Activex::TOleEnum act, const OleVariant Animation
		) = 0 ;
	virtual HRESULT __safecall ResetTips(void) = 0 ;
	virtual HRESULT __safecall Get_NewBalloon(_di_Balloon &Get_NewBalloon_result) = 0 ;
	virtual HRESULT __safecall Get_BalloonError(Activex::TOleEnum &Get_BalloonError_result) = 0 ;
	virtual HRESULT __safecall Get_Visible(Word &Get_Visible_result) = 0 ;
	virtual HRESULT __safecall Set_Visible(Word pvarfVisible) = 0 ;
	virtual HRESULT __safecall Get_Animation(Activex::TOleEnum &Get_Animation_result) = 0 ;
	virtual HRESULT __safecall Set_Animation(Activex::TOleEnum pfca) = 0 ;
	virtual HRESULT __safecall Get_Reduced(Word &Get_Reduced_result) = 0 ;
	virtual HRESULT __safecall Set_Reduced(Word pvarfReduced) = 0 ;
	virtual HRESULT __safecall Set_AssistWithHelp(Word pvarfAssistWithHelp) = 0 ;
	virtual HRESULT __safecall Get_AssistWithHelp(Word &Get_AssistWithHelp_result) = 0 ;
	virtual HRESULT __safecall Set_AssistWithWizards(Word pvarfAssistWithWizards) = 0 ;
	virtual HRESULT __safecall Get_AssistWithWizards(Word &Get_AssistWithWizards_result) = 0 ;
	virtual HRESULT __safecall Set_AssistWithAlerts(Word pvarfAssistWithAlerts) = 0 ;
	virtual HRESULT __safecall Get_AssistWithAlerts(Word &Get_AssistWithAlerts_result) = 0 ;
	virtual HRESULT __safecall Set_MoveWhenInTheWay(Word pvarfMove) = 0 ;
	virtual HRESULT __safecall Get_MoveWhenInTheWay(Word &Get_MoveWhenInTheWay_result) = 0 ;
	virtual HRESULT __safecall Set_Sounds(Word pvarfSounds) = 0 ;
	virtual HRESULT __safecall Get_Sounds(Word &Get_Sounds_result) = 0 ;
	virtual HRESULT __safecall Set_FeatureTips(Word pvarfFeatures) = 0 ;
	virtual HRESULT __safecall Get_FeatureTips(Word &Get_FeatureTips_result) = 0 ;
	virtual HRESULT __safecall Set_MouseTips(Word pvarfMouse) = 0 ;
	virtual HRESULT __safecall Get_MouseTips(Word &Get_MouseTips_result) = 0 ;
	virtual HRESULT __safecall Set_KeyboardShortcutTips(Word pvarfKeyboardShortcuts) = 0 ;
	virtual HRESULT __safecall Get_KeyboardShortcutTips(Word &Get_KeyboardShortcutTips_result) = 0 ;
	virtual HRESULT __safecall Set_HighPriorityTips(Word pvarfHighPriorityTips) = 0 ;
	virtual HRESULT __safecall Get_HighPriorityTips(Word &Get_HighPriorityTips_result) = 0 ;
	virtual HRESULT __safecall Set_TipOfDay(Word pvarfTipOfDay) = 0 ;
	virtual HRESULT __safecall Get_TipOfDay(Word &Get_TipOfDay_result) = 0 ;
	virtual HRESULT __safecall Set_GuessHelp(Word pvarfGuessHelp) = 0 ;
	virtual HRESULT __safecall Get_GuessHelp(Word &Get_GuessHelp_result) = 0 ;
	virtual HRESULT __safecall Set_SearchWhenProgramming(Word pvarfSearchInProgram) = 0 ;
	virtual HRESULT __safecall Get_SearchWhenProgramming(Word &Get_SearchWhenProgramming_result) = 0 ;
	virtual HRESULT __safecall Get_Item(WideString &Get_Item_result) = 0 ;
	virtual HRESULT __safecall Get_FileName(WideString &Get_FileName_result) = 0 ;
	virtual HRESULT __safecall Set_FileName(const WideString pbstr) = 0 ;
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Get_On_(Word &Get_On__result) = 0 ;
	virtual HRESULT __safecall Set_On_(Word pvarfOn) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Top() { int r; HRESULT hr = Get_Top(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Top = {read=_scw_Get_Top, write=Set_Top};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Left() { int r; HRESULT hr = Get_Left(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Left = {read=_scw_Get_Left, write=Set_Left};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Balloon _scw_Get_NewBalloon() { _di_Balloon r; HRESULT hr = Get_NewBalloon(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Balloon NewBalloon = {read=_scw_Get_NewBalloon};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_BalloonError() { Activex::TOleEnum r; HRESULT hr = Get_BalloonError(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum BalloonError = {read=_scw_Get_BalloonError};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Visible() { Word r; HRESULT hr = Get_Visible(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Visible = {read=_scw_Get_Visible, write=Set_Visible};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Animation() { Activex::TOleEnum r; HRESULT hr = Get_Animation(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Animation = {read=_scw_Get_Animation, write=Set_Animation};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Reduced() { Word r; HRESULT hr = Get_Reduced(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Reduced = {read=_scw_Get_Reduced, write=Set_Reduced};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_AssistWithHelp() { Word r; HRESULT hr = Get_AssistWithHelp(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word AssistWithHelp = {read=_scw_Get_AssistWithHelp, write=Set_AssistWithHelp};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_AssistWithWizards() { Word r; HRESULT hr = Get_AssistWithWizards(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word AssistWithWizards = {read=_scw_Get_AssistWithWizards, write=Set_AssistWithWizards};
		
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_AssistWithAlerts() { Word r; HRESULT hr = Get_AssistWithAlerts(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word AssistWithAlerts = {read=_scw_Get_AssistWithAlerts, write=Set_AssistWithAlerts};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_MoveWhenInTheWay() { Word r; HRESULT hr = Get_MoveWhenInTheWay(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word MoveWhenInTheWay = {read=_scw_Get_MoveWhenInTheWay, write=Set_MoveWhenInTheWay};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Sounds() { Word r; HRESULT hr = Get_Sounds(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Sounds = {read=_scw_Get_Sounds, write=Set_Sounds};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_FeatureTips() { Word r; HRESULT hr = Get_FeatureTips(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word FeatureTips = {read=_scw_Get_FeatureTips, write=Set_FeatureTips};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_MouseTips() { Word r; HRESULT hr = Get_MouseTips(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word MouseTips = {read=_scw_Get_MouseTips, write=Set_MouseTips};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_KeyboardShortcutTips() { Word r; HRESULT hr = Get_KeyboardShortcutTips(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word KeyboardShortcutTips = {read=_scw_Get_KeyboardShortcutTips, write=Set_KeyboardShortcutTips
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_HighPriorityTips() { Word r; HRESULT hr = Get_HighPriorityTips(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word HighPriorityTips = {read=_scw_Get_HighPriorityTips, write=Set_HighPriorityTips};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_TipOfDay() { Word r; HRESULT hr = Get_TipOfDay(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word TipOfDay = {read=_scw_Get_TipOfDay, write=Set_TipOfDay};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_GuessHelp() { Word r; HRESULT hr = Get_GuessHelp(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word GuessHelp = {read=_scw_Get_GuessHelp, write=Set_GuessHelp};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_SearchWhenProgramming() { Word r; HRESULT hr = Get_SearchWhenProgramming(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word SearchWhenProgramming = {read=_scw_Get_SearchWhenProgramming, write=Set_SearchWhenProgramming
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Item() { WideString r; HRESULT hr = Get_Item(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Item = {read=_scw_Get_Item};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_FileName() { WideString r; HRESULT hr = Get_FileName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString FileName = {read=_scw_Get_FileName, write=Set_FileName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_On_() { Word r; HRESULT hr = Get_On_(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word On_ = {read=_scw_Get_On_, write=Set_On_};
};

__dispinterface AssistantDisp;
typedef System::DelphiInterface<AssistantDisp> _di_AssistantDisp;
__dispinterface INTERFACE_UUID("{000C0322-0000-0000-C000-000000000046}") AssistantDisp  : public IDispatch 
	
{
	
};

__interface DocumentProperty;
typedef System::DelphiInterface<DocumentProperty> _di_DocumentProperty;
__interface INTERFACE_UUID("{2DF8D04E-5BFA-101B-BDE5-00AA0044DE52}") DocumentProperty  : public IDispatch 
	
{
	
public:
	virtual _di_IDispatch __stdcall Get_Parent(void) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Get_Name(int lcid, /* out */ WideString &pbstrRetVal) = 0 ;
	virtual HRESULT __stdcall Set_Name(int lcid, const WideString pbstrRetVal) = 0 ;
	virtual HRESULT __stdcall Get_Value(int lcid, /* out */ OleVariant &pvargRetVal) = 0 ;
	virtual HRESULT __stdcall Set_Value(int lcid, const OleVariant pvargRetVal) = 0 ;
	virtual HRESULT __stdcall Get_Type_(int lcid, /* out */ Activex::TOleEnum &ptypeRetVal) = 0 ;
	virtual HRESULT __stdcall Set_Type_(int lcid, Activex::TOleEnum ptypeRetVal) = 0 ;
	virtual HRESULT __stdcall Get_LinkToContent(/* out */ Word &pfLinkRetVal) = 0 ;
	virtual HRESULT __stdcall Set_LinkToContent(Word pfLinkRetVal) = 0 ;
	virtual HRESULT __stdcall Get_LinkSource(/* out */ WideString &pbstrSourceRetVal) = 0 ;
	virtual HRESULT __stdcall Set_LinkSource(const WideString pbstrSourceRetVal) = 0 ;
	virtual HRESULT __stdcall Get_Application_(/* out */ _di_IDispatch &ppidisp) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ int &plCreator) = 0 ;
};

__interface DocumentProperties;
typedef System::DelphiInterface<DocumentProperties> _di_DocumentProperties;
__interface INTERFACE_UUID("{2DF8D04D-5BFA-101B-BDE5-00AA0044DE52}") DocumentProperties  : public IDispatch 
	
{
	
public:
	virtual _di_IDispatch __stdcall Get_Parent(void) = 0 ;
	virtual HRESULT __stdcall Get_Item(const OleVariant Index, int lcid, /* out */ _di_DocumentProperty 
		&ppIDocProp) = 0 ;
	virtual HRESULT __stdcall Get_Count(/* out */ int &pc) = 0 ;
	virtual HRESULT __stdcall Add(const WideString Name, Word LinkToContent, const OleVariant Type_, const 
		OleVariant Value, const OleVariant LinkSource, int lcid, /* out */ _di_DocumentProperty &ppIDocProp
		) = 0 ;
	virtual HRESULT __stdcall Get__NewEnum(/* out */ _di_IUnknown &ppunkEnum) = 0 ;
	virtual HRESULT __stdcall Get_Application_(/* out */ _di_IDispatch &ppidisp) = 0 ;
	virtual HRESULT __stdcall Get_Creator(/* out */ int &plCreator) = 0 ;
};

__interface IFoundFiles;
typedef System::DelphiInterface<IFoundFiles> _di_IFoundFiles;
__interface INTERFACE_UUID("{000C0338-0000-0000-C000-000000000046}") IFoundFiles  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Item(int Index, WideString &Get_Item_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Get__NewEnum(_di_IUnknown &Get__NewEnum_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Item(int Index) { WideString r; HRESULT hr = Get_Item(
		Index, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Item[int Index] = {read=_scw_Get_Item/*, default*/};
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

__dispinterface IFoundFilesDisp;
typedef System::DelphiInterface<IFoundFilesDisp> _di_IFoundFilesDisp;
__dispinterface INTERFACE_UUID("{000C0338-0000-0000-C000-000000000046}") IFoundFilesDisp  : public IDispatch 
	
{
	
};

__interface IFind;
typedef System::DelphiInterface<IFind> _di_IFind;
__interface INTERFACE_UUID("{000C0337-0000-0000-C000-000000000046}") IFind  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_SearchPath(WideString &Get_SearchPath_result) = 0 ;
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Get_SubDir(Word &Get_SubDir_result) = 0 ;
	virtual HRESULT __safecall Get_Title(WideString &Get_Title_result) = 0 ;
	virtual HRESULT __safecall Get_Author(WideString &Get_Author_result) = 0 ;
	virtual HRESULT __safecall Get_Keywords(WideString &Get_Keywords_result) = 0 ;
	virtual HRESULT __safecall Get_Subject(WideString &Get_Subject_result) = 0 ;
	virtual HRESULT __safecall Get_Options(Activex::TOleEnum &Get_Options_result) = 0 ;
	virtual HRESULT __safecall Get_MatchCase(Word &Get_MatchCase_result) = 0 ;
	virtual HRESULT __safecall Get_Text(WideString &Get_Text_result) = 0 ;
	virtual HRESULT __safecall Get_PatternMatch(Word &Get_PatternMatch_result) = 0 ;
	virtual HRESULT __safecall Get_DateSavedFrom(OleVariant &Get_DateSavedFrom_result) = 0 ;
	virtual HRESULT __safecall Get_DateSavedTo(OleVariant &Get_DateSavedTo_result) = 0 ;
	virtual HRESULT __safecall Get_SavedBy(WideString &Get_SavedBy_result) = 0 ;
	virtual HRESULT __safecall Get_DateCreatedFrom(OleVariant &Get_DateCreatedFrom_result) = 0 ;
	virtual HRESULT __safecall Get_DateCreatedTo(OleVariant &Get_DateCreatedTo_result) = 0 ;
	virtual HRESULT __safecall Get_View(Activex::TOleEnum &Get_View_result) = 0 ;
	virtual HRESULT __safecall Get_SortBy(Activex::TOleEnum &Get_SortBy_result) = 0 ;
	virtual HRESULT __safecall Get_ListBy(Activex::TOleEnum &Get_ListBy_result) = 0 ;
	virtual HRESULT __safecall Get_SelectedFile(int &Get_SelectedFile_result) = 0 ;
	virtual HRESULT __safecall Get_Results(_di_IFoundFiles &Get_Results_result) = 0 ;
	virtual HRESULT __safecall Show(int &Show_result) = 0 ;
	virtual HRESULT __safecall Set_SearchPath(const WideString pbstr) = 0 ;
	virtual HRESULT __safecall Set_Name(const WideString pbstr) = 0 ;
	virtual HRESULT __safecall Set_SubDir(Word retval) = 0 ;
	virtual HRESULT __safecall Set_Title(const WideString pbstr) = 0 ;
	virtual HRESULT __safecall Set_Author(const WideString pbstr) = 0 ;
	virtual HRESULT __safecall Set_Keywords(const WideString pbstr) = 0 ;
	virtual HRESULT __safecall Set_Subject(const WideString pbstr) = 0 ;
	virtual HRESULT __safecall Set_Options(Activex::TOleEnum penmOptions) = 0 ;
	virtual HRESULT __safecall Set_MatchCase(Word retval) = 0 ;
	virtual HRESULT __safecall Set_Text(const WideString pbstr) = 0 ;
	virtual HRESULT __safecall Set_PatternMatch(Word retval) = 0 ;
	virtual HRESULT __safecall Set_DateSavedFrom(const OleVariant pdatSavedFrom) = 0 ;
	virtual HRESULT __safecall Set_DateSavedTo(const OleVariant pdatSavedTo) = 0 ;
	virtual HRESULT __safecall Set_SavedBy(const WideString pbstr) = 0 ;
	virtual HRESULT __safecall Set_DateCreatedFrom(const OleVariant pdatCreatedFrom) = 0 ;
	virtual HRESULT __safecall Set_DateCreatedTo(const OleVariant pdatCreatedTo) = 0 ;
	virtual HRESULT __safecall Set_View(Activex::TOleEnum penmView) = 0 ;
	virtual HRESULT __safecall Set_SortBy(Activex::TOleEnum penmSortBy) = 0 ;
	virtual HRESULT __safecall Set_ListBy(Activex::TOleEnum penmListBy) = 0 ;
	virtual HRESULT __safecall Set_SelectedFile(int pintSelectedFile) = 0 ;
	virtual HRESULT __safecall Execute(void) = 0 ;
	virtual HRESULT __safecall Load(const WideString bstrQueryName) = 0 ;
	virtual HRESULT __safecall Save(const WideString bstrQueryName) = 0 ;
	virtual HRESULT __safecall Delete(const WideString bstrQueryName) = 0 ;
	virtual HRESULT __safecall Get_FileType(int &Get_FileType_result) = 0 ;
	virtual HRESULT __safecall Set_FileType(int plFileType) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_SearchPath() { WideString r; HRESULT hr = Get_SearchPath(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString SearchPath = {read=_scw_Get_SearchPath, write=Set_SearchPath};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name, write=Set_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_SubDir() { Word r; HRESULT hr = Get_SubDir(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word SubDir = {read=_scw_Get_SubDir, write=Set_SubDir};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Title() { WideString r; HRESULT hr = Get_Title(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Title = {read=_scw_Get_Title, write=Set_Title};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Author() { WideString r; HRESULT hr = Get_Author(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Author = {read=_scw_Get_Author, write=Set_Author};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Keywords() { WideString r; HRESULT hr = Get_Keywords(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Keywords = {read=_scw_Get_Keywords, write=Set_Keywords};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Subject() { WideString r; HRESULT hr = Get_Subject(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Subject = {read=_scw_Get_Subject, write=Set_Subject};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Options() { Activex::TOleEnum r; HRESULT hr = Get_Options(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Options = {read=_scw_Get_Options, write=Set_Options};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_MatchCase() { Word r; HRESULT hr = Get_MatchCase(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word MatchCase = {read=_scw_Get_MatchCase, write=Set_MatchCase};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Text() { WideString r; HRESULT hr = Get_Text(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Text = {read=_scw_Get_Text, write=Set_Text};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_PatternMatch() { Word r; HRESULT hr = Get_PatternMatch(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word PatternMatch = {read=_scw_Get_PatternMatch, write=Set_PatternMatch};
	#pragma option push -w-inl
	/* safecall wrapper */ inline OleVariant _scw_Get_DateSavedFrom() { OleVariant r; HRESULT hr = Get_DateSavedFrom(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property OleVariant DateSavedFrom = {read=_scw_Get_DateSavedFrom, write=Set_DateSavedFrom};
	#pragma option push -w-inl
	/* safecall wrapper */ inline OleVariant _scw_Get_DateSavedTo() { OleVariant r; HRESULT hr = Get_DateSavedTo(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property OleVariant DateSavedTo = {read=_scw_Get_DateSavedTo, write=Set_DateSavedTo};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_SavedBy() { WideString r; HRESULT hr = Get_SavedBy(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString SavedBy = {read=_scw_Get_SavedBy, write=Set_SavedBy};
	#pragma option push -w-inl
	/* safecall wrapper */ inline OleVariant _scw_Get_DateCreatedFrom() { OleVariant r; HRESULT hr = Get_DateCreatedFrom(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property OleVariant DateCreatedFrom = {read=_scw_Get_DateCreatedFrom, write=Set_DateCreatedFrom};
		
	#pragma option push -w-inl
	/* safecall wrapper */ inline OleVariant _scw_Get_DateCreatedTo() { OleVariant r; HRESULT hr = Get_DateCreatedTo(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property OleVariant DateCreatedTo = {read=_scw_Get_DateCreatedTo, write=Set_DateCreatedTo};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_View() { Activex::TOleEnum r; HRESULT hr = Get_View(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum View = {read=_scw_Get_View, write=Set_View};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_SortBy() { Activex::TOleEnum r; HRESULT hr = Get_SortBy(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum SortBy = {read=_scw_Get_SortBy, write=Set_SortBy};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ListBy() { Activex::TOleEnum r; HRESULT hr = Get_ListBy(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ListBy = {read=_scw_Get_ListBy, write=Set_ListBy};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_SelectedFile() { int r; HRESULT hr = Get_SelectedFile(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int SelectedFile = {read=_scw_Get_SelectedFile, write=Set_SelectedFile};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IFoundFiles _scw_Get_Results() { _di_IFoundFiles r; HRESULT hr = Get_Results(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IFoundFiles Results = {read=_scw_Get_Results};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_FileType() { int r; HRESULT hr = Get_FileType(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int FileType = {read=_scw_Get_FileType, write=Set_FileType};
};

__dispinterface IFindDisp;
typedef System::DelphiInterface<IFindDisp> _di_IFindDisp;
__dispinterface INTERFACE_UUID("{000C0337-0000-0000-C000-000000000046}") IFindDisp  : public IDispatch 
	
{
	
};

__interface FoundFiles;
typedef System::DelphiInterface<FoundFiles> _di_FoundFiles;
__interface INTERFACE_UUID("{000C0331-0000-0000-C000-000000000046}") FoundFiles  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Item(int Index, int lcid, WideString &Get_Item_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Get__NewEnum(_di_IUnknown &Get__NewEnum_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Item(int Index, int lcid) { WideString r; HRESULT hr = Get_Item(
		Index, lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Item[int Index][int lcid] = {read=_scw_Get_Item};
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

__dispinterface FoundFilesDisp;
typedef System::DelphiInterface<FoundFilesDisp> _di_FoundFilesDisp;
__dispinterface INTERFACE_UUID("{000C0331-0000-0000-C000-000000000046}") FoundFilesDisp  : public IDispatch 
	
{
	
};

__interface PropertyTest;
typedef System::DelphiInterface<PropertyTest> _di_PropertyTest;
__interface INTERFACE_UUID("{000C0333-0000-0000-C000-000000000046}") PropertyTest  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Get_Condition(Activex::TOleEnum &Get_Condition_result) = 0 ;
	virtual HRESULT __safecall Get_Value(OleVariant &Get_Value_result) = 0 ;
	virtual HRESULT __safecall Get_SecondValue(OleVariant &Get_SecondValue_result) = 0 ;
	virtual HRESULT __safecall Get_Connector(Activex::TOleEnum &Get_Connector_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Condition() { Activex::TOleEnum r; HRESULT hr = Get_Condition(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Condition = {read=_scw_Get_Condition};
	#pragma option push -w-inl
	/* safecall wrapper */ inline OleVariant _scw_Get_Value() { OleVariant r; HRESULT hr = Get_Value(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property OleVariant Value = {read=_scw_Get_Value};
	#pragma option push -w-inl
	/* safecall wrapper */ inline OleVariant _scw_Get_SecondValue() { OleVariant r; HRESULT hr = Get_SecondValue(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property OleVariant SecondValue = {read=_scw_Get_SecondValue};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Connector() { Activex::TOleEnum r; HRESULT hr = Get_Connector(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Connector = {read=_scw_Get_Connector};
};

__dispinterface PropertyTestDisp;
typedef System::DelphiInterface<PropertyTestDisp> _di_PropertyTestDisp;
__dispinterface INTERFACE_UUID("{000C0333-0000-0000-C000-000000000046}") PropertyTestDisp  : public IDispatch 
	
{
	
};

__interface PropertyTests;
typedef System::DelphiInterface<PropertyTests> _di_PropertyTests;
__interface INTERFACE_UUID("{000C0334-0000-0000-C000-000000000046}") PropertyTests  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Item(int Index, int lcid, _di_PropertyTest &Get_Item_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Add(const WideString Name, Activex::TOleEnum Condition, const OleVariant 
		Value, const OleVariant SecondValue, Activex::TOleEnum Connector) = 0 ;
	virtual HRESULT __safecall Remove(int Index) = 0 ;
	virtual HRESULT __safecall Get__NewEnum(_di_IUnknown &Get__NewEnum_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_PropertyTest _scw_Get_Item(int Index, int lcid) { _di_PropertyTest r; HRESULT hr = Get_Item(
		Index, lcid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_PropertyTest Item[int Index][int lcid] = {read=_scw_Get_Item};
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

__dispinterface PropertyTestsDisp;
typedef System::DelphiInterface<PropertyTestsDisp> _di_PropertyTestsDisp;
__dispinterface INTERFACE_UUID("{000C0334-0000-0000-C000-000000000046}") PropertyTestsDisp  : public IDispatch 
	
{
	
};

__interface FileSearch;
typedef System::DelphiInterface<FileSearch> _di_FileSearch;
__interface INTERFACE_UUID("{000C0332-0000-0000-C000-000000000046}") FileSearch  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_SearchSubFolders(Word &Get_SearchSubFolders_result) = 0 ;
	virtual HRESULT __safecall Set_SearchSubFolders(Word SearchSubFoldersRetVal) = 0 ;
	virtual HRESULT __safecall Get_MatchTextExactly(Word &Get_MatchTextExactly_result) = 0 ;
	virtual HRESULT __safecall Set_MatchTextExactly(Word MatchTextRetVal) = 0 ;
	virtual HRESULT __safecall Get_MatchAllWordForms(Word &Get_MatchAllWordForms_result) = 0 ;
	virtual HRESULT __safecall Set_MatchAllWordForms(Word MatchAllWordFormsRetVal) = 0 ;
	virtual HRESULT __safecall Get_FileName(WideString &Get_FileName_result) = 0 ;
	virtual HRESULT __safecall Set_FileName(const WideString FileNameRetVal) = 0 ;
	virtual HRESULT __safecall Get_FileType(Activex::TOleEnum &Get_FileType_result) = 0 ;
	virtual HRESULT __safecall Set_FileType(Activex::TOleEnum FileTypeRetVal) = 0 ;
	virtual HRESULT __safecall Get_LastModified(Activex::TOleEnum &Get_LastModified_result) = 0 ;
	virtual HRESULT __safecall Set_LastModified(Activex::TOleEnum LastModifiedRetVal) = 0 ;
	virtual HRESULT __safecall Get_TextOrProperty(WideString &Get_TextOrProperty_result) = 0 ;
	virtual HRESULT __safecall Set_TextOrProperty(const WideString TextOrProperty) = 0 ;
	virtual HRESULT __safecall Get_LookIn(WideString &Get_LookIn_result) = 0 ;
	virtual HRESULT __safecall Set_LookIn(const WideString LookInRetVal) = 0 ;
	virtual HRESULT __safecall Execute(Activex::TOleEnum SortBy, Activex::TOleEnum SortOrder, Word AlwaysAccurate
		, int &Execute_result) = 0 ;
	virtual HRESULT __safecall NewSearch(void) = 0 ;
	virtual HRESULT __safecall Get_FoundFiles(_di_FoundFiles &Get_FoundFiles_result) = 0 ;
	virtual HRESULT __safecall Get_PropertyTests(_di_PropertyTests &Get_PropertyTests_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_SearchSubFolders() { Word r; HRESULT hr = Get_SearchSubFolders(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word SearchSubFolders = {read=_scw_Get_SearchSubFolders, write=Set_SearchSubFolders};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_MatchTextExactly() { Word r; HRESULT hr = Get_MatchTextExactly(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word MatchTextExactly = {read=_scw_Get_MatchTextExactly, write=Set_MatchTextExactly};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_MatchAllWordForms() { Word r; HRESULT hr = Get_MatchAllWordForms(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word MatchAllWordForms = {read=_scw_Get_MatchAllWordForms, write=Set_MatchAllWordForms};
		
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_FileName() { WideString r; HRESULT hr = Get_FileName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString FileName = {read=_scw_Get_FileName, write=Set_FileName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_FileType() { Activex::TOleEnum r; HRESULT hr = Get_FileType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum FileType = {read=_scw_Get_FileType, write=Set_FileType};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_LastModified() { Activex::TOleEnum r; HRESULT hr = Get_LastModified(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum LastModified = {read=_scw_Get_LastModified, write=Set_LastModified};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_TextOrProperty() { WideString r; HRESULT hr = Get_TextOrProperty(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString TextOrProperty = {read=_scw_Get_TextOrProperty, write=Set_TextOrProperty};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_LookIn() { WideString r; HRESULT hr = Get_LookIn(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString LookIn = {read=_scw_Get_LookIn, write=Set_LookIn};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_FoundFiles _scw_Get_FoundFiles() { _di_FoundFiles r; HRESULT hr = Get_FoundFiles(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_FoundFiles FoundFiles = {read=_scw_Get_FoundFiles};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_PropertyTests _scw_Get_PropertyTests() { _di_PropertyTests r; HRESULT hr = Get_PropertyTests(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_PropertyTests PropertyTests = {read=_scw_Get_PropertyTests};
};

__dispinterface FileSearchDisp;
typedef System::DelphiInterface<FileSearchDisp> _di_FileSearchDisp;
__dispinterface INTERFACE_UUID("{000C0332-0000-0000-C000-000000000046}") FileSearchDisp  : public IDispatch 
	
{
	
};

__interface COMAddIn;
typedef System::DelphiInterface<COMAddIn> _di_COMAddIn;
__interface INTERFACE_UUID("{000C033A-0000-0000-C000-000000000046}") COMAddIn  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Description(WideString &Get_Description_result) = 0 ;
	virtual HRESULT __safecall Set_Description(const WideString RetValue) = 0 ;
	virtual HRESULT __safecall Get_ProgId(WideString &Get_ProgId_result) = 0 ;
	virtual HRESULT __safecall Get_Guid(WideString &Get_Guid_result) = 0 ;
	virtual HRESULT __safecall Get_Connect(Word &Get_Connect_result) = 0 ;
	virtual HRESULT __safecall Set_Connect(Word RetValue) = 0 ;
	virtual HRESULT __safecall Get_Object_(_di_IDispatch &Get_Object__result) = 0 ;
	virtual HRESULT __safecall Set_Object_(const _di_IDispatch RetValue) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Description() { WideString r; HRESULT hr = Get_Description(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Description = {read=_scw_Get_Description, write=Set_Description};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_ProgId() { WideString r; HRESULT hr = Get_ProgId(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString ProgId = {read=_scw_Get_ProgId};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Guid() { WideString r; HRESULT hr = Get_Guid(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Guid = {read=_scw_Get_Guid};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Connect() { Word r; HRESULT hr = Get_Connect(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Connect = {read=_scw_Get_Connect, write=Set_Connect};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Object_() { _di_IDispatch r; HRESULT hr = Get_Object_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Object_ = {read=_scw_Get_Object_, write=Set_Object_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface COMAddInDisp;
typedef System::DelphiInterface<COMAddInDisp> _di_COMAddInDisp;
__dispinterface INTERFACE_UUID("{000C033A-0000-0000-C000-000000000046}") COMAddInDisp  : public IDispatch 
	
{
	
};

__interface COMAddIns;
typedef System::DelphiInterface<COMAddIns> _di_COMAddIns;
__interface INTERFACE_UUID("{000C0339-0000-0000-C000-000000000046}") COMAddIns  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Item(OleVariant &Index, _di_COMAddIn &Item_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Get__NewEnum(_di_IUnknown &Get__NewEnum_result) = 0 ;
	virtual HRESULT __safecall Update(void) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Count() { int r; HRESULT hr = Get_Count(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Count = {read=_scw_Get_Count};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IUnknown _scw_Get__NewEnum() { _di_IUnknown r; HRESULT hr = Get__NewEnum(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IUnknown _NewEnum = {read=_scw_Get__NewEnum};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface COMAddInsDisp;
typedef System::DelphiInterface<COMAddInsDisp> _di_COMAddInsDisp;
__dispinterface INTERFACE_UUID("{000C0339-0000-0000-C000-000000000046}") COMAddInsDisp  : public IDispatch 
	
{
	
};

__interface LanguageSettings;
typedef System::DelphiInterface<LanguageSettings> _di_LanguageSettings;
__interface INTERFACE_UUID("{000C0353-0000-0000-C000-000000000046}") LanguageSettings  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_LanguageID(Activex::TOleEnum Id, int &Get_LanguageID_result) = 0 ;
	virtual HRESULT __safecall Get_LanguagePreferredForEditing(Activex::TOleEnum lid, Word &Get_LanguagePreferredForEditing_result
		) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_LanguageID(Activex::TOleEnum Id) { int r; HRESULT hr = Get_LanguageID(
		Id, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int LanguageID[Activex::TOleEnum Id] = {read=_scw_Get_LanguageID};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_LanguagePreferredForEditing(Activex::TOleEnum lid) { Word r; HRESULT hr = Get_LanguagePreferredForEditing(
		lid, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Word LanguagePreferredForEditing[Activex::TOleEnum lid] = {read=_scw_Get_LanguagePreferredForEditing
		};
};

__dispinterface LanguageSettingsDisp;
typedef System::DelphiInterface<LanguageSettingsDisp> _di_LanguageSettingsDisp;
__dispinterface INTERFACE_UUID("{000C0353-0000-0000-C000-000000000046}") LanguageSettingsDisp  : public IDispatch 
	
{
	
};

__interface ICommandBarsEvents;
typedef System::DelphiInterface<ICommandBarsEvents> _di_ICommandBarsEvents;
__interface INTERFACE_UUID("{55F88892-7708-11D1-ACEB-006008961DA5}") ICommandBarsEvents  : public IDispatch 
	
{
	
public:
	virtual void __stdcall OnUpdate(void) = 0 ;
};

__dispinterface ICommandBarsEventsDisp;
typedef System::DelphiInterface<ICommandBarsEventsDisp> _di_ICommandBarsEventsDisp;
__dispinterface INTERFACE_UUID("{55F88892-7708-11D1-ACEB-006008961DA5}") ICommandBarsEventsDisp  : public IDispatch 
	
{
	
};

__dispinterface _CommandBarsEvents;
typedef System::DelphiInterface<_CommandBarsEvents> _di__CommandBarsEvents;
__dispinterface INTERFACE_UUID("{000C0352-0000-0000-C000-000000000046}") _CommandBarsEvents  : public IDispatch 
	
{
	
};

__interface ICommandBarComboBoxEvents;
typedef System::DelphiInterface<ICommandBarComboBoxEvents> _di_ICommandBarComboBoxEvents;
__interface INTERFACE_UUID("{55F88896-7708-11D1-ACEB-006008961DA5}") ICommandBarComboBoxEvents  : public IDispatch 
	
{
	
public:
	virtual void __stdcall Change(const _di__CommandBarComboBox Ctrl) = 0 ;
};

__dispinterface ICommandBarComboBoxEventsDisp;
typedef System::DelphiInterface<ICommandBarComboBoxEventsDisp> _di_ICommandBarComboBoxEventsDisp;
__dispinterface INTERFACE_UUID("{55F88896-7708-11D1-ACEB-006008961DA5}") ICommandBarComboBoxEventsDisp 
	 : public IDispatch 
{
	
};

__dispinterface _CommandBarComboBoxEvents;
typedef System::DelphiInterface<_CommandBarComboBoxEvents> _di__CommandBarComboBoxEvents;
__dispinterface INTERFACE_UUID("{000C0354-0000-0000-C000-000000000046}") _CommandBarComboBoxEvents  : public IDispatch 
	
{
	
};

__interface ICommandBarButtonEvents;
typedef System::DelphiInterface<ICommandBarButtonEvents> _di_ICommandBarButtonEvents;
__interface INTERFACE_UUID("{55F88890-7708-11D1-ACEB-006008961DA5}") ICommandBarButtonEvents  : public IDispatch 
	
{
	
public:
	virtual void __stdcall Click(const _di__CommandBarButton Ctrl, Word &CancelDefault) = 0 ;
};

__dispinterface ICommandBarButtonEventsDisp;
typedef System::DelphiInterface<ICommandBarButtonEventsDisp> _di_ICommandBarButtonEventsDisp;
__dispinterface INTERFACE_UUID("{55F88890-7708-11D1-ACEB-006008961DA5}") ICommandBarButtonEventsDisp 
	 : public IDispatch 
{
	
};

__dispinterface _CommandBarButtonEvents;
typedef System::DelphiInterface<_CommandBarButtonEvents> _di__CommandBarButtonEvents;
__dispinterface INTERFACE_UUID("{000C0351-0000-0000-C000-000000000046}") _CommandBarButtonEvents  : public IDispatch 
	
{
	
};

__interface WebPageFont;
typedef System::DelphiInterface<WebPageFont> _di_WebPageFont;
__interface INTERFACE_UUID("{000C0913-0000-0000-C000-000000000046}") WebPageFont  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_ProportionalFont(WideString &Get_ProportionalFont_result) = 0 ;
	virtual HRESULT __safecall Set_ProportionalFont(const WideString pstr) = 0 ;
	virtual HRESULT __safecall Get_ProportionalFontSize(float &Get_ProportionalFontSize_result) = 0 ;
	virtual HRESULT __safecall Set_ProportionalFontSize(float pf) = 0 ;
	virtual HRESULT __safecall Get_FixedWidthFont(WideString &Get_FixedWidthFont_result) = 0 ;
	virtual HRESULT __safecall Set_FixedWidthFont(const WideString pstr) = 0 ;
	virtual HRESULT __safecall Get_FixedWidthFontSize(float &Get_FixedWidthFontSize_result) = 0 ;
	virtual HRESULT __safecall Set_FixedWidthFontSize(float pf) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_ProportionalFont() { WideString r; HRESULT hr = Get_ProportionalFont(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString ProportionalFont = {read=_scw_Get_ProportionalFont, write=Set_ProportionalFont
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_ProportionalFontSize() { float r; HRESULT hr = Get_ProportionalFontSize(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float ProportionalFontSize = {read=_scw_Get_ProportionalFontSize, write=Set_ProportionalFontSize
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_FixedWidthFont() { WideString r; HRESULT hr = Get_FixedWidthFont(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString FixedWidthFont = {read=_scw_Get_FixedWidthFont, write=Set_FixedWidthFont};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_FixedWidthFontSize() { float r; HRESULT hr = Get_FixedWidthFontSize(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float FixedWidthFontSize = {read=_scw_Get_FixedWidthFontSize, write=Set_FixedWidthFontSize
		};
};

__dispinterface WebPageFontDisp;
typedef System::DelphiInterface<WebPageFontDisp> _di_WebPageFontDisp;
__dispinterface INTERFACE_UUID("{000C0913-0000-0000-C000-000000000046}") WebPageFontDisp  : public IDispatch 
	
{
	
};

__interface WebPageFonts;
typedef System::DelphiInterface<WebPageFonts> _di_WebPageFonts;
__interface INTERFACE_UUID("{000C0914-0000-0000-C000-000000000046}") WebPageFonts  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Get_Item(Activex::TOleEnum Index, _di_WebPageFont &Get_Item_result) = 0 
		;
	virtual HRESULT __safecall Get__NewEnum(_di_IUnknown &Get__NewEnum_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Count() { int r; HRESULT hr = Get_Count(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Count = {read=_scw_Get_Count};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_WebPageFont _scw_Get_Item(Activex::TOleEnum Index) { _di_WebPageFont r; HRESULT hr = Get_Item(
		Index, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_WebPageFont Item[Activex::TOleEnum Index] = {read=_scw_Get_Item/*, default*/};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IUnknown _scw_Get__NewEnum() { _di_IUnknown r; HRESULT hr = Get__NewEnum(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IUnknown _NewEnum = {read=_scw_Get__NewEnum};
};

__dispinterface WebPageFontsDisp;
typedef System::DelphiInterface<WebPageFontsDisp> _di_WebPageFontsDisp;
__dispinterface INTERFACE_UUID("{000C0914-0000-0000-C000-000000000046}") WebPageFontsDisp  : public IDispatch 
	
{
	
};

__interface HTMLProjectItem;
typedef System::DelphiInterface<HTMLProjectItem> _di_HTMLProjectItem;
__interface INTERFACE_UUID("{000C0358-0000-0000-C000-000000000046}") HTMLProjectItem  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Get_IsOpen(Word &Get_IsOpen_result) = 0 ;
	virtual HRESULT __safecall LoadFromFile(const WideString FileName) = 0 ;
	virtual HRESULT __safecall Open(Activex::TOleEnum OpenKind) = 0 ;
	virtual HRESULT __safecall SaveCopyAs(const WideString FileName) = 0 ;
	virtual HRESULT __safecall Get_Text(WideString &Get_Text_result) = 0 ;
	virtual HRESULT __safecall Set_Text(const WideString Text) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_IsOpen() { Word r; HRESULT hr = Get_IsOpen(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word IsOpen = {read=_scw_Get_IsOpen};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Text() { WideString r; HRESULT hr = Get_Text(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Text = {read=_scw_Get_Text, write=Set_Text};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface HTMLProjectItemDisp;
typedef System::DelphiInterface<HTMLProjectItemDisp> _di_HTMLProjectItemDisp;
__dispinterface INTERFACE_UUID("{000C0358-0000-0000-C000-000000000046}") HTMLProjectItemDisp  : public IDispatch 
	
{
	
};

__interface HTMLProjectItems;
typedef System::DelphiInterface<HTMLProjectItems> _di_HTMLProjectItems;
__interface INTERFACE_UUID("{000C0357-0000-0000-C000-000000000046}") HTMLProjectItems  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Item(OleVariant &Index, _di_HTMLProjectItem &Item_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Get__NewEnum(_di_IUnknown &Get__NewEnum_result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Count() { int r; HRESULT hr = Get_Count(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Count = {read=_scw_Get_Count};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IUnknown _scw_Get__NewEnum() { _di_IUnknown r; HRESULT hr = Get__NewEnum(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IUnknown _NewEnum = {read=_scw_Get__NewEnum};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface HTMLProjectItemsDisp;
typedef System::DelphiInterface<HTMLProjectItemsDisp> _di_HTMLProjectItemsDisp;
__dispinterface INTERFACE_UUID("{000C0357-0000-0000-C000-000000000046}") HTMLProjectItemsDisp  : public IDispatch 
	
{
	
};

__interface HTMLProject;
typedef System::DelphiInterface<HTMLProject> _di_HTMLProject;
__interface INTERFACE_UUID("{000C0356-0000-0000-C000-000000000046}") HTMLProject  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_State(Activex::TOleEnum &Get_State_result) = 0 ;
	virtual HRESULT __safecall RefreshProject(Word Refresh) = 0 ;
	virtual HRESULT __safecall RefreshDocument(Word Refresh) = 0 ;
	virtual HRESULT __safecall Get_HTMLProjectItems(_di_HTMLProjectItems &Get_HTMLProjectItems_result) = 0 
		;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Open(Activex::TOleEnum OpenKind) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_State() { Activex::TOleEnum r; HRESULT hr = Get_State(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum State = {read=_scw_Get_State};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_HTMLProjectItems _scw_Get_HTMLProjectItems() { _di_HTMLProjectItems r; HRESULT hr = Get_HTMLProjectItems(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_HTMLProjectItems HTMLProjectItems = {read=_scw_Get_HTMLProjectItems};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface HTMLProjectDisp;
typedef System::DelphiInterface<HTMLProjectDisp> _di_HTMLProjectDisp;
__dispinterface INTERFACE_UUID("{000C0356-0000-0000-C000-000000000046}") HTMLProjectDisp  : public IDispatch 
	
{
	
};

__interface MsoDebugOptions;
typedef System::DelphiInterface<MsoDebugOptions> _di_MsoDebugOptions;
__interface INTERFACE_UUID("{000C035A-0000-0000-C000-000000000046}") MsoDebugOptions  : public _IMsoDispObj 
	
{
	
public:
	virtual HRESULT __safecall Get_FeatureReports(int &Get_FeatureReports_result) = 0 ;
	virtual HRESULT __safecall Set_FeatureReports(int puintFeatureReports) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_FeatureReports() { int r; HRESULT hr = Get_FeatureReports(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int FeatureReports = {read=_scw_Get_FeatureReports, write=Set_FeatureReports};
};

__dispinterface MsoDebugOptionsDisp;
typedef System::DelphiInterface<MsoDebugOptionsDisp> _di_MsoDebugOptionsDisp;
__dispinterface INTERFACE_UUID("{000C035A-0000-0000-C000-000000000046}") MsoDebugOptionsDisp  : public IDispatch 
	
{
	
};

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE GUID LIBID_Office;
extern PACKAGE GUID IID_IAccessible;
extern PACKAGE GUID IID__IMsoDispObj;
extern PACKAGE GUID IID__IMsoOleAccDispObj;
extern PACKAGE GUID IID__CommandBars;
extern PACKAGE GUID IID_CommandBar;
extern PACKAGE GUID IID_CommandBarControls;
extern PACKAGE GUID IID_CommandBarControl;
extern PACKAGE GUID IID__CommandBarButton;
extern PACKAGE GUID IID_CommandBarPopup;
extern PACKAGE GUID IID__CommandBarComboBox;
extern PACKAGE GUID IID__CommandBarActiveX;
extern PACKAGE GUID IID_Adjustments;
extern PACKAGE GUID IID_CalloutFormat;
extern PACKAGE GUID IID_ColorFormat;
extern PACKAGE GUID IID_ConnectorFormat;
extern PACKAGE GUID IID_FillFormat;
extern PACKAGE GUID IID_FreeformBuilder;
extern PACKAGE GUID IID_GroupShapes;
extern PACKAGE GUID IID_LineFormat;
extern PACKAGE GUID IID_ShapeNode;
extern PACKAGE GUID IID_ShapeNodes;
extern PACKAGE GUID IID_PictureFormat;
extern PACKAGE GUID IID_ShadowFormat;
extern PACKAGE GUID IID_Script;
extern PACKAGE GUID IID_Scripts;
extern PACKAGE GUID IID_Shape;
extern PACKAGE GUID IID_ShapeRange;
extern PACKAGE GUID IID_Shapes;
extern PACKAGE GUID IID_TextEffectFormat;
extern PACKAGE GUID IID_TextFrame;
extern PACKAGE GUID IID_ThreeDFormat;
extern PACKAGE GUID IID_IMsoDispCagNotifySink;
extern PACKAGE GUID IID_Balloon;
extern PACKAGE GUID IID_BalloonCheckboxes;
extern PACKAGE GUID IID_BalloonCheckbox;
extern PACKAGE GUID IID_BalloonLabels;
extern PACKAGE GUID IID_BalloonLabel;
extern PACKAGE GUID IID_AnswerWizardFiles;
extern PACKAGE GUID IID_AnswerWizard;
extern PACKAGE GUID IID_Assistant;
extern PACKAGE GUID IID_DocumentProperty;
extern PACKAGE GUID IID_DocumentProperties;
extern PACKAGE GUID IID_IFoundFiles;
extern PACKAGE GUID IID_IFind;
extern PACKAGE GUID IID_FoundFiles;
extern PACKAGE GUID IID_PropertyTest;
extern PACKAGE GUID IID_PropertyTests;
extern PACKAGE GUID IID_FileSearch;
extern PACKAGE GUID IID_COMAddIn;
extern PACKAGE GUID IID_COMAddIns;
extern PACKAGE GUID IID_LanguageSettings;
extern PACKAGE GUID IID_ICommandBarsEvents;
extern PACKAGE GUID DIID__CommandBarsEvents;
extern PACKAGE GUID CLASS_CommandBars;
extern PACKAGE GUID IID_ICommandBarComboBoxEvents;
extern PACKAGE GUID DIID__CommandBarComboBoxEvents;
extern PACKAGE GUID CLASS_CommandBarComboBox;
extern PACKAGE GUID IID_ICommandBarButtonEvents;
extern PACKAGE GUID DIID__CommandBarButtonEvents;
extern PACKAGE GUID CLASS_CommandBarButton;
extern PACKAGE GUID IID_WebPageFont;
extern PACKAGE GUID IID_WebPageFonts;
extern PACKAGE GUID IID_HTMLProjectItem;
extern PACKAGE GUID IID_HTMLProjectItems;
extern PACKAGE GUID IID_HTMLProject;
extern PACKAGE GUID IID_MsoDebugOptions;
static const unsigned msoLineDashStyleMixed = 0xfffffffe;
static const Shortint msoLineSolid = 0x1;
static const Shortint msoLineSquareDot = 0x2;
static const Shortint msoLineRoundDot = 0x3;
static const Shortint msoLineDash = 0x4;
static const Shortint msoLineDashDot = 0x5;
static const Shortint msoLineDashDotDot = 0x6;
static const Shortint msoLineLongDash = 0x7;
static const Shortint msoLineLongDashDot = 0x8;
static const unsigned msoLineStyleMixed = 0xfffffffe;
static const Shortint msoLineSingle = 0x1;
static const Shortint msoLineThinThin = 0x2;
static const Shortint msoLineThinThick = 0x3;
static const Shortint msoLineThickThin = 0x4;
static const Shortint msoLineThickBetweenThin = 0x5;
static const unsigned msoArrowheadStyleMixed = 0xfffffffe;
static const Shortint msoArrowheadNone = 0x1;
static const Shortint msoArrowheadTriangle = 0x2;
static const Shortint msoArrowheadOpen = 0x3;
static const Shortint msoArrowheadStealth = 0x4;
static const Shortint msoArrowheadDiamond = 0x5;
static const Shortint msoArrowheadOval = 0x6;
static const unsigned msoArrowheadWidthMixed = 0xfffffffe;
static const Shortint msoArrowheadNarrow = 0x1;
static const Shortint msoArrowheadWidthMedium = 0x2;
static const Shortint msoArrowheadWide = 0x3;
static const unsigned msoArrowheadLengthMixed = 0xfffffffe;
static const Shortint msoArrowheadShort = 0x1;
static const Shortint msoArrowheadLengthMedium = 0x2;
static const Shortint msoArrowheadLong = 0x3;
static const unsigned msoFillMixed = 0xfffffffe;
static const Shortint msoFillSolid = 0x1;
static const Shortint msoFillPatterned = 0x2;
static const Shortint msoFillGradient = 0x3;
static const Shortint msoFillTextured = 0x4;
static const Shortint msoFillBackground = 0x5;
static const Shortint msoFillPicture = 0x6;
static const unsigned msoGradientMixed = 0xfffffffe;
static const Shortint msoGradientHorizontal = 0x1;
static const Shortint msoGradientVertical = 0x2;
static const Shortint msoGradientDiagonalUp = 0x3;
static const Shortint msoGradientDiagonalDown = 0x4;
static const Shortint msoGradientFromCorner = 0x5;
static const Shortint msoGradientFromTitle = 0x6;
static const Shortint msoGradientFromCenter = 0x7;
static const unsigned msoGradientColorMixed = 0xfffffffe;
static const Shortint msoGradientOneColor = 0x1;
static const Shortint msoGradientTwoColors = 0x2;
static const Shortint msoGradientPresetColors = 0x3;
static const unsigned msoTextureTypeMixed = 0xfffffffe;
static const Shortint msoTexturePreset = 0x1;
static const Shortint msoTextureUserDefined = 0x2;
static const unsigned msoPresetTextureMixed = 0xfffffffe;
static const Shortint msoTexturePapyrus = 0x1;
static const Shortint msoTextureCanvas = 0x2;
static const Shortint msoTextureDenim = 0x3;
static const Shortint msoTextureWovenMat = 0x4;
static const Shortint msoTextureWaterDroplets = 0x5;
static const Shortint msoTexturePaperBag = 0x6;
static const Shortint msoTextureFishFossil = 0x7;
static const Shortint msoTextureSand = 0x8;
static const Shortint msoTextureGreenMarble = 0x9;
static const Shortint msoTextureWhiteMarble = 0xa;
static const Shortint msoTextureBrownMarble = 0xb;
static const Shortint msoTextureGranite = 0xc;
static const Shortint msoTextureNewsprint = 0xd;
static const Shortint msoTextureRecycledPaper = 0xe;
static const Shortint msoTextureParchment = 0xf;
static const Shortint msoTextureStationery = 0x10;
static const Shortint msoTextureBlueTissuePaper = 0x11;
static const Shortint msoTexturePinkTissuePaper = 0x12;
static const Shortint msoTexturePurpleMesh = 0x13;
static const Shortint msoTextureBouquet = 0x14;
static const Shortint msoTextureCork = 0x15;
static const Shortint msoTextureWalnut = 0x16;
static const Shortint msoTextureOak = 0x17;
static const Shortint msoTextureMediumWood = 0x18;
static const unsigned msoPatternMixed = 0xfffffffe;
static const Shortint msoPattern5Percent = 0x1;
static const Shortint msoPattern10Percent = 0x2;
static const Shortint msoPattern20Percent = 0x3;
static const Shortint msoPattern25Percent = 0x4;
static const Shortint msoPattern30Percent = 0x5;
static const Shortint msoPattern40Percent = 0x6;
static const Shortint msoPattern50Percent = 0x7;
static const Shortint msoPattern60Percent = 0x8;
static const Shortint msoPattern70Percent = 0x9;
static const Shortint msoPattern75Percent = 0xa;
static const Shortint msoPattern80Percent = 0xb;
static const Shortint msoPattern90Percent = 0xc;
static const Shortint msoPatternDarkHorizontal = 0xd;
static const Shortint msoPatternDarkVertical = 0xe;
static const Shortint msoPatternDarkDownwardDiagonal = 0xf;
static const Shortint msoPatternDarkUpwardDiagonal = 0x10;
static const Shortint msoPatternSmallCheckerBoard = 0x11;
static const Shortint msoPatternTrellis = 0x12;
static const Shortint msoPatternLightHorizontal = 0x13;
static const Shortint msoPatternLightVertical = 0x14;
static const Shortint msoPatternLightDownwardDiagonal = 0x15;
static const Shortint msoPatternLightUpwardDiagonal = 0x16;
static const Shortint msoPatternSmallGrid = 0x17;
static const Shortint msoPatternDottedDiamond = 0x18;
static const Shortint msoPatternWideDownwardDiagonal = 0x19;
static const Shortint msoPatternWideUpwardDiagonal = 0x1a;
static const Shortint msoPatternDashedUpwardDiagonal = 0x1b;
static const Shortint msoPatternDashedDownwardDiagonal = 0x1c;
static const Shortint msoPatternNarrowVertical = 0x1d;
static const Shortint msoPatternNarrowHorizontal = 0x1e;
static const Shortint msoPatternDashedVertical = 0x1f;
static const Shortint msoPatternDashedHorizontal = 0x20;
static const Shortint msoPatternLargeConfetti = 0x21;
static const Shortint msoPatternLargeGrid = 0x22;
static const Shortint msoPatternHorizontalBrick = 0x23;
static const Shortint msoPatternLargeCheckerBoard = 0x24;
static const Shortint msoPatternSmallConfetti = 0x25;
static const Shortint msoPatternZigZag = 0x26;
static const Shortint msoPatternSolidDiamond = 0x27;
static const Shortint msoPatternDiagonalBrick = 0x28;
static const Shortint msoPatternOutlinedDiamond = 0x29;
static const Shortint msoPatternPlaid = 0x2a;
static const Shortint msoPatternSphere = 0x2b;
static const Shortint msoPatternWeave = 0x2c;
static const Shortint msoPatternDottedGrid = 0x2d;
static const Shortint msoPatternDivot = 0x2e;
static const Shortint msoPatternShingle = 0x2f;
static const Shortint msoPatternWave = 0x30;
static const unsigned msoPresetGradientMixed = 0xfffffffe;
static const Shortint msoGradientEarlySunset = 0x1;
static const Shortint msoGradientLateSunset = 0x2;
static const Shortint msoGradientNightfall = 0x3;
static const Shortint msoGradientDaybreak = 0x4;
static const Shortint msoGradientHorizon = 0x5;
static const Shortint msoGradientDesert = 0x6;
static const Shortint msoGradientOcean = 0x7;
static const Shortint msoGradientCalmWater = 0x8;
static const Shortint msoGradientFire = 0x9;
static const Shortint msoGradientFog = 0xa;
static const Shortint msoGradientMoss = 0xb;
static const Shortint msoGradientPeacock = 0xc;
static const Shortint msoGradientWheat = 0xd;
static const Shortint msoGradientParchment = 0xe;
static const Shortint msoGradientMahogany = 0xf;
static const Shortint msoGradientRainbow = 0x10;
static const Shortint msoGradientRainbowII = 0x11;
static const Shortint msoGradientGold = 0x12;
static const Shortint msoGradientGoldII = 0x13;
static const Shortint msoGradientBrass = 0x14;
static const Shortint msoGradientChrome = 0x15;
static const Shortint msoGradientChromeII = 0x16;
static const Shortint msoGradientSilver = 0x17;
static const Shortint msoGradientSapphire = 0x18;
static const unsigned msoShadowMixed = 0xfffffffe;
static const Shortint msoShadow1 = 0x1;
static const Shortint msoShadow2 = 0x2;
static const Shortint msoShadow3 = 0x3;
static const Shortint msoShadow4 = 0x4;
static const Shortint msoShadow5 = 0x5;
static const Shortint msoShadow6 = 0x6;
static const Shortint msoShadow7 = 0x7;
static const Shortint msoShadow8 = 0x8;
static const Shortint msoShadow9 = 0x9;
static const Shortint msoShadow10 = 0xa;
static const Shortint msoShadow11 = 0xb;
static const Shortint msoShadow12 = 0xc;
static const Shortint msoShadow13 = 0xd;
static const Shortint msoShadow14 = 0xe;
static const Shortint msoShadow15 = 0xf;
static const Shortint msoShadow16 = 0x10;
static const Shortint msoShadow17 = 0x11;
static const Shortint msoShadow18 = 0x12;
static const Shortint msoShadow19 = 0x13;
static const Shortint msoShadow20 = 0x14;
static const unsigned msoTextEffectMixed = 0xfffffffe;
static const Shortint msoTextEffect1 = 0x0;
static const Shortint msoTextEffect2 = 0x1;
static const Shortint msoTextEffect3 = 0x2;
static const Shortint msoTextEffect4 = 0x3;
static const Shortint msoTextEffect5 = 0x4;
static const Shortint msoTextEffect6 = 0x5;
static const Shortint msoTextEffect7 = 0x6;
static const Shortint msoTextEffect8 = 0x7;
static const Shortint msoTextEffect9 = 0x8;
static const Shortint msoTextEffect10 = 0x9;
static const Shortint msoTextEffect11 = 0xa;
static const Shortint msoTextEffect12 = 0xb;
static const Shortint msoTextEffect13 = 0xc;
static const Shortint msoTextEffect14 = 0xd;
static const Shortint msoTextEffect15 = 0xe;
static const Shortint msoTextEffect16 = 0xf;
static const Shortint msoTextEffect17 = 0x10;
static const Shortint msoTextEffect18 = 0x11;
static const Shortint msoTextEffect19 = 0x12;
static const Shortint msoTextEffect20 = 0x13;
static const Shortint msoTextEffect21 = 0x14;
static const Shortint msoTextEffect22 = 0x15;
static const Shortint msoTextEffect23 = 0x16;
static const Shortint msoTextEffect24 = 0x17;
static const Shortint msoTextEffect25 = 0x18;
static const Shortint msoTextEffect26 = 0x19;
static const Shortint msoTextEffect27 = 0x1a;
static const Shortint msoTextEffect28 = 0x1b;
static const Shortint msoTextEffect29 = 0x1c;
static const Shortint msoTextEffect30 = 0x1d;
static const unsigned msoTextEffectShapeMixed = 0xfffffffe;
static const Shortint msoTextEffectShapePlainText = 0x1;
static const Shortint msoTextEffectShapeStop = 0x2;
static const Shortint msoTextEffectShapeTriangleUp = 0x3;
static const Shortint msoTextEffectShapeTriangleDown = 0x4;
static const Shortint msoTextEffectShapeChevronUp = 0x5;
static const Shortint msoTextEffectShapeChevronDown = 0x6;
static const Shortint msoTextEffectShapeRingInside = 0x7;
static const Shortint msoTextEffectShapeRingOutside = 0x8;
static const Shortint msoTextEffectShapeArchUpCurve = 0x9;
static const Shortint msoTextEffectShapeArchDownCurve = 0xa;
static const Shortint msoTextEffectShapeCircleCurve = 0xb;
static const Shortint msoTextEffectShapeButtonCurve = 0xc;
static const Shortint msoTextEffectShapeArchUpPour = 0xd;
static const Shortint msoTextEffectShapeArchDownPour = 0xe;
static const Shortint msoTextEffectShapeCirclePour = 0xf;
static const Shortint msoTextEffectShapeButtonPour = 0x10;
static const Shortint msoTextEffectShapeCurveUp = 0x11;
static const Shortint msoTextEffectShapeCurveDown = 0x12;
static const Shortint msoTextEffectShapeCanUp = 0x13;
static const Shortint msoTextEffectShapeCanDown = 0x14;
static const Shortint msoTextEffectShapeWave1 = 0x15;
static const Shortint msoTextEffectShapeWave2 = 0x16;
static const Shortint msoTextEffectShapeDoubleWave1 = 0x17;
static const Shortint msoTextEffectShapeDoubleWave2 = 0x18;
static const Shortint msoTextEffectShapeInflate = 0x19;
static const Shortint msoTextEffectShapeDeflate = 0x1a;
static const Shortint msoTextEffectShapeInflateBottom = 0x1b;
static const Shortint msoTextEffectShapeDeflateBottom = 0x1c;
static const Shortint msoTextEffectShapeInflateTop = 0x1d;
static const Shortint msoTextEffectShapeDeflateTop = 0x1e;
static const Shortint msoTextEffectShapeDeflateInflate = 0x1f;
static const Shortint msoTextEffectShapeDeflateInflateDeflate = 0x20;
static const Shortint msoTextEffectShapeFadeRight = 0x21;
static const Shortint msoTextEffectShapeFadeLeft = 0x22;
static const Shortint msoTextEffectShapeFadeUp = 0x23;
static const Shortint msoTextEffectShapeFadeDown = 0x24;
static const Shortint msoTextEffectShapeSlantUp = 0x25;
static const Shortint msoTextEffectShapeSlantDown = 0x26;
static const Shortint msoTextEffectShapeCascadeUp = 0x27;
static const Shortint msoTextEffectShapeCascadeDown = 0x28;
static const unsigned msoTextEffectAlignmentMixed = 0xfffffffe;
static const Shortint msoTextEffectAlignmentLeft = 0x1;
static const Shortint msoTextEffectAlignmentCentered = 0x2;
static const Shortint msoTextEffectAlignmentRight = 0x3;
static const Shortint msoTextEffectAlignmentLetterJustify = 0x4;
static const Shortint msoTextEffectAlignmentWordJustify = 0x5;
static const Shortint msoTextEffectAlignmentStretchJustify = 0x6;
static const unsigned msoPresetLightingDirectionMixed = 0xfffffffe;
static const Shortint msoLightingTopLeft = 0x1;
static const Shortint msoLightingTop = 0x2;
static const Shortint msoLightingTopRight = 0x3;
static const Shortint msoLightingLeft = 0x4;
static const Shortint msoLightingNone = 0x5;
static const Shortint msoLightingRight = 0x6;
static const Shortint msoLightingBottomLeft = 0x7;
static const Shortint msoLightingBottom = 0x8;
static const Shortint msoLightingBottomRight = 0x9;
static const unsigned msoPresetLightingSoftnessMixed = 0xfffffffe;
static const Shortint msoLightingDim = 0x1;
static const Shortint msoLightingNormal = 0x2;
static const Shortint msoLightingBright = 0x3;
static const unsigned msoPresetMaterialMixed = 0xfffffffe;
static const Shortint msoMaterialMatte = 0x1;
static const Shortint msoMaterialPlastic = 0x2;
static const Shortint msoMaterialMetal = 0x3;
static const Shortint msoMaterialWireFrame = 0x4;
static const unsigned msoPresetExtrusionDirectionMixed = 0xfffffffe;
static const Shortint msoExtrusionBottomRight = 0x1;
static const Shortint msoExtrusionBottom = 0x2;
static const Shortint msoExtrusionBottomLeft = 0x3;
static const Shortint msoExtrusionRight = 0x4;
static const Shortint msoExtrusionNone = 0x5;
static const Shortint msoExtrusionLeft = 0x6;
static const Shortint msoExtrusionTopRight = 0x7;
static const Shortint msoExtrusionTop = 0x8;
static const Shortint msoExtrusionTopLeft = 0x9;
static const unsigned msoPresetThreeDFormatMixed = 0xfffffffe;
static const Shortint msoThreeD1 = 0x1;
static const Shortint msoThreeD2 = 0x2;
static const Shortint msoThreeD3 = 0x3;
static const Shortint msoThreeD4 = 0x4;
static const Shortint msoThreeD5 = 0x5;
static const Shortint msoThreeD6 = 0x6;
static const Shortint msoThreeD7 = 0x7;
static const Shortint msoThreeD8 = 0x8;
static const Shortint msoThreeD9 = 0x9;
static const Shortint msoThreeD10 = 0xa;
static const Shortint msoThreeD11 = 0xb;
static const Shortint msoThreeD12 = 0xc;
static const Shortint msoThreeD13 = 0xd;
static const Shortint msoThreeD14 = 0xe;
static const Shortint msoThreeD15 = 0xf;
static const Shortint msoThreeD16 = 0x10;
static const Shortint msoThreeD17 = 0x11;
static const Shortint msoThreeD18 = 0x12;
static const Shortint msoThreeD19 = 0x13;
static const Shortint msoThreeD20 = 0x14;
static const unsigned msoExtrusionColorTypeMixed = 0xfffffffe;
static const Shortint msoExtrusionColorAutomatic = 0x1;
static const Shortint msoExtrusionColorCustom = 0x2;
static const Shortint msoAlignLefts = 0x0;
static const Shortint msoAlignCenters = 0x1;
static const Shortint msoAlignRights = 0x2;
static const Shortint msoAlignTops = 0x3;
static const Shortint msoAlignMiddles = 0x4;
static const Shortint msoAlignBottoms = 0x5;
static const Shortint msoDistributeHorizontally = 0x0;
static const Shortint msoDistributeVertically = 0x1;
static const unsigned msoConnectorTypeMixed = 0xfffffffe;
static const Shortint msoConnectorStraight = 0x1;
static const Shortint msoConnectorElbow = 0x2;
static const Shortint msoConnectorCurve = 0x3;
static const unsigned msoHorizontalAnchorMixed = 0xfffffffe;
static const Shortint msoAnchorNone = 0x1;
static const Shortint msoAnchorCenter = 0x2;
static const unsigned msoVerticalAnchorMixed = 0xfffffffe;
static const Shortint msoAnchorTop = 0x1;
static const Shortint msoAnchorTopBaseline = 0x2;
static const Shortint msoAnchorMiddle = 0x3;
static const Shortint msoAnchorBottom = 0x4;
static const Shortint msoAnchorBottomBaseLine = 0x5;
static const unsigned msoOrientationMixed = 0xfffffffe;
static const Shortint msoOrientationHorizontal = 0x1;
static const Shortint msoOrientationVertical = 0x2;
static const Shortint msoBringToFront = 0x0;
static const Shortint msoSendToBack = 0x1;
static const Shortint msoBringForward = 0x2;
static const Shortint msoSendBackward = 0x3;
static const Shortint msoBringInFrontOfText = 0x4;
static const Shortint msoSendBehindText = 0x5;
static const Shortint msoSegmentLine = 0x0;
static const Shortint msoSegmentCurve = 0x1;
static const Shortint msoEditingAuto = 0x0;
static const Shortint msoEditingCorner = 0x1;
static const Shortint msoEditingSmooth = 0x2;
static const Shortint msoEditingSymmetric = 0x3;
static const unsigned msoShapeMixed = 0xfffffffe;
static const Shortint msoShapeRectangle = 0x1;
static const Shortint msoShapeParallelogram = 0x2;
static const Shortint msoShapeTrapezoid = 0x3;
static const Shortint msoShapeDiamond = 0x4;
static const Shortint msoShapeRoundedRectangle = 0x5;
static const Shortint msoShapeOctagon = 0x6;
static const Shortint msoShapeIsoscelesTriangle = 0x7;
static const Shortint msoShapeRightTriangle = 0x8;
static const Shortint msoShapeOval = 0x9;
static const Shortint msoShapeHexagon = 0xa;
static const Shortint msoShapeCross = 0xb;
static const Shortint msoShapeRegularPentagon = 0xc;
static const Shortint msoShapeCan = 0xd;
static const Shortint msoShapeCube = 0xe;
static const Shortint msoShapeBevel = 0xf;
static const Shortint msoShapeFoldedCorner = 0x10;
static const Shortint msoShapeSmileyFace = 0x11;
static const Shortint msoShapeDonut = 0x12;
static const Shortint msoShapeNoSymbol = 0x13;
static const Shortint msoShapeBlockArc = 0x14;
static const Shortint msoShapeHeart = 0x15;
static const Shortint msoShapeLightningBolt = 0x16;
static const Shortint msoShapeSun = 0x17;
static const Shortint msoShapeMoon = 0x18;
static const Shortint msoShapeArc = 0x19;
static const Shortint msoShapeDoubleBracket = 0x1a;
static const Shortint msoShapeDoubleBrace = 0x1b;
static const Shortint msoShapePlaque = 0x1c;
static const Shortint msoShapeLeftBracket = 0x1d;
static const Shortint msoShapeRightBracket = 0x1e;
static const Shortint msoShapeLeftBrace = 0x1f;
static const Shortint msoShapeRightBrace = 0x20;
static const Shortint msoShapeRightArrow = 0x21;
static const Shortint msoShapeLeftArrow = 0x22;
static const Shortint msoShapeUpArrow = 0x23;
static const Shortint msoShapeDownArrow = 0x24;
static const Shortint msoShapeLeftRightArrow = 0x25;
static const Shortint msoShapeUpDownArrow = 0x26;
static const Shortint msoShapeQuadArrow = 0x27;
static const Shortint msoShapeLeftRightUpArrow = 0x28;
static const Shortint msoShapeBentArrow = 0x29;
static const Shortint msoShapeUTurnArrow = 0x2a;
static const Shortint msoShapeLeftUpArrow = 0x2b;
static const Shortint msoShapeBentUpArrow = 0x2c;
static const Shortint msoShapeCurvedRightArrow = 0x2d;
static const Shortint msoShapeCurvedLeftArrow = 0x2e;
static const Shortint msoShapeCurvedUpArrow = 0x2f;
static const Shortint msoShapeCurvedDownArrow = 0x30;
static const Shortint msoShapeStripedRightArrow = 0x31;
static const Shortint msoShapeNotchedRightArrow = 0x32;
static const Shortint msoShapePentagon = 0x33;
static const Shortint msoShapeChevron = 0x34;
static const Shortint msoShapeRightArrowCallout = 0x35;
static const Shortint msoShapeLeftArrowCallout = 0x36;
static const Shortint msoShapeUpArrowCallout = 0x37;
static const Shortint msoShapeDownArrowCallout = 0x38;
static const Shortint msoShapeLeftRightArrowCallout = 0x39;
static const Shortint msoShapeUpDownArrowCallout = 0x3a;
static const Shortint msoShapeQuadArrowCallout = 0x3b;
static const Shortint msoShapeCircularArrow = 0x3c;
static const Shortint msoShapeFlowchartProcess = 0x3d;
static const Shortint msoShapeFlowchartAlternateProcess = 0x3e;
static const Shortint msoShapeFlowchartDecision = 0x3f;
static const Shortint msoShapeFlowchartData = 0x40;
static const Shortint msoShapeFlowchartPredefinedProcess = 0x41;
static const Shortint msoShapeFlowchartInternalStorage = 0x42;
static const Shortint msoShapeFlowchartDocument = 0x43;
static const Shortint msoShapeFlowchartMultidocument = 0x44;
static const Shortint msoShapeFlowchartTerminator = 0x45;
static const Shortint msoShapeFlowchartPreparation = 0x46;
static const Shortint msoShapeFlowchartManualInput = 0x47;
static const Shortint msoShapeFlowchartManualOperation = 0x48;
static const Shortint msoShapeFlowchartConnector = 0x49;
static const Shortint msoShapeFlowchartOffpageConnector = 0x4a;
static const Shortint msoShapeFlowchartCard = 0x4b;
static const Shortint msoShapeFlowchartPunchedTape = 0x4c;
static const Shortint msoShapeFlowchartSummingJunction = 0x4d;
static const Shortint msoShapeFlowchartOr = 0x4e;
static const Shortint msoShapeFlowchartCollate = 0x4f;
static const Shortint msoShapeFlowchartSort = 0x50;
static const Shortint msoShapeFlowchartExtract = 0x51;
static const Shortint msoShapeFlowchartMerge = 0x52;
static const Shortint msoShapeFlowchartStoredData = 0x53;
static const Shortint msoShapeFlowchartDelay = 0x54;
static const Shortint msoShapeFlowchartSequentialAccessStorage = 0x55;
static const Shortint msoShapeFlowchartMagneticDisk = 0x56;
static const Shortint msoShapeFlowchartDirectAccessStorage = 0x57;
static const Shortint msoShapeFlowchartDisplay = 0x58;
static const Shortint msoShapeExplosion1 = 0x59;
static const Shortint msoShapeExplosion2 = 0x5a;
static const Shortint msoShape4pointStar = 0x5b;
static const Shortint msoShape5pointStar = 0x5c;
static const Shortint msoShape8pointStar = 0x5d;
static const Shortint msoShape16pointStar = 0x5e;
static const Shortint msoShape24pointStar = 0x5f;
static const Shortint msoShape32pointStar = 0x60;
static const Shortint msoShapeUpRibbon = 0x61;
static const Shortint msoShapeDownRibbon = 0x62;
static const Shortint msoShapeCurvedUpRibbon = 0x63;
static const Shortint msoShapeCurvedDownRibbon = 0x64;
static const Shortint msoShapeVerticalScroll = 0x65;
static const Shortint msoShapeHorizontalScroll = 0x66;
static const Shortint msoShapeWave = 0x67;
static const Shortint msoShapeDoubleWave = 0x68;
static const Shortint msoShapeRectangularCallout = 0x69;
static const Shortint msoShapeRoundedRectangularCallout = 0x6a;
static const Shortint msoShapeOvalCallout = 0x6b;
static const Shortint msoShapeCloudCallout = 0x6c;
static const Shortint msoShapeLineCallout1 = 0x6d;
static const Shortint msoShapeLineCallout2 = 0x6e;
static const Shortint msoShapeLineCallout3 = 0x6f;
static const Shortint msoShapeLineCallout4 = 0x70;
static const Shortint msoShapeLineCallout1AccentBar = 0x71;
static const Shortint msoShapeLineCallout2AccentBar = 0x72;
static const Shortint msoShapeLineCallout3AccentBar = 0x73;
static const Shortint msoShapeLineCallout4AccentBar = 0x74;
static const Shortint msoShapeLineCallout1NoBorder = 0x75;
static const Shortint msoShapeLineCallout2NoBorder = 0x76;
static const Shortint msoShapeLineCallout3NoBorder = 0x77;
static const Shortint msoShapeLineCallout4NoBorder = 0x78;
static const Shortint msoShapeLineCallout1BorderandAccentBar = 0x79;
static const Shortint msoShapeLineCallout2BorderandAccentBar = 0x7a;
static const Shortint msoShapeLineCallout3BorderandAccentBar = 0x7b;
static const Shortint msoShapeLineCallout4BorderandAccentBar = 0x7c;
static const Shortint msoShapeActionButtonCustom = 0x7d;
static const Shortint msoShapeActionButtonHome = 0x7e;
static const Shortint msoShapeActionButtonHelp = 0x7f;
static const Byte msoShapeActionButtonInformation = 0x80;
static const Byte msoShapeActionButtonBackorPrevious = 0x81;
static const Byte msoShapeActionButtonForwardorNext = 0x82;
static const Byte msoShapeActionButtonBeginning = 0x83;
static const Byte msoShapeActionButtonEnd = 0x84;
static const Byte msoShapeActionButtonReturn = 0x85;
static const Byte msoShapeActionButtonDocument = 0x86;
static const Byte msoShapeActionButtonSound = 0x87;
static const Byte msoShapeActionButtonMovie = 0x88;
static const Byte msoShapeBalloon = 0x89;
static const Byte msoShapeNotPrimitive = 0x8a;
static const unsigned msoShapeTypeMixed = 0xfffffffe;
static const Shortint msoAutoShape = 0x1;
static const Shortint msoCallout = 0x2;
static const Shortint msoChart = 0x3;
static const Shortint msoComment = 0x4;
static const Shortint msoFreeform = 0x5;
static const Shortint msoGroup = 0x6;
static const Shortint msoEmbeddedOLEObject = 0x7;
static const Shortint msoFormControl = 0x8;
static const Shortint msoLine = 0x9;
static const Shortint msoLinkedOLEObject = 0xa;
static const Shortint msoLinkedPicture = 0xb;
static const Shortint msoOLEControlObject = 0xc;
static const Shortint msoPicture = 0xd;
static const Shortint msoPlaceholder = 0xe;
static const Shortint msoTextEffect = 0xf;
static const Shortint msoMedia = 0x10;
static const Shortint msoTextBox = 0x11;
static const Shortint msoScriptAnchor = 0x12;
static const Shortint msoTable = 0x13;
static const Shortint msoFlipHorizontal = 0x0;
static const Shortint msoFlipVertical = 0x1;
static const unsigned msoTrue = 0xffffffff;
static const Shortint msoFalse = 0x0;
static const Shortint msoCTrue = 0x1;
static const unsigned msoTriStateToggle = 0xfffffffd;
static const unsigned msoTriStateMixed = 0xfffffffe;
static const unsigned msoColorTypeMixed = 0xfffffffe;
static const Shortint msoColorTypeRGB = 0x1;
static const Shortint msoColorTypeScheme = 0x2;
static const unsigned msoPictureMixed = 0xfffffffe;
static const Shortint msoPictureAutomatic = 0x1;
static const Shortint msoPictureGrayscale = 0x2;
static const Shortint msoPictureBlackAndWhite = 0x3;
static const Shortint msoPictureWatermark = 0x4;
static const unsigned msoCalloutAngleMixed = 0xfffffffe;
static const Shortint msoCalloutAngleAutomatic = 0x1;
static const Shortint msoCalloutAngle30 = 0x2;
static const Shortint msoCalloutAngle45 = 0x3;
static const Shortint msoCalloutAngle60 = 0x4;
static const Shortint msoCalloutAngle90 = 0x5;
static const unsigned msoCalloutDropMixed = 0xfffffffe;
static const Shortint msoCalloutDropCustom = 0x1;
static const Shortint msoCalloutDropTop = 0x2;
static const Shortint msoCalloutDropCenter = 0x3;
static const Shortint msoCalloutDropBottom = 0x4;
static const unsigned msoCalloutMixed = 0xfffffffe;
static const Shortint msoCalloutOne = 0x1;
static const Shortint msoCalloutTwo = 0x2;
static const Shortint msoCalloutThree = 0x3;
static const Shortint msoCalloutFour = 0x4;
static const unsigned msoBlackWhiteMixed = 0xfffffffe;
static const Shortint msoBlackWhiteAutomatic = 0x1;
static const Shortint msoBlackWhiteGrayScale = 0x2;
static const Shortint msoBlackWhiteLightGrayScale = 0x3;
static const Shortint msoBlackWhiteInverseGrayScale = 0x4;
static const Shortint msoBlackWhiteGrayOutline = 0x5;
static const Shortint msoBlackWhiteBlackTextAndLine = 0x6;
static const Shortint msoBlackWhiteHighContrast = 0x7;
static const Shortint msoBlackWhiteBlack = 0x8;
static const Shortint msoBlackWhiteWhite = 0x9;
static const Shortint msoBlackWhiteDontShow = 0xa;
static const Word msoIntegerMixed = 0x8000;
static const unsigned msoSingleMixed = 0x80000000;
static const unsigned msoTextOrientationMixed = 0xfffffffe;
static const Shortint msoTextOrientationHorizontal = 0x1;
static const Shortint msoTextOrientationUpward = 0x2;
static const Shortint msoTextOrientationDownward = 0x3;
static const Shortint msoTextOrientationVerticalFarEast = 0x4;
static const Shortint msoTextOrientationVertical = 0x5;
static const Shortint msoTextOrientationHorizontalRotatedFarEast = 0x6;
static const Shortint msoScaleFromTopLeft = 0x0;
static const Shortint msoScaleFromMiddle = 0x1;
static const Shortint msoScaleFromBottomRight = 0x2;
static const Shortint msoBarLeft = 0x0;
static const Shortint msoBarTop = 0x1;
static const Shortint msoBarRight = 0x2;
static const Shortint msoBarBottom = 0x3;
static const Shortint msoBarFloating = 0x4;
static const Shortint msoBarPopup = 0x5;
static const Shortint msoBarMenuBar = 0x6;
static const Shortint msoBarNoProtection = 0x0;
static const Shortint msoBarNoCustomize = 0x1;
static const Shortint msoBarNoResize = 0x2;
static const Shortint msoBarNoMove = 0x4;
static const Shortint msoBarNoChangeVisible = 0x8;
static const Shortint msoBarNoChangeDock = 0x10;
static const Shortint msoBarNoVerticalDock = 0x20;
static const Shortint msoBarNoHorizontalDock = 0x40;
static const Shortint msoBarTypeNormal = 0x0;
static const Shortint msoBarTypeMenuBar = 0x1;
static const Shortint msoBarTypePopup = 0x2;
static const Shortint msoControlCustom = 0x0;
static const Shortint msoControlButton = 0x1;
static const Shortint msoControlEdit = 0x2;
static const Shortint msoControlDropdown = 0x3;
static const Shortint msoControlComboBox = 0x4;
static const Shortint msoControlButtonDropdown = 0x5;
static const Shortint msoControlSplitDropdown = 0x6;
static const Shortint msoControlOCXDropdown = 0x7;
static const Shortint msoControlGenericDropdown = 0x8;
static const Shortint msoControlGraphicDropdown = 0x9;
static const Shortint msoControlPopup = 0xa;
static const Shortint msoControlGraphicPopup = 0xb;
static const Shortint msoControlButtonPopup = 0xc;
static const Shortint msoControlSplitButtonPopup = 0xd;
static const Shortint msoControlSplitButtonMRUPopup = 0xe;
static const Shortint msoControlLabel = 0xf;
static const Shortint msoControlExpandingGrid = 0x10;
static const Shortint msoControlSplitExpandingGrid = 0x11;
static const Shortint msoControlGrid = 0x12;
static const Shortint msoControlGauge = 0x13;
static const Shortint msoControlGraphicCombo = 0x14;
static const Shortint msoControlPane = 0x15;
static const Shortint msoControlActiveX = 0x16;
static const Shortint msoButtonUp = 0x0;
static const unsigned msoButtonDown = 0xffffffff;
static const Shortint msoButtonMixed = 0x2;
static const Shortint msoControlOLEUsageNeither = 0x0;
static const Shortint msoControlOLEUsageServer = 0x1;
static const Shortint msoControlOLEUsageClient = 0x2;
static const Shortint msoControlOLEUsageBoth = 0x3;
static const Shortint msoButtonWrapText = 0x4;
static const Shortint msoButtonTextBelow = 0x8;
static const Shortint msoButtonAutomatic = 0x0;
static const Shortint msoButtonIcon = 0x1;
static const Shortint msoButtonCaption = 0x2;
static const Shortint msoButtonIconAndCaption = 0x3;
static const Shortint msoButtonIconAndWrapCaption = 0x7;
static const Shortint msoButtonIconAndCaptionBelow = 0xb;
static const Shortint msoButtonWrapCaption = 0xe;
static const Shortint msoButtonIconAndWrapCaptionBelow = 0xf;
static const Shortint msoComboNormal = 0x0;
static const Shortint msoComboLabel = 0x1;
static const unsigned msoOLEMenuGroupNone = 0xffffffff;
static const Shortint msoOLEMenuGroupFile = 0x0;
static const Shortint msoOLEMenuGroupEdit = 0x1;
static const Shortint msoOLEMenuGroupContainer = 0x2;
static const Shortint msoOLEMenuGroupObject = 0x3;
static const Shortint msoOLEMenuGroupWindow = 0x4;
static const Shortint msoOLEMenuGroupHelp = 0x5;
static const Shortint msoMenuAnimationNone = 0x0;
static const Shortint msoMenuAnimationRandom = 0x1;
static const Shortint msoMenuAnimationUnfold = 0x2;
static const Shortint msoMenuAnimationSlide = 0x3;
static const Shortint msoBarRowFirst = 0x0;
static const unsigned msoBarRowLast = 0xffffffff;
static const Shortint msoCommandBarButtonHyperlinkNone = 0x0;
static const Shortint msoCommandBarButtonHyperlinkOpen = 0x1;
static const Shortint msoCommandBarButtonHyperlinkInsertPicture = 0x2;
static const Shortint msoHyperlinkRange = 0x0;
static const Shortint msoHyperlinkShape = 0x1;
static const Shortint msoHyperlinkInlineShape = 0x2;
static const Shortint msoMethodGet = 0x0;
static const Shortint msoMethodPost = 0x1;
static const Shortint msoAnimationIdle = 0x1;
static const Shortint msoAnimationGreeting = 0x2;
static const Shortint msoAnimationGoodbye = 0x3;
static const Shortint msoAnimationBeginSpeaking = 0x4;
static const Shortint msoAnimationRestPose = 0x5;
static const Shortint msoAnimationCharacterSuccessMajor = 0x6;
static const Shortint msoAnimationGetAttentionMajor = 0xb;
static const Shortint msoAnimationGetAttentionMinor = 0xc;
static const Shortint msoAnimationSearching = 0xd;
static const Shortint msoAnimationPrinting = 0x12;
static const Shortint msoAnimationGestureRight = 0x13;
static const Shortint msoAnimationWritingNotingSomething = 0x16;
static const Shortint msoAnimationWorkingAtSomething = 0x17;
static const Shortint msoAnimationThinking = 0x18;
static const Shortint msoAnimationSendingMail = 0x19;
static const Shortint msoAnimationListensToComputer = 0x1a;
static const Shortint msoAnimationDisappear = 0x1f;
static const Shortint msoAnimationAppear = 0x20;
static const Shortint msoAnimationGetArtsy = 0x64;
static const Shortint msoAnimationGetTechy = 0x65;
static const Shortint msoAnimationGetWizardy = 0x66;
static const Shortint msoAnimationCheckingSomething = 0x67;
static const Shortint msoAnimationLookDown = 0x68;
static const Shortint msoAnimationLookDownLeft = 0x69;
static const Shortint msoAnimationLookDownRight = 0x6a;
static const Shortint msoAnimationLookLeft = 0x6b;
static const Shortint msoAnimationLookRight = 0x6c;
static const Shortint msoAnimationLookUp = 0x6d;
static const Shortint msoAnimationLookUpLeft = 0x6e;
static const Shortint msoAnimationLookUpRight = 0x6f;
static const Shortint msoAnimationSaving = 0x70;
static const Shortint msoAnimationGestureDown = 0x71;
static const Shortint msoAnimationGestureLeft = 0x72;
static const Shortint msoAnimationGestureUp = 0x73;
static const Shortint msoAnimationEmptyTrash = 0x74;
static const Shortint msoButtonSetNone = 0x0;
static const Shortint msoButtonSetOK = 0x1;
static const Shortint msoButtonSetCancel = 0x2;
static const Shortint msoButtonSetOkCancel = 0x3;
static const Shortint msoButtonSetYesNo = 0x4;
static const Shortint msoButtonSetYesNoCancel = 0x5;
static const Shortint msoButtonSetBackClose = 0x6;
static const Shortint msoButtonSetNextClose = 0x7;
static const Shortint msoButtonSetBackNextClose = 0x8;
static const Shortint msoButtonSetRetryCancel = 0x9;
static const Shortint msoButtonSetAbortRetryIgnore = 0xa;
static const Shortint msoButtonSetSearchClose = 0xb;
static const Shortint msoButtonSetBackNextSnooze = 0xc;
static const Shortint msoButtonSetTipsOptionsClose = 0xd;
static const Shortint msoButtonSetYesAllNoCancel = 0xe;
static const Shortint msoIconNone = 0x0;
static const Shortint msoIconAlert = 0x2;
static const Shortint msoIconTip = 0x3;
static const Shortint msoIconAlertInfo = 0x4;
static const Shortint msoIconAlertWarning = 0x5;
static const Shortint msoIconAlertQuery = 0x6;
static const Shortint msoIconAlertCritical = 0x7;
static const Shortint msoBalloonTypeButtons = 0x0;
static const Shortint msoBalloonTypeBullets = 0x1;
static const Shortint msoBalloonTypeNumbers = 0x2;
static const Shortint msoModeModal = 0x0;
static const Shortint msoModeAutoDown = 0x1;
static const Shortint msoModeModeless = 0x2;
static const Shortint msoBalloonErrorNone = 0x0;
static const Shortint msoBalloonErrorOther = 0x1;
static const Shortint msoBalloonErrorTooBig = 0x2;
static const Shortint msoBalloonErrorOutOfMemory = 0x3;
static const Shortint msoBalloonErrorBadPictureRef = 0x4;
static const Shortint msoBalloonErrorBadReference = 0x5;
static const Shortint msoBalloonErrorButtonlessModal = 0x6;
static const Shortint msoBalloonErrorButtonModeless = 0x7;
static const Shortint msoBalloonErrorBadCharacter = 0x8;
static const Shortint msoBalloonErrorCOMFailure = 0x9;
static const Shortint msoBalloonErrorCharNotTopmostForModal = 0xa;
static const Shortint msoBalloonErrorTooManyControls = 0xb;
static const Shortint msoWizardActInactive = 0x0;
static const Shortint msoWizardActActive = 0x1;
static const Shortint msoWizardActSuspend = 0x2;
static const Shortint msoWizardActResume = 0x3;
static const Shortint msoWizardMsgLocalStateOn = 0x1;
static const Shortint msoWizardMsgLocalStateOff = 0x2;
static const Shortint msoWizardMsgShowHelp = 0x3;
static const Shortint msoWizardMsgSuspending = 0x4;
static const Shortint msoWizardMsgResuming = 0x5;
static const unsigned msoBalloonButtonYesToAll = 0xfffffff1;
static const unsigned msoBalloonButtonOptions = 0xfffffff2;
static const unsigned msoBalloonButtonTips = 0xfffffff3;
static const unsigned msoBalloonButtonClose = 0xfffffff4;
static const unsigned msoBalloonButtonSnooze = 0xfffffff5;
static const unsigned msoBalloonButtonSearch = 0xfffffff6;
static const unsigned msoBalloonButtonIgnore = 0xfffffff7;
static const unsigned msoBalloonButtonAbort = 0xfffffff8;
static const unsigned msoBalloonButtonRetry = 0xfffffff9;
static const unsigned msoBalloonButtonNext = 0xfffffffa;
static const unsigned msoBalloonButtonBack = 0xfffffffb;
static const unsigned msoBalloonButtonNo = 0xfffffffc;
static const unsigned msoBalloonButtonYes = 0xfffffffd;
static const unsigned msoBalloonButtonCancel = 0xfffffffe;
static const unsigned msoBalloonButtonOK = 0xffffffff;
static const Shortint msoBalloonButtonNull = 0x0;
static const Shortint offPropertyTypeNumber = 0x1;
static const Shortint offPropertyTypeBoolean = 0x2;
static const Shortint offPropertyTypeDate = 0x3;
static const Shortint offPropertyTypeString = 0x4;
static const Shortint offPropertyTypeFloat = 0x5;
static const Shortint msoPropertyTypeNumber = 0x1;
static const Shortint msoPropertyTypeBoolean = 0x2;
static const Shortint msoPropertyTypeDate = 0x3;
static const Shortint msoPropertyTypeString = 0x4;
static const Shortint msoPropertyTypeFloat = 0x5;
static const Shortint msoLanguageIDInstall = 0x1;
static const Shortint msoLanguageIDUI = 0x2;
static const Shortint msoLanguageIDHelp = 0x3;
static const Shortint msoLanguageIDExeMode = 0x4;
static const Shortint msoLanguageIDUIPrevious = 0x5;
static const Word MsoFarEastLineBreakLanguageJapanese = 0x411;
static const Word MsoFarEastLineBreakLanguageKorean = 0x412;
static const Word MsoFarEastLineBreakLanguageSimplifiedChinese = 0x804;
static const Word MsoFarEastLineBreakLanguageTraditionalChinese = 0x404;
static const Shortint msoFeatureInstallNone = 0x0;
static const Shortint msoFeatureInstallOnDemand = 0x1;
static const Shortint msoFeatureInstallOnDemandWithUI = 0x2;
static const Shortint msoScriptLanguageJava = 0x1;
static const Shortint msoScriptLanguageVisualBasic = 0x2;
static const Shortint msoScriptLanguageASP = 0x3;
static const Shortint msoScriptLanguageOther = 0x4;
static const Shortint msoScriptLocationInHead = 0x1;
static const Shortint msoScriptLocationInBody = 0x2;
static const Shortint msoOptionsNew = 0x1;
static const Shortint msoOptionsAdd = 0x2;
static const Shortint msoOptionsWithin = 0x3;
static const Shortint msoViewFileInfo = 0x1;
static const Shortint msoViewPreview = 0x2;
static const Shortint msoViewSummaryInfo = 0x3;
static const Shortint msoFileFindSortbyAuthor = 0x1;
static const Shortint msoFileFindSortbyDateCreated = 0x2;
static const Shortint msoFileFindSortbyLastSavedBy = 0x3;
static const Shortint msoFileFindSortbyDateSaved = 0x4;
static const Shortint msoFileFindSortbyFileName = 0x5;
static const Shortint msoFileFindSortbySize = 0x6;
static const Shortint msoFileFindSortbyTitle = 0x7;
static const Shortint msoListbyName = 0x1;
static const Shortint msoListbyTitle = 0x2;
static const Shortint msoLastModifiedYesterday = 0x1;
static const Shortint msoLastModifiedToday = 0x2;
static const Shortint msoLastModifiedLastWeek = 0x3;
static const Shortint msoLastModifiedThisWeek = 0x4;
static const Shortint msoLastModifiedLastMonth = 0x5;
static const Shortint msoLastModifiedThisMonth = 0x6;
static const Shortint msoLastModifiedAnyTime = 0x7;
static const Shortint msoSortByFileName = 0x1;
static const Shortint msoSortBySize = 0x2;
static const Shortint msoSortByFileType = 0x3;
static const Shortint msoSortByLastModified = 0x4;
static const Shortint msoSortOrderAscending = 0x1;
static const Shortint msoSortOrderDescending = 0x2;
static const Shortint msoConnectorAnd = 0x1;
static const Shortint msoConnectorOr = 0x2;
static const Shortint msoConditionFileTypeAllFiles = 0x1;
static const Shortint msoConditionFileTypeOfficeFiles = 0x2;
static const Shortint msoConditionFileTypeWordDocuments = 0x3;
static const Shortint msoConditionFileTypeExcelWorkbooks = 0x4;
static const Shortint msoConditionFileTypePowerPointPresentations = 0x5;
static const Shortint msoConditionFileTypeBinders = 0x6;
static const Shortint msoConditionFileTypeDatabases = 0x7;
static const Shortint msoConditionFileTypeTemplates = 0x8;
static const Shortint msoConditionIncludes = 0x9;
static const Shortint msoConditionIncludesPhrase = 0xa;
static const Shortint msoConditionBeginsWith = 0xb;
static const Shortint msoConditionEndsWith = 0xc;
static const Shortint msoConditionIncludesNearEachOther = 0xd;
static const Shortint msoConditionIsExactly = 0xe;
static const Shortint msoConditionIsNot = 0xf;
static const Shortint msoConditionYesterday = 0x10;
static const Shortint msoConditionToday = 0x11;
static const Shortint msoConditionTomorrow = 0x12;
static const Shortint msoConditionLastWeek = 0x13;
static const Shortint msoConditionThisWeek = 0x14;
static const Shortint msoConditionNextWeek = 0x15;
static const Shortint msoConditionLastMonth = 0x16;
static const Shortint msoConditionThisMonth = 0x17;
static const Shortint msoConditionNextMonth = 0x18;
static const Shortint msoConditionAnytime = 0x19;
static const Shortint msoConditionAnytimeBetween = 0x1a;
static const Shortint msoConditionOn = 0x1b;
static const Shortint msoConditionOnOrAfter = 0x1c;
static const Shortint msoConditionOnOrBefore = 0x1d;
static const Shortint msoConditionInTheNext = 0x1e;
static const Shortint msoConditionInTheLast = 0x1f;
static const Shortint msoConditionEquals = 0x20;
static const Shortint msoConditionDoesNotEqual = 0x21;
static const Shortint msoConditionAnyNumberBetween = 0x22;
static const Shortint msoConditionAtMost = 0x23;
static const Shortint msoConditionAtLeast = 0x24;
static const Shortint msoConditionMoreThan = 0x25;
static const Shortint msoConditionLessThan = 0x26;
static const Shortint msoConditionIsYes = 0x27;
static const Shortint msoConditionIsNo = 0x28;
static const Shortint msoFileTypeAllFiles = 0x1;
static const Shortint msoFileTypeOfficeFiles = 0x2;
static const Shortint msoFileTypeWordDocuments = 0x3;
static const Shortint msoFileTypeExcelWorkbooks = 0x4;
static const Shortint msoFileTypePowerPointPresentations = 0x5;
static const Shortint msoFileTypeBinders = 0x6;
static const Shortint msoFileTypeDatabases = 0x7;
static const Shortint msoFileTypeTemplates = 0x8;
static const unsigned msoLanguageIDMixed = 0xfffffffe;
static const Shortint msoLanguageIDNone = 0x0;
static const Word msoLanguageIDNoProofing = 0x400;
static const Word msoLanguageIDAfrikaans = 0x436;
static const Word msoLanguageIDAlbanian = 0x41c;
static const Word msoLanguageIDArabicAlgeria = 0x1401;
static const Word msoLanguageIDArabicBahrain = 0x3c01;
static const Word msoLanguageIDArabicEgypt = 0xc01;
static const Word msoLanguageIDArabicIraq = 0x801;
static const Word msoLanguageIDArabicJordan = 0x2c01;
static const Word msoLanguageIDArabicKuwait = 0x3401;
static const Word msoLanguageIDArabicLebanon = 0x3001;
static const Word msoLanguageIDArabicLibya = 0x1001;
static const Word msoLanguageIDArabicMorocco = 0x1801;
static const Word msoLanguageIDArabicOman = 0x2001;
static const Word msoLanguageIDArabicQatar = 0x4001;
static const Word msoLanguageIDArabic = 0x401;
static const Word msoLanguageIDArabicSyria = 0x2801;
static const Word msoLanguageIDArabicTunisia = 0x1c01;
static const Word msoLanguageIDArabicUAE = 0x3801;
static const Word msoLanguageIDArabicYemen = 0x2401;
static const Word msoLanguageIDArmenian = 0x42b;
static const Word msoLanguageIDAssamese = 0x44d;
static const Word msoLanguageIDAzeriCyrillic = 0x82c;
static const Word msoLanguageIDAzeriLatin = 0x42c;
static const Word msoLanguageIDBasque = 0x42d;
static const Word msoLanguageIDByelorussian = 0x423;
static const Word msoLanguageIDBengali = 0x445;
static const Word msoLanguageIDBosniaHerzegovina = 0x101a;
static const Word msoLanguageIDBulgarian = 0x402;
static const Word msoLanguageIDBurmese = 0x455;
static const Word msoLanguageIDCatalan = 0x403;
static const Word msoLanguageIDChineseHongKong = 0xc04;
static const Word msoLanguageIDChineseMacao = 0x1404;
static const Word msoLanguageIDSimplifiedChinese = 0x804;
static const Word msoLanguageIDChineseSingapore = 0x1004;
static const Word msoLanguageIDTraditionalChinese = 0x404;
static const Word msoLanguageIDCroatian = 0x41a;
static const Word msoLanguageIDCzech = 0x405;
static const Word msoLanguageIDDanish = 0x406;
static const Word msoLanguageIDBelgianDutch = 0x813;
static const Word msoLanguageIDDutch = 0x413;
static const Word msoLanguageIDEnglishAUS = 0xc09;
static const Word msoLanguageIDEnglishBelize = 0x2809;
static const Word msoLanguageIDEnglishCanadian = 0x1009;
static const Word msoLanguageIDEnglishCaribbean = 0x2409;
static const Word msoLanguageIDEnglishIreland = 0x1809;
static const Word msoLanguageIDEnglishJamaica = 0x2009;
static const Word msoLanguageIDEnglishNewZealand = 0x1409;
static const Word msoLanguageIDEnglishPhilippines = 0x3409;
static const Word msoLanguageIDEnglishSouthAfrica = 0x1c09;
static const Word msoLanguageIDEnglishTrinidad = 0x2c09;
static const Word msoLanguageIDEnglishUK = 0x809;
static const Word msoLanguageIDEnglishUS = 0x409;
static const Word msoLanguageIDEnglishZimbabwe = 0x3009;
static const Word msoLanguageIDEstonian = 0x425;
static const Word msoLanguageIDFaeroese = 0x438;
static const Word msoLanguageIDFarsi = 0x429;
static const Word msoLanguageIDFinnish = 0x40b;
static const Word msoLanguageIDBelgianFrench = 0x80c;
static const Word msoLanguageIDFrenchCameroon = 0x2c0c;
static const Word msoLanguageIDFrenchCanadian = 0xc0c;
static const Word msoLanguageIDFrenchCotedIvoire = 0x300c;
static const Word msoLanguageIDFrench = 0x40c;
static const Word msoLanguageIDFrenchLuxembourg = 0x140c;
static const Word msoLanguageIDFrenchMali = 0x340c;
static const Word msoLanguageIDFrenchMonaco = 0x180c;
static const Word msoLanguageIDFrenchReunion = 0x200c;
static const Word msoLanguageIDFrenchSenegal = 0x280c;
static const Word msoLanguageIDSwissFrench = 0x100c;
static const Word msoLanguageIDFrenchWestIndies = 0x1c0c;
static const Word msoLanguageIDFrenchZaire = 0x240c;
static const Word msoLanguageIDFrisianNetherlands = 0x462;
static const Word msoLanguageIDGaelicIreland = 0x83c;
static const Word msoLanguageIDGaelicScotland = 0x43c;
static const Word msoLanguageIDGalician = 0x456;
static const Word msoLanguageIDGeorgian = 0x437;
static const Word msoLanguageIDGermanAustria = 0xc07;
static const Word msoLanguageIDGerman = 0x407;
static const Word msoLanguageIDGermanLiechtenstein = 0x1407;
static const Word msoLanguageIDGermanLuxembourg = 0x1007;
static const Word msoLanguageIDSwissGerman = 0x807;
static const Word msoLanguageIDGreek = 0x408;
static const Word msoLanguageIDGujarati = 0x447;
static const Word msoLanguageIDHebrew = 0x40d;
static const Word msoLanguageIDHindi = 0x439;
static const Word msoLanguageIDHungarian = 0x40e;
static const Word msoLanguageIDIcelandic = 0x40f;
static const Word msoLanguageIDIndonesian = 0x421;
static const Word msoLanguageIDItalian = 0x410;
static const Word msoLanguageIDSwissItalian = 0x810;
static const Word msoLanguageIDJapanese = 0x411;
static const Word msoLanguageIDKannada = 0x44b;
static const Word msoLanguageIDKashmiri = 0x460;
static const Word msoLanguageIDKazakh = 0x43f;
static const Word msoLanguageIDKhmer = 0x453;
static const Word msoLanguageIDKirghiz = 0x440;
static const Word msoLanguageIDKonkani = 0x457;
static const Word msoLanguageIDKorean = 0x412;
static const Word msoLanguageIDLao = 0x454;
static const Word msoLanguageIDLatvian = 0x426;
static const Word msoLanguageIDLithuanian = 0x427;
static const Word msoLanguageIDMacedonian = 0x42f;
static const Word msoLanguageIDMalaysian = 0x43e;
static const Word msoLanguageIDMalayBruneiDarussalam = 0x83e;
static const Word msoLanguageIDMalayalam = 0x44c;
static const Word msoLanguageIDMaltese = 0x43a;
static const Word msoLanguageIDManipuri = 0x458;
static const Word msoLanguageIDMarathi = 0x44e;
static const Word msoLanguageIDMongolian = 0x450;
static const Word msoLanguageIDNepali = 0x461;
static const Word msoLanguageIDNorwegianBokmol = 0x414;
static const Word msoLanguageIDNorwegianNynorsk = 0x814;
static const Word msoLanguageIDOriya = 0x448;
static const Word msoLanguageIDPolish = 0x415;
static const Word msoLanguageIDBrazilianPortuguese = 0x416;
static const Word msoLanguageIDPortuguese = 0x816;
static const Word msoLanguageIDPunjabi = 0x446;
static const Word msoLanguageIDRhaetoRomanic = 0x417;
static const Word msoLanguageIDRomanianMoldova = 0x818;
static const Word msoLanguageIDRomanian = 0x418;
static const Word msoLanguageIDRussianMoldova = 0x819;
static const Word msoLanguageIDRussian = 0x419;
static const Word msoLanguageIDSamiLappish = 0x43b;
static const Word msoLanguageIDSanskrit = 0x44f;
static const Word msoLanguageIDSerbianCyrillic = 0xc1a;
static const Word msoLanguageIDSerbianLatin = 0x81a;
static const Word msoLanguageIDSesotho = 0x430;
static const Word msoLanguageIDSindhi = 0x459;
static const Word msoLanguageIDSlovak = 0x41b;
static const Word msoLanguageIDSlovenian = 0x424;
static const Word msoLanguageIDSorbian = 0x42e;
static const Word msoLanguageIDSpanishArgentina = 0x2c0a;
static const Word msoLanguageIDSpanishBolivia = 0x400a;
static const Word msoLanguageIDSpanishChile = 0x340a;
static const Word msoLanguageIDSpanishColombia = 0x240a;
static const Word msoLanguageIDSpanishCostaRica = 0x140a;
static const Word msoLanguageIDSpanishDominicanRepublic = 0x1c0a;
static const Word msoLanguageIDSpanishEcuador = 0x300a;
static const Word msoLanguageIDSpanishElSalvador = 0x440a;
static const Word msoLanguageIDSpanishGuatemala = 0x100a;
static const Word msoLanguageIDSpanishHonduras = 0x480a;
static const Word msoLanguageIDMexicanSpanish = 0x80a;
static const Word msoLanguageIDSpanishNicaragua = 0x4c0a;
static const Word msoLanguageIDSpanishPanama = 0x180a;
static const Word msoLanguageIDSpanishParaguay = 0x3c0a;
static const Word msoLanguageIDSpanishPeru = 0x280a;
static const Word msoLanguageIDSpanishPuertoRico = 0x500a;
static const Word msoLanguageIDSpanishModernSort = 0xc0a;
static const Word msoLanguageIDSpanish = 0x40a;
static const Word msoLanguageIDSpanishUruguay = 0x380a;
static const Word msoLanguageIDSpanishVenezuela = 0x200a;
static const Word msoLanguageIDSutu = 0x430;
static const Word msoLanguageIDSwahili = 0x441;
static const Word msoLanguageIDSwedishFinland = 0x81d;
static const Word msoLanguageIDSwedish = 0x41d;
static const Word msoLanguageIDTajik = 0x428;
static const Word msoLanguageIDTamil = 0x449;
static const Word msoLanguageIDTatar = 0x444;
static const Word msoLanguageIDTelugu = 0x44a;
static const Word msoLanguageIDThai = 0x41e;
static const Word msoLanguageIDTibetan = 0x451;
static const Word msoLanguageIDTsonga = 0x431;
static const Word msoLanguageIDTswana = 0x432;
static const Word msoLanguageIDTurkish = 0x41f;
static const Word msoLanguageIDTurkmen = 0x442;
static const Word msoLanguageIDUkrainian = 0x422;
static const Word msoLanguageIDUrdu = 0x420;
static const Word msoLanguageIDUzbekCyrillic = 0x843;
static const Word msoLanguageIDUzbekLatin = 0x443;
static const Word msoLanguageIDVenda = 0x433;
static const Word msoLanguageIDVietnamese = 0x42a;
static const Word msoLanguageIDWelsh = 0x452;
static const Word msoLanguageIDXhosa = 0x434;
static const Word msoLanguageIDZulu = 0x435;
static const Shortint msoScreenSize544x376 = 0x0;
static const Shortint msoScreenSize640x480 = 0x1;
static const Shortint msoScreenSize720x512 = 0x2;
static const Shortint msoScreenSize800x600 = 0x3;
static const Shortint msoScreenSize1024x768 = 0x4;
static const Shortint msoScreenSize1152x882 = 0x5;
static const Shortint msoScreenSize1152x900 = 0x6;
static const Shortint msoScreenSize1280x1024 = 0x7;
static const Shortint msoScreenSize1600x1200 = 0x8;
static const Shortint msoScreenSize1800x1440 = 0x9;
static const Shortint msoScreenSize1920x1200 = 0xa;
static const Shortint msoCharacterSetArabic = 0x1;
static const Shortint msoCharacterSetCyrillic = 0x2;
static const Shortint msoCharacterSetEnglishWesternEuropeanOtherLatinScript = 0x3;
static const Shortint msoCharacterSetGreek = 0x4;
static const Shortint msoCharacterSetHebrew = 0x5;
static const Shortint msoCharacterSetJapanese = 0x6;
static const Shortint msoCharacterSetKorean = 0x7;
static const Shortint msoCharacterSetMultilingualUnicode = 0x8;
static const Shortint msoCharacterSetSimplifiedChinese = 0x9;
static const Shortint msoCharacterSetThai = 0xa;
static const Shortint msoCharacterSetTraditionalChinese = 0xb;
static const Shortint msoCharacterSetVietnamese = 0xc;
static const Word msoEncodingThai = 0x36a;
static const Word msoEncodingJapaneseShiftJIS = 0x3a4;
static const Word msoEncodingSimplifiedChineseGBK = 0x3a8;
static const Word msoEncodingKorean = 0x3b5;
static const Word msoEncodingTraditionalChineseBig5 = 0x3b6;
static const Word msoEncodingUnicodeLittleEndian = 0x4b0;
static const Word msoEncodingUnicodeBigEndian = 0x4b1;
static const Word msoEncodingCentralEuropean = 0x4e2;
static const Word msoEncodingCyrillic = 0x4e3;
static const Word msoEncodingWestern = 0x4e4;
static const Word msoEncodingGreek = 0x4e5;
static const Word msoEncodingTurkish = 0x4e6;
static const Word msoEncodingHebrew = 0x4e7;
static const Word msoEncodingArabic = 0x4e8;
static const Word msoEncodingBaltic = 0x4e9;
static const Word msoEncodingVietnamese = 0x4ea;
static const Word msoEncodingAutoDetect = 0xc351;
static const Word msoEncodingJapaneseAutoDetect = 0xc6f4;
static const Word msoEncodingSimplifiedChineseAutoDetect = 0xc6f8;
static const Word msoEncodingKoreanAutoDetect = 0xc705;
static const Word msoEncodingTraditionalChineseAutoDetect = 0xc706;
static const Word msoEncodingCyrillicAutoDetect = 0xc833;
static const Word msoEncodingGreekAutoDetect = 0xc835;
static const Word msoEncodingArabicAutoDetect = 0xc838;
static const Word msoEncodingISO88591Latin1 = 0x6faf;
static const Word msoEncodingISO88592CentralEurope = 0x6fb0;
static const Word msoEncodingISO88593Latin3 = 0x6fb1;
static const Word msoEncodingISO88594Baltic = 0x6fb2;
static const Word msoEncodingISO88595Cyrillic = 0x6fb3;
static const Word msoEncodingISO88596Arabic = 0x6fb4;
static const Word msoEncodingISO88597Greek = 0x6fb5;
static const Word msoEncodingISO88598Hebrew = 0x6fb6;
static const Word msoEncodingISO88599Turkish = 0x6fb7;
static const Word msoEncodingISO885915Latin9 = 0x6fbd;
static const Word msoEncodingISO2022JPNoHalfwidthKatakana = 0xc42c;
static const Word msoEncodingISO2022JPJISX02021984 = 0xc42d;
static const Word msoEncodingISO2022JPJISX02011989 = 0xc42e;
static const Word msoEncodingISO2022KR = 0xc431;
static const Word msoEncodingISO2022CNTraditionalChinese = 0xc433;
static const Word msoEncodingISO2022CNSimplifiedChinese = 0xc435;
static const Word msoEncodingMacRoman = 0x2710;
static const Word msoEncodingMacJapanese = 0x2711;
static const Word msoEncodingMacTraditionalChineseBig5 = 0x2712;
static const Word msoEncodingMacKorean = 0x2713;
static const Word msoEncodingMacArabic = 0x2714;
static const Word msoEncodingMacHebrew = 0x2715;
static const Word msoEncodingMacGreek1 = 0x2716;
static const Word msoEncodingMacCyrillic = 0x2717;
static const Word msoEncodingMacSimplifiedChineseGB2312 = 0x2718;
static const Word msoEncodingMacRomania = 0x271a;
static const Word msoEncodingMacUkraine = 0x2721;
static const Word msoEncodingMacLatin2 = 0x272d;
static const Word msoEncodingMacIcelandic = 0x275f;
static const Word msoEncodingMacTurkish = 0x2761;
static const Word msoEncodingMacCroatia = 0x2762;
static const Shortint msoEncodingEBCDICUSCanada = 0x25;
static const Word msoEncodingEBCDICInternational = 0x1f4;
static const Word msoEncodingEBCDICMultilingualROECELatin2 = 0x366;
static const Word msoEncodingEBCDICGreekModern = 0x36b;
static const Word msoEncodingEBCDICTurkishLatin5 = 0x402;
static const Word msoEncodingEBCDICGermany = 0x4f31;
static const Word msoEncodingEBCDICDenmarkNorway = 0x4f35;
static const Word msoEncodingEBCDICFinlandSweden = 0x4f36;
static const Word msoEncodingEBCDICItaly = 0x4f38;
static const Word msoEncodingEBCDICLatinAmericaSpain = 0x4f3c;
static const Word msoEncodingEBCDICUnitedKingdom = 0x4f3d;
static const Word msoEncodingEBCDICJapaneseKatakanaExtended = 0x4f42;
static const Word msoEncodingEBCDICFrance = 0x4f49;
static const Word msoEncodingEBCDICArabic = 0x4fc4;
static const Word msoEncodingEBCDICGreek = 0x4fc7;
static const Word msoEncodingEBCDICHebrew = 0x4fc8;
static const Word msoEncodingEBCDICKoreanExtended = 0x5161;
static const Word msoEncodingEBCDICThai = 0x5166;
static const Word msoEncodingEBCDICIcelandic = 0x5187;
static const Word msoEncodingEBCDICTurkish = 0x51a9;
static const Word msoEncodingEBCDICRussian = 0x5190;
static const Word msoEncodingEBCDICSerbianBulgarian = 0x5221;
static const Word msoEncodingEBCDICJapaneseKatakanaExtendedAndJapanese = 0xc6f2;
static const Word msoEncodingEBCDICUSCanadaandJapanese = 0xc6f3;
static const Word msoEncodingEBCDICKoreanExtendedAndKorean = 0xc6f5;
static const Word msoEncodingEBCDICSimplifiedChineseExtendedAndSimplifiedChinese = 0xc6f7;
static const Word msoEncodingEBCDICUSCanadaAndTraditionalChinese = 0xc6f9;
static const Word msoEncodingEBCDICJapaneseLatinExtendedAndJapanese = 0xc6fb;
static const Word msoEncodingOEMUnitedStates = 0x1b5;
static const Word msoEncodingOEMGreek437G = 0x2e1;
static const Word msoEncodingOEMBaltic = 0x307;
static const Word msoEncodingOEMMultilingualLatinI = 0x352;
static const Word msoEncodingOEMMultilingualLatinII = 0x354;
static const Word msoEncodingOEMCyrillic = 0x357;
static const Word msoEncodingOEMTurkish = 0x359;
static const Word msoEncodingOEMPortuguese = 0x35c;
static const Word msoEncodingOEMIcelandic = 0x35d;
static const Word msoEncodingOEMHebrew = 0x35e;
static const Word msoEncodingOEMCanadianFrench = 0x35f;
static const Word msoEncodingOEMArabic = 0x360;
static const Word msoEncodingOEMNordic = 0x361;
static const Word msoEncodingOEMCyrillicII = 0x362;
static const Word msoEncodingOEMModernGreek = 0x365;
static const Word msoEncodingEUCJapanese = 0xcadc;
static const Word msoEncodingEUCChineseSimplifiedChinese = 0xcae0;
static const Word msoEncodingEUCKorean = 0xcaed;
static const Word msoEncodingEUCTaiwaneseTraditionalChinese = 0xcaee;
static const Word msoEncodingArabicASMO = 0x2c4;
static const Word msoEncodingArabicTransparentASMO = 0x2d0;
static const Word msoEncodingKoreanJohab = 0x551;
static const Word msoEncodingTaiwanCNS = 0x4e20;
static const Word msoEncodingTaiwanTCA = 0x4e21;
static const Word msoEncodingTaiwanEten = 0x4e22;
static const Word msoEncodingTaiwanIBM5550 = 0x4e23;
static const Word msoEncodingTaiwanTeleText = 0x4e24;
static const Word msoEncodingTaiwanWang = 0x4e25;
static const Word msoEncodingIA5IRV = 0x4e89;
static const Word msoEncodingIA5German = 0x4e8a;
static const Word msoEncodingIA5Swedish = 0x4e8b;
static const Word msoEncodingIA5Norwegian = 0x4e8c;
static const Word msoEncodingUSASCII = 0x4e9f;
static const Word msoEncodingT61 = 0x4f25;
static const Word msoEncodingISO6937NonSpacingAccent = 0x4f2d;
static const Word msoEncodingKOI8R = 0x5182;
static const Word msoEncodingExtAlphaLowercase = 0x5223;
static const Word msoEncodingKOI8U = 0x556a;
static const Word msoEncodingEuropa3 = 0x7149;
static const Word msoEncodingHZGBSimplifiedChinese = 0xcec8;
static const Word msoEncodingUTF7 = 0xfde8;
static const Word msoEncodingUTF8 = 0xfde9;
static const Shortint msoHTMLProjectOpenSourceView = 0x1;
static const Shortint msoHTMLProjectOpenTextView = 0x2;
static const Shortint msoHTMLProjectStateDocumentLocked = 0x1;
static const Shortint msoHTMLProjectStateProjectLocked = 0x2;
static const Shortint msoHTMLProjectStateDocumentProjectUnlocked = 0x3;

}	/* namespace Opofc2k */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Opofc2k;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// OpOfc2K
