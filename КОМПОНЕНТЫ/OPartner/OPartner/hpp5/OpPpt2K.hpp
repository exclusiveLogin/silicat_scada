// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'OpPpt2k.pas' rev: 5.00

#ifndef OpPpt2kHPP
#define OpPpt2kHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <OpShared.hpp>	// Pascal unit
#include <OpVBId2k.hpp>	// Pascal unit
#include <OpOfc2K.hpp>	// Pascal unit
#include <StdVCL.hpp>	// Pascal unit
#include <OleCtrls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <ActiveX.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Opppt2k
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TOpPowerPointBase;
class PASCALIMPLEMENTATION TOpPowerPointBase : public Opshared::TOpOfficeComponent 
{
	typedef Opshared::TOpOfficeComponent inherited;
	
public:
	#pragma option push -w-inl
	/* TOpOfficeComponent.Create */ inline __fastcall virtual TOpPowerPointBase(Classes::TComponent* AOwner
		) : Opshared::TOpOfficeComponent(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TOpOfficeComponent.Destroy */ inline __fastcall virtual ~TOpPowerPointBase(void) { }
	#pragma option pop
	
};


typedef Activex::TOleEnum PpWindowState;

typedef Activex::TOleEnum PpArrangeStyle;

typedef Activex::TOleEnum PpViewType;

typedef Activex::TOleEnum PpColorSchemeIndex;

typedef Activex::TOleEnum PpSlideSizeType;

typedef Activex::TOleEnum PpSaveAsFileType;

typedef Activex::TOleEnum PpTextStyleType;

typedef Activex::TOleEnum PpSlideLayout;

typedef Activex::TOleEnum PpEntryEffect;

typedef Activex::TOleEnum PpTextLevelEffect;

typedef Activex::TOleEnum PpTextUnitEffect;

typedef Activex::TOleEnum PpChartUnitEffect;

typedef Activex::TOleEnum PpAfterEffect;

typedef Activex::TOleEnum PpAdvanceMode;

typedef Activex::TOleEnum PpSoundEffectType;

typedef Activex::TOleEnum PpFollowColors;

typedef Activex::TOleEnum PpUpdateOption;

typedef Activex::TOleEnum PpParagraphAlignment;

typedef Activex::TOleEnum PpBaselineAlignment;

typedef Activex::TOleEnum PpTabStopType;

typedef Activex::TOleEnum PpIndentControl;

typedef Activex::TOleEnum PpChangeCase;

typedef Activex::TOleEnum PpDialogMode;

typedef Activex::TOleEnum PpDialogStyle;

typedef Activex::TOleEnum PpDialogPositioning;

typedef Activex::TOleEnum PpDialogFontStyle;

typedef Activex::TOleEnum PpScrollBarStyle;

typedef Activex::TOleEnum PpListBoxSelectionStyle;

typedef Activex::TOleEnum PpListBoxAbbreviationStyle;

typedef Activex::TOleEnum PpAlertType;

typedef Activex::TOleEnum PpAlertButton;

typedef Activex::TOleEnum PpAlertIcon;

typedef Activex::TOleEnum PpSlideShowPointerType;

typedef Activex::TOleEnum PpSlideShowState;

typedef Activex::TOleEnum PpSlideShowAdvanceMode;

typedef Activex::TOleEnum PpFileDialogType;

typedef Activex::TOleEnum PpFileDialogView;

typedef Activex::TOleEnum PpPrintOutputType;

typedef Activex::TOleEnum PpPrintHandoutOrder;

typedef Activex::TOleEnum PpPrintColorType;

typedef Activex::TOleEnum PpSelectionType;

typedef Activex::TOleEnum PpDirection;

typedef Activex::TOleEnum PpDateTimeFormat;

typedef Activex::TOleEnum PpTransitionSpeed;

typedef Activex::TOleEnum PpMouseActivation;

typedef Activex::TOleEnum PpActionType;

typedef Activex::TOleEnum PpPlaceholderType;

typedef Activex::TOleEnum PpSlideShowType;

typedef Activex::TOleEnum PpPrintRangeType;

typedef Activex::TOleEnum PpAutoSize;

typedef Activex::TOleEnum PpMediaType;

typedef Activex::TOleEnum PpSoundFormatType;

typedef Activex::TOleEnum PpFarEastLineBreakLevel;

typedef Activex::TOleEnum PpSlideShowRangeType;

typedef Activex::TOleEnum PpFrameColors;

typedef Activex::TOleEnum PpBorderType;

typedef Activex::TOleEnum PpHTMLVersion;

typedef Activex::TOleEnum PpPublishSourceType;

typedef Activex::TOleEnum PpBulletType;

typedef Activex::TOleEnum PpNumberedBulletStyle;

typedef Activex::TOleEnum PpMarkerType;

__interface _Slide;
typedef System::DelphiInterface<_Slide> _di__Slide;
__interface _Application;
typedef System::DelphiInterface<_Application> _di__Application;
__interface Shapes;
typedef System::DelphiInterface<Shapes> _di_Shapes;
__interface HeadersFooters;
typedef System::DelphiInterface<HeadersFooters> _di_HeadersFooters;
__interface SlideShowTransition;
typedef System::DelphiInterface<SlideShowTransition> _di_SlideShowTransition;
__interface ColorScheme;
typedef System::DelphiInterface<ColorScheme> _di_ColorScheme;
__interface ShapeRange;
typedef System::DelphiInterface<ShapeRange> _di_ShapeRange;
__interface SlideRange;
typedef System::DelphiInterface<SlideRange> _di_SlideRange;
__interface Tags;
typedef System::DelphiInterface<Tags> _di_Tags;
__interface Master;
typedef System::DelphiInterface<Master> _di_Master;
__interface Hyperlinks;
typedef System::DelphiInterface<Hyperlinks> _di_Hyperlinks;
__interface INTERFACE_UUID("{9149346A-5A91-11CF-8700-00AA0060263B}") _Slide  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Shapes(_di_Shapes &Get_Shapes_result) = 0 ;
	virtual HRESULT __safecall Get_HeadersFooters(_di_HeadersFooters &Get_HeadersFooters_result) = 0 ;
	virtual HRESULT __safecall Get_SlideShowTransition(_di_SlideShowTransition &Get_SlideShowTransition_result
		) = 0 ;
	virtual HRESULT __safecall Get_ColorScheme(_di_ColorScheme &Get_ColorScheme_result) = 0 ;
	virtual HRESULT __safecall Set_ColorScheme(const _di_ColorScheme ColorScheme) = 0 ;
	virtual HRESULT __safecall Get_Background(_di_ShapeRange &Get_Background_result) = 0 ;
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Set_Name(const WideString Name) = 0 ;
	virtual HRESULT __safecall Get_SlideID(int &Get_SlideID_result) = 0 ;
	virtual HRESULT __safecall Get_PrintSteps(int &Get_PrintSteps_result) = 0 ;
	virtual HRESULT __safecall Select(void) = 0 ;
	virtual HRESULT __safecall Cut(void) = 0 ;
	virtual HRESULT __safecall Copy(void) = 0 ;
	virtual HRESULT __safecall Get_Layout(Activex::TOleEnum &Get_Layout_result) = 0 ;
	virtual HRESULT __safecall Set_Layout(Activex::TOleEnum Layout) = 0 ;
	virtual HRESULT __safecall Duplicate(_di_SlideRange &Duplicate_result) = 0 ;
	virtual HRESULT __safecall Delete(void) = 0 ;
	virtual HRESULT __safecall Get_Tags(_di_Tags &Get_Tags_result) = 0 ;
	virtual HRESULT __safecall Get_SlideIndex(int &Get_SlideIndex_result) = 0 ;
	virtual HRESULT __safecall Get_SlideNumber(int &Get_SlideNumber_result) = 0 ;
	virtual HRESULT __safecall Get_DisplayMasterShapes(Activex::TOleEnum &Get_DisplayMasterShapes_result
		) = 0 ;
	virtual HRESULT __safecall Set_DisplayMasterShapes(Activex::TOleEnum DisplayMasterShapes) = 0 ;
	virtual HRESULT __safecall Get_FollowMasterBackground(Activex::TOleEnum &Get_FollowMasterBackground_result
		) = 0 ;
	virtual HRESULT __safecall Set_FollowMasterBackground(Activex::TOleEnum FollowMasterBackground) = 0 
		;
	virtual HRESULT __safecall Get_NotesPage(_di_SlideRange &Get_NotesPage_result) = 0 ;
	virtual HRESULT __safecall Get_Master(_di_Master &Get_Master_result) = 0 ;
	virtual HRESULT __safecall Get_Hyperlinks(_di_Hyperlinks &Get_Hyperlinks_result) = 0 ;
	virtual HRESULT __safecall Export(const WideString FileName, const WideString FilterName, int ScaleWidth
		, int ScaleHeight) = 0 ;
	virtual HRESULT __safecall Get_Scripts(Opofc2k::_di_Scripts &Get_Scripts_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Shapes _scw_Get_Shapes() { _di_Shapes r; HRESULT hr = Get_Shapes(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Shapes Shapes = {read=_scw_Get_Shapes};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_HeadersFooters _scw_Get_HeadersFooters() { _di_HeadersFooters r; HRESULT hr = Get_HeadersFooters(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_HeadersFooters HeadersFooters = {read=_scw_Get_HeadersFooters};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_SlideShowTransition _scw_Get_SlideShowTransition() { _di_SlideShowTransition r; HRESULT hr = Get_SlideShowTransition(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_SlideShowTransition SlideShowTransition = {read=_scw_Get_SlideShowTransition};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ColorScheme _scw_Get_ColorScheme() { _di_ColorScheme r; HRESULT hr = Get_ColorScheme(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ColorScheme ColorScheme = {read=_scw_Get_ColorScheme, write=Set_ColorScheme};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ShapeRange _scw_Get_Background() { _di_ShapeRange r; HRESULT hr = Get_Background(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ShapeRange Background = {read=_scw_Get_Background};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name, write=Set_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_SlideID() { int r; HRESULT hr = Get_SlideID(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int SlideID = {read=_scw_Get_SlideID};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_PrintSteps() { int r; HRESULT hr = Get_PrintSteps(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int PrintSteps = {read=_scw_Get_PrintSteps};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Layout() { Activex::TOleEnum r; HRESULT hr = Get_Layout(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Layout = {read=_scw_Get_Layout, write=Set_Layout};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Tags _scw_Get_Tags() { _di_Tags r; HRESULT hr = Get_Tags(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Tags Tags = {read=_scw_Get_Tags};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_SlideIndex() { int r; HRESULT hr = Get_SlideIndex(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int SlideIndex = {read=_scw_Get_SlideIndex};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_SlideNumber() { int r; HRESULT hr = Get_SlideNumber(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int SlideNumber = {read=_scw_Get_SlideNumber};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_DisplayMasterShapes() { Activex::TOleEnum r; HRESULT hr = Get_DisplayMasterShapes(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum DisplayMasterShapes = {read=_scw_Get_DisplayMasterShapes, write=Set_DisplayMasterShapes
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_FollowMasterBackground() { Activex::TOleEnum r; HRESULT hr = Get_FollowMasterBackground(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum FollowMasterBackground = {read=_scw_Get_FollowMasterBackground, write=
		Set_FollowMasterBackground};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_SlideRange _scw_Get_NotesPage() { _di_SlideRange r; HRESULT hr = Get_NotesPage(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_SlideRange NotesPage = {read=_scw_Get_NotesPage};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Master _scw_Get_Master() { _di_Master r; HRESULT hr = Get_Master(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Master Master = {read=_scw_Get_Master};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Hyperlinks _scw_Get_Hyperlinks() { _di_Hyperlinks r; HRESULT hr = Get_Hyperlinks(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Hyperlinks Hyperlinks = {read=_scw_Get_Hyperlinks};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Opofc2k::_di_Scripts _scw_Get_Scripts() { Opofc2k::_di_Scripts r; HRESULT hr = Get_Scripts(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Opofc2k::_di_Scripts Scripts = {read=_scw_Get_Scripts};
};
typedef _Slide Slide;

__interface _Presentation;
typedef System::DelphiInterface<_Presentation> _di__Presentation;
__interface Slides;
typedef System::DelphiInterface<Slides> _di_Slides;
__interface PageSetup;
typedef System::DelphiInterface<PageSetup> _di_PageSetup;
__interface ColorSchemes;
typedef System::DelphiInterface<ColorSchemes> _di_ColorSchemes;
__interface ExtraColors;
typedef System::DelphiInterface<ExtraColors> _di_ExtraColors;
__interface SlideShowSettings;
typedef System::DelphiInterface<SlideShowSettings> _di_SlideShowSettings;
__interface Fonts;
typedef System::DelphiInterface<Fonts> _di_Fonts;
__interface DocumentWindows;
typedef System::DelphiInterface<DocumentWindows> _di_DocumentWindows;
__interface Shape;
typedef System::DelphiInterface<Shape> _di_Shape;
__interface DocumentWindow;
typedef System::DelphiInterface<DocumentWindow> _di_DocumentWindow;
__interface PrintOptions;
typedef System::DelphiInterface<PrintOptions> _di_PrintOptions;
__interface SlideShowWindow;
typedef System::DelphiInterface<SlideShowWindow> _di_SlideShowWindow;
__interface PublishObjects;
typedef System::DelphiInterface<PublishObjects> _di_PublishObjects;
__interface WebOptions;
typedef System::DelphiInterface<WebOptions> _di_WebOptions;
__interface INTERFACE_UUID("{9149349D-5A91-11CF-8700-00AA0060263B}") _Presentation  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_SlideMaster(_di_Master &Get_SlideMaster_result) = 0 ;
	virtual HRESULT __safecall Get_TitleMaster(_di_Master &Get_TitleMaster_result) = 0 ;
	virtual HRESULT __safecall Get_HasTitleMaster(Activex::TOleEnum &Get_HasTitleMaster_result) = 0 ;
	virtual HRESULT __safecall AddTitleMaster(_di_Master &AddTitleMaster_result) = 0 ;
	virtual HRESULT __safecall ApplyTemplate(const WideString FileName) = 0 ;
	virtual HRESULT __safecall Get_TemplateName(WideString &Get_TemplateName_result) = 0 ;
	virtual HRESULT __safecall Get_NotesMaster(_di_Master &Get_NotesMaster_result) = 0 ;
	virtual HRESULT __safecall Get_HandoutMaster(_di_Master &Get_HandoutMaster_result) = 0 ;
	virtual HRESULT __safecall Get_Slides(_di_Slides &Get_Slides_result) = 0 ;
	virtual HRESULT __safecall Get_PageSetup(_di_PageSetup &Get_PageSetup_result) = 0 ;
	virtual HRESULT __safecall Get_ColorSchemes(_di_ColorSchemes &Get_ColorSchemes_result) = 0 ;
	virtual HRESULT __safecall Get_ExtraColors(_di_ExtraColors &Get_ExtraColors_result) = 0 ;
	virtual HRESULT __safecall Get_SlideShowSettings(_di_SlideShowSettings &Get_SlideShowSettings_result
		) = 0 ;
	virtual HRESULT __safecall Get_Fonts(_di_Fonts &Get_Fonts_result) = 0 ;
	virtual HRESULT __safecall Get_Windows(_di_DocumentWindows &Get_Windows_result) = 0 ;
	virtual HRESULT __safecall Get_Tags(_di_Tags &Get_Tags_result) = 0 ;
	virtual HRESULT __safecall Get_DefaultShape(_di_Shape &Get_DefaultShape_result) = 0 ;
	virtual HRESULT __safecall Get_BuiltInDocumentProperties(_di_IDispatch &Get_BuiltInDocumentProperties_result
		) = 0 ;
	virtual HRESULT __safecall Get_CustomDocumentProperties(_di_IDispatch &Get_CustomDocumentProperties_result
		) = 0 ;
	virtual HRESULT __safecall Get_VBProject(Opvbid2k::_di__VBProject &Get_VBProject_result) = 0 ;
	virtual HRESULT __safecall Get_ReadOnly(Activex::TOleEnum &Get_ReadOnly_result) = 0 ;
	virtual HRESULT __safecall Get_FullName(WideString &Get_FullName_result) = 0 ;
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Get_Path(WideString &Get_Path_result) = 0 ;
	virtual HRESULT __safecall Get_Saved(Activex::TOleEnum &Get_Saved_result) = 0 ;
	virtual HRESULT __safecall Set_Saved(Activex::TOleEnum Saved) = 0 ;
	virtual HRESULT __safecall Get_LayoutDirection(Activex::TOleEnum &Get_LayoutDirection_result) = 0 ;
		
	virtual HRESULT __safecall Set_LayoutDirection(Activex::TOleEnum LayoutDirection) = 0 ;
	virtual HRESULT __safecall NewWindow(_di_DocumentWindow &NewWindow_result) = 0 ;
	virtual HRESULT __safecall FollowHyperlink(const WideString Address, const WideString SubAddress, Word 
		NewWindow, Word AddHistory, const WideString ExtraInfo, Activex::TOleEnum Method, const WideString 
		HeaderInfo) = 0 ;
	virtual HRESULT __safecall AddToFavorites(void) = 0 ;
	virtual HRESULT __safecall Unused(void) = 0 ;
	virtual HRESULT __safecall Get_PrintOptions(_di_PrintOptions &Get_PrintOptions_result) = 0 ;
	virtual HRESULT __safecall PrintOut(int From, int To_, const WideString PrintToFile, int Copies, Activex::TOleEnum 
		Collate) = 0 ;
	virtual HRESULT __safecall Save(void) = 0 ;
	virtual HRESULT __safecall SaveAs(const WideString FileName, Activex::TOleEnum FileFormat, Activex::TOleEnum 
		EmbedTrueTypeFonts) = 0 ;
	virtual HRESULT __safecall SaveCopyAs(const WideString FileName, Activex::TOleEnum FileFormat, Activex::TOleEnum 
		EmbedTrueTypeFonts) = 0 ;
	virtual HRESULT __safecall Export(const WideString Path, const WideString FilterName, int ScaleWidth
		, int ScaleHeight) = 0 ;
	virtual HRESULT __safecall Close(void) = 0 ;
	virtual HRESULT __safecall WebPagePreview(void) = 0 ;
	virtual HRESULT __safecall SetUndoText(const WideString Text) = 0 ;
	virtual HRESULT __safecall Get_Container(_di_IDispatch &Get_Container_result) = 0 ;
	virtual HRESULT __safecall Get_DisplayComments(Activex::TOleEnum &Get_DisplayComments_result) = 0 ;
		
	virtual HRESULT __safecall Set_DisplayComments(Activex::TOleEnum DisplayComments) = 0 ;
	virtual HRESULT __safecall Get_FarEastLineBreakLanguage(Activex::TOleEnum &Get_FarEastLineBreakLanguage_result
		) = 0 ;
	virtual HRESULT __safecall Set_FarEastLineBreakLanguage(Activex::TOleEnum FarEastLineBreakLanguage)
		 = 0 ;
	virtual HRESULT __safecall Get_FarEastLineBreakLevel(Activex::TOleEnum &Get_FarEastLineBreakLevel_result
		) = 0 ;
	virtual HRESULT __safecall Set_FarEastLineBreakLevel(Activex::TOleEnum FarEastLineBreakLevel) = 0 ;
		
	virtual HRESULT __safecall Get_NoLineBreakBefore(WideString &Get_NoLineBreakBefore_result) = 0 ;
	virtual HRESULT __safecall Set_NoLineBreakBefore(const WideString NoLineBreakBefore) = 0 ;
	virtual HRESULT __safecall Get_NoLineBreakAfter(WideString &Get_NoLineBreakAfter_result) = 0 ;
	virtual HRESULT __safecall Set_NoLineBreakAfter(const WideString NoLineBreakAfter) = 0 ;
	virtual HRESULT __safecall UpdateLinks(void) = 0 ;
	virtual HRESULT __safecall Get_SlideShowWindow(_di_SlideShowWindow &Get_SlideShowWindow_result) = 0 
		;
	virtual HRESULT __safecall Get_DefaultLanguageID(Activex::TOleEnum &Get_DefaultLanguageID_result) = 0 
		;
	virtual HRESULT __safecall Set_DefaultLanguageID(Activex::TOleEnum DefaultLanguageID) = 0 ;
	virtual HRESULT __safecall Get_CommandBars(Opofc2k::_di__CommandBars &Get_CommandBars_result) = 0 ;
		
	virtual HRESULT __safecall Get_PublishObjects(_di_PublishObjects &Get_PublishObjects_result) = 0 ;
	virtual HRESULT __safecall Get_WebOptions(_di_WebOptions &Get_WebOptions_result) = 0 ;
	virtual HRESULT __safecall Get_HTMLProject(Opofc2k::_di_HTMLProject &Get_HTMLProject_result) = 0 ;
	virtual HRESULT __safecall ReloadAs(Activex::TOleEnum cp) = 0 ;
	virtual HRESULT __safecall MakeIntoTemplate(Activex::TOleEnum IsDesignTemplate) = 0 ;
	virtual HRESULT __safecall Get_EnvelopeVisible(Activex::TOleEnum &Get_EnvelopeVisible_result) = 0 ;
		
	virtual HRESULT __safecall Set_EnvelopeVisible(Activex::TOleEnum EnvelopeVisible) = 0 ;
	virtual HRESULT __safecall sblt(const WideString s) = 0 ;
	virtual HRESULT __safecall Get_VBASigned(Activex::TOleEnum &Get_VBASigned_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Master _scw_Get_SlideMaster() { _di_Master r; HRESULT hr = Get_SlideMaster(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Master SlideMaster = {read=_scw_Get_SlideMaster};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Master _scw_Get_TitleMaster() { _di_Master r; HRESULT hr = Get_TitleMaster(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Master TitleMaster = {read=_scw_Get_TitleMaster};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_HasTitleMaster() { Activex::TOleEnum r; HRESULT hr = Get_HasTitleMaster(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum HasTitleMaster = {read=_scw_Get_HasTitleMaster};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_TemplateName() { WideString r; HRESULT hr = Get_TemplateName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString TemplateName = {read=_scw_Get_TemplateName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Master _scw_Get_NotesMaster() { _di_Master r; HRESULT hr = Get_NotesMaster(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Master NotesMaster = {read=_scw_Get_NotesMaster};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Master _scw_Get_HandoutMaster() { _di_Master r; HRESULT hr = Get_HandoutMaster(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Master HandoutMaster = {read=_scw_Get_HandoutMaster};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Slides _scw_Get_Slides() { _di_Slides r; HRESULT hr = Get_Slides(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Slides Slides = {read=_scw_Get_Slides};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_PageSetup _scw_Get_PageSetup() { _di_PageSetup r; HRESULT hr = Get_PageSetup(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_PageSetup PageSetup = {read=_scw_Get_PageSetup};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ColorSchemes _scw_Get_ColorSchemes() { _di_ColorSchemes r; HRESULT hr = Get_ColorSchemes(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ColorSchemes ColorSchemes = {read=_scw_Get_ColorSchemes};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ExtraColors _scw_Get_ExtraColors() { _di_ExtraColors r; HRESULT hr = Get_ExtraColors(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ExtraColors ExtraColors = {read=_scw_Get_ExtraColors};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_SlideShowSettings _scw_Get_SlideShowSettings() { _di_SlideShowSettings r; HRESULT hr = Get_SlideShowSettings(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_SlideShowSettings SlideShowSettings = {read=_scw_Get_SlideShowSettings};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Fonts _scw_Get_Fonts() { _di_Fonts r; HRESULT hr = Get_Fonts(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Fonts Fonts = {read=_scw_Get_Fonts};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_DocumentWindows _scw_Get_Windows() { _di_DocumentWindows r; HRESULT hr = Get_Windows(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_DocumentWindows Windows = {read=_scw_Get_Windows};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Tags _scw_Get_Tags() { _di_Tags r; HRESULT hr = Get_Tags(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Tags Tags = {read=_scw_Get_Tags};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Shape _scw_Get_DefaultShape() { _di_Shape r; HRESULT hr = Get_DefaultShape(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Shape DefaultShape = {read=_scw_Get_DefaultShape};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_BuiltInDocumentProperties() { _di_IDispatch r; HRESULT hr = Get_BuiltInDocumentProperties(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch BuiltInDocumentProperties = {read=_scw_Get_BuiltInDocumentProperties};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_CustomDocumentProperties() { _di_IDispatch r; HRESULT hr = Get_CustomDocumentProperties(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch CustomDocumentProperties = {read=_scw_Get_CustomDocumentProperties};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Opvbid2k::_di__VBProject _scw_Get_VBProject() { Opvbid2k::_di__VBProject r; HRESULT hr = Get_VBProject(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Opvbid2k::_di__VBProject VBProject = {read=_scw_Get_VBProject};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ReadOnly() { Activex::TOleEnum r; HRESULT hr = Get_ReadOnly(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ReadOnly = {read=_scw_Get_ReadOnly};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_FullName() { WideString r; HRESULT hr = Get_FullName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString FullName = {read=_scw_Get_FullName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Path() { WideString r; HRESULT hr = Get_Path(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Path = {read=_scw_Get_Path};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Saved() { Activex::TOleEnum r; HRESULT hr = Get_Saved(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Saved = {read=_scw_Get_Saved, write=Set_Saved};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_LayoutDirection() { Activex::TOleEnum r; HRESULT hr = Get_LayoutDirection(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum LayoutDirection = {read=_scw_Get_LayoutDirection, write=Set_LayoutDirection
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_PrintOptions _scw_Get_PrintOptions() { _di_PrintOptions r; HRESULT hr = Get_PrintOptions(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_PrintOptions PrintOptions = {read=_scw_Get_PrintOptions};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Container() { _di_IDispatch r; HRESULT hr = Get_Container(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Container = {read=_scw_Get_Container};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_DisplayComments() { Activex::TOleEnum r; HRESULT hr = Get_DisplayComments(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum DisplayComments = {read=_scw_Get_DisplayComments, write=Set_DisplayComments
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_FarEastLineBreakLanguage() { Activex::TOleEnum r; HRESULT hr = Get_FarEastLineBreakLanguage(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum FarEastLineBreakLanguage = {read=_scw_Get_FarEastLineBreakLanguage, write=
		Set_FarEastLineBreakLanguage};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_FarEastLineBreakLevel() { Activex::TOleEnum r; HRESULT hr = Get_FarEastLineBreakLevel(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum FarEastLineBreakLevel = {read=_scw_Get_FarEastLineBreakLevel, write=Set_FarEastLineBreakLevel
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_NoLineBreakBefore() { WideString r; HRESULT hr = Get_NoLineBreakBefore(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString NoLineBreakBefore = {read=_scw_Get_NoLineBreakBefore, write=Set_NoLineBreakBefore
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_NoLineBreakAfter() { WideString r; HRESULT hr = Get_NoLineBreakAfter(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString NoLineBreakAfter = {read=_scw_Get_NoLineBreakAfter, write=Set_NoLineBreakAfter
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_SlideShowWindow _scw_Get_SlideShowWindow() { _di_SlideShowWindow r; HRESULT hr = Get_SlideShowWindow(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_SlideShowWindow SlideShowWindow = {read=_scw_Get_SlideShowWindow};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_DefaultLanguageID() { Activex::TOleEnum r; HRESULT hr = Get_DefaultLanguageID(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum DefaultLanguageID = {read=_scw_Get_DefaultLanguageID, write=Set_DefaultLanguageID
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Opofc2k::_di__CommandBars _scw_Get_CommandBars() { Opofc2k::_di__CommandBars r; HRESULT hr = Get_CommandBars(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Opofc2k::_di__CommandBars CommandBars = {read=_scw_Get_CommandBars};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_PublishObjects _scw_Get_PublishObjects() { _di_PublishObjects r; HRESULT hr = Get_PublishObjects(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_PublishObjects PublishObjects = {read=_scw_Get_PublishObjects};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_WebOptions _scw_Get_WebOptions() { _di_WebOptions r; HRESULT hr = Get_WebOptions(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_WebOptions WebOptions = {read=_scw_Get_WebOptions};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Opofc2k::_di_HTMLProject _scw_Get_HTMLProject() { Opofc2k::_di_HTMLProject r; HRESULT hr = Get_HTMLProject(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Opofc2k::_di_HTMLProject HTMLProject = {read=_scw_Get_HTMLProject};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_EnvelopeVisible() { Activex::TOleEnum r; HRESULT hr = Get_EnvelopeVisible(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum EnvelopeVisible = {read=_scw_Get_EnvelopeVisible, write=Set_EnvelopeVisible
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_VBASigned() { Activex::TOleEnum r; HRESULT hr = Get_VBASigned(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum VBASigned = {read=_scw_Get_VBASigned};
};
typedef _Presentation Presentation;

__interface OCXExtender;
typedef System::DelphiInterface<OCXExtender> _di_OCXExtender;
__interface INTERFACE_UUID("{914934BF-5A91-11CF-8700-00AA0060263B}") OCXExtender  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Visible(Word &Get_Visible_result) = 0 ;
	virtual HRESULT __safecall Set_Visible(Word Visible) = 0 ;
	virtual HRESULT __safecall Get_Left(float &Get_Left_result) = 0 ;
	virtual HRESULT __safecall Set_Left(float Left) = 0 ;
	virtual HRESULT __safecall Get_Top(float &Get_Top_result) = 0 ;
	virtual HRESULT __safecall Set_Top(float Top) = 0 ;
	virtual HRESULT __safecall Get_Height(float &Get_Height_result) = 0 ;
	virtual HRESULT __safecall Set_Height(float Height) = 0 ;
	virtual HRESULT __safecall Get_Width(float &Get_Width_result) = 0 ;
	virtual HRESULT __safecall Set_Width(float Width) = 0 ;
	virtual HRESULT __safecall Get_ZOrderPosition(int &Get_ZOrderPosition_result) = 0 ;
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Set_Name(const WideString Name) = 0 ;
	virtual HRESULT __safecall Get_AltHTML(WideString &Get_AltHTML_result) = 0 ;
	virtual HRESULT __safecall Set_AltHTML(const WideString AltHTML) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Word _scw_Get_Visible() { Word r; HRESULT hr = Get_Visible(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property Word Visible = {read=_scw_Get_Visible, write=Set_Visible};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Left() { float r; HRESULT hr = Get_Left(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Left = {read=_scw_Get_Left, write=Set_Left};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Top() { float r; HRESULT hr = Get_Top(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Top = {read=_scw_Get_Top, write=Set_Top};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Height() { float r; HRESULT hr = Get_Height(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Height = {read=_scw_Get_Height, write=Set_Height};
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
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name, write=Set_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_AltHTML() { WideString r; HRESULT hr = Get_AltHTML(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString AltHTML = {read=_scw_Get_AltHTML, write=Set_AltHTML};
};
typedef OCXExtender OLEControl;

typedef _Application Application_;
;

typedef Activex::PSafeArray *PPSafeArray1;

typedef OleVariant *POleVariant1;

typedef float *PSingle1;

__interface Collection;
typedef System::DelphiInterface<Collection> _di_Collection;
__interface INTERFACE_UUID("{91493450-5A91-11CF-8700-00AA0060263B}") Collection  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get__NewEnum(_di_IUnknown &Get__NewEnum_result) = 0 ;
	virtual HRESULT __safecall _Index(int index, OleVariant &_Index_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IUnknown _scw_Get__NewEnum() { _di_IUnknown r; HRESULT hr = Get__NewEnum(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IUnknown _NewEnum = {read=_scw_Get__NewEnum};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Count() { int r; HRESULT hr = Get_Count(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Count = {read=_scw_Get_Count};
};

__dispinterface CollectionDisp;
typedef System::DelphiInterface<CollectionDisp> _di_CollectionDisp;
__dispinterface INTERFACE_UUID("{91493450-5A91-11CF-8700-00AA0060263B}") CollectionDisp  : public IDispatch 
	
{
	
};

__dispinterface _ApplicationDisp;
typedef System::DelphiInterface<_ApplicationDisp> _di__ApplicationDisp;
__interface Presentations;
typedef System::DelphiInterface<Presentations> _di_Presentations;
__interface INTERFACE_UUID("{91493462-5A91-11CF-8700-00AA0060263B}") Presentations  : public Collection 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Item(const OleVariant index, _di__Presentation &Item_result) = 0 ;
	virtual HRESULT __safecall Add(Activex::TOleEnum WithWindow, _di__Presentation &Add_result) = 0 ;
	virtual HRESULT __safecall Open(const WideString FileName, Activex::TOleEnum ReadOnly, Activex::TOleEnum 
		Untitled, Activex::TOleEnum WithWindow, _di__Presentation &Open_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__interface PPDialogs;
typedef System::DelphiInterface<PPDialogs> _di_PPDialogs;
__interface PPDialog;
typedef System::DelphiInterface<PPDialog> _di_PPDialog;
__interface PPAlert;
typedef System::DelphiInterface<PPAlert> _di_PPAlert;
__interface INTERFACE_UUID("{9149349E-5A91-11CF-8700-00AA0060263B}") PPDialogs  : public Collection 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Item(const OleVariant index, _di_PPDialog &Item_result) = 0 ;
	virtual HRESULT __safecall AddDialog(float Left, float Top, float Width, float Height, Activex::TOleEnum 
		Modal, const _di_IUnknown ParentWindow, Activex::TOleEnum Position, Activex::TOleEnum DisplayHelp, _di_PPDialog &AddDialog_result
		) = 0 ;
	virtual HRESULT __safecall AddTabDialog(float Left, float Top, float Width, float Height, Activex::TOleEnum 
		Modal, const _di_IUnknown ParentWindow, Activex::TOleEnum Position, Activex::TOleEnum DisplayHelp, _di_PPDialog &AddTabDialog_result
		) = 0 ;
	virtual HRESULT __safecall LoadDialog(const WideString resourceDLL, int nResID, Activex::TOleEnum bModal
		, const _di_IUnknown ParentWindow, Activex::TOleEnum Position, _di_PPDialog &LoadDialog_result) = 0 
		;
	virtual HRESULT __safecall AddAlert(_di_PPAlert &AddAlert_result) = 0 ;
	virtual HRESULT __safecall Get_Tags(_di_Tags &Get_Tags_result) = 0 ;
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Set_Name(const WideString Name) = 0 ;
	virtual HRESULT __safecall RunCharacterAlert(const WideString Text, Activex::TOleEnum Type_, Activex::TOleEnum 
		icon, const _di_IUnknown ParentWindow, Activex::TOleEnum &RunCharacterAlert_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Tags _scw_Get_Tags() { _di_Tags r; HRESULT hr = Get_Tags(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Tags Tags = {read=_scw_Get_Tags};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name, write=Set_Name};
};

__interface SlideShowWindows;
typedef System::DelphiInterface<SlideShowWindows> _di_SlideShowWindows;
__interface INTERFACE_UUID("{91493456-5A91-11CF-8700-00AA0060263B}") SlideShowWindows  : public Collection 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Item(int index, _di_SlideShowWindow &Item_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__interface AddIns;
typedef System::DelphiInterface<AddIns> _di_AddIns;
__interface AddIn;
typedef System::DelphiInterface<AddIn> _di_AddIn;
__interface INTERFACE_UUID("{91493460-5A91-11CF-8700-00AA0060263B}") AddIns  : public Collection 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Item(OleVariant &index, _di_AddIn &Item_result) = 0 ;
	virtual HRESULT __safecall Add(const WideString FileName, _di_AddIn &Add_result) = 0 ;
	virtual HRESULT __safecall Remove(OleVariant &index) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__interface FileDialog;
typedef System::DelphiInterface<FileDialog> _di_FileDialog;
__interface DefaultWebOptions;
typedef System::DelphiInterface<DefaultWebOptions> _di_DefaultWebOptions;
__interface INTERFACE_UUID("{914934CC-5A91-11CF-8700-00AA0060263B}") DefaultWebOptions  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_IncludeNavigation(Activex::TOleEnum &Get_IncludeNavigation_result) = 0 
		;
	virtual HRESULT __safecall Set_IncludeNavigation(Activex::TOleEnum IncludeNavigation) = 0 ;
	virtual HRESULT __safecall Get_FrameColors(Activex::TOleEnum &Get_FrameColors_result) = 0 ;
	virtual HRESULT __safecall Set_FrameColors(Activex::TOleEnum FrameColors) = 0 ;
	virtual HRESULT __safecall Get_ResizeGraphics(Activex::TOleEnum &Get_ResizeGraphics_result) = 0 ;
	virtual HRESULT __safecall Set_ResizeGraphics(Activex::TOleEnum ResizeGraphics) = 0 ;
	virtual HRESULT __safecall Get_ShowSlideAnimation(Activex::TOleEnum &Get_ShowSlideAnimation_result)
		 = 0 ;
	virtual HRESULT __safecall Set_ShowSlideAnimation(Activex::TOleEnum ShowSlideAnimation) = 0 ;
	virtual HRESULT __safecall Get_OrganizeInFolder(Activex::TOleEnum &Get_OrganizeInFolder_result) = 0 
		;
	virtual HRESULT __safecall Set_OrganizeInFolder(Activex::TOleEnum OrganizeInFolder) = 0 ;
	virtual HRESULT __safecall Get_UseLongFileNames(Activex::TOleEnum &Get_UseLongFileNames_result) = 0 
		;
	virtual HRESULT __safecall Set_UseLongFileNames(Activex::TOleEnum UseLongFileNames) = 0 ;
	virtual HRESULT __safecall Get_RelyOnVML(Activex::TOleEnum &Get_RelyOnVML_result) = 0 ;
	virtual HRESULT __safecall Set_RelyOnVML(Activex::TOleEnum RelyOnVML) = 0 ;
	virtual HRESULT __safecall Get_AllowPNG(Activex::TOleEnum &Get_AllowPNG_result) = 0 ;
	virtual HRESULT __safecall Set_AllowPNG(Activex::TOleEnum AllowPNG) = 0 ;
	virtual HRESULT __safecall Get_ScreenSize(Activex::TOleEnum &Get_ScreenSize_result) = 0 ;
	virtual HRESULT __safecall Set_ScreenSize(Activex::TOleEnum ScreenSize) = 0 ;
	virtual HRESULT __safecall Get_Encoding(Activex::TOleEnum &Get_Encoding_result) = 0 ;
	virtual HRESULT __safecall Set_Encoding(Activex::TOleEnum Encoding) = 0 ;
	virtual HRESULT __safecall Get_UpdateLinksOnSave(Activex::TOleEnum &Get_UpdateLinksOnSave_result) = 0 
		;
	virtual HRESULT __safecall Set_UpdateLinksOnSave(Activex::TOleEnum UpdateLinksOnSave) = 0 ;
	virtual HRESULT __safecall Get_CheckIfOfficeIsHTMLEditor(Activex::TOleEnum &Get_CheckIfOfficeIsHTMLEditor_result
		) = 0 ;
	virtual HRESULT __safecall Set_CheckIfOfficeIsHTMLEditor(Activex::TOleEnum CheckIfOfficeIsHTMLEditor
		) = 0 ;
	virtual HRESULT __safecall Get_AlwaysSaveInDefaultEncoding(Activex::TOleEnum &Get_AlwaysSaveInDefaultEncoding_result
		) = 0 ;
	virtual HRESULT __safecall Set_AlwaysSaveInDefaultEncoding(Activex::TOleEnum AlwaysSaveInDefaultEncoding
		) = 0 ;
	virtual HRESULT __safecall Get_Fonts(Opofc2k::_di_WebPageFonts &Get_Fonts_result) = 0 ;
	virtual HRESULT __safecall Get_FolderSuffix(WideString &Get_FolderSuffix_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_IncludeNavigation() { Activex::TOleEnum r; HRESULT hr = Get_IncludeNavigation(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum IncludeNavigation = {read=_scw_Get_IncludeNavigation, write=Set_IncludeNavigation
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_FrameColors() { Activex::TOleEnum r; HRESULT hr = Get_FrameColors(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum FrameColors = {read=_scw_Get_FrameColors, write=Set_FrameColors};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ResizeGraphics() { Activex::TOleEnum r; HRESULT hr = Get_ResizeGraphics(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ResizeGraphics = {read=_scw_Get_ResizeGraphics, write=Set_ResizeGraphics
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ShowSlideAnimation() { Activex::TOleEnum r; HRESULT hr = Get_ShowSlideAnimation(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ShowSlideAnimation = {read=_scw_Get_ShowSlideAnimation, write=Set_ShowSlideAnimation
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_OrganizeInFolder() { Activex::TOleEnum r; HRESULT hr = Get_OrganizeInFolder(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum OrganizeInFolder = {read=_scw_Get_OrganizeInFolder, write=Set_OrganizeInFolder
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_UseLongFileNames() { Activex::TOleEnum r; HRESULT hr = Get_UseLongFileNames(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum UseLongFileNames = {read=_scw_Get_UseLongFileNames, write=Set_UseLongFileNames
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_RelyOnVML() { Activex::TOleEnum r; HRESULT hr = Get_RelyOnVML(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum RelyOnVML = {read=_scw_Get_RelyOnVML, write=Set_RelyOnVML};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_AllowPNG() { Activex::TOleEnum r; HRESULT hr = Get_AllowPNG(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum AllowPNG = {read=_scw_Get_AllowPNG, write=Set_AllowPNG};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ScreenSize() { Activex::TOleEnum r; HRESULT hr = Get_ScreenSize(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ScreenSize = {read=_scw_Get_ScreenSize, write=Set_ScreenSize};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Encoding() { Activex::TOleEnum r; HRESULT hr = Get_Encoding(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Encoding = {read=_scw_Get_Encoding, write=Set_Encoding};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_UpdateLinksOnSave() { Activex::TOleEnum r; HRESULT hr = Get_UpdateLinksOnSave(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum UpdateLinksOnSave = {read=_scw_Get_UpdateLinksOnSave, write=Set_UpdateLinksOnSave
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_CheckIfOfficeIsHTMLEditor() { Activex::TOleEnum r; HRESULT hr = Get_CheckIfOfficeIsHTMLEditor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum CheckIfOfficeIsHTMLEditor = {read=_scw_Get_CheckIfOfficeIsHTMLEditor, 
		write=Set_CheckIfOfficeIsHTMLEditor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_AlwaysSaveInDefaultEncoding() { Activex::TOleEnum r; HRESULT hr = Get_AlwaysSaveInDefaultEncoding(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum AlwaysSaveInDefaultEncoding = {read=_scw_Get_AlwaysSaveInDefaultEncoding
		, write=Set_AlwaysSaveInDefaultEncoding};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Opofc2k::_di_WebPageFonts _scw_Get_Fonts() { Opofc2k::_di_WebPageFonts r; HRESULT hr = Get_Fonts(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Opofc2k::_di_WebPageFonts Fonts = {read=_scw_Get_Fonts};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_FolderSuffix() { WideString r; HRESULT hr = Get_FolderSuffix(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString FolderSuffix = {read=_scw_Get_FolderSuffix};
};

__interface Marker;
typedef System::DelphiInterface<Marker> _di_Marker;
__interface INTERFACE_UUID("{914934D0-5A91-11CF-8700-00AA0060263B}") Marker  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_MarkerType(Activex::TOleEnum &Get_MarkerType_result) = 0 ;
	virtual HRESULT __safecall Set_MarkerType(Activex::TOleEnum MarkerType) = 0 ;
	virtual HRESULT __safecall Get_Time(int &Get_Time_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_MarkerType() { Activex::TOleEnum r; HRESULT hr = Get_MarkerType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum MarkerType = {read=_scw_Get_MarkerType, write=Set_MarkerType};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Time() { int r; HRESULT hr = Get_Time(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Time = {read=_scw_Get_Time};
};

__dispinterface INTERFACE_UUID("{91493442-5A91-11CF-8700-00AA0060263B}") _ApplicationDisp  : public IDispatch 
	
{
	
};

__interface _Global;
typedef System::DelphiInterface<_Global> _di__Global;
__interface INTERFACE_UUID("{91493451-5A91-11CF-8700-00AA0060263B}") _Global  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_ActivePresentation(_di__Presentation &Get_ActivePresentation_result)
		 = 0 ;
	virtual HRESULT __safecall Get_ActiveWindow(_di_DocumentWindow &Get_ActiveWindow_result) = 0 ;
	virtual HRESULT __safecall Get_AddIns(_di_AddIns &Get_AddIns_result) = 0 ;
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Assistant(Opofc2k::_di_Assistant &Get_Assistant_result) = 0 ;
	virtual HRESULT __safecall Get_Dialogs(_di_PPDialogs &Get_Dialogs_result) = 0 ;
	virtual HRESULT __safecall Get_Presentations(_di_Presentations &Get_Presentations_result) = 0 ;
	virtual HRESULT __safecall Get_SlideShowWindows(_di_SlideShowWindows &Get_SlideShowWindows_result) = 0 
		;
	virtual HRESULT __safecall Get_Windows(_di_DocumentWindows &Get_Windows_result) = 0 ;
	virtual HRESULT __safecall Get_CommandBars(Opofc2k::_di__CommandBars &Get_CommandBars_result) = 0 ;
		
	virtual HRESULT __safecall Get_AnswerWizard(Opofc2k::_di_AnswerWizard &Get_AnswerWizard_result) = 0 
		;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Presentation _scw_Get_ActivePresentation() { _di__Presentation r; HRESULT hr = Get_ActivePresentation(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Presentation ActivePresentation = {read=_scw_Get_ActivePresentation};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_DocumentWindow _scw_Get_ActiveWindow() { _di_DocumentWindow r; HRESULT hr = Get_ActiveWindow(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_DocumentWindow ActiveWindow = {read=_scw_Get_ActiveWindow};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_AddIns _scw_Get_AddIns() { _di_AddIns r; HRESULT hr = Get_AddIns(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_AddIns AddIns = {read=_scw_Get_AddIns};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Opofc2k::_di_Assistant _scw_Get_Assistant() { Opofc2k::_di_Assistant r; HRESULT hr = Get_Assistant(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Opofc2k::_di_Assistant Assistant = {read=_scw_Get_Assistant};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_PPDialogs _scw_Get_Dialogs() { _di_PPDialogs r; HRESULT hr = Get_Dialogs(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_PPDialogs Dialogs = {read=_scw_Get_Dialogs};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Presentations _scw_Get_Presentations() { _di_Presentations r; HRESULT hr = Get_Presentations(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Presentations Presentations = {read=_scw_Get_Presentations};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_SlideShowWindows _scw_Get_SlideShowWindows() { _di_SlideShowWindows r; HRESULT hr = Get_SlideShowWindows(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_SlideShowWindows SlideShowWindows = {read=_scw_Get_SlideShowWindows};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_DocumentWindows _scw_Get_Windows() { _di_DocumentWindows r; HRESULT hr = Get_Windows(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_DocumentWindows Windows = {read=_scw_Get_Windows};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Opofc2k::_di__CommandBars _scw_Get_CommandBars() { Opofc2k::_di__CommandBars r; HRESULT hr = Get_CommandBars(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Opofc2k::_di__CommandBars CommandBars = {read=_scw_Get_CommandBars};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Opofc2k::_di_AnswerWizard _scw_Get_AnswerWizard() { Opofc2k::_di_AnswerWizard r; HRESULT hr = Get_AnswerWizard(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Opofc2k::_di_AnswerWizard AnswerWizard = {read=_scw_Get_AnswerWizard};
};

__dispinterface _GlobalDisp;
typedef System::DelphiInterface<_GlobalDisp> _di__GlobalDisp;
__dispinterface INTERFACE_UUID("{91493451-5A91-11CF-8700-00AA0060263B}") _GlobalDisp  : public IDispatch 
	
{
	
};

__interface EApplication;
typedef System::DelphiInterface<EApplication> _di_EApplication;
__interface Selection;
typedef System::DelphiInterface<Selection> _di_Selection;
__interface INTERFACE_UUID("{914934C1-5A91-11CF-8700-00AA0060263B}") EApplication  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall WindowSelectionChange(const _di_Selection Sel) = 0 ;
	virtual HRESULT __stdcall WindowBeforeRightClick(const _di_Selection Sel, Word &Cancel) = 0 ;
	virtual HRESULT __stdcall WindowBeforeDoubleClick(const _di_Selection Sel, Word &Cancel) = 0 ;
	virtual HRESULT __stdcall PresentationClose(const _di__Presentation Pres) = 0 ;
	virtual HRESULT __stdcall PresentationSave(const _di__Presentation Pres) = 0 ;
	virtual HRESULT __stdcall PresentationOpen(const _di__Presentation Pres) = 0 ;
	virtual HRESULT __stdcall NewPresentation(const _di__Presentation Pres) = 0 ;
	virtual HRESULT __stdcall PresentationNewSlide(const _di__Slide Sld) = 0 ;
	virtual HRESULT __stdcall WindowActivate(const _di__Presentation Pres, const _di_DocumentWindow Wn)
		 = 0 ;
	virtual HRESULT __stdcall WindowDeactivate(const _di__Presentation Pres, const _di_DocumentWindow Wn
		) = 0 ;
	virtual HRESULT __stdcall SlideShowBegin(const _di_SlideShowWindow Wn) = 0 ;
	virtual HRESULT __stdcall SlideShowNextBuild(const _di_SlideShowWindow Wn) = 0 ;
	virtual HRESULT __stdcall SlideShowNextSlide(const _di_SlideShowWindow Wn) = 0 ;
	virtual HRESULT __stdcall SlideShowEnd(const _di__Presentation Pres) = 0 ;
	virtual HRESULT __stdcall PresentationPrint(const _di__Presentation Pres) = 0 ;
};

__interface ColorFormat;
typedef System::DelphiInterface<ColorFormat> _di_ColorFormat;
__interface INTERFACE_UUID("{91493452-5A91-11CF-8700-00AA0060263B}") ColorFormat  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di_IDispatch &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Creator(int &Get_Creator_result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_RGB_(int &Get_RGB__result) = 0 ;
	virtual HRESULT __safecall Set_RGB_(int RGB_) = 0 ;
	virtual HRESULT __safecall Get_Type_(Activex::TOleEnum &Get_Type__result) = 0 ;
	virtual HRESULT __safecall Get_SchemeColor(Activex::TOleEnum &Get_SchemeColor_result) = 0 ;
	virtual HRESULT __safecall Set_SchemeColor(Activex::TOleEnum SchemeColor) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Application_() { _di_IDispatch r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Creator() { int r; HRESULT hr = Get_Creator(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Creator = {read=_scw_Get_Creator};
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
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Type_() { Activex::TOleEnum r; HRESULT hr = Get_Type_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Type_ = {read=_scw_Get_Type_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_SchemeColor() { Activex::TOleEnum r; HRESULT hr = Get_SchemeColor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum SchemeColor = {read=_scw_Get_SchemeColor, write=Set_SchemeColor};
};

__dispinterface ColorFormatDisp;
typedef System::DelphiInterface<ColorFormatDisp> _di_ColorFormatDisp;
__dispinterface INTERFACE_UUID("{91493452-5A91-11CF-8700-00AA0060263B}") ColorFormatDisp  : public IDispatch 
	
{
	
};

__interface SlideShowView;
typedef System::DelphiInterface<SlideShowView> _di_SlideShowView;
__interface INTERFACE_UUID("{91493453-5A91-11CF-8700-00AA0060263B}") SlideShowWindow  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_View(_di_SlideShowView &Get_View_result) = 0 ;
	virtual HRESULT __safecall Get_Presentation(_di__Presentation &Get_Presentation_result) = 0 ;
	virtual HRESULT __safecall Get_IsFullScreen(Activex::TOleEnum &Get_IsFullScreen_result) = 0 ;
	virtual HRESULT __safecall Get_Left(float &Get_Left_result) = 0 ;
	virtual HRESULT __safecall Set_Left(float Left) = 0 ;
	virtual HRESULT __safecall Get_Top(float &Get_Top_result) = 0 ;
	virtual HRESULT __safecall Set_Top(float Top) = 0 ;
	virtual HRESULT __safecall Get_Width(float &Get_Width_result) = 0 ;
	virtual HRESULT __safecall Set_Width(float Width) = 0 ;
	virtual HRESULT __safecall Get_Height(float &Get_Height_result) = 0 ;
	virtual HRESULT __safecall Set_Height(float Height) = 0 ;
	virtual HRESULT __safecall Get_HWND(int &Get_HWND_result) = 0 ;
	virtual HRESULT __safecall Get_Active(Activex::TOleEnum &Get_Active_result) = 0 ;
	virtual HRESULT __safecall Activate(void) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_SlideShowView _scw_Get_View() { _di_SlideShowView r; HRESULT hr = Get_View(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_SlideShowView View = {read=_scw_Get_View};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Presentation _scw_Get_Presentation() { _di__Presentation r; HRESULT hr = Get_Presentation(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Presentation Presentation = {read=_scw_Get_Presentation};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_IsFullScreen() { Activex::TOleEnum r; HRESULT hr = Get_IsFullScreen(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum IsFullScreen = {read=_scw_Get_IsFullScreen};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Left() { float r; HRESULT hr = Get_Left(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Left = {read=_scw_Get_Left, write=Set_Left};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Top() { float r; HRESULT hr = Get_Top(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Top = {read=_scw_Get_Top, write=Set_Top};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Width() { float r; HRESULT hr = Get_Width(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Width = {read=_scw_Get_Width, write=Set_Width};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Height() { float r; HRESULT hr = Get_Height(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Height = {read=_scw_Get_Height, write=Set_Height};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_HWND() { int r; HRESULT hr = Get_HWND(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int HWND = {read=_scw_Get_HWND};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Active() { Activex::TOleEnum r; HRESULT hr = Get_Active(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Active = {read=_scw_Get_Active};
};

__dispinterface SlideShowWindowDisp;
typedef System::DelphiInterface<SlideShowWindowDisp> _di_SlideShowWindowDisp;
__dispinterface INTERFACE_UUID("{91493453-5A91-11CF-8700-00AA0060263B}") SlideShowWindowDisp  : public IDispatch 
	
{
	
};

__interface TextRange;
typedef System::DelphiInterface<TextRange> _di_TextRange;
__interface INTERFACE_UUID("{91493454-5A91-11CF-8700-00AA0060263B}") Selection  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Cut(void) = 0 ;
	virtual HRESULT __safecall Copy(void) = 0 ;
	virtual HRESULT __safecall Delete(void) = 0 ;
	virtual HRESULT __safecall Unselect(void) = 0 ;
	virtual HRESULT __safecall Get_Type_(Activex::TOleEnum &Get_Type__result) = 0 ;
	virtual HRESULT __safecall Get_SlideRange(_di_SlideRange &Get_SlideRange_result) = 0 ;
	virtual HRESULT __safecall Get_ShapeRange(_di_ShapeRange &Get_ShapeRange_result) = 0 ;
	virtual HRESULT __safecall Get_TextRange(_di_TextRange &Get_TextRange_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Type_() { Activex::TOleEnum r; HRESULT hr = Get_Type_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Type_ = {read=_scw_Get_Type_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_SlideRange _scw_Get_SlideRange() { _di_SlideRange r; HRESULT hr = Get_SlideRange(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_SlideRange SlideRange = {read=_scw_Get_SlideRange};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ShapeRange _scw_Get_ShapeRange() { _di_ShapeRange r; HRESULT hr = Get_ShapeRange(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ShapeRange ShapeRange = {read=_scw_Get_ShapeRange};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_TextRange _scw_Get_TextRange() { _di_TextRange r; HRESULT hr = Get_TextRange(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_TextRange TextRange = {read=_scw_Get_TextRange};
};

__dispinterface SelectionDisp;
typedef System::DelphiInterface<SelectionDisp> _di_SelectionDisp;
__dispinterface INTERFACE_UUID("{91493454-5A91-11CF-8700-00AA0060263B}") SelectionDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{91493455-5A91-11CF-8700-00AA0060263B}") DocumentWindows  : public Collection 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Item(int index, _di_DocumentWindow &Item_result) = 0 ;
	virtual HRESULT __safecall Arrange(Activex::TOleEnum arrangeStyle) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface DocumentWindowsDisp;
typedef System::DelphiInterface<DocumentWindowsDisp> _di_DocumentWindowsDisp;
__dispinterface INTERFACE_UUID("{91493455-5A91-11CF-8700-00AA0060263B}") DocumentWindowsDisp  : public IDispatch 
	
{
	
};

__dispinterface SlideShowWindowsDisp;
typedef System::DelphiInterface<SlideShowWindowsDisp> _di_SlideShowWindowsDisp;
__dispinterface INTERFACE_UUID("{91493456-5A91-11CF-8700-00AA0060263B}") SlideShowWindowsDisp  : public IDispatch 
	
{
	
};

__interface View;
typedef System::DelphiInterface<View> _di_View;
__interface Pane;
typedef System::DelphiInterface<Pane> _di_Pane;
__interface Panes;
typedef System::DelphiInterface<Panes> _di_Panes;
__interface INTERFACE_UUID("{91493457-5A91-11CF-8700-00AA0060263B}") DocumentWindow  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Selection(_di_Selection &Get_Selection_result) = 0 ;
	virtual HRESULT __safecall Get_View(_di_View &Get_View_result) = 0 ;
	virtual HRESULT __safecall Get_Presentation(_di__Presentation &Get_Presentation_result) = 0 ;
	virtual HRESULT __safecall Get_ViewType(Activex::TOleEnum &Get_ViewType_result) = 0 ;
	virtual HRESULT __safecall Set_ViewType(Activex::TOleEnum ViewType) = 0 ;
	virtual HRESULT __safecall Get_BlackAndWhite(Activex::TOleEnum &Get_BlackAndWhite_result) = 0 ;
	virtual HRESULT __safecall Set_BlackAndWhite(Activex::TOleEnum BlackAndWhite) = 0 ;
	virtual HRESULT __safecall Get_Active(Activex::TOleEnum &Get_Active_result) = 0 ;
	virtual HRESULT __safecall Get_WindowState(Activex::TOleEnum &Get_WindowState_result) = 0 ;
	virtual HRESULT __safecall Set_WindowState(Activex::TOleEnum WindowState) = 0 ;
	virtual HRESULT __safecall Get_Caption(WideString &Get_Caption_result) = 0 ;
	virtual HRESULT __safecall Get_Left(float &Get_Left_result) = 0 ;
	virtual HRESULT __safecall Set_Left(float Left) = 0 ;
	virtual HRESULT __safecall Get_Top(float &Get_Top_result) = 0 ;
	virtual HRESULT __safecall Set_Top(float Top) = 0 ;
	virtual HRESULT __safecall Get_Width(float &Get_Width_result) = 0 ;
	virtual HRESULT __safecall Set_Width(float Width) = 0 ;
	virtual HRESULT __safecall Get_Height(float &Get_Height_result) = 0 ;
	virtual HRESULT __safecall Set_Height(float Height) = 0 ;
	virtual HRESULT __safecall FitToPage(void) = 0 ;
	virtual HRESULT __safecall Activate(void) = 0 ;
	virtual HRESULT __safecall LargeScroll(int Down, int Up, int ToRight, int ToLeft) = 0 ;
	virtual HRESULT __safecall SmallScroll(int Down, int Up, int ToRight, int ToLeft) = 0 ;
	virtual HRESULT __safecall NewWindow(_di_DocumentWindow &NewWindow_result) = 0 ;
	virtual HRESULT __safecall Close(void) = 0 ;
	virtual HRESULT __safecall Get_HWND(int &Get_HWND_result) = 0 ;
	virtual HRESULT __safecall Get_ActivePane(_di_Pane &Get_ActivePane_result) = 0 ;
	virtual HRESULT __safecall Get_Panes(_di_Panes &Get_Panes_result) = 0 ;
	virtual HRESULT __safecall Get_SplitVertical(int &Get_SplitVertical_result) = 0 ;
	virtual HRESULT __safecall Set_SplitVertical(int SplitVertical) = 0 ;
	virtual HRESULT __safecall Get_SplitHorizontal(int &Get_SplitHorizontal_result) = 0 ;
	virtual HRESULT __safecall Set_SplitHorizontal(int SplitHorizontal) = 0 ;
	virtual HRESULT __safecall RangeFromPoint(int X, int Y, _di_IDispatch &RangeFromPoint_result) = 0 ;
		
	virtual HRESULT __safecall PointsToScreenPixelsX(float Points, int &PointsToScreenPixelsX_result) = 0 
		;
	virtual HRESULT __safecall PointsToScreenPixelsY(float Points, int &PointsToScreenPixelsY_result) = 0 
		;
	virtual HRESULT __safecall ScrollIntoView(float Left, float Top, float Width, float Height, Activex::TOleEnum 
		Start) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Selection _scw_Get_Selection() { _di_Selection r; HRESULT hr = Get_Selection(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Selection Selection = {read=_scw_Get_Selection};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_View _scw_Get_View() { _di_View r; HRESULT hr = Get_View(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_View View = {read=_scw_Get_View};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Presentation _scw_Get_Presentation() { _di__Presentation r; HRESULT hr = Get_Presentation(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Presentation Presentation = {read=_scw_Get_Presentation};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ViewType() { Activex::TOleEnum r; HRESULT hr = Get_ViewType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ViewType = {read=_scw_Get_ViewType, write=Set_ViewType};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_BlackAndWhite() { Activex::TOleEnum r; HRESULT hr = Get_BlackAndWhite(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum BlackAndWhite = {read=_scw_Get_BlackAndWhite, write=Set_BlackAndWhite}
		;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Active() { Activex::TOleEnum r; HRESULT hr = Get_Active(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Active = {read=_scw_Get_Active};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_WindowState() { Activex::TOleEnum r; HRESULT hr = Get_WindowState(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum WindowState = {read=_scw_Get_WindowState, write=Set_WindowState};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Caption() { WideString r; HRESULT hr = Get_Caption(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Caption = {read=_scw_Get_Caption};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Left() { float r; HRESULT hr = Get_Left(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Left = {read=_scw_Get_Left, write=Set_Left};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Top() { float r; HRESULT hr = Get_Top(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Top = {read=_scw_Get_Top, write=Set_Top};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Width() { float r; HRESULT hr = Get_Width(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Width = {read=_scw_Get_Width, write=Set_Width};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Height() { float r; HRESULT hr = Get_Height(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Height = {read=_scw_Get_Height, write=Set_Height};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_HWND() { int r; HRESULT hr = Get_HWND(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int HWND = {read=_scw_Get_HWND};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Pane _scw_Get_ActivePane() { _di_Pane r; HRESULT hr = Get_ActivePane(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Pane ActivePane = {read=_scw_Get_ActivePane};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Panes _scw_Get_Panes() { _di_Panes r; HRESULT hr = Get_Panes(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Panes Panes = {read=_scw_Get_Panes};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_SplitVertical() { int r; HRESULT hr = Get_SplitVertical(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int SplitVertical = {read=_scw_Get_SplitVertical, write=Set_SplitVertical};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_SplitHorizontal() { int r; HRESULT hr = Get_SplitHorizontal(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int SplitHorizontal = {read=_scw_Get_SplitHorizontal, write=Set_SplitHorizontal};
};

__dispinterface DocumentWindowDisp;
typedef System::DelphiInterface<DocumentWindowDisp> _di_DocumentWindowDisp;
__dispinterface INTERFACE_UUID("{91493457-5A91-11CF-8700-00AA0060263B}") DocumentWindowDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{91493458-5A91-11CF-8700-00AA0060263B}") View  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Type_(Activex::TOleEnum &Get_Type__result) = 0 ;
	virtual HRESULT __safecall Get_Zoom(int &Get_Zoom_result) = 0 ;
	virtual HRESULT __safecall Set_Zoom(int Zoom) = 0 ;
	virtual HRESULT __safecall Paste(void) = 0 ;
	virtual HRESULT __safecall Get_Slide(_di_IDispatch &Get_Slide_result) = 0 ;
	virtual HRESULT __safecall Set_Slide(const _di_IDispatch Slide) = 0 ;
	virtual HRESULT __safecall GotoSlide(int index) = 0 ;
	virtual HRESULT __safecall Get_DisplaySlideMiniature(Activex::TOleEnum &Get_DisplaySlideMiniature_result
		) = 0 ;
	virtual HRESULT __safecall Set_DisplaySlideMiniature(Activex::TOleEnum DisplaySlideMiniature) = 0 ;
		
	virtual HRESULT __safecall Get_ZoomToFit(Activex::TOleEnum &Get_ZoomToFit_result) = 0 ;
	virtual HRESULT __safecall Set_ZoomToFit(Activex::TOleEnum ZoomToFit) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Type_() { Activex::TOleEnum r; HRESULT hr = Get_Type_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Type_ = {read=_scw_Get_Type_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Zoom() { int r; HRESULT hr = Get_Zoom(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Zoom = {read=_scw_Get_Zoom, write=Set_Zoom};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Slide() { _di_IDispatch r; HRESULT hr = Get_Slide(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Slide = {read=_scw_Get_Slide, write=Set_Slide};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_DisplaySlideMiniature() { Activex::TOleEnum r; HRESULT hr = Get_DisplaySlideMiniature(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum DisplaySlideMiniature = {read=_scw_Get_DisplaySlideMiniature, write=Set_DisplaySlideMiniature
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ZoomToFit() { Activex::TOleEnum r; HRESULT hr = Get_ZoomToFit(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ZoomToFit = {read=_scw_Get_ZoomToFit, write=Set_ZoomToFit};
};

__dispinterface ViewDisp;
typedef System::DelphiInterface<ViewDisp> _di_ViewDisp;
__dispinterface INTERFACE_UUID("{91493458-5A91-11CF-8700-00AA0060263B}") ViewDisp  : public IDispatch 
	
{
	
};

__interface MouseTracker;
typedef System::DelphiInterface<MouseTracker> _di_MouseTracker;
__interface INTERFACE_UUID("{91493459-5A91-11CF-8700-00AA0060263B}") SlideShowView  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Zoom(int &Get_Zoom_result) = 0 ;
	virtual HRESULT __safecall Get_Slide(_di__Slide &Get_Slide_result) = 0 ;
	virtual HRESULT __safecall Get_PointerType(Activex::TOleEnum &Get_PointerType_result) = 0 ;
	virtual HRESULT __safecall Set_PointerType(Activex::TOleEnum PointerType) = 0 ;
	virtual HRESULT __safecall Get_State(Activex::TOleEnum &Get_State_result) = 0 ;
	virtual HRESULT __safecall Set_State(Activex::TOleEnum State) = 0 ;
	virtual HRESULT __safecall Get_AcceleratorsEnabled(Activex::TOleEnum &Get_AcceleratorsEnabled_result
		) = 0 ;
	virtual HRESULT __safecall Set_AcceleratorsEnabled(Activex::TOleEnum AcceleratorsEnabled) = 0 ;
	virtual HRESULT __safecall Get_PresentationElapsedTime(float &Get_PresentationElapsedTime_result) = 0 
		;
	virtual HRESULT __safecall Get_SlideElapsedTime(float &Get_SlideElapsedTime_result) = 0 ;
	virtual HRESULT __safecall Set_SlideElapsedTime(float SlideElapsedTime) = 0 ;
	virtual HRESULT __safecall Get_LastSlideViewed(_di__Slide &Get_LastSlideViewed_result) = 0 ;
	virtual HRESULT __safecall Get_AdvanceMode(Activex::TOleEnum &Get_AdvanceMode_result) = 0 ;
	virtual HRESULT __safecall Get_PointerColor(_di_ColorFormat &Get_PointerColor_result) = 0 ;
	virtual HRESULT __safecall Get_IsNamedShow(Activex::TOleEnum &Get_IsNamedShow_result) = 0 ;
	virtual HRESULT __safecall Get_SlideShowName(WideString &Get_SlideShowName_result) = 0 ;
	virtual HRESULT __safecall DrawLine(float BeginX, float BeginY, float EndX, float EndY) = 0 ;
	virtual HRESULT __safecall EraseDrawing(void) = 0 ;
	virtual HRESULT __safecall First(void) = 0 ;
	virtual HRESULT __safecall Last(void) = 0 ;
	virtual HRESULT __safecall Next(void) = 0 ;
	virtual HRESULT __safecall Previous(void) = 0 ;
	virtual HRESULT __safecall GotoSlide(int index, Activex::TOleEnum ResetSlide) = 0 ;
	virtual HRESULT __safecall GotoNamedShow(const WideString SlideShowName) = 0 ;
	virtual HRESULT __safecall EndNamedShow(void) = 0 ;
	virtual HRESULT __safecall ResetSlideTime(void) = 0 ;
	virtual HRESULT __safecall Exit(void) = 0 ;
	virtual HRESULT __safecall InstallTracker(const _di_MouseTracker pTracker, Activex::TOleEnum Presenter
		) = 0 ;
	virtual HRESULT __safecall Get_CurrentShowPosition(int &Get_CurrentShowPosition_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Zoom() { int r; HRESULT hr = Get_Zoom(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Zoom = {read=_scw_Get_Zoom};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Slide _scw_Get_Slide() { _di__Slide r; HRESULT hr = Get_Slide(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di__Slide Slide = {read=_scw_Get_Slide};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PointerType() { Activex::TOleEnum r; HRESULT hr = Get_PointerType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PointerType = {read=_scw_Get_PointerType, write=Set_PointerType};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_State() { Activex::TOleEnum r; HRESULT hr = Get_State(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum State = {read=_scw_Get_State, write=Set_State};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_AcceleratorsEnabled() { Activex::TOleEnum r; HRESULT hr = Get_AcceleratorsEnabled(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum AcceleratorsEnabled = {read=_scw_Get_AcceleratorsEnabled, write=Set_AcceleratorsEnabled
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_PresentationElapsedTime() { float r; HRESULT hr = Get_PresentationElapsedTime(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float PresentationElapsedTime = {read=_scw_Get_PresentationElapsedTime};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_SlideElapsedTime() { float r; HRESULT hr = Get_SlideElapsedTime(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float SlideElapsedTime = {read=_scw_Get_SlideElapsedTime, write=Set_SlideElapsedTime};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Slide _scw_Get_LastSlideViewed() { _di__Slide r; HRESULT hr = Get_LastSlideViewed(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Slide LastSlideViewed = {read=_scw_Get_LastSlideViewed};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_AdvanceMode() { Activex::TOleEnum r; HRESULT hr = Get_AdvanceMode(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum AdvanceMode = {read=_scw_Get_AdvanceMode};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ColorFormat _scw_Get_PointerColor() { _di_ColorFormat r; HRESULT hr = Get_PointerColor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ColorFormat PointerColor = {read=_scw_Get_PointerColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_IsNamedShow() { Activex::TOleEnum r; HRESULT hr = Get_IsNamedShow(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum IsNamedShow = {read=_scw_Get_IsNamedShow};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_SlideShowName() { WideString r; HRESULT hr = Get_SlideShowName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString SlideShowName = {read=_scw_Get_SlideShowName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_CurrentShowPosition() { int r; HRESULT hr = Get_CurrentShowPosition(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int CurrentShowPosition = {read=_scw_Get_CurrentShowPosition};
};

__dispinterface SlideShowViewDisp;
typedef System::DelphiInterface<SlideShowViewDisp> _di_SlideShowViewDisp;
__dispinterface INTERFACE_UUID("{91493459-5A91-11CF-8700-00AA0060263B}") SlideShowViewDisp  : public IDispatch 
	
{
	
};

__interface NamedSlideShows;
typedef System::DelphiInterface<NamedSlideShows> _di_NamedSlideShows;
__interface INTERFACE_UUID("{9149345A-5A91-11CF-8700-00AA0060263B}") SlideShowSettings  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_PointerColor(_di_ColorFormat &Get_PointerColor_result) = 0 ;
	virtual HRESULT __safecall Get_NamedSlideShows(_di_NamedSlideShows &Get_NamedSlideShows_result) = 0 
		;
	virtual HRESULT __safecall Get_StartingSlide(int &Get_StartingSlide_result) = 0 ;
	virtual HRESULT __safecall Set_StartingSlide(int StartingSlide) = 0 ;
	virtual HRESULT __safecall Get_EndingSlide(int &Get_EndingSlide_result) = 0 ;
	virtual HRESULT __safecall Set_EndingSlide(int EndingSlide) = 0 ;
	virtual HRESULT __safecall Get_AdvanceMode(Activex::TOleEnum &Get_AdvanceMode_result) = 0 ;
	virtual HRESULT __safecall Set_AdvanceMode(Activex::TOleEnum AdvanceMode) = 0 ;
	virtual HRESULT __safecall Run(_di_SlideShowWindow &Run_result) = 0 ;
	virtual HRESULT __safecall Get_LoopUntilStopped(Activex::TOleEnum &Get_LoopUntilStopped_result) = 0 
		;
	virtual HRESULT __safecall Set_LoopUntilStopped(Activex::TOleEnum LoopUntilStopped) = 0 ;
	virtual HRESULT __safecall Get_ShowType(Activex::TOleEnum &Get_ShowType_result) = 0 ;
	virtual HRESULT __safecall Set_ShowType(Activex::TOleEnum ShowType) = 0 ;
	virtual HRESULT __safecall Get_ShowWithNarration(Activex::TOleEnum &Get_ShowWithNarration_result) = 0 
		;
	virtual HRESULT __safecall Set_ShowWithNarration(Activex::TOleEnum ShowWithNarration) = 0 ;
	virtual HRESULT __safecall Get_ShowWithAnimation(Activex::TOleEnum &Get_ShowWithAnimation_result) = 0 
		;
	virtual HRESULT __safecall Set_ShowWithAnimation(Activex::TOleEnum ShowWithAnimation) = 0 ;
	virtual HRESULT __safecall Get_SlideShowName(WideString &Get_SlideShowName_result) = 0 ;
	virtual HRESULT __safecall Set_SlideShowName(const WideString SlideShowName) = 0 ;
	virtual HRESULT __safecall Get_RangeType(Activex::TOleEnum &Get_RangeType_result) = 0 ;
	virtual HRESULT __safecall Set_RangeType(Activex::TOleEnum RangeType) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ColorFormat _scw_Get_PointerColor() { _di_ColorFormat r; HRESULT hr = Get_PointerColor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ColorFormat PointerColor = {read=_scw_Get_PointerColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_NamedSlideShows _scw_Get_NamedSlideShows() { _di_NamedSlideShows r; HRESULT hr = Get_NamedSlideShows(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_NamedSlideShows NamedSlideShows = {read=_scw_Get_NamedSlideShows};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_StartingSlide() { int r; HRESULT hr = Get_StartingSlide(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int StartingSlide = {read=_scw_Get_StartingSlide, write=Set_StartingSlide};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_EndingSlide() { int r; HRESULT hr = Get_EndingSlide(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int EndingSlide = {read=_scw_Get_EndingSlide, write=Set_EndingSlide};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_AdvanceMode() { Activex::TOleEnum r; HRESULT hr = Get_AdvanceMode(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum AdvanceMode = {read=_scw_Get_AdvanceMode, write=Set_AdvanceMode};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_LoopUntilStopped() { Activex::TOleEnum r; HRESULT hr = Get_LoopUntilStopped(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum LoopUntilStopped = {read=_scw_Get_LoopUntilStopped, write=Set_LoopUntilStopped
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ShowType() { Activex::TOleEnum r; HRESULT hr = Get_ShowType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ShowType = {read=_scw_Get_ShowType, write=Set_ShowType};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ShowWithNarration() { Activex::TOleEnum r; HRESULT hr = Get_ShowWithNarration(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ShowWithNarration = {read=_scw_Get_ShowWithNarration, write=Set_ShowWithNarration
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ShowWithAnimation() { Activex::TOleEnum r; HRESULT hr = Get_ShowWithAnimation(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ShowWithAnimation = {read=_scw_Get_ShowWithAnimation, write=Set_ShowWithAnimation
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_SlideShowName() { WideString r; HRESULT hr = Get_SlideShowName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString SlideShowName = {read=_scw_Get_SlideShowName, write=Set_SlideShowName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_RangeType() { Activex::TOleEnum r; HRESULT hr = Get_RangeType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum RangeType = {read=_scw_Get_RangeType, write=Set_RangeType};
};

__dispinterface SlideShowSettingsDisp;
typedef System::DelphiInterface<SlideShowSettingsDisp> _di_SlideShowSettingsDisp;
__dispinterface INTERFACE_UUID("{9149345A-5A91-11CF-8700-00AA0060263B}") SlideShowSettingsDisp  : public IDispatch 
	
{
	
};

__interface NamedSlideShow;
typedef System::DelphiInterface<NamedSlideShow> _di_NamedSlideShow;
__interface INTERFACE_UUID("{9149345B-5A91-11CF-8700-00AA0060263B}") NamedSlideShows  : public Collection 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Item(const OleVariant index, _di_NamedSlideShow &Item_result) = 0 ;
	virtual HRESULT __safecall Add(const WideString Name, const OleVariant safeArrayOfSlideIDs, _di_NamedSlideShow &Add_result
		) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface NamedSlideShowsDisp;
typedef System::DelphiInterface<NamedSlideShowsDisp> _di_NamedSlideShowsDisp;
__dispinterface INTERFACE_UUID("{9149345B-5A91-11CF-8700-00AA0060263B}") NamedSlideShowsDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{9149345C-5A91-11CF-8700-00AA0060263B}") NamedSlideShow  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Delete(void) = 0 ;
	virtual HRESULT __safecall Get_SlideIDs(OleVariant &Get_SlideIDs_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline OleVariant _scw_Get_SlideIDs() { OleVariant r; HRESULT hr = Get_SlideIDs(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property OleVariant SlideIDs = {read=_scw_Get_SlideIDs};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Count() { int r; HRESULT hr = Get_Count(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Count = {read=_scw_Get_Count};
};

__dispinterface NamedSlideShowDisp;
typedef System::DelphiInterface<NamedSlideShowDisp> _di_NamedSlideShowDisp;
__dispinterface INTERFACE_UUID("{9149345C-5A91-11CF-8700-00AA0060263B}") NamedSlideShowDisp  : public IDispatch 
	
{
	
};

__interface PrintRanges;
typedef System::DelphiInterface<PrintRanges> _di_PrintRanges;
__interface INTERFACE_UUID("{9149345D-5A91-11CF-8700-00AA0060263B}") PrintOptions  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_PrintColorType(Activex::TOleEnum &Get_PrintColorType_result) = 0 ;
	virtual HRESULT __safecall Set_PrintColorType(Activex::TOleEnum PrintColorType) = 0 ;
	virtual HRESULT __safecall Get_Collate(Activex::TOleEnum &Get_Collate_result) = 0 ;
	virtual HRESULT __safecall Set_Collate(Activex::TOleEnum Collate) = 0 ;
	virtual HRESULT __safecall Get_FitToPage(Activex::TOleEnum &Get_FitToPage_result) = 0 ;
	virtual HRESULT __safecall Set_FitToPage(Activex::TOleEnum FitToPage) = 0 ;
	virtual HRESULT __safecall Get_FrameSlides(Activex::TOleEnum &Get_FrameSlides_result) = 0 ;
	virtual HRESULT __safecall Set_FrameSlides(Activex::TOleEnum FrameSlides) = 0 ;
	virtual HRESULT __safecall Get_NumberOfCopies(int &Get_NumberOfCopies_result) = 0 ;
	virtual HRESULT __safecall Set_NumberOfCopies(int NumberOfCopies) = 0 ;
	virtual HRESULT __safecall Get_OutputType(Activex::TOleEnum &Get_OutputType_result) = 0 ;
	virtual HRESULT __safecall Set_OutputType(Activex::TOleEnum OutputType) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_PrintHiddenSlides(Activex::TOleEnum &Get_PrintHiddenSlides_result) = 0 
		;
	virtual HRESULT __safecall Set_PrintHiddenSlides(Activex::TOleEnum PrintHiddenSlides) = 0 ;
	virtual HRESULT __safecall Get_PrintInBackground(Activex::TOleEnum &Get_PrintInBackground_result) = 0 
		;
	virtual HRESULT __safecall Set_PrintInBackground(Activex::TOleEnum PrintInBackground) = 0 ;
	virtual HRESULT __safecall Get_RangeType(Activex::TOleEnum &Get_RangeType_result) = 0 ;
	virtual HRESULT __safecall Set_RangeType(Activex::TOleEnum RangeType) = 0 ;
	virtual HRESULT __safecall Get_Ranges(_di_PrintRanges &Get_Ranges_result) = 0 ;
	virtual HRESULT __safecall Get_PrintFontsAsGraphics(Activex::TOleEnum &Get_PrintFontsAsGraphics_result
		) = 0 ;
	virtual HRESULT __safecall Set_PrintFontsAsGraphics(Activex::TOleEnum PrintFontsAsGraphics) = 0 ;
	virtual HRESULT __safecall Get_SlideShowName(WideString &Get_SlideShowName_result) = 0 ;
	virtual HRESULT __safecall Set_SlideShowName(const WideString SlideShowName) = 0 ;
	virtual HRESULT __safecall Get_ActivePrinter(WideString &Get_ActivePrinter_result) = 0 ;
	virtual HRESULT __safecall Set_ActivePrinter(const WideString ActivePrinter) = 0 ;
	virtual HRESULT __safecall Get_HandoutOrder(Activex::TOleEnum &Get_HandoutOrder_result) = 0 ;
	virtual HRESULT __safecall Set_HandoutOrder(Activex::TOleEnum HandoutOrder) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PrintColorType() { Activex::TOleEnum r; HRESULT hr = Get_PrintColorType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PrintColorType = {read=_scw_Get_PrintColorType, write=Set_PrintColorType
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Collate() { Activex::TOleEnum r; HRESULT hr = Get_Collate(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Collate = {read=_scw_Get_Collate, write=Set_Collate};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_FitToPage() { Activex::TOleEnum r; HRESULT hr = Get_FitToPage(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum FitToPage = {read=_scw_Get_FitToPage, write=Set_FitToPage};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_FrameSlides() { Activex::TOleEnum r; HRESULT hr = Get_FrameSlides(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum FrameSlides = {read=_scw_Get_FrameSlides, write=Set_FrameSlides};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_NumberOfCopies() { int r; HRESULT hr = Get_NumberOfCopies(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int NumberOfCopies = {read=_scw_Get_NumberOfCopies, write=Set_NumberOfCopies};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_OutputType() { Activex::TOleEnum r; HRESULT hr = Get_OutputType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum OutputType = {read=_scw_Get_OutputType, write=Set_OutputType};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PrintHiddenSlides() { Activex::TOleEnum r; HRESULT hr = Get_PrintHiddenSlides(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PrintHiddenSlides = {read=_scw_Get_PrintHiddenSlides, write=Set_PrintHiddenSlides
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PrintInBackground() { Activex::TOleEnum r; HRESULT hr = Get_PrintInBackground(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PrintInBackground = {read=_scw_Get_PrintInBackground, write=Set_PrintInBackground
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_RangeType() { Activex::TOleEnum r; HRESULT hr = Get_RangeType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum RangeType = {read=_scw_Get_RangeType, write=Set_RangeType};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_PrintRanges _scw_Get_Ranges() { _di_PrintRanges r; HRESULT hr = Get_Ranges(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_PrintRanges Ranges = {read=_scw_Get_Ranges};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PrintFontsAsGraphics() { Activex::TOleEnum r; HRESULT hr = Get_PrintFontsAsGraphics(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PrintFontsAsGraphics = {read=_scw_Get_PrintFontsAsGraphics, write=Set_PrintFontsAsGraphics
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_SlideShowName() { WideString r; HRESULT hr = Get_SlideShowName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString SlideShowName = {read=_scw_Get_SlideShowName, write=Set_SlideShowName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_ActivePrinter() { WideString r; HRESULT hr = Get_ActivePrinter(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString ActivePrinter = {read=_scw_Get_ActivePrinter, write=Set_ActivePrinter};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_HandoutOrder() { Activex::TOleEnum r; HRESULT hr = Get_HandoutOrder(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum HandoutOrder = {read=_scw_Get_HandoutOrder, write=Set_HandoutOrder};
};

__dispinterface PrintOptionsDisp;
typedef System::DelphiInterface<PrintOptionsDisp> _di_PrintOptionsDisp;
__dispinterface INTERFACE_UUID("{9149345D-5A91-11CF-8700-00AA0060263B}") PrintOptionsDisp  : public IDispatch 
	
{
	
};

__interface PrintRange;
typedef System::DelphiInterface<PrintRange> _di_PrintRange;
__interface INTERFACE_UUID("{9149345E-5A91-11CF-8700-00AA0060263B}") PrintRanges  : public Collection 
	
{
	
public:
	virtual HRESULT __safecall Add(int Start, int End_, _di_PrintRange &Add_result) = 0 ;
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall ClearAll(void) = 0 ;
	virtual HRESULT __safecall Item(int index, _di_PrintRange &Item_result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface PrintRangesDisp;
typedef System::DelphiInterface<PrintRangesDisp> _di_PrintRangesDisp;
__dispinterface INTERFACE_UUID("{9149345E-5A91-11CF-8700-00AA0060263B}") PrintRangesDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{9149345F-5A91-11CF-8700-00AA0060263B}") PrintRange  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Start(int &Get_Start_result) = 0 ;
	virtual HRESULT __safecall Get_End_(int &Get_End__result) = 0 ;
	virtual HRESULT __safecall Delete(void) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Start() { int r; HRESULT hr = Get_Start(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Start = {read=_scw_Get_Start};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_End_() { int r; HRESULT hr = Get_End_(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int End_ = {read=_scw_Get_End_};
};

__dispinterface PrintRangeDisp;
typedef System::DelphiInterface<PrintRangeDisp> _di_PrintRangeDisp;
__dispinterface INTERFACE_UUID("{9149345F-5A91-11CF-8700-00AA0060263B}") PrintRangeDisp  : public IDispatch 
	
{
	
};

__dispinterface AddInsDisp;
typedef System::DelphiInterface<AddInsDisp> _di_AddInsDisp;
__dispinterface INTERFACE_UUID("{91493460-5A91-11CF-8700-00AA0060263B}") AddInsDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{91493461-5A91-11CF-8700-00AA0060263B}") AddIn  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_FullName(WideString &Get_FullName_result) = 0 ;
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Get_Path(WideString &Get_Path_result) = 0 ;
	virtual HRESULT __safecall Get_Registered(Activex::TOleEnum &Get_Registered_result) = 0 ;
	virtual HRESULT __safecall Set_Registered(Activex::TOleEnum Registered) = 0 ;
	virtual HRESULT __safecall Get_AutoLoad(Activex::TOleEnum &Get_AutoLoad_result) = 0 ;
	virtual HRESULT __safecall Set_AutoLoad(Activex::TOleEnum AutoLoad) = 0 ;
	virtual HRESULT __safecall Get_Loaded(Activex::TOleEnum &Get_Loaded_result) = 0 ;
	virtual HRESULT __safecall Set_Loaded(Activex::TOleEnum Loaded) = 0 ;
	virtual HRESULT __safecall Get_DisplayAlerts(Activex::TOleEnum &Get_DisplayAlerts_result) = 0 ;
	virtual HRESULT __safecall Set_DisplayAlerts(Activex::TOleEnum DisplayAlerts) = 0 ;
	virtual HRESULT __safecall Get_RegisteredInHKLM(Activex::TOleEnum &Get_RegisteredInHKLM_result) = 0 
		;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_FullName() { WideString r; HRESULT hr = Get_FullName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString FullName = {read=_scw_Get_FullName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Path() { WideString r; HRESULT hr = Get_Path(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Path = {read=_scw_Get_Path};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Registered() { Activex::TOleEnum r; HRESULT hr = Get_Registered(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Registered = {read=_scw_Get_Registered, write=Set_Registered};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_AutoLoad() { Activex::TOleEnum r; HRESULT hr = Get_AutoLoad(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum AutoLoad = {read=_scw_Get_AutoLoad, write=Set_AutoLoad};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Loaded() { Activex::TOleEnum r; HRESULT hr = Get_Loaded(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Loaded = {read=_scw_Get_Loaded, write=Set_Loaded};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_DisplayAlerts() { Activex::TOleEnum r; HRESULT hr = Get_DisplayAlerts(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum DisplayAlerts = {read=_scw_Get_DisplayAlerts, write=Set_DisplayAlerts}
		;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_RegisteredInHKLM() { Activex::TOleEnum r; HRESULT hr = Get_RegisteredInHKLM(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum RegisteredInHKLM = {read=_scw_Get_RegisteredInHKLM};
};

__dispinterface AddInDisp;
typedef System::DelphiInterface<AddInDisp> _di_AddInDisp;
__dispinterface INTERFACE_UUID("{91493461-5A91-11CF-8700-00AA0060263B}") AddInDisp  : public IDispatch 
	
{
	
};

__dispinterface PresentationsDisp;
typedef System::DelphiInterface<PresentationsDisp> _di_PresentationsDisp;
__dispinterface INTERFACE_UUID("{91493462-5A91-11CF-8700-00AA0060263B}") PresentationsDisp  : public IDispatch 
	
{
	
};

__interface PresEvents;
typedef System::DelphiInterface<PresEvents> _di_PresEvents;
__interface INTERFACE_UUID("{91493463-5A91-11CF-8700-00AA0060263B}") PresEvents  : public IUnknown 
{
	
};

__dispinterface _PresentationDisp;
typedef System::DelphiInterface<_PresentationDisp> _di__PresentationDisp;
__dispinterface INTERFACE_UUID("{9149349D-5A91-11CF-8700-00AA0060263B}") _PresentationDisp  : public IDispatch 
	
{
	
};

__interface Hyperlink;
typedef System::DelphiInterface<Hyperlink> _di_Hyperlink;
__interface INTERFACE_UUID("{91493464-5A91-11CF-8700-00AA0060263B}") Hyperlinks  : public Collection 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Item(int index, _di_Hyperlink &Item_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface HyperlinksDisp;
typedef System::DelphiInterface<HyperlinksDisp> _di_HyperlinksDisp;
__dispinterface INTERFACE_UUID("{91493464-5A91-11CF-8700-00AA0060263B}") HyperlinksDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{91493465-5A91-11CF-8700-00AA0060263B}") Hyperlink  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Type_(Activex::TOleEnum &Get_Type__result) = 0 ;
	virtual HRESULT __safecall Get_Address(WideString &Get_Address_result) = 0 ;
	virtual HRESULT __safecall Set_Address(const WideString Address) = 0 ;
	virtual HRESULT __safecall Get_SubAddress(WideString &Get_SubAddress_result) = 0 ;
	virtual HRESULT __safecall Set_SubAddress(const WideString SubAddress) = 0 ;
	virtual HRESULT __safecall AddToFavorites(void) = 0 ;
	virtual HRESULT __safecall Get_EmailSubject(WideString &Get_EmailSubject_result) = 0 ;
	virtual HRESULT __safecall Set_EmailSubject(const WideString EmailSubject) = 0 ;
	virtual HRESULT __safecall Get_ScreenTip(WideString &Get_ScreenTip_result) = 0 ;
	virtual HRESULT __safecall Set_ScreenTip(const WideString ScreenTip) = 0 ;
	virtual HRESULT __safecall Get_TextToDisplay(WideString &Get_TextToDisplay_result) = 0 ;
	virtual HRESULT __safecall Set_TextToDisplay(const WideString TextToDisplay) = 0 ;
	virtual HRESULT __safecall Get_ShowandReturn(Activex::TOleEnum &Get_ShowandReturn_result) = 0 ;
	virtual HRESULT __safecall Set_ShowandReturn(Activex::TOleEnum ShowandReturn) = 0 ;
	virtual HRESULT __safecall Follow(void) = 0 ;
	virtual HRESULT __safecall CreateNewDocument(const WideString FileName, Activex::TOleEnum EditNow, 
		Activex::TOleEnum Overwrite) = 0 ;
	virtual HRESULT __safecall Delete(void) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Type_() { Activex::TOleEnum r; HRESULT hr = Get_Type_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Type_ = {read=_scw_Get_Type_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Address() { WideString r; HRESULT hr = Get_Address(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Address = {read=_scw_Get_Address, write=Set_Address};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_SubAddress() { WideString r; HRESULT hr = Get_SubAddress(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString SubAddress = {read=_scw_Get_SubAddress, write=Set_SubAddress};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_EmailSubject() { WideString r; HRESULT hr = Get_EmailSubject(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString EmailSubject = {read=_scw_Get_EmailSubject, write=Set_EmailSubject};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_ScreenTip() { WideString r; HRESULT hr = Get_ScreenTip(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString ScreenTip = {read=_scw_Get_ScreenTip, write=Set_ScreenTip};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_TextToDisplay() { WideString r; HRESULT hr = Get_TextToDisplay(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString TextToDisplay = {read=_scw_Get_TextToDisplay, write=Set_TextToDisplay};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ShowandReturn() { Activex::TOleEnum r; HRESULT hr = Get_ShowandReturn(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ShowandReturn = {read=_scw_Get_ShowandReturn, write=Set_ShowandReturn}
		;
};

__dispinterface HyperlinkDisp;
typedef System::DelphiInterface<HyperlinkDisp> _di_HyperlinkDisp;
__dispinterface INTERFACE_UUID("{91493465-5A91-11CF-8700-00AA0060263B}") HyperlinkDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{91493466-5A91-11CF-8700-00AA0060263B}") PageSetup  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_FirstSlideNumber(int &Get_FirstSlideNumber_result) = 0 ;
	virtual HRESULT __safecall Set_FirstSlideNumber(int FirstSlideNumber) = 0 ;
	virtual HRESULT __safecall Get_SlideHeight(float &Get_SlideHeight_result) = 0 ;
	virtual HRESULT __safecall Set_SlideHeight(float SlideHeight) = 0 ;
	virtual HRESULT __safecall Get_SlideWidth(float &Get_SlideWidth_result) = 0 ;
	virtual HRESULT __safecall Set_SlideWidth(float SlideWidth) = 0 ;
	virtual HRESULT __safecall Get_SlideSize(Activex::TOleEnum &Get_SlideSize_result) = 0 ;
	virtual HRESULT __safecall Set_SlideSize(Activex::TOleEnum SlideSize) = 0 ;
	virtual HRESULT __safecall Get_NotesOrientation(Activex::TOleEnum &Get_NotesOrientation_result) = 0 
		;
	virtual HRESULT __safecall Set_NotesOrientation(Activex::TOleEnum NotesOrientation) = 0 ;
	virtual HRESULT __safecall Get_SlideOrientation(Activex::TOleEnum &Get_SlideOrientation_result) = 0 
		;
	virtual HRESULT __safecall Set_SlideOrientation(Activex::TOleEnum SlideOrientation) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_FirstSlideNumber() { int r; HRESULT hr = Get_FirstSlideNumber(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int FirstSlideNumber = {read=_scw_Get_FirstSlideNumber, write=Set_FirstSlideNumber};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_SlideHeight() { float r; HRESULT hr = Get_SlideHeight(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float SlideHeight = {read=_scw_Get_SlideHeight, write=Set_SlideHeight};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_SlideWidth() { float r; HRESULT hr = Get_SlideWidth(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float SlideWidth = {read=_scw_Get_SlideWidth, write=Set_SlideWidth};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_SlideSize() { Activex::TOleEnum r; HRESULT hr = Get_SlideSize(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum SlideSize = {read=_scw_Get_SlideSize, write=Set_SlideSize};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_NotesOrientation() { Activex::TOleEnum r; HRESULT hr = Get_NotesOrientation(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum NotesOrientation = {read=_scw_Get_NotesOrientation, write=Set_NotesOrientation
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_SlideOrientation() { Activex::TOleEnum r; HRESULT hr = Get_SlideOrientation(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum SlideOrientation = {read=_scw_Get_SlideOrientation, write=Set_SlideOrientation
		};
};

__dispinterface PageSetupDisp;
typedef System::DelphiInterface<PageSetupDisp> _di_PageSetupDisp;
__dispinterface INTERFACE_UUID("{91493466-5A91-11CF-8700-00AA0060263B}") PageSetupDisp  : public IDispatch 
	
{
	
};

__interface Font;
typedef System::DelphiInterface<Font> _di_Font;
__interface INTERFACE_UUID("{91493467-5A91-11CF-8700-00AA0060263B}") Fonts  : public Collection 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Item(const OleVariant index, _di_Font &Item_result) = 0 ;
	virtual HRESULT __safecall Replace(const WideString Original, const WideString Replacement) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface FontsDisp;
typedef System::DelphiInterface<FontsDisp> _di_FontsDisp;
__dispinterface INTERFACE_UUID("{91493467-5A91-11CF-8700-00AA0060263B}") FontsDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{91493468-5A91-11CF-8700-00AA0060263B}") ExtraColors  : public Collection 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Item(int index, int &Item_result) = 0 ;
	virtual HRESULT __safecall Add(int Type_) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface ExtraColorsDisp;
typedef System::DelphiInterface<ExtraColorsDisp> _di_ExtraColorsDisp;
__dispinterface INTERFACE_UUID("{91493468-5A91-11CF-8700-00AA0060263B}") ExtraColorsDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{91493469-5A91-11CF-8700-00AA0060263B}") Slides  : public Collection 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Item(const OleVariant index, _di__Slide &Item_result) = 0 ;
	virtual HRESULT __safecall FindBySlideID(int SlideID, _di__Slide &FindBySlideID_result) = 0 ;
	virtual HRESULT __safecall Add(int index, Activex::TOleEnum Layout, _di__Slide &Add_result) = 0 ;
	virtual HRESULT __safecall InsertFromFile(const WideString FileName, int index, int SlideStart, int 
		SlideEnd, int &InsertFromFile_result) = 0 ;
	virtual HRESULT __safecall Range(const OleVariant index, _di_SlideRange &Range_result) = 0 ;
	virtual HRESULT __safecall Paste(int index, _di_SlideRange &Paste_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface SlidesDisp;
typedef System::DelphiInterface<SlidesDisp> _di_SlidesDisp;
__dispinterface INTERFACE_UUID("{91493469-5A91-11CF-8700-00AA0060263B}") SlidesDisp  : public IDispatch 
	
{
	
};

__dispinterface _SlideDisp;
typedef System::DelphiInterface<_SlideDisp> _di__SlideDisp;
__dispinterface INTERFACE_UUID("{9149346A-5A91-11CF-8700-00AA0060263B}") _SlideDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{9149346B-5A91-11CF-8700-00AA0060263B}") SlideRange  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Shapes(_di_Shapes &Get_Shapes_result) = 0 ;
	virtual HRESULT __safecall Get_HeadersFooters(_di_HeadersFooters &Get_HeadersFooters_result) = 0 ;
	virtual HRESULT __safecall Get_SlideShowTransition(_di_SlideShowTransition &Get_SlideShowTransition_result
		) = 0 ;
	virtual HRESULT __safecall Get_ColorScheme(_di_ColorScheme &Get_ColorScheme_result) = 0 ;
	virtual HRESULT __safecall Set_ColorScheme(const _di_ColorScheme ColorScheme) = 0 ;
	virtual HRESULT __safecall Get_Background(_di_ShapeRange &Get_Background_result) = 0 ;
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Set_Name(const WideString Name) = 0 ;
	virtual HRESULT __safecall Get_SlideID(int &Get_SlideID_result) = 0 ;
	virtual HRESULT __safecall Get_PrintSteps(int &Get_PrintSteps_result) = 0 ;
	virtual HRESULT __safecall Select(void) = 0 ;
	virtual HRESULT __safecall Cut(void) = 0 ;
	virtual HRESULT __safecall Copy(void) = 0 ;
	virtual HRESULT __safecall Get_Layout(Activex::TOleEnum &Get_Layout_result) = 0 ;
	virtual HRESULT __safecall Set_Layout(Activex::TOleEnum Layout) = 0 ;
	virtual HRESULT __safecall Duplicate(_di_SlideRange &Duplicate_result) = 0 ;
	virtual HRESULT __safecall Delete(void) = 0 ;
	virtual HRESULT __safecall Get_Tags(_di_Tags &Get_Tags_result) = 0 ;
	virtual HRESULT __safecall Get_SlideIndex(int &Get_SlideIndex_result) = 0 ;
	virtual HRESULT __safecall Get_SlideNumber(int &Get_SlideNumber_result) = 0 ;
	virtual HRESULT __safecall Get_DisplayMasterShapes(Activex::TOleEnum &Get_DisplayMasterShapes_result
		) = 0 ;
	virtual HRESULT __safecall Set_DisplayMasterShapes(Activex::TOleEnum DisplayMasterShapes) = 0 ;
	virtual HRESULT __safecall Get_FollowMasterBackground(Activex::TOleEnum &Get_FollowMasterBackground_result
		) = 0 ;
	virtual HRESULT __safecall Set_FollowMasterBackground(Activex::TOleEnum FollowMasterBackground) = 0 
		;
	virtual HRESULT __safecall Get_NotesPage(_di_SlideRange &Get_NotesPage_result) = 0 ;
	virtual HRESULT __safecall Get_Master(_di_Master &Get_Master_result) = 0 ;
	virtual HRESULT __safecall Get_Hyperlinks(_di_Hyperlinks &Get_Hyperlinks_result) = 0 ;
	virtual HRESULT __safecall Export(const WideString FileName, const WideString FilterName, int ScaleWidth
		, int ScaleHeight) = 0 ;
	virtual HRESULT __safecall Item(const OleVariant index, _di__Slide &Item_result) = 0 ;
	virtual HRESULT __safecall Get__NewEnum(_di_IUnknown &Get__NewEnum_result) = 0 ;
	virtual HRESULT __safecall _Index(int index, OleVariant &_Index_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Get_Scripts(Opofc2k::_di_Scripts &Get_Scripts_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Shapes _scw_Get_Shapes() { _di_Shapes r; HRESULT hr = Get_Shapes(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Shapes Shapes = {read=_scw_Get_Shapes};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_HeadersFooters _scw_Get_HeadersFooters() { _di_HeadersFooters r; HRESULT hr = Get_HeadersFooters(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_HeadersFooters HeadersFooters = {read=_scw_Get_HeadersFooters};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_SlideShowTransition _scw_Get_SlideShowTransition() { _di_SlideShowTransition r; HRESULT hr = Get_SlideShowTransition(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_SlideShowTransition SlideShowTransition = {read=_scw_Get_SlideShowTransition};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ColorScheme _scw_Get_ColorScheme() { _di_ColorScheme r; HRESULT hr = Get_ColorScheme(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ColorScheme ColorScheme = {read=_scw_Get_ColorScheme, write=Set_ColorScheme};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ShapeRange _scw_Get_Background() { _di_ShapeRange r; HRESULT hr = Get_Background(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ShapeRange Background = {read=_scw_Get_Background};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name, write=Set_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_SlideID() { int r; HRESULT hr = Get_SlideID(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int SlideID = {read=_scw_Get_SlideID};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_PrintSteps() { int r; HRESULT hr = Get_PrintSteps(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int PrintSteps = {read=_scw_Get_PrintSteps};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Layout() { Activex::TOleEnum r; HRESULT hr = Get_Layout(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Layout = {read=_scw_Get_Layout, write=Set_Layout};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Tags _scw_Get_Tags() { _di_Tags r; HRESULT hr = Get_Tags(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Tags Tags = {read=_scw_Get_Tags};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_SlideIndex() { int r; HRESULT hr = Get_SlideIndex(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int SlideIndex = {read=_scw_Get_SlideIndex};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_SlideNumber() { int r; HRESULT hr = Get_SlideNumber(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int SlideNumber = {read=_scw_Get_SlideNumber};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_DisplayMasterShapes() { Activex::TOleEnum r; HRESULT hr = Get_DisplayMasterShapes(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum DisplayMasterShapes = {read=_scw_Get_DisplayMasterShapes, write=Set_DisplayMasterShapes
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_FollowMasterBackground() { Activex::TOleEnum r; HRESULT hr = Get_FollowMasterBackground(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum FollowMasterBackground = {read=_scw_Get_FollowMasterBackground, write=
		Set_FollowMasterBackground};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_SlideRange _scw_Get_NotesPage() { _di_SlideRange r; HRESULT hr = Get_NotesPage(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_SlideRange NotesPage = {read=_scw_Get_NotesPage};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Master _scw_Get_Master() { _di_Master r; HRESULT hr = Get_Master(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Master Master = {read=_scw_Get_Master};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Hyperlinks _scw_Get_Hyperlinks() { _di_Hyperlinks r; HRESULT hr = Get_Hyperlinks(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Hyperlinks Hyperlinks = {read=_scw_Get_Hyperlinks};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IUnknown _scw_Get__NewEnum() { _di_IUnknown r; HRESULT hr = Get__NewEnum(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IUnknown _NewEnum = {read=_scw_Get__NewEnum};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Count() { int r; HRESULT hr = Get_Count(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Count = {read=_scw_Get_Count};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Opofc2k::_di_Scripts _scw_Get_Scripts() { Opofc2k::_di_Scripts r; HRESULT hr = Get_Scripts(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Opofc2k::_di_Scripts Scripts = {read=_scw_Get_Scripts};
};

__dispinterface SlideRangeDisp;
typedef System::DelphiInterface<SlideRangeDisp> _di_SlideRangeDisp;
__dispinterface INTERFACE_UUID("{9149346B-5A91-11CF-8700-00AA0060263B}") SlideRangeDisp  : public IDispatch 
	
{
	
};

__interface TextStyles;
typedef System::DelphiInterface<TextStyles> _di_TextStyles;
__interface INTERFACE_UUID("{9149346C-5A91-11CF-8700-00AA0060263B}") Master  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Shapes(_di_Shapes &Get_Shapes_result) = 0 ;
	virtual HRESULT __safecall Get_HeadersFooters(_di_HeadersFooters &Get_HeadersFooters_result) = 0 ;
	virtual HRESULT __safecall Get_ColorScheme(_di_ColorScheme &Get_ColorScheme_result) = 0 ;
	virtual HRESULT __safecall Set_ColorScheme(const _di_ColorScheme ColorScheme) = 0 ;
	virtual HRESULT __safecall Get_Background(_di_ShapeRange &Get_Background_result) = 0 ;
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Set_Name(const WideString Name) = 0 ;
	virtual HRESULT __safecall Delete(void) = 0 ;
	virtual HRESULT __safecall Get_Height(float &Get_Height_result) = 0 ;
	virtual HRESULT __safecall Get_Width(float &Get_Width_result) = 0 ;
	virtual HRESULT __safecall Get_TextStyles(_di_TextStyles &Get_TextStyles_result) = 0 ;
	virtual HRESULT __safecall Get_Hyperlinks(_di_Hyperlinks &Get_Hyperlinks_result) = 0 ;
	virtual HRESULT __safecall Get_Scripts(Opofc2k::_di_Scripts &Get_Scripts_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Shapes _scw_Get_Shapes() { _di_Shapes r; HRESULT hr = Get_Shapes(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Shapes Shapes = {read=_scw_Get_Shapes};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_HeadersFooters _scw_Get_HeadersFooters() { _di_HeadersFooters r; HRESULT hr = Get_HeadersFooters(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_HeadersFooters HeadersFooters = {read=_scw_Get_HeadersFooters};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ColorScheme _scw_Get_ColorScheme() { _di_ColorScheme r; HRESULT hr = Get_ColorScheme(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ColorScheme ColorScheme = {read=_scw_Get_ColorScheme, write=Set_ColorScheme};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ShapeRange _scw_Get_Background() { _di_ShapeRange r; HRESULT hr = Get_Background(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ShapeRange Background = {read=_scw_Get_Background};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name, write=Set_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Height() { float r; HRESULT hr = Get_Height(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Height = {read=_scw_Get_Height};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Width() { float r; HRESULT hr = Get_Width(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Width = {read=_scw_Get_Width};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_TextStyles _scw_Get_TextStyles() { _di_TextStyles r; HRESULT hr = Get_TextStyles(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_TextStyles TextStyles = {read=_scw_Get_TextStyles};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Hyperlinks _scw_Get_Hyperlinks() { _di_Hyperlinks r; HRESULT hr = Get_Hyperlinks(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Hyperlinks Hyperlinks = {read=_scw_Get_Hyperlinks};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Opofc2k::_di_Scripts _scw_Get_Scripts() { Opofc2k::_di_Scripts r; HRESULT hr = Get_Scripts(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Opofc2k::_di_Scripts Scripts = {read=_scw_Get_Scripts};
};

__dispinterface MasterDisp;
typedef System::DelphiInterface<MasterDisp> _di_MasterDisp;
__dispinterface INTERFACE_UUID("{9149346C-5A91-11CF-8700-00AA0060263B}") MasterDisp  : public IDispatch 
	
{
	
};

__interface SldEvents;
typedef System::DelphiInterface<SldEvents> _di_SldEvents;
__interface INTERFACE_UUID("{9149346D-5A91-11CF-8700-00AA0060263B}") SldEvents  : public IUnknown 
{
	
};

__interface INTERFACE_UUID("{9149346E-5A91-11CF-8700-00AA0060263B}") ColorSchemes  : public Collection 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Item(int index, _di_ColorScheme &Item_result) = 0 ;
	virtual HRESULT __safecall Add(const _di_ColorScheme Scheme, _di_ColorScheme &Add_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface ColorSchemesDisp;
typedef System::DelphiInterface<ColorSchemesDisp> _di_ColorSchemesDisp;
__dispinterface INTERFACE_UUID("{9149346E-5A91-11CF-8700-00AA0060263B}") ColorSchemesDisp  : public IDispatch 
	
{
	
};

__interface RGBColor;
typedef System::DelphiInterface<RGBColor> _di_RGBColor;
__interface INTERFACE_UUID("{9149346F-5A91-11CF-8700-00AA0060263B}") ColorScheme  : public Collection 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Colors(Activex::TOleEnum SchemeColor, _di_RGBColor &Colors_result) = 0 ;
		
	virtual HRESULT __safecall Delete(void) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface ColorSchemeDisp;
typedef System::DelphiInterface<ColorSchemeDisp> _di_ColorSchemeDisp;
__dispinterface INTERFACE_UUID("{9149346F-5A91-11CF-8700-00AA0060263B}") ColorSchemeDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{91493470-5A91-11CF-8700-00AA0060263B}") RGBColor  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_RGB_(int &Get_RGB__result) = 0 ;
	virtual HRESULT __safecall Set_RGB_(int RGB_) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_RGB_() { int r; HRESULT hr = Get_RGB_(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int RGB_ = {read=_scw_Get_RGB_, write=Set_RGB_};
};

__dispinterface RGBColorDisp;
typedef System::DelphiInterface<RGBColorDisp> _di_RGBColorDisp;
__dispinterface INTERFACE_UUID("{91493470-5A91-11CF-8700-00AA0060263B}") RGBColorDisp  : public IDispatch 
	
{
	
};

__interface SoundEffect;
typedef System::DelphiInterface<SoundEffect> _di_SoundEffect;
__interface INTERFACE_UUID("{91493471-5A91-11CF-8700-00AA0060263B}") SlideShowTransition  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_AdvanceOnClick(Activex::TOleEnum &Get_AdvanceOnClick_result) = 0 ;
	virtual HRESULT __safecall Set_AdvanceOnClick(Activex::TOleEnum AdvanceOnClick) = 0 ;
	virtual HRESULT __safecall Get_AdvanceOnTime(Activex::TOleEnum &Get_AdvanceOnTime_result) = 0 ;
	virtual HRESULT __safecall Set_AdvanceOnTime(Activex::TOleEnum AdvanceOnTime) = 0 ;
	virtual HRESULT __safecall Get_AdvanceTime(float &Get_AdvanceTime_result) = 0 ;
	virtual HRESULT __safecall Set_AdvanceTime(float AdvanceTime) = 0 ;
	virtual HRESULT __safecall Get_EntryEffect(Activex::TOleEnum &Get_EntryEffect_result) = 0 ;
	virtual HRESULT __safecall Set_EntryEffect(Activex::TOleEnum EntryEffect) = 0 ;
	virtual HRESULT __safecall Get_Hidden(Activex::TOleEnum &Get_Hidden_result) = 0 ;
	virtual HRESULT __safecall Set_Hidden(Activex::TOleEnum Hidden) = 0 ;
	virtual HRESULT __safecall Get_LoopSoundUntilNext(Activex::TOleEnum &Get_LoopSoundUntilNext_result)
		 = 0 ;
	virtual HRESULT __safecall Set_LoopSoundUntilNext(Activex::TOleEnum LoopSoundUntilNext) = 0 ;
	virtual HRESULT __safecall Get_SoundEffect(_di_SoundEffect &Get_SoundEffect_result) = 0 ;
	virtual HRESULT __safecall Get_Speed(Activex::TOleEnum &Get_Speed_result) = 0 ;
	virtual HRESULT __safecall Set_Speed(Activex::TOleEnum Speed) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_AdvanceOnClick() { Activex::TOleEnum r; HRESULT hr = Get_AdvanceOnClick(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum AdvanceOnClick = {read=_scw_Get_AdvanceOnClick, write=Set_AdvanceOnClick
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_AdvanceOnTime() { Activex::TOleEnum r; HRESULT hr = Get_AdvanceOnTime(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum AdvanceOnTime = {read=_scw_Get_AdvanceOnTime, write=Set_AdvanceOnTime}
		;
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_AdvanceTime() { float r; HRESULT hr = Get_AdvanceTime(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float AdvanceTime = {read=_scw_Get_AdvanceTime, write=Set_AdvanceTime};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_EntryEffect() { Activex::TOleEnum r; HRESULT hr = Get_EntryEffect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum EntryEffect = {read=_scw_Get_EntryEffect, write=Set_EntryEffect};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Hidden() { Activex::TOleEnum r; HRESULT hr = Get_Hidden(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Hidden = {read=_scw_Get_Hidden, write=Set_Hidden};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_LoopSoundUntilNext() { Activex::TOleEnum r; HRESULT hr = Get_LoopSoundUntilNext(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum LoopSoundUntilNext = {read=_scw_Get_LoopSoundUntilNext, write=Set_LoopSoundUntilNext
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_SoundEffect _scw_Get_SoundEffect() { _di_SoundEffect r; HRESULT hr = Get_SoundEffect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_SoundEffect SoundEffect = {read=_scw_Get_SoundEffect};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Speed() { Activex::TOleEnum r; HRESULT hr = Get_Speed(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Speed = {read=_scw_Get_Speed, write=Set_Speed};
};

__dispinterface SlideShowTransitionDisp;
typedef System::DelphiInterface<SlideShowTransitionDisp> _di_SlideShowTransitionDisp;
__dispinterface INTERFACE_UUID("{91493471-5A91-11CF-8700-00AA0060263B}") SlideShowTransitionDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{91493472-5A91-11CF-8700-00AA0060263B}") SoundEffect  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Set_Name(const WideString Name) = 0 ;
	virtual HRESULT __safecall Get_Type_(Activex::TOleEnum &Get_Type__result) = 0 ;
	virtual HRESULT __safecall Set_Type_(Activex::TOleEnum Type_) = 0 ;
	virtual HRESULT __safecall ImportFromFile(const WideString FileName) = 0 ;
	virtual HRESULT __safecall Play(void) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name, write=Set_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Type_() { Activex::TOleEnum r; HRESULT hr = Get_Type_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Type_ = {read=_scw_Get_Type_, write=Set_Type_};
};

__dispinterface SoundEffectDisp;
typedef System::DelphiInterface<SoundEffectDisp> _di_SoundEffectDisp;
__dispinterface INTERFACE_UUID("{91493472-5A91-11CF-8700-00AA0060263B}") SoundEffectDisp  : public IDispatch 
	
{
	
};

__interface SoundFormat;
typedef System::DelphiInterface<SoundFormat> _di_SoundFormat;
__interface INTERFACE_UUID("{91493473-5A91-11CF-8700-00AA0060263B}") SoundFormat  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Play(void) = 0 ;
	virtual HRESULT __safecall Import(const WideString FileName) = 0 ;
	virtual HRESULT __safecall Export(const WideString FileName, Activex::TOleEnum &Export_result) = 0 
		;
	virtual HRESULT __safecall Get_Type_(Activex::TOleEnum &Get_Type__result) = 0 ;
	virtual HRESULT __safecall Get_SourceFullName(WideString &Get_SourceFullName_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Type_() { Activex::TOleEnum r; HRESULT hr = Get_Type_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Type_ = {read=_scw_Get_Type_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_SourceFullName() { WideString r; HRESULT hr = Get_SourceFullName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString SourceFullName = {read=_scw_Get_SourceFullName};
};

__dispinterface SoundFormatDisp;
typedef System::DelphiInterface<SoundFormatDisp> _di_SoundFormatDisp;
__dispinterface INTERFACE_UUID("{91493473-5A91-11CF-8700-00AA0060263B}") SoundFormatDisp  : public IDispatch 
	
{
	
};

__interface HeaderFooter;
typedef System::DelphiInterface<HeaderFooter> _di_HeaderFooter;
__interface INTERFACE_UUID("{91493474-5A91-11CF-8700-00AA0060263B}") HeadersFooters  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_DateAndTime(_di_HeaderFooter &Get_DateAndTime_result) = 0 ;
	virtual HRESULT __safecall Get_SlideNumber(_di_HeaderFooter &Get_SlideNumber_result) = 0 ;
	virtual HRESULT __safecall Get_Header(_di_HeaderFooter &Get_Header_result) = 0 ;
	virtual HRESULT __safecall Get_Footer(_di_HeaderFooter &Get_Footer_result) = 0 ;
	virtual HRESULT __safecall Get_DisplayOnTitleSlide(Activex::TOleEnum &Get_DisplayOnTitleSlide_result
		) = 0 ;
	virtual HRESULT __safecall Set_DisplayOnTitleSlide(Activex::TOleEnum DisplayOnTitleSlide) = 0 ;
	virtual HRESULT __safecall Clear(void) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_HeaderFooter _scw_Get_DateAndTime() { _di_HeaderFooter r; HRESULT hr = Get_DateAndTime(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_HeaderFooter DateAndTime = {read=_scw_Get_DateAndTime};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_HeaderFooter _scw_Get_SlideNumber() { _di_HeaderFooter r; HRESULT hr = Get_SlideNumber(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_HeaderFooter SlideNumber = {read=_scw_Get_SlideNumber};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_HeaderFooter _scw_Get_Header() { _di_HeaderFooter r; HRESULT hr = Get_Header(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_HeaderFooter Header = {read=_scw_Get_Header};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_HeaderFooter _scw_Get_Footer() { _di_HeaderFooter r; HRESULT hr = Get_Footer(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_HeaderFooter Footer = {read=_scw_Get_Footer};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_DisplayOnTitleSlide() { Activex::TOleEnum r; HRESULT hr = Get_DisplayOnTitleSlide(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum DisplayOnTitleSlide = {read=_scw_Get_DisplayOnTitleSlide, write=Set_DisplayOnTitleSlide
		};
};

__dispinterface HeadersFootersDisp;
typedef System::DelphiInterface<HeadersFootersDisp> _di_HeadersFootersDisp;
__dispinterface INTERFACE_UUID("{91493474-5A91-11CF-8700-00AA0060263B}") HeadersFootersDisp  : public IDispatch 
	
{
	
};

__interface FreeformBuilder;
typedef System::DelphiInterface<FreeformBuilder> _di_FreeformBuilder;
__interface Placeholders;
typedef System::DelphiInterface<Placeholders> _di_Placeholders;
__interface INTERFACE_UUID("{91493475-5A91-11CF-8700-00AA0060263B}") Shapes  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di_IDispatch &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Creator(int &Get_Creator_result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Item(const OleVariant index, _di_Shape &Item_result) = 0 ;
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
	virtual HRESULT __safecall SelectAll(void) = 0 ;
	virtual HRESULT __safecall Range(const OleVariant index, _di_ShapeRange &Range_result) = 0 ;
	virtual HRESULT __safecall Get_HasTitle(Activex::TOleEnum &Get_HasTitle_result) = 0 ;
	virtual HRESULT __safecall AddTitle(_di_Shape &AddTitle_result) = 0 ;
	virtual HRESULT __safecall Get_Title(_di_Shape &Get_Title_result) = 0 ;
	virtual HRESULT __safecall Get_Placeholders(_di_Placeholders &Get_Placeholders_result) = 0 ;
	virtual HRESULT __safecall AddOLEObject(float Left, float Top, float Width, float Height, const WideString 
		ClassName, const WideString FileName, Activex::TOleEnum DisplayAsIcon, const WideString IconFileName
		, int IconIndex, const WideString IconLabel, Activex::TOleEnum Link, _di_Shape &AddOLEObject_result
		) = 0 ;
	virtual HRESULT __safecall AddComment(float Left, float Top, float Width, float Height, _di_Shape &AddComment_result
		) = 0 ;
	virtual HRESULT __safecall AddPlaceholder(Activex::TOleEnum Type_, float Left, float Top, float Width
		, float Height, _di_Shape &AddPlaceholder_result) = 0 ;
	virtual HRESULT __safecall AddMediaObject(const WideString FileName, float Left, float Top, float Width
		, float Height, _di_Shape &AddMediaObject_result) = 0 ;
	virtual HRESULT __safecall Paste(_di_ShapeRange &Paste_result) = 0 ;
	virtual HRESULT __safecall AddTable(int NumRows, int NumColumns, float Left, float Top, float Width
		, float Height, _di_Shape &AddTable_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Application_() { _di_IDispatch r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Creator() { int r; HRESULT hr = Get_Creator(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Creator = {read=_scw_Get_Creator};
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
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_HasTitle() { Activex::TOleEnum r; HRESULT hr = Get_HasTitle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum HasTitle = {read=_scw_Get_HasTitle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Shape _scw_Get_Title() { _di_Shape r; HRESULT hr = Get_Title(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Shape Title = {read=_scw_Get_Title};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Placeholders _scw_Get_Placeholders() { _di_Placeholders r; HRESULT hr = Get_Placeholders(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Placeholders Placeholders = {read=_scw_Get_Placeholders};
};

__dispinterface ShapesDisp;
typedef System::DelphiInterface<ShapesDisp> _di_ShapesDisp;
__dispinterface INTERFACE_UUID("{91493475-5A91-11CF-8700-00AA0060263B}") ShapesDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{91493476-5A91-11CF-8700-00AA0060263B}") Placeholders  : public Collection 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Item(int index, _di_Shape &Item_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface PlaceholdersDisp;
typedef System::DelphiInterface<PlaceholdersDisp> _di_PlaceholdersDisp;
__dispinterface INTERFACE_UUID("{91493476-5A91-11CF-8700-00AA0060263B}") PlaceholdersDisp  : public IDispatch 
	
{
	
};

__interface PlaceholderFormat;
typedef System::DelphiInterface<PlaceholderFormat> _di_PlaceholderFormat;
__interface INTERFACE_UUID("{91493477-5A91-11CF-8700-00AA0060263B}") PlaceholderFormat  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Type_(Activex::TOleEnum &Get_Type__result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Type_() { Activex::TOleEnum r; HRESULT hr = Get_Type_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Type_ = {read=_scw_Get_Type_};
};

__dispinterface PlaceholderFormatDisp;
typedef System::DelphiInterface<PlaceholderFormatDisp> _di_PlaceholderFormatDisp;
__dispinterface INTERFACE_UUID("{91493477-5A91-11CF-8700-00AA0060263B}") PlaceholderFormatDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{91493478-5A91-11CF-8700-00AA0060263B}") FreeformBuilder  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di_IDispatch &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Creator(int &Get_Creator_result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall AddNodes(Activex::TOleEnum SegmentType, Activex::TOleEnum EditingType, float 
		X1, float Y1, float X2, float Y2, float X3, float Y3) = 0 ;
	virtual HRESULT __safecall ConvertToShape(_di_Shape &ConvertToShape_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Application_() { _di_IDispatch r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Creator() { int r; HRESULT hr = Get_Creator(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Creator = {read=_scw_Get_Creator};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface FreeformBuilderDisp;
typedef System::DelphiInterface<FreeformBuilderDisp> _di_FreeformBuilderDisp;
__dispinterface INTERFACE_UUID("{91493478-5A91-11CF-8700-00AA0060263B}") FreeformBuilderDisp  : public IDispatch 
	
{
	
};

__interface Adjustments;
typedef System::DelphiInterface<Adjustments> _di_Adjustments;
__interface CalloutFormat;
typedef System::DelphiInterface<CalloutFormat> _di_CalloutFormat;
__interface ConnectorFormat;
typedef System::DelphiInterface<ConnectorFormat> _di_ConnectorFormat;
__interface FillFormat;
typedef System::DelphiInterface<FillFormat> _di_FillFormat;
__interface GroupShapes;
typedef System::DelphiInterface<GroupShapes> _di_GroupShapes;
__interface LineFormat;
typedef System::DelphiInterface<LineFormat> _di_LineFormat;
__interface ShapeNodes;
typedef System::DelphiInterface<ShapeNodes> _di_ShapeNodes;
__interface PictureFormat;
typedef System::DelphiInterface<PictureFormat> _di_PictureFormat;
__interface ShadowFormat;
typedef System::DelphiInterface<ShadowFormat> _di_ShadowFormat;
__interface TextEffectFormat;
typedef System::DelphiInterface<TextEffectFormat> _di_TextEffectFormat;
__interface TextFrame;
typedef System::DelphiInterface<TextFrame> _di_TextFrame;
__interface ThreeDFormat;
typedef System::DelphiInterface<ThreeDFormat> _di_ThreeDFormat;
__interface OLEFormat;
typedef System::DelphiInterface<OLEFormat> _di_OLEFormat;
__interface LinkFormat;
typedef System::DelphiInterface<LinkFormat> _di_LinkFormat;
__interface AnimationSettings;
typedef System::DelphiInterface<AnimationSettings> _di_AnimationSettings;
__interface ActionSettings;
typedef System::DelphiInterface<ActionSettings> _di_ActionSettings;
__interface Table;
typedef System::DelphiInterface<Table> _di_Table;
__interface INTERFACE_UUID("{91493479-5A91-11CF-8700-00AA0060263B}") Shape  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di_IDispatch &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Creator(int &Get_Creator_result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Apply(void) = 0 ;
	virtual HRESULT __safecall Delete(void) = 0 ;
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
	virtual HRESULT __safecall Get_OLEFormat(_di_OLEFormat &Get_OLEFormat_result) = 0 ;
	virtual HRESULT __safecall Get_LinkFormat(_di_LinkFormat &Get_LinkFormat_result) = 0 ;
	virtual HRESULT __safecall Get_PlaceholderFormat(_di_PlaceholderFormat &Get_PlaceholderFormat_result
		) = 0 ;
	virtual HRESULT __safecall Get_AnimationSettings(_di_AnimationSettings &Get_AnimationSettings_result
		) = 0 ;
	virtual HRESULT __safecall Get_ActionSettings(_di_ActionSettings &Get_ActionSettings_result) = 0 ;
	virtual HRESULT __safecall Get_Tags(_di_Tags &Get_Tags_result) = 0 ;
	virtual HRESULT __safecall Cut(void) = 0 ;
	virtual HRESULT __safecall Copy(void) = 0 ;
	virtual HRESULT __safecall Select(Activex::TOleEnum Replace) = 0 ;
	virtual HRESULT __safecall Duplicate(_di_ShapeRange &Duplicate_result) = 0 ;
	virtual HRESULT __safecall Get_MediaType(Activex::TOleEnum &Get_MediaType_result) = 0 ;
	virtual HRESULT __safecall Get_HasTextFrame(Activex::TOleEnum &Get_HasTextFrame_result) = 0 ;
	virtual HRESULT __safecall Get_SoundFormat(_di_SoundFormat &Get_SoundFormat_result) = 0 ;
	virtual HRESULT __safecall Get_Script(Opofc2k::_di_Script &Get_Script_result) = 0 ;
	virtual HRESULT __safecall Get_AlternativeText(WideString &Get_AlternativeText_result) = 0 ;
	virtual HRESULT __safecall Set_AlternativeText(const WideString AlternativeText) = 0 ;
	virtual HRESULT __safecall Get_HasTable(Activex::TOleEnum &Get_HasTable_result) = 0 ;
	virtual HRESULT __safecall Get_Table(_di_Table &Get_Table_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Application_() { _di_IDispatch r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Creator() { int r; HRESULT hr = Get_Creator(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Creator = {read=_scw_Get_Creator};
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
	/* safecall wrapper */ inline _di_OLEFormat _scw_Get_OLEFormat() { _di_OLEFormat r; HRESULT hr = Get_OLEFormat(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_OLEFormat OLEFormat = {read=_scw_Get_OLEFormat};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_LinkFormat _scw_Get_LinkFormat() { _di_LinkFormat r; HRESULT hr = Get_LinkFormat(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_LinkFormat LinkFormat = {read=_scw_Get_LinkFormat};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_PlaceholderFormat _scw_Get_PlaceholderFormat() { _di_PlaceholderFormat r; HRESULT hr = Get_PlaceholderFormat(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_PlaceholderFormat PlaceholderFormat = {read=_scw_Get_PlaceholderFormat};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_AnimationSettings _scw_Get_AnimationSettings() { _di_AnimationSettings r; HRESULT hr = Get_AnimationSettings(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_AnimationSettings AnimationSettings = {read=_scw_Get_AnimationSettings};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ActionSettings _scw_Get_ActionSettings() { _di_ActionSettings r; HRESULT hr = Get_ActionSettings(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ActionSettings ActionSettings = {read=_scw_Get_ActionSettings};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Tags _scw_Get_Tags() { _di_Tags r; HRESULT hr = Get_Tags(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Tags Tags = {read=_scw_Get_Tags};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_MediaType() { Activex::TOleEnum r; HRESULT hr = Get_MediaType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum MediaType = {read=_scw_Get_MediaType};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_HasTextFrame() { Activex::TOleEnum r; HRESULT hr = Get_HasTextFrame(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum HasTextFrame = {read=_scw_Get_HasTextFrame};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_SoundFormat _scw_Get_SoundFormat() { _di_SoundFormat r; HRESULT hr = Get_SoundFormat(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_SoundFormat SoundFormat = {read=_scw_Get_SoundFormat};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Opofc2k::_di_Script _scw_Get_Script() { Opofc2k::_di_Script r; HRESULT hr = Get_Script(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Opofc2k::_di_Script Script = {read=_scw_Get_Script};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_AlternativeText() { WideString r; HRESULT hr = Get_AlternativeText(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString AlternativeText = {read=_scw_Get_AlternativeText, write=Set_AlternativeText};
		
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_HasTable() { Activex::TOleEnum r; HRESULT hr = Get_HasTable(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum HasTable = {read=_scw_Get_HasTable};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Table _scw_Get_Table() { _di_Table r; HRESULT hr = Get_Table(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Table Table = {read=_scw_Get_Table};
};

__dispinterface ShapeDisp;
typedef System::DelphiInterface<ShapeDisp> _di_ShapeDisp;
__dispinterface INTERFACE_UUID("{91493479-5A91-11CF-8700-00AA0060263B}") ShapeDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{9149347A-5A91-11CF-8700-00AA0060263B}") ShapeRange  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di_IDispatch &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Creator(int &Get_Creator_result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Apply(void) = 0 ;
	virtual HRESULT __safecall Delete(void) = 0 ;
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
	virtual HRESULT __safecall Get_OLEFormat(_di_OLEFormat &Get_OLEFormat_result) = 0 ;
	virtual HRESULT __safecall Get_LinkFormat(_di_LinkFormat &Get_LinkFormat_result) = 0 ;
	virtual HRESULT __safecall Get_PlaceholderFormat(_di_PlaceholderFormat &Get_PlaceholderFormat_result
		) = 0 ;
	virtual HRESULT __safecall Get_AnimationSettings(_di_AnimationSettings &Get_AnimationSettings_result
		) = 0 ;
	virtual HRESULT __safecall Get_ActionSettings(_di_ActionSettings &Get_ActionSettings_result) = 0 ;
	virtual HRESULT __safecall Get_Tags(_di_Tags &Get_Tags_result) = 0 ;
	virtual HRESULT __safecall Cut(void) = 0 ;
	virtual HRESULT __safecall Copy(void) = 0 ;
	virtual HRESULT __safecall Select(Activex::TOleEnum Replace) = 0 ;
	virtual HRESULT __safecall Duplicate(_di_ShapeRange &Duplicate_result) = 0 ;
	virtual HRESULT __safecall Get_MediaType(Activex::TOleEnum &Get_MediaType_result) = 0 ;
	virtual HRESULT __safecall Get_HasTextFrame(Activex::TOleEnum &Get_HasTextFrame_result) = 0 ;
	virtual HRESULT __safecall Get_SoundFormat(_di_SoundFormat &Get_SoundFormat_result) = 0 ;
	virtual HRESULT __safecall Item(const OleVariant index, _di_Shape &Item_result) = 0 ;
	virtual HRESULT __safecall Get__NewEnum(_di_IUnknown &Get__NewEnum_result) = 0 ;
	virtual HRESULT __safecall _Index(int index, OleVariant &_Index_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Group(_di_Shape &Group_result) = 0 ;
	virtual HRESULT __safecall Regroup(_di_Shape &Regroup_result) = 0 ;
	virtual HRESULT __safecall Align(Activex::TOleEnum AlignCmd, Activex::TOleEnum RelativeTo) = 0 ;
	virtual HRESULT __safecall Distribute(Activex::TOleEnum DistributeCmd, Activex::TOleEnum RelativeTo
		) = 0 ;
	virtual HRESULT __safecall GetPolygonalRepresentation(unsigned maxPointsInBuffer, float &pPoints, /* out */ 
		unsigned &numPointsInPolygon, /* out */ Activex::TOleEnum &IsOpen) = 0 ;
	virtual HRESULT __safecall Get_Script(Opofc2k::_di_Script &Get_Script_result) = 0 ;
	virtual HRESULT __safecall Get_AlternativeText(WideString &Get_AlternativeText_result) = 0 ;
	virtual HRESULT __safecall Set_AlternativeText(const WideString AlternativeText) = 0 ;
	virtual HRESULT __safecall Get_HasTable(Activex::TOleEnum &Get_HasTable_result) = 0 ;
	virtual HRESULT __safecall Get_Table(_di_Table &Get_Table_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Application_() { _di_IDispatch r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Creator() { int r; HRESULT hr = Get_Creator(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Creator = {read=_scw_Get_Creator};
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
	/* safecall wrapper */ inline _di_OLEFormat _scw_Get_OLEFormat() { _di_OLEFormat r; HRESULT hr = Get_OLEFormat(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_OLEFormat OLEFormat = {read=_scw_Get_OLEFormat};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_LinkFormat _scw_Get_LinkFormat() { _di_LinkFormat r; HRESULT hr = Get_LinkFormat(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_LinkFormat LinkFormat = {read=_scw_Get_LinkFormat};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_PlaceholderFormat _scw_Get_PlaceholderFormat() { _di_PlaceholderFormat r; HRESULT hr = Get_PlaceholderFormat(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_PlaceholderFormat PlaceholderFormat = {read=_scw_Get_PlaceholderFormat};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_AnimationSettings _scw_Get_AnimationSettings() { _di_AnimationSettings r; HRESULT hr = Get_AnimationSettings(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_AnimationSettings AnimationSettings = {read=_scw_Get_AnimationSettings};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ActionSettings _scw_Get_ActionSettings() { _di_ActionSettings r; HRESULT hr = Get_ActionSettings(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ActionSettings ActionSettings = {read=_scw_Get_ActionSettings};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Tags _scw_Get_Tags() { _di_Tags r; HRESULT hr = Get_Tags(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Tags Tags = {read=_scw_Get_Tags};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_MediaType() { Activex::TOleEnum r; HRESULT hr = Get_MediaType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum MediaType = {read=_scw_Get_MediaType};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_HasTextFrame() { Activex::TOleEnum r; HRESULT hr = Get_HasTextFrame(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum HasTextFrame = {read=_scw_Get_HasTextFrame};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_SoundFormat _scw_Get_SoundFormat() { _di_SoundFormat r; HRESULT hr = Get_SoundFormat(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_SoundFormat SoundFormat = {read=_scw_Get_SoundFormat};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IUnknown _scw_Get__NewEnum() { _di_IUnknown r; HRESULT hr = Get__NewEnum(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IUnknown _NewEnum = {read=_scw_Get__NewEnum};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Count() { int r; HRESULT hr = Get_Count(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Count = {read=_scw_Get_Count};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Opofc2k::_di_Script _scw_Get_Script() { Opofc2k::_di_Script r; HRESULT hr = Get_Script(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Opofc2k::_di_Script Script = {read=_scw_Get_Script};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_AlternativeText() { WideString r; HRESULT hr = Get_AlternativeText(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString AlternativeText = {read=_scw_Get_AlternativeText, write=Set_AlternativeText};
		
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_HasTable() { Activex::TOleEnum r; HRESULT hr = Get_HasTable(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum HasTable = {read=_scw_Get_HasTable};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Table _scw_Get_Table() { _di_Table r; HRESULT hr = Get_Table(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Table Table = {read=_scw_Get_Table};
};

__dispinterface ShapeRangeDisp;
typedef System::DelphiInterface<ShapeRangeDisp> _di_ShapeRangeDisp;
__dispinterface INTERFACE_UUID("{9149347A-5A91-11CF-8700-00AA0060263B}") ShapeRangeDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{9149347B-5A91-11CF-8700-00AA0060263B}") GroupShapes  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di_IDispatch &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Creator(int &Get_Creator_result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Item(const OleVariant index, _di_Shape &Item_result) = 0 ;
	virtual HRESULT __safecall Get__NewEnum(_di_IUnknown &Get__NewEnum_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Application_() { _di_IDispatch r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Creator() { int r; HRESULT hr = Get_Creator(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Creator = {read=_scw_Get_Creator};
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
__dispinterface INTERFACE_UUID("{9149347B-5A91-11CF-8700-00AA0060263B}") GroupShapesDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{9149347C-5A91-11CF-8700-00AA0060263B}") Adjustments  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di_IDispatch &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Creator(int &Get_Creator_result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Get_Item(int index, float &Get_Item_result) = 0 ;
	virtual HRESULT __safecall Set_Item(int index, float Val) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Application_() { _di_IDispatch r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Creator() { int r; HRESULT hr = Get_Creator(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Creator = {read=_scw_Get_Creator};
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
	/* safecall wrapper */ inline float _scw_Get_Item(int index) { float r; HRESULT hr = Get_Item(index
		, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float Item[int index] = {read=_scw_Get_Item, write=Set_Item/*, default*/};
};

__dispinterface AdjustmentsDisp;
typedef System::DelphiInterface<AdjustmentsDisp> _di_AdjustmentsDisp;
__dispinterface INTERFACE_UUID("{9149347C-5A91-11CF-8700-00AA0060263B}") AdjustmentsDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{9149347D-5A91-11CF-8700-00AA0060263B}") PictureFormat  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di_IDispatch &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Creator(int &Get_Creator_result) = 0 ;
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
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Application_() { _di_IDispatch r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Creator() { int r; HRESULT hr = Get_Creator(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Creator = {read=_scw_Get_Creator};
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
__dispinterface INTERFACE_UUID("{9149347D-5A91-11CF-8700-00AA0060263B}") PictureFormatDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{9149347E-5A91-11CF-8700-00AA0060263B}") FillFormat  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di_IDispatch &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Creator(int &Get_Creator_result) = 0 ;
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
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Application_() { _di_IDispatch r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Creator() { int r; HRESULT hr = Get_Creator(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Creator = {read=_scw_Get_Creator};
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
__dispinterface INTERFACE_UUID("{9149347E-5A91-11CF-8700-00AA0060263B}") FillFormatDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{9149347F-5A91-11CF-8700-00AA0060263B}") LineFormat  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di_IDispatch &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Creator(int &Get_Creator_result) = 0 ;
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
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Application_() { _di_IDispatch r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Creator() { int r; HRESULT hr = Get_Creator(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Creator = {read=_scw_Get_Creator};
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
__dispinterface INTERFACE_UUID("{9149347F-5A91-11CF-8700-00AA0060263B}") LineFormatDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{91493480-5A91-11CF-8700-00AA0060263B}") ShadowFormat  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di_IDispatch &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Creator(int &Get_Creator_result) = 0 ;
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
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Application_() { _di_IDispatch r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Creator() { int r; HRESULT hr = Get_Creator(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Creator = {read=_scw_Get_Creator};
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
__dispinterface INTERFACE_UUID("{91493480-5A91-11CF-8700-00AA0060263B}") ShadowFormatDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{91493481-5A91-11CF-8700-00AA0060263B}") ConnectorFormat  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di_IDispatch &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Creator(int &Get_Creator_result) = 0 ;
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
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Application_() { _di_IDispatch r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Creator() { int r; HRESULT hr = Get_Creator(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Creator = {read=_scw_Get_Creator};
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
__dispinterface INTERFACE_UUID("{91493481-5A91-11CF-8700-00AA0060263B}") ConnectorFormatDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{91493482-5A91-11CF-8700-00AA0060263B}") TextEffectFormat  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di_IDispatch &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Creator(int &Get_Creator_result) = 0 ;
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
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Application_() { _di_IDispatch r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Creator() { int r; HRESULT hr = Get_Creator(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Creator = {read=_scw_Get_Creator};
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
__dispinterface INTERFACE_UUID("{91493482-5A91-11CF-8700-00AA0060263B}") TextEffectFormatDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{91493483-5A91-11CF-8700-00AA0060263B}") ThreeDFormat  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di_IDispatch &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Creator(int &Get_Creator_result) = 0 ;
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
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Application_() { _di_IDispatch r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Creator() { int r; HRESULT hr = Get_Creator(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Creator = {read=_scw_Get_Creator};
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
__dispinterface INTERFACE_UUID("{91493483-5A91-11CF-8700-00AA0060263B}") ThreeDFormatDisp  : public IDispatch 
	
{
	
};

__interface Ruler;
typedef System::DelphiInterface<Ruler> _di_Ruler;
__interface INTERFACE_UUID("{91493484-5A91-11CF-8700-00AA0060263B}") TextFrame  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di_IDispatch &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Creator(int &Get_Creator_result) = 0 ;
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
	virtual HRESULT __safecall Get_HasText(Activex::TOleEnum &Get_HasText_result) = 0 ;
	virtual HRESULT __safecall Get_TextRange(_di_TextRange &Get_TextRange_result) = 0 ;
	virtual HRESULT __safecall Get_Ruler(_di_Ruler &Get_Ruler_result) = 0 ;
	virtual HRESULT __safecall Get_HorizontalAnchor(Activex::TOleEnum &Get_HorizontalAnchor_result) = 0 
		;
	virtual HRESULT __safecall Set_HorizontalAnchor(Activex::TOleEnum HorizontalAnchor) = 0 ;
	virtual HRESULT __safecall Get_VerticalAnchor(Activex::TOleEnum &Get_VerticalAnchor_result) = 0 ;
	virtual HRESULT __safecall Set_VerticalAnchor(Activex::TOleEnum VerticalAnchor) = 0 ;
	virtual HRESULT __safecall Get_AutoSize(Activex::TOleEnum &Get_AutoSize_result) = 0 ;
	virtual HRESULT __safecall Set_AutoSize(Activex::TOleEnum AutoSize) = 0 ;
	virtual HRESULT __safecall Get_WordWrap(Activex::TOleEnum &Get_WordWrap_result) = 0 ;
	virtual HRESULT __safecall Set_WordWrap(Activex::TOleEnum WordWrap) = 0 ;
	virtual HRESULT __safecall DeleteText(void) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Application_() { _di_IDispatch r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Creator() { int r; HRESULT hr = Get_Creator(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Creator = {read=_scw_Get_Creator};
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
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_HasText() { Activex::TOleEnum r; HRESULT hr = Get_HasText(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum HasText = {read=_scw_Get_HasText};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_TextRange _scw_Get_TextRange() { _di_TextRange r; HRESULT hr = Get_TextRange(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_TextRange TextRange = {read=_scw_Get_TextRange};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Ruler _scw_Get_Ruler() { _di_Ruler r; HRESULT hr = Get_Ruler(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Ruler Ruler = {read=_scw_Get_Ruler};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_HorizontalAnchor() { Activex::TOleEnum r; HRESULT hr = Get_HorizontalAnchor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum HorizontalAnchor = {read=_scw_Get_HorizontalAnchor, write=Set_HorizontalAnchor
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_VerticalAnchor() { Activex::TOleEnum r; HRESULT hr = Get_VerticalAnchor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum VerticalAnchor = {read=_scw_Get_VerticalAnchor, write=Set_VerticalAnchor
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_AutoSize() { Activex::TOleEnum r; HRESULT hr = Get_AutoSize(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum AutoSize = {read=_scw_Get_AutoSize, write=Set_AutoSize};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_WordWrap() { Activex::TOleEnum r; HRESULT hr = Get_WordWrap(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum WordWrap = {read=_scw_Get_WordWrap, write=Set_WordWrap};
};

__dispinterface TextFrameDisp;
typedef System::DelphiInterface<TextFrameDisp> _di_TextFrameDisp;
__dispinterface INTERFACE_UUID("{91493484-5A91-11CF-8700-00AA0060263B}") TextFrameDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{91493485-5A91-11CF-8700-00AA0060263B}") CalloutFormat  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di_IDispatch &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Creator(int &Get_Creator_result) = 0 ;
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
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Application_() { _di_IDispatch r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Creator() { int r; HRESULT hr = Get_Creator(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Creator = {read=_scw_Get_Creator};
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
__dispinterface INTERFACE_UUID("{91493485-5A91-11CF-8700-00AA0060263B}") CalloutFormatDisp  : public IDispatch 
	
{
	
};

__interface ShapeNode;
typedef System::DelphiInterface<ShapeNode> _di_ShapeNode;
__interface INTERFACE_UUID("{91493486-5A91-11CF-8700-00AA0060263B}") ShapeNodes  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di_IDispatch &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Creator(int &Get_Creator_result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Item(const OleVariant index, _di_ShapeNode &Item_result) = 0 ;
	virtual HRESULT __safecall Get__NewEnum(_di_IUnknown &Get__NewEnum_result) = 0 ;
	virtual HRESULT __safecall Delete(int index) = 0 ;
	virtual HRESULT __safecall Insert(int index, Activex::TOleEnum SegmentType, Activex::TOleEnum EditingType
		, float X1, float Y1, float X2, float Y2, float X3, float Y3) = 0 ;
	virtual HRESULT __safecall SetEditingType(int index, Activex::TOleEnum EditingType) = 0 ;
	virtual HRESULT __safecall SetPosition(int index, float X1, float Y1) = 0 ;
	virtual HRESULT __safecall SetSegmentType(int index, Activex::TOleEnum SegmentType) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Application_() { _di_IDispatch r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Creator() { int r; HRESULT hr = Get_Creator(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Creator = {read=_scw_Get_Creator};
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
__dispinterface INTERFACE_UUID("{91493486-5A91-11CF-8700-00AA0060263B}") ShapeNodesDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{91493487-5A91-11CF-8700-00AA0060263B}") ShapeNode  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di_IDispatch &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Creator(int &Get_Creator_result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_EditingType(Activex::TOleEnum &Get_EditingType_result) = 0 ;
	virtual HRESULT __safecall Get_Points(OleVariant &Get_Points_result) = 0 ;
	virtual HRESULT __safecall Get_SegmentType(Activex::TOleEnum &Get_SegmentType_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Application_() { _di_IDispatch r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Creator() { int r; HRESULT hr = Get_Creator(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Creator = {read=_scw_Get_Creator};
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
__dispinterface INTERFACE_UUID("{91493487-5A91-11CF-8700-00AA0060263B}") ShapeNodeDisp  : public IDispatch 
	
{
	
};

__interface ObjectVerbs;
typedef System::DelphiInterface<ObjectVerbs> _di_ObjectVerbs;
__interface INTERFACE_UUID("{91493488-5A91-11CF-8700-00AA0060263B}") OLEFormat  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_ObjectVerbs(_di_ObjectVerbs &Get_ObjectVerbs_result) = 0 ;
	virtual HRESULT __safecall Get_Object_(_di_IDispatch &Get_Object__result) = 0 ;
	virtual HRESULT __safecall Get_ProgID(WideString &Get_ProgID_result) = 0 ;
	virtual HRESULT __safecall Get_FollowColors(Activex::TOleEnum &Get_FollowColors_result) = 0 ;
	virtual HRESULT __safecall Set_FollowColors(Activex::TOleEnum FollowColors) = 0 ;
	virtual HRESULT __safecall DoVerb(int index) = 0 ;
	virtual HRESULT __safecall Activate(void) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ObjectVerbs _scw_Get_ObjectVerbs() { _di_ObjectVerbs r; HRESULT hr = Get_ObjectVerbs(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ObjectVerbs ObjectVerbs = {read=_scw_Get_ObjectVerbs};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Object_() { _di_IDispatch r; HRESULT hr = Get_Object_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Object_ = {read=_scw_Get_Object_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_ProgID() { WideString r; HRESULT hr = Get_ProgID(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString ProgID = {read=_scw_Get_ProgID};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_FollowColors() { Activex::TOleEnum r; HRESULT hr = Get_FollowColors(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum FollowColors = {read=_scw_Get_FollowColors, write=Set_FollowColors};
};

__dispinterface OLEFormatDisp;
typedef System::DelphiInterface<OLEFormatDisp> _di_OLEFormatDisp;
__dispinterface INTERFACE_UUID("{91493488-5A91-11CF-8700-00AA0060263B}") OLEFormatDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{91493489-5A91-11CF-8700-00AA0060263B}") LinkFormat  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_SourceFullName(WideString &Get_SourceFullName_result) = 0 ;
	virtual HRESULT __safecall Set_SourceFullName(const WideString SourceFullName) = 0 ;
	virtual HRESULT __safecall Get_AutoUpdate(Activex::TOleEnum &Get_AutoUpdate_result) = 0 ;
	virtual HRESULT __safecall Set_AutoUpdate(Activex::TOleEnum AutoUpdate) = 0 ;
	virtual HRESULT __safecall Update(void) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_SourceFullName() { WideString r; HRESULT hr = Get_SourceFullName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString SourceFullName = {read=_scw_Get_SourceFullName, write=Set_SourceFullName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_AutoUpdate() { Activex::TOleEnum r; HRESULT hr = Get_AutoUpdate(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum AutoUpdate = {read=_scw_Get_AutoUpdate, write=Set_AutoUpdate};
};

__dispinterface LinkFormatDisp;
typedef System::DelphiInterface<LinkFormatDisp> _di_LinkFormatDisp;
__dispinterface INTERFACE_UUID("{91493489-5A91-11CF-8700-00AA0060263B}") LinkFormatDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{9149348A-5A91-11CF-8700-00AA0060263B}") ObjectVerbs  : public Collection 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Item(int index, WideString &Item_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface ObjectVerbsDisp;
typedef System::DelphiInterface<ObjectVerbsDisp> _di_ObjectVerbsDisp;
__dispinterface INTERFACE_UUID("{9149348A-5A91-11CF-8700-00AA0060263B}") ObjectVerbsDisp  : public IDispatch 
	
{
	
};

__interface PlaySettings;
typedef System::DelphiInterface<PlaySettings> _di_PlaySettings;
__interface INTERFACE_UUID("{9149348B-5A91-11CF-8700-00AA0060263B}") AnimationSettings  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_DimColor(_di_ColorFormat &Get_DimColor_result) = 0 ;
	virtual HRESULT __safecall Get_SoundEffect(_di_SoundEffect &Get_SoundEffect_result) = 0 ;
	virtual HRESULT __safecall Get_EntryEffect(Activex::TOleEnum &Get_EntryEffect_result) = 0 ;
	virtual HRESULT __safecall Set_EntryEffect(Activex::TOleEnum EntryEffect) = 0 ;
	virtual HRESULT __safecall Get_AfterEffect(Activex::TOleEnum &Get_AfterEffect_result) = 0 ;
	virtual HRESULT __safecall Set_AfterEffect(Activex::TOleEnum AfterEffect) = 0 ;
	virtual HRESULT __safecall Get_AnimationOrder(int &Get_AnimationOrder_result) = 0 ;
	virtual HRESULT __safecall Set_AnimationOrder(int AnimationOrder) = 0 ;
	virtual HRESULT __safecall Get_AdvanceMode(Activex::TOleEnum &Get_AdvanceMode_result) = 0 ;
	virtual HRESULT __safecall Set_AdvanceMode(Activex::TOleEnum AdvanceMode) = 0 ;
	virtual HRESULT __safecall Get_AdvanceTime(float &Get_AdvanceTime_result) = 0 ;
	virtual HRESULT __safecall Set_AdvanceTime(float AdvanceTime) = 0 ;
	virtual HRESULT __safecall Get_PlaySettings(_di_PlaySettings &Get_PlaySettings_result) = 0 ;
	virtual HRESULT __safecall Get_TextLevelEffect(Activex::TOleEnum &Get_TextLevelEffect_result) = 0 ;
		
	virtual HRESULT __safecall Set_TextLevelEffect(Activex::TOleEnum TextLevelEffect) = 0 ;
	virtual HRESULT __safecall Get_TextUnitEffect(Activex::TOleEnum &Get_TextUnitEffect_result) = 0 ;
	virtual HRESULT __safecall Set_TextUnitEffect(Activex::TOleEnum TextUnitEffect) = 0 ;
	virtual HRESULT __safecall Get_Animate(Activex::TOleEnum &Get_Animate_result) = 0 ;
	virtual HRESULT __safecall Set_Animate(Activex::TOleEnum Animate) = 0 ;
	virtual HRESULT __safecall Get_AnimateBackground(Activex::TOleEnum &Get_AnimateBackground_result) = 0 
		;
	virtual HRESULT __safecall Set_AnimateBackground(Activex::TOleEnum AnimateBackground) = 0 ;
	virtual HRESULT __safecall Get_AnimateTextInReverse(Activex::TOleEnum &Get_AnimateTextInReverse_result
		) = 0 ;
	virtual HRESULT __safecall Set_AnimateTextInReverse(Activex::TOleEnum AnimateTextInReverse) = 0 ;
	virtual HRESULT __safecall Get_ChartUnitEffect(Activex::TOleEnum &Get_ChartUnitEffect_result) = 0 ;
		
	virtual HRESULT __safecall Set_ChartUnitEffect(Activex::TOleEnum ChartUnitEffect) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ColorFormat _scw_Get_DimColor() { _di_ColorFormat r; HRESULT hr = Get_DimColor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ColorFormat DimColor = {read=_scw_Get_DimColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_SoundEffect _scw_Get_SoundEffect() { _di_SoundEffect r; HRESULT hr = Get_SoundEffect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_SoundEffect SoundEffect = {read=_scw_Get_SoundEffect};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_EntryEffect() { Activex::TOleEnum r; HRESULT hr = Get_EntryEffect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum EntryEffect = {read=_scw_Get_EntryEffect, write=Set_EntryEffect};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_AfterEffect() { Activex::TOleEnum r; HRESULT hr = Get_AfterEffect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum AfterEffect = {read=_scw_Get_AfterEffect, write=Set_AfterEffect};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_AnimationOrder() { int r; HRESULT hr = Get_AnimationOrder(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int AnimationOrder = {read=_scw_Get_AnimationOrder, write=Set_AnimationOrder};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_AdvanceMode() { Activex::TOleEnum r; HRESULT hr = Get_AdvanceMode(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum AdvanceMode = {read=_scw_Get_AdvanceMode, write=Set_AdvanceMode};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_AdvanceTime() { float r; HRESULT hr = Get_AdvanceTime(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float AdvanceTime = {read=_scw_Get_AdvanceTime, write=Set_AdvanceTime};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_PlaySettings _scw_Get_PlaySettings() { _di_PlaySettings r; HRESULT hr = Get_PlaySettings(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_PlaySettings PlaySettings = {read=_scw_Get_PlaySettings};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_TextLevelEffect() { Activex::TOleEnum r; HRESULT hr = Get_TextLevelEffect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum TextLevelEffect = {read=_scw_Get_TextLevelEffect, write=Set_TextLevelEffect
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_TextUnitEffect() { Activex::TOleEnum r; HRESULT hr = Get_TextUnitEffect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum TextUnitEffect = {read=_scw_Get_TextUnitEffect, write=Set_TextUnitEffect
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Animate() { Activex::TOleEnum r; HRESULT hr = Get_Animate(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Animate = {read=_scw_Get_Animate, write=Set_Animate};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_AnimateBackground() { Activex::TOleEnum r; HRESULT hr = Get_AnimateBackground(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum AnimateBackground = {read=_scw_Get_AnimateBackground, write=Set_AnimateBackground
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_AnimateTextInReverse() { Activex::TOleEnum r; HRESULT hr = Get_AnimateTextInReverse(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum AnimateTextInReverse = {read=_scw_Get_AnimateTextInReverse, write=Set_AnimateTextInReverse
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ChartUnitEffect() { Activex::TOleEnum r; HRESULT hr = Get_ChartUnitEffect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ChartUnitEffect = {read=_scw_Get_ChartUnitEffect, write=Set_ChartUnitEffect
		};
};

__dispinterface AnimationSettingsDisp;
typedef System::DelphiInterface<AnimationSettingsDisp> _di_AnimationSettingsDisp;
__dispinterface INTERFACE_UUID("{9149348B-5A91-11CF-8700-00AA0060263B}") AnimationSettingsDisp  : public IDispatch 
	
{
	
};

__interface ActionSetting;
typedef System::DelphiInterface<ActionSetting> _di_ActionSetting;
__interface INTERFACE_UUID("{9149348C-5A91-11CF-8700-00AA0060263B}") ActionSettings  : public Collection 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Item(Activex::TOleEnum index, _di_ActionSetting &Item_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface ActionSettingsDisp;
typedef System::DelphiInterface<ActionSettingsDisp> _di_ActionSettingsDisp;
__dispinterface INTERFACE_UUID("{9149348C-5A91-11CF-8700-00AA0060263B}") ActionSettingsDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{9149348D-5A91-11CF-8700-00AA0060263B}") ActionSetting  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Action(Activex::TOleEnum &Get_Action_result) = 0 ;
	virtual HRESULT __safecall Set_Action(Activex::TOleEnum Action) = 0 ;
	virtual HRESULT __safecall Get_ActionVerb(WideString &Get_ActionVerb_result) = 0 ;
	virtual HRESULT __safecall Set_ActionVerb(const WideString ActionVerb) = 0 ;
	virtual HRESULT __safecall Get_AnimateAction(Activex::TOleEnum &Get_AnimateAction_result) = 0 ;
	virtual HRESULT __safecall Set_AnimateAction(Activex::TOleEnum AnimateAction) = 0 ;
	virtual HRESULT __safecall Get_Run(WideString &Get_Run_result) = 0 ;
	virtual HRESULT __safecall Set_Run(const WideString Run) = 0 ;
	virtual HRESULT __safecall Get_SlideShowName(WideString &Get_SlideShowName_result) = 0 ;
	virtual HRESULT __safecall Set_SlideShowName(const WideString SlideShowName) = 0 ;
	virtual HRESULT __safecall Get_Hyperlink(_di_Hyperlink &Get_Hyperlink_result) = 0 ;
	virtual HRESULT __safecall Get_SoundEffect(_di_SoundEffect &Get_SoundEffect_result) = 0 ;
	virtual HRESULT __safecall Get_ShowandReturn(Activex::TOleEnum &Get_ShowandReturn_result) = 0 ;
	virtual HRESULT __safecall Set_ShowandReturn(Activex::TOleEnum ShowandReturn) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Action() { Activex::TOleEnum r; HRESULT hr = Get_Action(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Action = {read=_scw_Get_Action, write=Set_Action};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_ActionVerb() { WideString r; HRESULT hr = Get_ActionVerb(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString ActionVerb = {read=_scw_Get_ActionVerb, write=Set_ActionVerb};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_AnimateAction() { Activex::TOleEnum r; HRESULT hr = Get_AnimateAction(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum AnimateAction = {read=_scw_Get_AnimateAction, write=Set_AnimateAction}
		;
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Run() { WideString r; HRESULT hr = Get_Run(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Run = {read=_scw_Get_Run, write=Set_Run};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_SlideShowName() { WideString r; HRESULT hr = Get_SlideShowName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString SlideShowName = {read=_scw_Get_SlideShowName, write=Set_SlideShowName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Hyperlink _scw_Get_Hyperlink() { _di_Hyperlink r; HRESULT hr = Get_Hyperlink(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Hyperlink Hyperlink = {read=_scw_Get_Hyperlink};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_SoundEffect _scw_Get_SoundEffect() { _di_SoundEffect r; HRESULT hr = Get_SoundEffect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_SoundEffect SoundEffect = {read=_scw_Get_SoundEffect};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ShowandReturn() { Activex::TOleEnum r; HRESULT hr = Get_ShowandReturn(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ShowandReturn = {read=_scw_Get_ShowandReturn, write=Set_ShowandReturn}
		;
};

__dispinterface ActionSettingDisp;
typedef System::DelphiInterface<ActionSettingDisp> _di_ActionSettingDisp;
__dispinterface INTERFACE_UUID("{9149348D-5A91-11CF-8700-00AA0060263B}") ActionSettingDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{9149348E-5A91-11CF-8700-00AA0060263B}") PlaySettings  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_ActionVerb(WideString &Get_ActionVerb_result) = 0 ;
	virtual HRESULT __safecall Set_ActionVerb(const WideString ActionVerb) = 0 ;
	virtual HRESULT __safecall Get_HideWhileNotPlaying(Activex::TOleEnum &Get_HideWhileNotPlaying_result
		) = 0 ;
	virtual HRESULT __safecall Set_HideWhileNotPlaying(Activex::TOleEnum HideWhileNotPlaying) = 0 ;
	virtual HRESULT __safecall Get_LoopUntilStopped(Activex::TOleEnum &Get_LoopUntilStopped_result) = 0 
		;
	virtual HRESULT __safecall Set_LoopUntilStopped(Activex::TOleEnum LoopUntilStopped) = 0 ;
	virtual HRESULT __safecall Get_PlayOnEntry(Activex::TOleEnum &Get_PlayOnEntry_result) = 0 ;
	virtual HRESULT __safecall Set_PlayOnEntry(Activex::TOleEnum PlayOnEntry) = 0 ;
	virtual HRESULT __safecall Get_RewindMovie(Activex::TOleEnum &Get_RewindMovie_result) = 0 ;
	virtual HRESULT __safecall Set_RewindMovie(Activex::TOleEnum RewindMovie) = 0 ;
	virtual HRESULT __safecall Get_PauseAnimation(Activex::TOleEnum &Get_PauseAnimation_result) = 0 ;
	virtual HRESULT __safecall Set_PauseAnimation(Activex::TOleEnum PauseAnimation) = 0 ;
	virtual HRESULT __safecall Get_StopAfterSlides(int &Get_StopAfterSlides_result) = 0 ;
	virtual HRESULT __safecall Set_StopAfterSlides(int StopAfterSlides) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_ActionVerb() { WideString r; HRESULT hr = Get_ActionVerb(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString ActionVerb = {read=_scw_Get_ActionVerb, write=Set_ActionVerb};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_HideWhileNotPlaying() { Activex::TOleEnum r; HRESULT hr = Get_HideWhileNotPlaying(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum HideWhileNotPlaying = {read=_scw_Get_HideWhileNotPlaying, write=Set_HideWhileNotPlaying
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_LoopUntilStopped() { Activex::TOleEnum r; HRESULT hr = Get_LoopUntilStopped(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum LoopUntilStopped = {read=_scw_Get_LoopUntilStopped, write=Set_LoopUntilStopped
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PlayOnEntry() { Activex::TOleEnum r; HRESULT hr = Get_PlayOnEntry(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PlayOnEntry = {read=_scw_Get_PlayOnEntry, write=Set_PlayOnEntry};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_RewindMovie() { Activex::TOleEnum r; HRESULT hr = Get_RewindMovie(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum RewindMovie = {read=_scw_Get_RewindMovie, write=Set_RewindMovie};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_PauseAnimation() { Activex::TOleEnum r; HRESULT hr = Get_PauseAnimation(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum PauseAnimation = {read=_scw_Get_PauseAnimation, write=Set_PauseAnimation
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_StopAfterSlides() { int r; HRESULT hr = Get_StopAfterSlides(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int StopAfterSlides = {read=_scw_Get_StopAfterSlides, write=Set_StopAfterSlides};
};

__dispinterface PlaySettingsDisp;
typedef System::DelphiInterface<PlaySettingsDisp> _di_PlaySettingsDisp;
__dispinterface INTERFACE_UUID("{9149348E-5A91-11CF-8700-00AA0060263B}") PlaySettingsDisp  : public IDispatch 
	
{
	
};

__interface ParagraphFormat;
typedef System::DelphiInterface<ParagraphFormat> _di_ParagraphFormat;
__interface INTERFACE_UUID("{9149348F-5A91-11CF-8700-00AA0060263B}") TextRange  : public Collection 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_ActionSettings(_di_ActionSettings &Get_ActionSettings_result) = 0 ;
	virtual HRESULT __safecall Get_Start(int &Get_Start_result) = 0 ;
	virtual HRESULT __safecall Get_Length(int &Get_Length_result) = 0 ;
	virtual HRESULT __safecall Get_BoundLeft(float &Get_BoundLeft_result) = 0 ;
	virtual HRESULT __safecall Get_BoundTop(float &Get_BoundTop_result) = 0 ;
	virtual HRESULT __safecall Get_BoundWidth(float &Get_BoundWidth_result) = 0 ;
	virtual HRESULT __safecall Get_BoundHeight(float &Get_BoundHeight_result) = 0 ;
	virtual HRESULT __safecall Paragraphs(int Start, int Length, _di_TextRange &Paragraphs_result) = 0 
		;
	virtual HRESULT __safecall Sentences(int Start, int Length, _di_TextRange &Sentences_result) = 0 ;
	virtual HRESULT __safecall Words(int Start, int Length, _di_TextRange &Words_result) = 0 ;
	virtual HRESULT __safecall Characters(int Start, int Length, _di_TextRange &Characters_result) = 0 
		;
	virtual HRESULT __safecall Lines(int Start, int Length, _di_TextRange &Lines_result) = 0 ;
	virtual HRESULT __safecall Runs(int Start, int Length, _di_TextRange &Runs_result) = 0 ;
	virtual HRESULT __safecall TrimText(_di_TextRange &TrimText_result) = 0 ;
	virtual HRESULT __safecall Get_Text(WideString &Get_Text_result) = 0 ;
	virtual HRESULT __safecall Set_Text(const WideString Text) = 0 ;
	virtual HRESULT __safecall InsertAfter(const WideString NewText, _di_TextRange &InsertAfter_result)
		 = 0 ;
	virtual HRESULT __safecall InsertBefore(const WideString NewText, _di_TextRange &InsertBefore_result
		) = 0 ;
	virtual HRESULT __safecall InsertDateTime(Activex::TOleEnum DateTimeFormat, Activex::TOleEnum InsertAsField
		, _di_TextRange &InsertDateTime_result) = 0 ;
	virtual HRESULT __safecall InsertSlideNumber(_di_TextRange &InsertSlideNumber_result) = 0 ;
	virtual HRESULT __safecall InsertSymbol(const WideString FontName, int CharNumber, Activex::TOleEnum 
		Unicode, _di_TextRange &InsertSymbol_result) = 0 ;
	virtual HRESULT __safecall Get_Font(_di_Font &Get_Font_result) = 0 ;
	virtual HRESULT __safecall Get_ParagraphFormat(_di_ParagraphFormat &Get_ParagraphFormat_result) = 0 
		;
	virtual HRESULT __safecall Get_IndentLevel(int &Get_IndentLevel_result) = 0 ;
	virtual HRESULT __safecall Set_IndentLevel(int IndentLevel) = 0 ;
	virtual HRESULT __safecall Select(void) = 0 ;
	virtual HRESULT __safecall Cut(void) = 0 ;
	virtual HRESULT __safecall Copy(void) = 0 ;
	virtual HRESULT __safecall Delete(void) = 0 ;
	virtual HRESULT __safecall Paste(_di_TextRange &Paste_result) = 0 ;
	virtual HRESULT __safecall ChangeCase(Activex::TOleEnum Type_) = 0 ;
	virtual HRESULT __safecall AddPeriods(void) = 0 ;
	virtual HRESULT __safecall RemovePeriods(void) = 0 ;
	virtual HRESULT __safecall Find(const WideString FindWhat, int After, Activex::TOleEnum MatchCase, 
		Activex::TOleEnum WholeWords, _di_TextRange &Find_result) = 0 ;
	virtual HRESULT __safecall Replace(const WideString FindWhat, const WideString ReplaceWhat, int After
		, Activex::TOleEnum MatchCase, Activex::TOleEnum WholeWords, _di_TextRange &Replace_result) = 0 ;
	virtual HRESULT __safecall RotatedBounds(/* out */ float &X1, /* out */ float &Y1, /* out */ float 
		&X2, /* out */ float &Y2, /* out */ float &X3, /* out */ float &Y3, /* out */ float &x4, /* out */ 
		float &y4) = 0 ;
	virtual HRESULT __safecall Get_LanguageID(Activex::TOleEnum &Get_LanguageID_result) = 0 ;
	virtual HRESULT __safecall Set_LanguageID(Activex::TOleEnum LanguageID) = 0 ;
	virtual HRESULT __safecall RtlRun(void) = 0 ;
	virtual HRESULT __safecall LtrRun(void) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ActionSettings _scw_Get_ActionSettings() { _di_ActionSettings r; HRESULT hr = Get_ActionSettings(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ActionSettings ActionSettings = {read=_scw_Get_ActionSettings};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Start() { int r; HRESULT hr = Get_Start(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Start = {read=_scw_Get_Start};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Length() { int r; HRESULT hr = Get_Length(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Length = {read=_scw_Get_Length};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_BoundLeft() { float r; HRESULT hr = Get_BoundLeft(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float BoundLeft = {read=_scw_Get_BoundLeft};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_BoundTop() { float r; HRESULT hr = Get_BoundTop(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float BoundTop = {read=_scw_Get_BoundTop};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_BoundWidth() { float r; HRESULT hr = Get_BoundWidth(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float BoundWidth = {read=_scw_Get_BoundWidth};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_BoundHeight() { float r; HRESULT hr = Get_BoundHeight(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float BoundHeight = {read=_scw_Get_BoundHeight};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Text() { WideString r; HRESULT hr = Get_Text(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Text = {read=_scw_Get_Text, write=Set_Text};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Font _scw_Get_Font() { _di_Font r; HRESULT hr = Get_Font(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Font Font = {read=_scw_Get_Font};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ParagraphFormat _scw_Get_ParagraphFormat() { _di_ParagraphFormat r; HRESULT hr = Get_ParagraphFormat(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ParagraphFormat ParagraphFormat = {read=_scw_Get_ParagraphFormat};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_IndentLevel() { int r; HRESULT hr = Get_IndentLevel(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int IndentLevel = {read=_scw_Get_IndentLevel, write=Set_IndentLevel};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_LanguageID() { Activex::TOleEnum r; HRESULT hr = Get_LanguageID(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum LanguageID = {read=_scw_Get_LanguageID, write=Set_LanguageID};
};

__dispinterface TextRangeDisp;
typedef System::DelphiInterface<TextRangeDisp> _di_TextRangeDisp;
__dispinterface INTERFACE_UUID("{9149348F-5A91-11CF-8700-00AA0060263B}") TextRangeDisp  : public IDispatch 
	
{
	
};

__interface TabStops;
typedef System::DelphiInterface<TabStops> _di_TabStops;
__interface RulerLevels;
typedef System::DelphiInterface<RulerLevels> _di_RulerLevels;
__interface INTERFACE_UUID("{91493490-5A91-11CF-8700-00AA0060263B}") Ruler  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_TabStops(_di_TabStops &Get_TabStops_result) = 0 ;
	virtual HRESULT __safecall Get_Levels(_di_RulerLevels &Get_Levels_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_TabStops _scw_Get_TabStops() { _di_TabStops r; HRESULT hr = Get_TabStops(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_TabStops TabStops = {read=_scw_Get_TabStops};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_RulerLevels _scw_Get_Levels() { _di_RulerLevels r; HRESULT hr = Get_Levels(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_RulerLevels Levels = {read=_scw_Get_Levels};
};

__dispinterface RulerDisp;
typedef System::DelphiInterface<RulerDisp> _di_RulerDisp;
__dispinterface INTERFACE_UUID("{91493490-5A91-11CF-8700-00AA0060263B}") RulerDisp  : public IDispatch 
	
{
	
};

__interface RulerLevel;
typedef System::DelphiInterface<RulerLevel> _di_RulerLevel;
__interface INTERFACE_UUID("{91493491-5A91-11CF-8700-00AA0060263B}") RulerLevels  : public Collection 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Item(int index, _di_RulerLevel &Item_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface RulerLevelsDisp;
typedef System::DelphiInterface<RulerLevelsDisp> _di_RulerLevelsDisp;
__dispinterface INTERFACE_UUID("{91493491-5A91-11CF-8700-00AA0060263B}") RulerLevelsDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{91493492-5A91-11CF-8700-00AA0060263B}") RulerLevel  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_FirstMargin(float &Get_FirstMargin_result) = 0 ;
	virtual HRESULT __safecall Set_FirstMargin(float FirstMargin) = 0 ;
	virtual HRESULT __safecall Get_LeftMargin(float &Get_LeftMargin_result) = 0 ;
	virtual HRESULT __safecall Set_LeftMargin(float LeftMargin) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_FirstMargin() { float r; HRESULT hr = Get_FirstMargin(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float FirstMargin = {read=_scw_Get_FirstMargin, write=Set_FirstMargin};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_LeftMargin() { float r; HRESULT hr = Get_LeftMargin(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float LeftMargin = {read=_scw_Get_LeftMargin, write=Set_LeftMargin};
};

__dispinterface RulerLevelDisp;
typedef System::DelphiInterface<RulerLevelDisp> _di_RulerLevelDisp;
__dispinterface INTERFACE_UUID("{91493492-5A91-11CF-8700-00AA0060263B}") RulerLevelDisp  : public IDispatch 
	
{
	
};

__interface TabStop;
typedef System::DelphiInterface<TabStop> _di_TabStop;
__interface INTERFACE_UUID("{91493493-5A91-11CF-8700-00AA0060263B}") TabStops  : public Collection 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Item(int index, _di_TabStop &Item_result) = 0 ;
	virtual HRESULT __safecall Get_DefaultSpacing(float &Get_DefaultSpacing_result) = 0 ;
	virtual HRESULT __safecall Set_DefaultSpacing(float DefaultSpacing) = 0 ;
	virtual HRESULT __safecall Add(Activex::TOleEnum Type_, float Position, _di_TabStop &Add_result) = 0 
		;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_DefaultSpacing() { float r; HRESULT hr = Get_DefaultSpacing(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float DefaultSpacing = {read=_scw_Get_DefaultSpacing, write=Set_DefaultSpacing};
};

__dispinterface TabStopsDisp;
typedef System::DelphiInterface<TabStopsDisp> _di_TabStopsDisp;
__dispinterface INTERFACE_UUID("{91493493-5A91-11CF-8700-00AA0060263B}") TabStopsDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{91493494-5A91-11CF-8700-00AA0060263B}") TabStop  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Type_(Activex::TOleEnum &Get_Type__result) = 0 ;
	virtual HRESULT __safecall Set_Type_(Activex::TOleEnum Type_) = 0 ;
	virtual HRESULT __safecall Get_Position(float &Get_Position_result) = 0 ;
	virtual HRESULT __safecall Set_Position(float Position) = 0 ;
	virtual HRESULT __safecall Clear(void) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Type_() { Activex::TOleEnum r; HRESULT hr = Get_Type_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Type_ = {read=_scw_Get_Type_, write=Set_Type_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Position() { float r; HRESULT hr = Get_Position(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Position = {read=_scw_Get_Position, write=Set_Position};
};

__dispinterface TabStopDisp;
typedef System::DelphiInterface<TabStopDisp> _di_TabStopDisp;
__dispinterface INTERFACE_UUID("{91493494-5A91-11CF-8700-00AA0060263B}") TabStopDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{91493495-5A91-11CF-8700-00AA0060263B}") Font  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Color(_di_ColorFormat &Get_Color_result) = 0 ;
	virtual HRESULT __safecall Get_Bold(Activex::TOleEnum &Get_Bold_result) = 0 ;
	virtual HRESULT __safecall Set_Bold(Activex::TOleEnum Bold) = 0 ;
	virtual HRESULT __safecall Get_Italic(Activex::TOleEnum &Get_Italic_result) = 0 ;
	virtual HRESULT __safecall Set_Italic(Activex::TOleEnum Italic) = 0 ;
	virtual HRESULT __safecall Get_Shadow(Activex::TOleEnum &Get_Shadow_result) = 0 ;
	virtual HRESULT __safecall Set_Shadow(Activex::TOleEnum Shadow) = 0 ;
	virtual HRESULT __safecall Get_Emboss(Activex::TOleEnum &Get_Emboss_result) = 0 ;
	virtual HRESULT __safecall Set_Emboss(Activex::TOleEnum Emboss) = 0 ;
	virtual HRESULT __safecall Get_Underline(Activex::TOleEnum &Get_Underline_result) = 0 ;
	virtual HRESULT __safecall Set_Underline(Activex::TOleEnum Underline) = 0 ;
	virtual HRESULT __safecall Get_Subscript(Activex::TOleEnum &Get_Subscript_result) = 0 ;
	virtual HRESULT __safecall Set_Subscript(Activex::TOleEnum Subscript) = 0 ;
	virtual HRESULT __safecall Get_Superscript(Activex::TOleEnum &Get_Superscript_result) = 0 ;
	virtual HRESULT __safecall Set_Superscript(Activex::TOleEnum Superscript) = 0 ;
	virtual HRESULT __safecall Get_BaselineOffset(float &Get_BaselineOffset_result) = 0 ;
	virtual HRESULT __safecall Set_BaselineOffset(float BaselineOffset) = 0 ;
	virtual HRESULT __safecall Get_Embedded(Activex::TOleEnum &Get_Embedded_result) = 0 ;
	virtual HRESULT __safecall Get_Embeddable(Activex::TOleEnum &Get_Embeddable_result) = 0 ;
	virtual HRESULT __safecall Get_Size(float &Get_Size_result) = 0 ;
	virtual HRESULT __safecall Set_Size(float Size) = 0 ;
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Set_Name(const WideString Name) = 0 ;
	virtual HRESULT __safecall Get_NameFarEast(WideString &Get_NameFarEast_result) = 0 ;
	virtual HRESULT __safecall Set_NameFarEast(const WideString NameFarEast) = 0 ;
	virtual HRESULT __safecall Get_NameComplexScript(WideString &Get_NameComplexScript_result) = 0 ;
	virtual HRESULT __safecall Set_NameComplexScript(const WideString NameComplexScript) = 0 ;
	virtual HRESULT __safecall Get_NameAscii(WideString &Get_NameAscii_result) = 0 ;
	virtual HRESULT __safecall Set_NameAscii(const WideString NameAscii) = 0 ;
	virtual HRESULT __safecall Get_AutoRotateNumbers(Activex::TOleEnum &Get_AutoRotateNumbers_result) = 0 
		;
	virtual HRESULT __safecall Set_AutoRotateNumbers(Activex::TOleEnum AutoRotateNumbers) = 0 ;
	virtual HRESULT __safecall Get_NameOther(WideString &Get_NameOther_result) = 0 ;
	virtual HRESULT __safecall Set_NameOther(const WideString NameOther) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ColorFormat _scw_Get_Color() { _di_ColorFormat r; HRESULT hr = Get_Color(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ColorFormat Color = {read=_scw_Get_Color};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Bold() { Activex::TOleEnum r; HRESULT hr = Get_Bold(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Bold = {read=_scw_Get_Bold, write=Set_Bold};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Italic() { Activex::TOleEnum r; HRESULT hr = Get_Italic(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Italic = {read=_scw_Get_Italic, write=Set_Italic};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Shadow() { Activex::TOleEnum r; HRESULT hr = Get_Shadow(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Shadow = {read=_scw_Get_Shadow, write=Set_Shadow};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Emboss() { Activex::TOleEnum r; HRESULT hr = Get_Emboss(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Emboss = {read=_scw_Get_Emboss, write=Set_Emboss};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Underline() { Activex::TOleEnum r; HRESULT hr = Get_Underline(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Underline = {read=_scw_Get_Underline, write=Set_Underline};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Subscript() { Activex::TOleEnum r; HRESULT hr = Get_Subscript(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Subscript = {read=_scw_Get_Subscript, write=Set_Subscript};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Superscript() { Activex::TOleEnum r; HRESULT hr = Get_Superscript(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Superscript = {read=_scw_Get_Superscript, write=Set_Superscript};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_BaselineOffset() { float r; HRESULT hr = Get_BaselineOffset(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float BaselineOffset = {read=_scw_Get_BaselineOffset, write=Set_BaselineOffset};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Embedded() { Activex::TOleEnum r; HRESULT hr = Get_Embedded(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Embedded = {read=_scw_Get_Embedded};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Embeddable() { Activex::TOleEnum r; HRESULT hr = Get_Embeddable(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Embeddable = {read=_scw_Get_Embeddable};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Size() { float r; HRESULT hr = Get_Size(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Size = {read=_scw_Get_Size, write=Set_Size};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name, write=Set_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_NameFarEast() { WideString r; HRESULT hr = Get_NameFarEast(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString NameFarEast = {read=_scw_Get_NameFarEast, write=Set_NameFarEast};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_NameComplexScript() { WideString r; HRESULT hr = Get_NameComplexScript(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString NameComplexScript = {read=_scw_Get_NameComplexScript, write=Set_NameComplexScript
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_NameAscii() { WideString r; HRESULT hr = Get_NameAscii(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString NameAscii = {read=_scw_Get_NameAscii, write=Set_NameAscii};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_AutoRotateNumbers() { Activex::TOleEnum r; HRESULT hr = Get_AutoRotateNumbers(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum AutoRotateNumbers = {read=_scw_Get_AutoRotateNumbers, write=Set_AutoRotateNumbers
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_NameOther() { WideString r; HRESULT hr = Get_NameOther(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString NameOther = {read=_scw_Get_NameOther, write=Set_NameOther};
};

__dispinterface FontDisp;
typedef System::DelphiInterface<FontDisp> _di_FontDisp;
__dispinterface INTERFACE_UUID("{91493495-5A91-11CF-8700-00AA0060263B}") FontDisp  : public IDispatch 
	
{
	
};

__interface BulletFormat;
typedef System::DelphiInterface<BulletFormat> _di_BulletFormat;
__interface INTERFACE_UUID("{91493496-5A91-11CF-8700-00AA0060263B}") ParagraphFormat  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Alignment(Activex::TOleEnum &Get_Alignment_result) = 0 ;
	virtual HRESULT __safecall Set_Alignment(Activex::TOleEnum Alignment) = 0 ;
	virtual HRESULT __safecall Get_Bullet(_di_BulletFormat &Get_Bullet_result) = 0 ;
	virtual HRESULT __safecall Get_LineRuleBefore(Activex::TOleEnum &Get_LineRuleBefore_result) = 0 ;
	virtual HRESULT __safecall Set_LineRuleBefore(Activex::TOleEnum LineRuleBefore) = 0 ;
	virtual HRESULT __safecall Get_LineRuleAfter(Activex::TOleEnum &Get_LineRuleAfter_result) = 0 ;
	virtual HRESULT __safecall Set_LineRuleAfter(Activex::TOleEnum LineRuleAfter) = 0 ;
	virtual HRESULT __safecall Get_LineRuleWithin(Activex::TOleEnum &Get_LineRuleWithin_result) = 0 ;
	virtual HRESULT __safecall Set_LineRuleWithin(Activex::TOleEnum LineRuleWithin) = 0 ;
	virtual HRESULT __safecall Get_SpaceBefore(float &Get_SpaceBefore_result) = 0 ;
	virtual HRESULT __safecall Set_SpaceBefore(float SpaceBefore) = 0 ;
	virtual HRESULT __safecall Get_SpaceAfter(float &Get_SpaceAfter_result) = 0 ;
	virtual HRESULT __safecall Set_SpaceAfter(float SpaceAfter) = 0 ;
	virtual HRESULT __safecall Get_SpaceWithin(float &Get_SpaceWithin_result) = 0 ;
	virtual HRESULT __safecall Set_SpaceWithin(float SpaceWithin) = 0 ;
	virtual HRESULT __safecall Get_BaseLineAlignment(Activex::TOleEnum &Get_BaseLineAlignment_result) = 0 
		;
	virtual HRESULT __safecall Set_BaseLineAlignment(Activex::TOleEnum BaseLineAlignment) = 0 ;
	virtual HRESULT __safecall Get_FarEastLineBreakControl(Activex::TOleEnum &Get_FarEastLineBreakControl_result
		) = 0 ;
	virtual HRESULT __safecall Set_FarEastLineBreakControl(Activex::TOleEnum FarEastLineBreakControl) = 0 
		;
	virtual HRESULT __safecall Get_WordWrap(Activex::TOleEnum &Get_WordWrap_result) = 0 ;
	virtual HRESULT __safecall Set_WordWrap(Activex::TOleEnum WordWrap) = 0 ;
	virtual HRESULT __safecall Get_HangingPunctuation(Activex::TOleEnum &Get_HangingPunctuation_result)
		 = 0 ;
	virtual HRESULT __safecall Set_HangingPunctuation(Activex::TOleEnum HangingPunctuation) = 0 ;
	virtual HRESULT __safecall Get_TextDirection(Activex::TOleEnum &Get_TextDirection_result) = 0 ;
	virtual HRESULT __safecall Set_TextDirection(Activex::TOleEnum TextDirection) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
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
	/* safecall wrapper */ inline _di_BulletFormat _scw_Get_Bullet() { _di_BulletFormat r; HRESULT hr = Get_Bullet(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_BulletFormat Bullet = {read=_scw_Get_Bullet};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_LineRuleBefore() { Activex::TOleEnum r; HRESULT hr = Get_LineRuleBefore(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum LineRuleBefore = {read=_scw_Get_LineRuleBefore, write=Set_LineRuleBefore
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_LineRuleAfter() { Activex::TOleEnum r; HRESULT hr = Get_LineRuleAfter(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum LineRuleAfter = {read=_scw_Get_LineRuleAfter, write=Set_LineRuleAfter}
		;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_LineRuleWithin() { Activex::TOleEnum r; HRESULT hr = Get_LineRuleWithin(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum LineRuleWithin = {read=_scw_Get_LineRuleWithin, write=Set_LineRuleWithin
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_SpaceBefore() { float r; HRESULT hr = Get_SpaceBefore(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float SpaceBefore = {read=_scw_Get_SpaceBefore, write=Set_SpaceBefore};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_SpaceAfter() { float r; HRESULT hr = Get_SpaceAfter(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float SpaceAfter = {read=_scw_Get_SpaceAfter, write=Set_SpaceAfter};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_SpaceWithin() { float r; HRESULT hr = Get_SpaceWithin(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float SpaceWithin = {read=_scw_Get_SpaceWithin, write=Set_SpaceWithin};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_BaseLineAlignment() { Activex::TOleEnum r; HRESULT hr = Get_BaseLineAlignment(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum BaseLineAlignment = {read=_scw_Get_BaseLineAlignment, write=Set_BaseLineAlignment
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_FarEastLineBreakControl() { Activex::TOleEnum r; HRESULT hr = Get_FarEastLineBreakControl(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum FarEastLineBreakControl = {read=_scw_Get_FarEastLineBreakControl, write=
		Set_FarEastLineBreakControl};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_WordWrap() { Activex::TOleEnum r; HRESULT hr = Get_WordWrap(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum WordWrap = {read=_scw_Get_WordWrap, write=Set_WordWrap};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_HangingPunctuation() { Activex::TOleEnum r; HRESULT hr = Get_HangingPunctuation(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum HangingPunctuation = {read=_scw_Get_HangingPunctuation, write=Set_HangingPunctuation
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_TextDirection() { Activex::TOleEnum r; HRESULT hr = Get_TextDirection(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum TextDirection = {read=_scw_Get_TextDirection, write=Set_TextDirection}
		;
};

__dispinterface ParagraphFormatDisp;
typedef System::DelphiInterface<ParagraphFormatDisp> _di_ParagraphFormatDisp;
__dispinterface INTERFACE_UUID("{91493496-5A91-11CF-8700-00AA0060263B}") ParagraphFormatDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{91493497-5A91-11CF-8700-00AA0060263B}") BulletFormat  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Visible(Activex::TOleEnum &Get_Visible_result) = 0 ;
	virtual HRESULT __safecall Set_Visible(Activex::TOleEnum Visible) = 0 ;
	virtual HRESULT __safecall Get_Character(int &Get_Character_result) = 0 ;
	virtual HRESULT __safecall Set_Character(int Character) = 0 ;
	virtual HRESULT __safecall Get_RelativeSize(float &Get_RelativeSize_result) = 0 ;
	virtual HRESULT __safecall Set_RelativeSize(float RelativeSize) = 0 ;
	virtual HRESULT __safecall Get_UseTextColor(Activex::TOleEnum &Get_UseTextColor_result) = 0 ;
	virtual HRESULT __safecall Set_UseTextColor(Activex::TOleEnum UseTextColor) = 0 ;
	virtual HRESULT __safecall Get_UseTextFont(Activex::TOleEnum &Get_UseTextFont_result) = 0 ;
	virtual HRESULT __safecall Set_UseTextFont(Activex::TOleEnum UseTextFont) = 0 ;
	virtual HRESULT __safecall Get_Font(_di_Font &Get_Font_result) = 0 ;
	virtual HRESULT __safecall Get_Type_(Activex::TOleEnum &Get_Type__result) = 0 ;
	virtual HRESULT __safecall Set_Type_(Activex::TOleEnum Type_) = 0 ;
	virtual HRESULT __safecall Get_Style(Activex::TOleEnum &Get_Style_result) = 0 ;
	virtual HRESULT __safecall Set_Style(Activex::TOleEnum Style) = 0 ;
	virtual HRESULT __safecall Get_StartValue(int &Get_StartValue_result) = 0 ;
	virtual HRESULT __safecall Set_StartValue(int StartValue) = 0 ;
	virtual HRESULT __safecall Picture(const WideString Picture) = 0 ;
	virtual HRESULT __safecall Get_Number(int &Get_Number_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Visible() { Activex::TOleEnum r; HRESULT hr = Get_Visible(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Visible = {read=_scw_Get_Visible, write=Set_Visible};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Character() { int r; HRESULT hr = Get_Character(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Character = {read=_scw_Get_Character, write=Set_Character};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_RelativeSize() { float r; HRESULT hr = Get_RelativeSize(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property float RelativeSize = {read=_scw_Get_RelativeSize, write=Set_RelativeSize};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_UseTextColor() { Activex::TOleEnum r; HRESULT hr = Get_UseTextColor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum UseTextColor = {read=_scw_Get_UseTextColor, write=Set_UseTextColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_UseTextFont() { Activex::TOleEnum r; HRESULT hr = Get_UseTextFont(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum UseTextFont = {read=_scw_Get_UseTextFont, write=Set_UseTextFont};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Font _scw_Get_Font() { _di_Font r; HRESULT hr = Get_Font(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Font Font = {read=_scw_Get_Font};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Type_() { Activex::TOleEnum r; HRESULT hr = Get_Type_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Type_ = {read=_scw_Get_Type_, write=Set_Type_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Style() { Activex::TOleEnum r; HRESULT hr = Get_Style(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Style = {read=_scw_Get_Style, write=Set_Style};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_StartValue() { int r; HRESULT hr = Get_StartValue(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int StartValue = {read=_scw_Get_StartValue, write=Set_StartValue};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Number() { int r; HRESULT hr = Get_Number(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Number = {read=_scw_Get_Number};
};

__dispinterface BulletFormatDisp;
typedef System::DelphiInterface<BulletFormatDisp> _di_BulletFormatDisp;
__dispinterface INTERFACE_UUID("{91493497-5A91-11CF-8700-00AA0060263B}") BulletFormatDisp  : public IDispatch 
	
{
	
};

__interface TextStyle;
typedef System::DelphiInterface<TextStyle> _di_TextStyle;
__interface INTERFACE_UUID("{91493498-5A91-11CF-8700-00AA0060263B}") TextStyles  : public Collection 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Item(Activex::TOleEnum Type_, _di_TextStyle &Item_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface TextStylesDisp;
typedef System::DelphiInterface<TextStylesDisp> _di_TextStylesDisp;
__dispinterface INTERFACE_UUID("{91493498-5A91-11CF-8700-00AA0060263B}") TextStylesDisp  : public IDispatch 
	
{
	
};

__interface TextStyleLevels;
typedef System::DelphiInterface<TextStyleLevels> _di_TextStyleLevels;
__interface INTERFACE_UUID("{91493499-5A91-11CF-8700-00AA0060263B}") TextStyle  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Ruler(_di_Ruler &Get_Ruler_result) = 0 ;
	virtual HRESULT __safecall Get_TextFrame(_di_TextFrame &Get_TextFrame_result) = 0 ;
	virtual HRESULT __safecall Get_Levels(_di_TextStyleLevels &Get_Levels_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Ruler _scw_Get_Ruler() { _di_Ruler r; HRESULT hr = Get_Ruler(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Ruler Ruler = {read=_scw_Get_Ruler};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_TextFrame _scw_Get_TextFrame() { _di_TextFrame r; HRESULT hr = Get_TextFrame(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_TextFrame TextFrame = {read=_scw_Get_TextFrame};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_TextStyleLevels _scw_Get_Levels() { _di_TextStyleLevels r; HRESULT hr = Get_Levels(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_TextStyleLevels Levels = {read=_scw_Get_Levels};
};

__dispinterface TextStyleDisp;
typedef System::DelphiInterface<TextStyleDisp> _di_TextStyleDisp;
__dispinterface INTERFACE_UUID("{91493499-5A91-11CF-8700-00AA0060263B}") TextStyleDisp  : public IDispatch 
	
{
	
};

__interface TextStyleLevel;
typedef System::DelphiInterface<TextStyleLevel> _di_TextStyleLevel;
__interface INTERFACE_UUID("{9149349A-5A91-11CF-8700-00AA0060263B}") TextStyleLevels  : public Collection 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Item(int Level, _di_TextStyleLevel &Item_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface TextStyleLevelsDisp;
typedef System::DelphiInterface<TextStyleLevelsDisp> _di_TextStyleLevelsDisp;
__dispinterface INTERFACE_UUID("{9149349A-5A91-11CF-8700-00AA0060263B}") TextStyleLevelsDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{9149349B-5A91-11CF-8700-00AA0060263B}") TextStyleLevel  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_ParagraphFormat(_di_ParagraphFormat &Get_ParagraphFormat_result) = 0 
		;
	virtual HRESULT __safecall Get_Font(_di_Font &Get_Font_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_ParagraphFormat _scw_Get_ParagraphFormat() { _di_ParagraphFormat r; HRESULT hr = Get_ParagraphFormat(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_ParagraphFormat ParagraphFormat = {read=_scw_Get_ParagraphFormat};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Font _scw_Get_Font() { _di_Font r; HRESULT hr = Get_Font(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Font Font = {read=_scw_Get_Font};
};

__dispinterface TextStyleLevelDisp;
typedef System::DelphiInterface<TextStyleLevelDisp> _di_TextStyleLevelDisp;
__dispinterface INTERFACE_UUID("{9149349B-5A91-11CF-8700-00AA0060263B}") TextStyleLevelDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{9149349C-5A91-11CF-8700-00AA0060263B}") HeaderFooter  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Visible(Activex::TOleEnum &Get_Visible_result) = 0 ;
	virtual HRESULT __safecall Set_Visible(Activex::TOleEnum Visible) = 0 ;
	virtual HRESULT __safecall Get_Text(WideString &Get_Text_result) = 0 ;
	virtual HRESULT __safecall Set_Text(const WideString Text) = 0 ;
	virtual HRESULT __safecall Get_UseFormat(Activex::TOleEnum &Get_UseFormat_result) = 0 ;
	virtual HRESULT __safecall Set_UseFormat(Activex::TOleEnum UseFormat) = 0 ;
	virtual HRESULT __safecall Get_Format(Activex::TOleEnum &Get_Format_result) = 0 ;
	virtual HRESULT __safecall Set_Format(Activex::TOleEnum Format) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Visible() { Activex::TOleEnum r; HRESULT hr = Get_Visible(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Visible = {read=_scw_Get_Visible, write=Set_Visible};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Text() { WideString r; HRESULT hr = Get_Text(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Text = {read=_scw_Get_Text, write=Set_Text};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_UseFormat() { Activex::TOleEnum r; HRESULT hr = Get_UseFormat(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum UseFormat = {read=_scw_Get_UseFormat, write=Set_UseFormat};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Format() { Activex::TOleEnum r; HRESULT hr = Get_Format(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Format = {read=_scw_Get_Format, write=Set_Format};
};

__dispinterface HeaderFooterDisp;
typedef System::DelphiInterface<HeaderFooterDisp> _di_HeaderFooterDisp;
__dispinterface INTERFACE_UUID("{9149349C-5A91-11CF-8700-00AA0060263B}") HeaderFooterDisp  : public IDispatch 
	
{
	
};

__dispinterface PPDialogsDisp;
typedef System::DelphiInterface<PPDialogsDisp> _di_PPDialogsDisp;
__dispinterface INTERFACE_UUID("{9149349E-5A91-11CF-8700-00AA0060263B}") PPDialogsDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{9149349F-5A91-11CF-8700-00AA0060263B}") PPAlert  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Run(const WideString Title, int Type_, const WideString Text, const WideString 
		leftBtn, const WideString middleBtn, const WideString rightBtn) = 0 ;
	virtual HRESULT __safecall Get_PressedButton(int &Get_PressedButton_result) = 0 ;
	virtual HRESULT __safecall Get_OnButton(WideString &Get_OnButton_result) = 0 ;
	virtual HRESULT __safecall Set_OnButton(const WideString OnButton) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_PressedButton() { int r; HRESULT hr = Get_PressedButton(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int PressedButton = {read=_scw_Get_PressedButton};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnButton() { WideString r; HRESULT hr = Get_OnButton(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnButton = {read=_scw_Get_OnButton, write=Set_OnButton};
};

__dispinterface PPAlertDisp;
typedef System::DelphiInterface<PPAlertDisp> _di_PPAlertDisp;
__dispinterface INTERFACE_UUID("{9149349F-5A91-11CF-8700-00AA0060263B}") PPAlertDisp  : public IDispatch 
	
{
	
};

__interface PPControls;
typedef System::DelphiInterface<PPControls> _di_PPControls;
__interface PPTabSheets;
typedef System::DelphiInterface<PPTabSheets> _di_PPTabSheets;
__interface PPTabControl;
typedef System::DelphiInterface<PPTabControl> _di_PPTabControl;
__interface INTERFACE_UUID("{914934A0-5A91-11CF-8700-00AA0060263B}") PPDialog  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Style(Activex::TOleEnum &Get_Style_result) = 0 ;
	virtual HRESULT __safecall Get_Mode(Activex::TOleEnum &Get_Mode_result) = 0 ;
	virtual HRESULT __safecall Set_Mode(Activex::TOleEnum Mode) = 0 ;
	virtual HRESULT __safecall Get_HelpId(int &Get_HelpId_result) = 0 ;
	virtual HRESULT __safecall Set_HelpId(int HelpId) = 0 ;
	virtual HRESULT __safecall Get_HideOnIdle(Activex::TOleEnum &Get_HideOnIdle_result) = 0 ;
	virtual HRESULT __safecall Set_HideOnIdle(Activex::TOleEnum HideOnIdle) = 0 ;
	virtual HRESULT __safecall Get_resourceDLL(WideString &Get_resourceDLL_result) = 0 ;
	virtual HRESULT __safecall Set_resourceDLL(const WideString resourceDLL) = 0 ;
	virtual HRESULT __safecall Get_Caption(WideString &Get_Caption_result) = 0 ;
	virtual HRESULT __safecall Set_Caption(const WideString Caption) = 0 ;
	virtual HRESULT __safecall Get_Left(float &Get_Left_result) = 0 ;
	virtual HRESULT __safecall Set_Left(float Left) = 0 ;
	virtual HRESULT __safecall Get_Top(float &Get_Top_result) = 0 ;
	virtual HRESULT __safecall Set_Top(float Top) = 0 ;
	virtual HRESULT __safecall Get_Width(float &Get_Width_result) = 0 ;
	virtual HRESULT __safecall Set_Width(float Width) = 0 ;
	virtual HRESULT __safecall Get_Height(float &Get_Height_result) = 0 ;
	virtual HRESULT __safecall Set_Height(float Height) = 0 ;
	virtual HRESULT __safecall Get_ClientLeft(float &Get_ClientLeft_result) = 0 ;
	virtual HRESULT __safecall Get_ClientTop(float &Get_ClientTop_result) = 0 ;
	virtual HRESULT __safecall Get_ClientWidth(float &Get_ClientWidth_result) = 0 ;
	virtual HRESULT __safecall Get_ClientHeight(float &Get_ClientHeight_result) = 0 ;
	virtual HRESULT __safecall Get_Visible(Activex::TOleEnum &Get_Visible_result) = 0 ;
	virtual HRESULT __safecall Set_Visible(Activex::TOleEnum Visible) = 0 ;
	virtual HRESULT __safecall Get_Controls_(_di_PPControls &Get_Controls__result) = 0 ;
	virtual HRESULT __safecall Get_Tags(_di_Tags &Get_Tags_result) = 0 ;
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Set_Name(const WideString Name) = 0 ;
	virtual HRESULT __safecall Get_Sheets(_di_PPTabSheets &Get_Sheets_result) = 0 ;
	virtual HRESULT __safecall Get_TabControl(_di_PPTabControl &Get_TabControl_result) = 0 ;
	virtual HRESULT __safecall Get_DelayTime(int &Get_DelayTime_result) = 0 ;
	virtual HRESULT __safecall Set_DelayTime(int DelayTime) = 0 ;
	virtual HRESULT __safecall SaveDialog(const WideString FileName, int &SaveDialog_result) = 0 ;
	virtual HRESULT __safecall Terminate(void) = 0 ;
	virtual HRESULT __safecall Get_HWND(int &Get_HWND_result) = 0 ;
	virtual HRESULT __safecall Get_OnTerminate(WideString &Get_OnTerminate_result) = 0 ;
	virtual HRESULT __safecall Set_OnTerminate(const WideString OnTerminate) = 0 ;
	virtual HRESULT __safecall Get_OnIdle(WideString &Get_OnIdle_result) = 0 ;
	virtual HRESULT __safecall Set_OnIdle(const WideString OnIdle) = 0 ;
	virtual HRESULT __safecall Get_OnMouseDown(WideString &Get_OnMouseDown_result) = 0 ;
	virtual HRESULT __safecall Set_OnMouseDown(const WideString OnMouseDown) = 0 ;
	virtual HRESULT __safecall Get_OnMouseUp(WideString &Get_OnMouseUp_result) = 0 ;
	virtual HRESULT __safecall Set_OnMouseUp(const WideString OnMouseUp) = 0 ;
	virtual HRESULT __safecall Get_OnKeyPressed(WideString &Get_OnKeyPressed_result) = 0 ;
	virtual HRESULT __safecall Set_OnKeyPressed(const WideString OnKeyPressed) = 0 ;
	virtual HRESULT __safecall Get_OnTimer(WideString &Get_OnTimer_result) = 0 ;
	virtual HRESULT __safecall Set_OnTimer(const WideString OnTimer) = 0 ;
	virtual HRESULT __safecall Get_OnActivate(WideString &Get_OnActivate_result) = 0 ;
	virtual HRESULT __safecall Set_OnActivate(const WideString OnActivate) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Style() { Activex::TOleEnum r; HRESULT hr = Get_Style(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Style = {read=_scw_Get_Style};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Mode() { Activex::TOleEnum r; HRESULT hr = Get_Mode(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Mode = {read=_scw_Get_Mode, write=Set_Mode};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_HelpId() { int r; HRESULT hr = Get_HelpId(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int HelpId = {read=_scw_Get_HelpId, write=Set_HelpId};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_HideOnIdle() { Activex::TOleEnum r; HRESULT hr = Get_HideOnIdle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum HideOnIdle = {read=_scw_Get_HideOnIdle, write=Set_HideOnIdle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_resourceDLL() { WideString r; HRESULT hr = Get_resourceDLL(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString resourceDLL = {read=_scw_Get_resourceDLL, write=Set_resourceDLL};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Caption() { WideString r; HRESULT hr = Get_Caption(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Caption = {read=_scw_Get_Caption, write=Set_Caption};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Left() { float r; HRESULT hr = Get_Left(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Left = {read=_scw_Get_Left, write=Set_Left};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Top() { float r; HRESULT hr = Get_Top(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Top = {read=_scw_Get_Top, write=Set_Top};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Width() { float r; HRESULT hr = Get_Width(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Width = {read=_scw_Get_Width, write=Set_Width};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Height() { float r; HRESULT hr = Get_Height(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Height = {read=_scw_Get_Height, write=Set_Height};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_ClientLeft() { float r; HRESULT hr = Get_ClientLeft(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float ClientLeft = {read=_scw_Get_ClientLeft};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_ClientTop() { float r; HRESULT hr = Get_ClientTop(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float ClientTop = {read=_scw_Get_ClientTop};
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
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Visible() { Activex::TOleEnum r; HRESULT hr = Get_Visible(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Visible = {read=_scw_Get_Visible, write=Set_Visible};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_PPControls _scw_Get_Controls_() { _di_PPControls r; HRESULT hr = Get_Controls_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_PPControls Controls_ = {read=_scw_Get_Controls_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Tags _scw_Get_Tags() { _di_Tags r; HRESULT hr = Get_Tags(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Tags Tags = {read=_scw_Get_Tags};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name, write=Set_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_PPTabSheets _scw_Get_Sheets() { _di_PPTabSheets r; HRESULT hr = Get_Sheets(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_PPTabSheets Sheets = {read=_scw_Get_Sheets};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_PPTabControl _scw_Get_TabControl() { _di_PPTabControl r; HRESULT hr = Get_TabControl(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_PPTabControl TabControl = {read=_scw_Get_TabControl};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_DelayTime() { int r; HRESULT hr = Get_DelayTime(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int DelayTime = {read=_scw_Get_DelayTime, write=Set_DelayTime};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_HWND() { int r; HRESULT hr = Get_HWND(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int HWND = {read=_scw_Get_HWND};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnTerminate() { WideString r; HRESULT hr = Get_OnTerminate(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnTerminate = {read=_scw_Get_OnTerminate, write=Set_OnTerminate};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnIdle() { WideString r; HRESULT hr = Get_OnIdle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnIdle = {read=_scw_Get_OnIdle, write=Set_OnIdle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnMouseDown() { WideString r; HRESULT hr = Get_OnMouseDown(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnMouseDown = {read=_scw_Get_OnMouseDown, write=Set_OnMouseDown};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnMouseUp() { WideString r; HRESULT hr = Get_OnMouseUp(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnMouseUp = {read=_scw_Get_OnMouseUp, write=Set_OnMouseUp};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnKeyPressed() { WideString r; HRESULT hr = Get_OnKeyPressed(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnKeyPressed = {read=_scw_Get_OnKeyPressed, write=Set_OnKeyPressed};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnTimer() { WideString r; HRESULT hr = Get_OnTimer(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnTimer = {read=_scw_Get_OnTimer, write=Set_OnTimer};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnActivate() { WideString r; HRESULT hr = Get_OnActivate(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnActivate = {read=_scw_Get_OnActivate, write=Set_OnActivate};
};

__dispinterface PPDialogDisp;
typedef System::DelphiInterface<PPDialogDisp> _di_PPDialogDisp;
__dispinterface INTERFACE_UUID("{914934A0-5A91-11CF-8700-00AA0060263B}") PPDialogDisp  : public IDispatch 
	
{
	
};

__interface PPTabSheet;
typedef System::DelphiInterface<PPTabSheet> _di_PPTabSheet;
__interface INTERFACE_UUID("{914934A1-5A91-11CF-8700-00AA0060263B}") PPTabSheet  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Set_Name(const WideString Name) = 0 ;
	virtual HRESULT __safecall Select(void) = 0 ;
	virtual HRESULT __safecall Get_ClientLeft(float &Get_ClientLeft_result) = 0 ;
	virtual HRESULT __safecall Get_ClientTop(float &Get_ClientTop_result) = 0 ;
	virtual HRESULT __safecall Get_ClientWidth(float &Get_ClientWidth_result) = 0 ;
	virtual HRESULT __safecall Get_ClientHeight(float &Get_ClientHeight_result) = 0 ;
	virtual HRESULT __safecall Get_Controls_(_di_PPControls &Get_Controls__result) = 0 ;
	virtual HRESULT __safecall Get_Tags(_di_Tags &Get_Tags_result) = 0 ;
	virtual HRESULT __safecall Get_OnActivate(WideString &Get_OnActivate_result) = 0 ;
	virtual HRESULT __safecall Set_OnActivate(const WideString OnActivate) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name, write=Set_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_ClientLeft() { float r; HRESULT hr = Get_ClientLeft(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float ClientLeft = {read=_scw_Get_ClientLeft};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_ClientTop() { float r; HRESULT hr = Get_ClientTop(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float ClientTop = {read=_scw_Get_ClientTop};
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
	/* safecall wrapper */ inline _di_PPControls _scw_Get_Controls_() { _di_PPControls r; HRESULT hr = Get_Controls_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_PPControls Controls_ = {read=_scw_Get_Controls_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Tags _scw_Get_Tags() { _di_Tags r; HRESULT hr = Get_Tags(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Tags Tags = {read=_scw_Get_Tags};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnActivate() { WideString r; HRESULT hr = Get_OnActivate(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnActivate = {read=_scw_Get_OnActivate, write=Set_OnActivate};
};

__dispinterface PPTabSheetDisp;
typedef System::DelphiInterface<PPTabSheetDisp> _di_PPTabSheetDisp;
__dispinterface INTERFACE_UUID("{914934A1-5A91-11CF-8700-00AA0060263B}") PPTabSheetDisp  : public IDispatch 
	
{
	
};

__interface PPControl;
typedef System::DelphiInterface<PPControl> _di_PPControl;
__interface PPPushButton;
typedef System::DelphiInterface<PPPushButton> _di_PPPushButton;
__interface PPToggleButton;
typedef System::DelphiInterface<PPToggleButton> _di_PPToggleButton;
__interface PPBitmapButton;
typedef System::DelphiInterface<PPBitmapButton> _di_PPBitmapButton;
__interface PPListBox;
typedef System::DelphiInterface<PPListBox> _di_PPListBox;
__interface PPCheckBox;
typedef System::DelphiInterface<PPCheckBox> _di_PPCheckBox;
__interface PPRadioCluster;
typedef System::DelphiInterface<PPRadioCluster> _di_PPRadioCluster;
__interface PPStaticText;
typedef System::DelphiInterface<PPStaticText> _di_PPStaticText;
__interface PPEditText;
typedef System::DelphiInterface<PPEditText> _di_PPEditText;
__interface PPIcon;
typedef System::DelphiInterface<PPIcon> _di_PPIcon;
__interface PPBitmap;
typedef System::DelphiInterface<PPBitmap> _di_PPBitmap;
__interface PPSpinner;
typedef System::DelphiInterface<PPSpinner> _di_PPSpinner;
__interface PPScrollBar;
typedef System::DelphiInterface<PPScrollBar> _di_PPScrollBar;
__interface PPGroupBox;
typedef System::DelphiInterface<PPGroupBox> _di_PPGroupBox;
__interface PPDropDown;
typedef System::DelphiInterface<PPDropDown> _di_PPDropDown;
__interface PPDropDownEdit;
typedef System::DelphiInterface<PPDropDownEdit> _di_PPDropDownEdit;
__interface PPSlideMiniature;
typedef System::DelphiInterface<PPSlideMiniature> _di_PPSlideMiniature;
__interface PPFrame;
typedef System::DelphiInterface<PPFrame> _di_PPFrame;
__interface INTERFACE_UUID("{914934A2-5A91-11CF-8700-00AA0060263B}") PPControls  : public Collection 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Item(const OleVariant index, _di_PPControl &Item_result) = 0 ;
	virtual HRESULT __safecall AddPushButton(float Left, float Top, float Width, float Height, _di_PPPushButton &AddPushButton_result
		) = 0 ;
	virtual HRESULT __safecall AddToggleButton(float Left, float Top, float Width, float Height, _di_PPToggleButton &AddToggleButton_result
		) = 0 ;
	virtual HRESULT __safecall AddBitmapButton(float Left, float Top, float Width, float Height, _di_PPBitmapButton &AddBitmapButton_result
		) = 0 ;
	virtual HRESULT __safecall AddListBox(float Left, float Top, float Width, float Height, _di_PPListBox &AddListBox_result
		) = 0 ;
	virtual HRESULT __safecall AddCheckBox(float Left, float Top, float Width, float Height, _di_PPCheckBox &AddCheckBox_result
		) = 0 ;
	virtual HRESULT __safecall AddRadioCluster(float Left, float Top, float Width, float Height, _di_PPRadioCluster &AddRadioCluster_result
		) = 0 ;
	virtual HRESULT __safecall AddStaticText(float Left, float Top, float Width, float Height, _di_PPStaticText &AddStaticText_result
		) = 0 ;
	virtual HRESULT __safecall AddEditText(float Left, float Top, float Width, float Height, const OleVariant 
		VerticalScrollBar, _di_PPEditText &AddEditText_result) = 0 ;
	virtual HRESULT __safecall AddIcon(float Left, float Top, float Width, float Height, _di_PPIcon &AddIcon_result
		) = 0 ;
	virtual HRESULT __safecall AddBitmap(float Left, float Top, float Width, float Height, _di_PPBitmap &AddBitmap_result
		) = 0 ;
	virtual HRESULT __safecall AddSpinner(float Left, float Top, float Width, float Height, _di_PPSpinner &AddSpinner_result
		) = 0 ;
	virtual HRESULT __safecall AddScrollBar(Activex::TOleEnum Style, float Left, float Top, float Width
		, float Height, _di_PPScrollBar &AddScrollBar_result) = 0 ;
	virtual HRESULT __safecall AddGroupBox(float Left, float Top, float Width, float Height, _di_PPGroupBox &AddGroupBox_result
		) = 0 ;
	virtual HRESULT __safecall AddDropDown(float Left, float Top, float Width, float Height, _di_PPDropDown &AddDropDown_result
		) = 0 ;
	virtual HRESULT __safecall AddDropDownEdit(float Left, float Top, float Width, float Height, _di_PPDropDownEdit &AddDropDownEdit_result
		) = 0 ;
	virtual HRESULT __safecall AddMiniature(float Left, float Top, float Width, float Height, _di_PPSlideMiniature &AddMiniature_result
		) = 0 ;
	virtual HRESULT __safecall AddFrame(float Left, float Top, float Width, float Height, _di_PPFrame &AddFrame_result
		) = 0 ;
	virtual HRESULT __safecall Get_Visible(Activex::TOleEnum &Get_Visible_result) = 0 ;
	virtual HRESULT __safecall Set_Visible(Activex::TOleEnum Visible) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Visible() { Activex::TOleEnum r; HRESULT hr = Get_Visible(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Visible = {read=_scw_Get_Visible, write=Set_Visible};
};

__dispinterface PPControlsDisp;
typedef System::DelphiInterface<PPControlsDisp> _di_PPControlsDisp;
__dispinterface INTERFACE_UUID("{914934A2-5A91-11CF-8700-00AA0060263B}") PPControlsDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934A3-5A91-11CF-8700-00AA0060263B}") PPTabSheets  : public Collection 
	
{
	
public:
	virtual HRESULT __safecall Item(const OleVariant index, _di_PPTabSheet &Item_result) = 0 ;
	virtual HRESULT __safecall Add(const WideString Name, _di_PPTabSheet &Add_result) = 0 ;
	virtual HRESULT __safecall Get_ActiveSheet(_di_PPTabSheet &Get_ActiveSheet_result) = 0 ;
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Set_Name(const WideString Name) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_PPTabSheet _scw_Get_ActiveSheet() { _di_PPTabSheet r; HRESULT hr = Get_ActiveSheet(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_PPTabSheet ActiveSheet = {read=_scw_Get_ActiveSheet};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name, write=Set_Name};
};

__dispinterface PPTabSheetsDisp;
typedef System::DelphiInterface<PPTabSheetsDisp> _di_PPTabSheetsDisp;
__dispinterface INTERFACE_UUID("{914934A3-5A91-11CF-8700-00AA0060263B}") PPTabSheetsDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934A4-5A91-11CF-8700-00AA0060263B}") PPControl  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Enable(Activex::TOleEnum &Get_Enable_result) = 0 ;
	virtual HRESULT __safecall Set_Enable(Activex::TOleEnum Enable) = 0 ;
	virtual HRESULT __safecall Get_Visible(Activex::TOleEnum &Get_Visible_result) = 0 ;
	virtual HRESULT __safecall Set_Visible(Activex::TOleEnum Visible) = 0 ;
	virtual HRESULT __safecall Get_Focus(Activex::TOleEnum &Get_Focus_result) = 0 ;
	virtual HRESULT __safecall Set_Focus(Activex::TOleEnum Focus) = 0 ;
	virtual HRESULT __safecall Get_Label_(WideString &Get_Label__result) = 0 ;
	virtual HRESULT __safecall Set_Label_(const WideString Label_) = 0 ;
	virtual HRESULT __safecall Get_HelpId(int &Get_HelpId_result) = 0 ;
	virtual HRESULT __safecall Set_HelpId(int HelpId) = 0 ;
	virtual HRESULT __safecall Get_Left(float &Get_Left_result) = 0 ;
	virtual HRESULT __safecall Set_Left(float Left) = 0 ;
	virtual HRESULT __safecall Get_Top(float &Get_Top_result) = 0 ;
	virtual HRESULT __safecall Set_Top(float Top) = 0 ;
	virtual HRESULT __safecall Get_Width(float &Get_Width_result) = 0 ;
	virtual HRESULT __safecall Set_Width(float Width) = 0 ;
	virtual HRESULT __safecall Get_Height(float &Get_Height_result) = 0 ;
	virtual HRESULT __safecall Set_Height(float Height) = 0 ;
	virtual HRESULT __safecall Get_HWND(int &Get_HWND_result) = 0 ;
	virtual HRESULT __safecall Get_OnSetFocus(WideString &Get_OnSetFocus_result) = 0 ;
	virtual HRESULT __safecall Set_OnSetFocus(const WideString OnSetFocus) = 0 ;
	virtual HRESULT __safecall Get_OnKillFocus(WideString &Get_OnKillFocus_result) = 0 ;
	virtual HRESULT __safecall Set_OnKillFocus(const WideString OnKillFocus) = 0 ;
	virtual HRESULT __safecall Get_Tags(_di_Tags &Get_Tags_result) = 0 ;
	virtual HRESULT __safecall Get_Name(WideString &Get_Name_result) = 0 ;
	virtual HRESULT __safecall Set_Name(const WideString Name) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Enable() { Activex::TOleEnum r; HRESULT hr = Get_Enable(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Enable = {read=_scw_Get_Enable, write=Set_Enable};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Visible() { Activex::TOleEnum r; HRESULT hr = Get_Visible(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Visible = {read=_scw_Get_Visible, write=Set_Visible};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Focus() { Activex::TOleEnum r; HRESULT hr = Get_Focus(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Focus = {read=_scw_Get_Focus, write=Set_Focus};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Label_() { WideString r; HRESULT hr = Get_Label_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Label_ = {read=_scw_Get_Label_, write=Set_Label_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_HelpId() { int r; HRESULT hr = Get_HelpId(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int HelpId = {read=_scw_Get_HelpId, write=Set_HelpId};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Left() { float r; HRESULT hr = Get_Left(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Left = {read=_scw_Get_Left, write=Set_Left};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Top() { float r; HRESULT hr = Get_Top(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Top = {read=_scw_Get_Top, write=Set_Top};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Width() { float r; HRESULT hr = Get_Width(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Width = {read=_scw_Get_Width, write=Set_Width};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Height() { float r; HRESULT hr = Get_Height(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Height = {read=_scw_Get_Height, write=Set_Height};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_HWND() { int r; HRESULT hr = Get_HWND(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int HWND = {read=_scw_Get_HWND};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnSetFocus() { WideString r; HRESULT hr = Get_OnSetFocus(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnSetFocus = {read=_scw_Get_OnSetFocus, write=Set_OnSetFocus};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnKillFocus() { WideString r; HRESULT hr = Get_OnKillFocus(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnKillFocus = {read=_scw_Get_OnKillFocus, write=Set_OnKillFocus};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Tags _scw_Get_Tags() { _di_Tags r; HRESULT hr = Get_Tags(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Tags Tags = {read=_scw_Get_Tags};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Name() { WideString r; HRESULT hr = Get_Name(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Name = {read=_scw_Get_Name, write=Set_Name};
};

__dispinterface PPControlDisp;
typedef System::DelphiInterface<PPControlDisp> _di_PPControlDisp;
__dispinterface INTERFACE_UUID("{914934A4-5A91-11CF-8700-00AA0060263B}") PPControlDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934A5-5A91-11CF-8700-00AA0060263B}") PPPushButton  : public PPControl 
	
{
	
public:
	virtual HRESULT __safecall Click(void) = 0 ;
	virtual HRESULT __safecall Get_IsDefault(Activex::TOleEnum &Get_IsDefault_result) = 0 ;
	virtual HRESULT __safecall Set_IsDefault(Activex::TOleEnum IsDefault) = 0 ;
	virtual HRESULT __safecall Get_IsEscape(Activex::TOleEnum &Get_IsEscape_result) = 0 ;
	virtual HRESULT __safecall Set_IsEscape(Activex::TOleEnum IsEscape) = 0 ;
	virtual HRESULT __safecall Get_OnPressed(WideString &Get_OnPressed_result) = 0 ;
	virtual HRESULT __safecall Set_OnPressed(const WideString OnPressed) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_IsDefault() { Activex::TOleEnum r; HRESULT hr = Get_IsDefault(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum IsDefault = {read=_scw_Get_IsDefault, write=Set_IsDefault};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_IsEscape() { Activex::TOleEnum r; HRESULT hr = Get_IsEscape(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum IsEscape = {read=_scw_Get_IsEscape, write=Set_IsEscape};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnPressed() { WideString r; HRESULT hr = Get_OnPressed(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnPressed = {read=_scw_Get_OnPressed, write=Set_OnPressed};
};

__dispinterface PPPushButtonDisp;
typedef System::DelphiInterface<PPPushButtonDisp> _di_PPPushButtonDisp;
__dispinterface INTERFACE_UUID("{914934A5-5A91-11CF-8700-00AA0060263B}") PPPushButtonDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934A6-5A91-11CF-8700-00AA0060263B}") PPToggleButton  : public PPControl 
	
{
	
public:
	virtual HRESULT __safecall Get_State(Activex::TOleEnum &Get_State_result) = 0 ;
	virtual HRESULT __safecall Set_State(Activex::TOleEnum State) = 0 ;
	virtual HRESULT __safecall Get_ResourceID(int &Get_ResourceID_result) = 0 ;
	virtual HRESULT __safecall Set_ResourceID(int ResourceID) = 0 ;
	virtual HRESULT __safecall Click(void) = 0 ;
	virtual HRESULT __safecall Get_OnClick(WideString &Get_OnClick_result) = 0 ;
	virtual HRESULT __safecall Set_OnClick(const WideString OnClick) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_State() { Activex::TOleEnum r; HRESULT hr = Get_State(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum State = {read=_scw_Get_State, write=Set_State};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ResourceID() { int r; HRESULT hr = Get_ResourceID(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int ResourceID = {read=_scw_Get_ResourceID, write=Set_ResourceID};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnClick() { WideString r; HRESULT hr = Get_OnClick(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnClick = {read=_scw_Get_OnClick, write=Set_OnClick};
};

__dispinterface PPToggleButtonDisp;
typedef System::DelphiInterface<PPToggleButtonDisp> _di_PPToggleButtonDisp;
__dispinterface INTERFACE_UUID("{914934A6-5A91-11CF-8700-00AA0060263B}") PPToggleButtonDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934A7-5A91-11CF-8700-00AA0060263B}") PPBitmapButton  : public PPControl 
	
{
	
public:
	virtual HRESULT __safecall Click(void) = 0 ;
	virtual HRESULT __safecall Get_ResourceID(int &Get_ResourceID_result) = 0 ;
	virtual HRESULT __safecall Set_ResourceID(int ResourceID) = 0 ;
	virtual HRESULT __safecall Get_OnPressed(WideString &Get_OnPressed_result) = 0 ;
	virtual HRESULT __safecall Set_OnPressed(const WideString OnPressed) = 0 ;
	virtual HRESULT __safecall Get_IsDefault(Activex::TOleEnum &Get_IsDefault_result) = 0 ;
	virtual HRESULT __safecall Set_IsDefault(Activex::TOleEnum IsDefault) = 0 ;
	virtual HRESULT __safecall Get_IsEscape(Activex::TOleEnum &Get_IsEscape_result) = 0 ;
	virtual HRESULT __safecall Set_IsEscape(Activex::TOleEnum IsEscape) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ResourceID() { int r; HRESULT hr = Get_ResourceID(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int ResourceID = {read=_scw_Get_ResourceID, write=Set_ResourceID};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnPressed() { WideString r; HRESULT hr = Get_OnPressed(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnPressed = {read=_scw_Get_OnPressed, write=Set_OnPressed};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_IsDefault() { Activex::TOleEnum r; HRESULT hr = Get_IsDefault(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum IsDefault = {read=_scw_Get_IsDefault, write=Set_IsDefault};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_IsEscape() { Activex::TOleEnum r; HRESULT hr = Get_IsEscape(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum IsEscape = {read=_scw_Get_IsEscape, write=Set_IsEscape};
};

__dispinterface PPBitmapButtonDisp;
typedef System::DelphiInterface<PPBitmapButtonDisp> _di_PPBitmapButtonDisp;
__dispinterface INTERFACE_UUID("{914934A7-5A91-11CF-8700-00AA0060263B}") PPBitmapButtonDisp  : public IDispatch 
	
{
	
};

__interface PPStrings;
typedef System::DelphiInterface<PPStrings> _di_PPStrings;
__interface INTERFACE_UUID("{914934A8-5A91-11CF-8700-00AA0060263B}") PPListBox  : public PPControl 
{
	
public:
	virtual HRESULT __safecall Get_Strings(_di_PPStrings &Get_Strings_result) = 0 ;
	virtual HRESULT __safecall Get_SelectionStyle(Activex::TOleEnum &Get_SelectionStyle_result) = 0 ;
	virtual HRESULT __safecall Set_SelectionStyle(Activex::TOleEnum SelectionStyle) = 0 ;
	virtual HRESULT __safecall SetTabStops(const OleVariant safeArrayTabStops) = 0 ;
	virtual HRESULT __safecall Get_FocusItem(int &Get_FocusItem_result) = 0 ;
	virtual HRESULT __safecall Set_FocusItem(int FocusItem) = 0 ;
	virtual HRESULT __safecall Get_TopItem(int &Get_TopItem_result) = 0 ;
	virtual HRESULT __safecall Get_OnSelectionChange(WideString &Get_OnSelectionChange_result) = 0 ;
	virtual HRESULT __safecall Set_OnSelectionChange(const WideString OnSelectionChange) = 0 ;
	virtual HRESULT __safecall Get_OnDoubleClick(WideString &Get_OnDoubleClick_result) = 0 ;
	virtual HRESULT __safecall Set_OnDoubleClick(const WideString OnDoubleClick) = 0 ;
	virtual HRESULT __safecall Get_IsSelected(int index, Activex::TOleEnum &Get_IsSelected_result) = 0 
		;
	virtual HRESULT __safecall Set_IsSelected(int index, Activex::TOleEnum IsSelected) = 0 ;
	virtual HRESULT __safecall Abbreviate(Activex::TOleEnum Style) = 0 ;
	virtual HRESULT __safecall Get_IsAbbreviated(Activex::TOleEnum &Get_IsAbbreviated_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_PPStrings _scw_Get_Strings() { _di_PPStrings r; HRESULT hr = Get_Strings(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_PPStrings Strings = {read=_scw_Get_Strings};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_SelectionStyle() { Activex::TOleEnum r; HRESULT hr = Get_SelectionStyle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum SelectionStyle = {read=_scw_Get_SelectionStyle, write=Set_SelectionStyle
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_FocusItem() { int r; HRESULT hr = Get_FocusItem(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int FocusItem = {read=_scw_Get_FocusItem, write=Set_FocusItem};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_TopItem() { int r; HRESULT hr = Get_TopItem(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int TopItem = {read=_scw_Get_TopItem};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnSelectionChange() { WideString r; HRESULT hr = Get_OnSelectionChange(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnSelectionChange = {read=_scw_Get_OnSelectionChange, write=Set_OnSelectionChange
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnDoubleClick() { WideString r; HRESULT hr = Get_OnDoubleClick(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnDoubleClick = {read=_scw_Get_OnDoubleClick, write=Set_OnDoubleClick};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_IsSelected(int index) { Activex::TOleEnum r; HRESULT hr = Get_IsSelected(
		index, r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum IsSelected[int index] = {read=_scw_Get_IsSelected, write=Set_IsSelected
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_IsAbbreviated() { Activex::TOleEnum r; HRESULT hr = Get_IsAbbreviated(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum IsAbbreviated = {read=_scw_Get_IsAbbreviated};
};

__dispinterface PPListBoxDisp;
typedef System::DelphiInterface<PPListBoxDisp> _di_PPListBoxDisp;
__dispinterface INTERFACE_UUID("{914934A8-5A91-11CF-8700-00AA0060263B}") PPListBoxDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934A9-5A91-11CF-8700-00AA0060263B}") PPStrings  : public Collection 
	
{
	
public:
	virtual HRESULT __safecall Item(int index, WideString &Item_result) = 0 ;
	virtual HRESULT __safecall Add(const WideString String_, WideString &Add_result) = 0 ;
	virtual HRESULT __safecall Insert(const WideString String_, int Position) = 0 ;
	virtual HRESULT __safecall Delete(int index) = 0 ;
};

__dispinterface PPStringsDisp;
typedef System::DelphiInterface<PPStringsDisp> _di_PPStringsDisp;
__dispinterface INTERFACE_UUID("{914934A9-5A91-11CF-8700-00AA0060263B}") PPStringsDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934AA-5A91-11CF-8700-00AA0060263B}") PPCheckBox  : public PPControl 
	
{
	
public:
	virtual HRESULT __safecall Get_State(Activex::TOleEnum &Get_State_result) = 0 ;
	virtual HRESULT __safecall Set_State(Activex::TOleEnum State) = 0 ;
	virtual HRESULT __safecall Click(void) = 0 ;
	virtual HRESULT __safecall Get_OnClick(WideString &Get_OnClick_result) = 0 ;
	virtual HRESULT __safecall Set_OnClick(const WideString OnClick) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_State() { Activex::TOleEnum r; HRESULT hr = Get_State(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum State = {read=_scw_Get_State, write=Set_State};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnClick() { WideString r; HRESULT hr = Get_OnClick(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnClick = {read=_scw_Get_OnClick, write=Set_OnClick};
};

__dispinterface PPCheckBoxDisp;
typedef System::DelphiInterface<PPCheckBoxDisp> _di_PPCheckBoxDisp;
__dispinterface INTERFACE_UUID("{914934AA-5A91-11CF-8700-00AA0060263B}") PPCheckBoxDisp  : public IDispatch 
	
{
	
};

__interface PPRadioButton;
typedef System::DelphiInterface<PPRadioButton> _di_PPRadioButton;
__interface INTERFACE_UUID("{914934AB-5A91-11CF-8700-00AA0060263B}") PPRadioCluster  : public PPControl 
	
{
	
public:
	virtual HRESULT __safecall Item(const OleVariant index, _di_PPRadioButton &Item_result) = 0 ;
	virtual HRESULT __safecall Add(float Left, float Top, float Width, float Height, _di_PPRadioButton &Add_result
		) = 0 ;
	virtual HRESULT __safecall Get_Count(int &Get_Count_result) = 0 ;
	virtual HRESULT __safecall Get_Selected(_di_PPRadioButton &Get_Selected_result) = 0 ;
	virtual HRESULT __safecall Get_OnClick(WideString &Get_OnClick_result) = 0 ;
	virtual HRESULT __safecall Set_OnClick(const WideString OnClick) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Count() { int r; HRESULT hr = Get_Count(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Count = {read=_scw_Get_Count};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_PPRadioButton _scw_Get_Selected() { _di_PPRadioButton r; HRESULT hr = Get_Selected(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_PPRadioButton Selected = {read=_scw_Get_Selected};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnClick() { WideString r; HRESULT hr = Get_OnClick(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnClick = {read=_scw_Get_OnClick, write=Set_OnClick};
};

__dispinterface PPRadioClusterDisp;
typedef System::DelphiInterface<PPRadioClusterDisp> _di_PPRadioClusterDisp;
__dispinterface INTERFACE_UUID("{914934AB-5A91-11CF-8700-00AA0060263B}") PPRadioClusterDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934AC-5A91-11CF-8700-00AA0060263B}") PPStaticText  : public PPControl 
	
{
	
public:
	virtual HRESULT __safecall Get_UseForegroundColor(Activex::TOleEnum &Get_UseForegroundColor_result)
		 = 0 ;
	virtual HRESULT __safecall Set_UseForegroundColor(Activex::TOleEnum UseForegroundColor) = 0 ;
	virtual HRESULT __safecall Get_UseBackgroundColor(Activex::TOleEnum &Get_UseBackgroundColor_result)
		 = 0 ;
	virtual HRESULT __safecall Set_UseBackgroundColor(Activex::TOleEnum UseBackgroundColor) = 0 ;
	virtual HRESULT __safecall Get_ForegroundColor(int &Get_ForegroundColor_result) = 0 ;
	virtual HRESULT __safecall Set_ForegroundColor(int ForegroundColor) = 0 ;
	virtual HRESULT __safecall Get_BackgroundColor(int &Get_BackgroundColor_result) = 0 ;
	virtual HRESULT __safecall Set_BackgroundColor(int BackgroundColor) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_UseForegroundColor() { Activex::TOleEnum r; HRESULT hr = Get_UseForegroundColor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum UseForegroundColor = {read=_scw_Get_UseForegroundColor, write=Set_UseForegroundColor
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_UseBackgroundColor() { Activex::TOleEnum r; HRESULT hr = Get_UseBackgroundColor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum UseBackgroundColor = {read=_scw_Get_UseBackgroundColor, write=Set_UseBackgroundColor
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ForegroundColor() { int r; HRESULT hr = Get_ForegroundColor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int ForegroundColor = {read=_scw_Get_ForegroundColor, write=Set_ForegroundColor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_BackgroundColor() { int r; HRESULT hr = Get_BackgroundColor(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property int BackgroundColor = {read=_scw_Get_BackgroundColor, write=Set_BackgroundColor};
};

__dispinterface PPStaticTextDisp;
typedef System::DelphiInterface<PPStaticTextDisp> _di_PPStaticTextDisp;
__dispinterface INTERFACE_UUID("{914934AC-5A91-11CF-8700-00AA0060263B}") PPStaticTextDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934AD-5A91-11CF-8700-00AA0060263B}") PPEditText  : public PPControl 
	
{
	
public:
	virtual HRESULT __safecall Get_MultiLine(Activex::TOleEnum &Get_MultiLine_result) = 0 ;
	virtual HRESULT __safecall Set_MultiLine(Activex::TOleEnum MultiLine) = 0 ;
	virtual HRESULT __safecall Get_VerticalScrollBar(Activex::TOleEnum &Get_VerticalScrollBar_result) = 0 
		;
	virtual HRESULT __safecall Set_VerticalScrollBar(Activex::TOleEnum VerticalScrollBar) = 0 ;
	virtual HRESULT __safecall Get_WordWrap(Activex::TOleEnum &Get_WordWrap_result) = 0 ;
	virtual HRESULT __safecall Set_WordWrap(Activex::TOleEnum WordWrap) = 0 ;
	virtual HRESULT __safecall Get_ReadOnly(Activex::TOleEnum &Get_ReadOnly_result) = 0 ;
	virtual HRESULT __safecall Set_ReadOnly(Activex::TOleEnum ReadOnly) = 0 ;
	virtual HRESULT __safecall Get_Text(WideString &Get_Text_result) = 0 ;
	virtual HRESULT __safecall Set_Text(const WideString Text) = 0 ;
	virtual HRESULT __safecall Get_MaxLength(int &Get_MaxLength_result) = 0 ;
	virtual HRESULT __safecall Set_MaxLength(int MaxLength) = 0 ;
	virtual HRESULT __safecall Get_OnAChange(WideString &Get_OnAChange_result) = 0 ;
	virtual HRESULT __safecall Set_OnAChange(const WideString OnAChange) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_MultiLine() { Activex::TOleEnum r; HRESULT hr = Get_MultiLine(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum MultiLine = {read=_scw_Get_MultiLine, write=Set_MultiLine};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_VerticalScrollBar() { Activex::TOleEnum r; HRESULT hr = Get_VerticalScrollBar(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum VerticalScrollBar = {read=_scw_Get_VerticalScrollBar, write=Set_VerticalScrollBar
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_WordWrap() { Activex::TOleEnum r; HRESULT hr = Get_WordWrap(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum WordWrap = {read=_scw_Get_WordWrap, write=Set_WordWrap};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ReadOnly() { Activex::TOleEnum r; HRESULT hr = Get_ReadOnly(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ReadOnly = {read=_scw_Get_ReadOnly, write=Set_ReadOnly};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Text() { WideString r; HRESULT hr = Get_Text(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property WideString Text = {read=_scw_Get_Text, write=Set_Text};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_MaxLength() { int r; HRESULT hr = Get_MaxLength(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int MaxLength = {read=_scw_Get_MaxLength, write=Set_MaxLength};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnAChange() { WideString r; HRESULT hr = Get_OnAChange(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnAChange = {read=_scw_Get_OnAChange, write=Set_OnAChange};
};

__dispinterface PPEditTextDisp;
typedef System::DelphiInterface<PPEditTextDisp> _di_PPEditTextDisp;
__dispinterface INTERFACE_UUID("{914934AD-5A91-11CF-8700-00AA0060263B}") PPEditTextDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934AE-5A91-11CF-8700-00AA0060263B}") PPIcon  : public PPControl 
{
	
public:
	virtual HRESULT __safecall Get_ResourceID(int &Get_ResourceID_result) = 0 ;
	virtual HRESULT __safecall Set_ResourceID(int ResourceID) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ResourceID() { int r; HRESULT hr = Get_ResourceID(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int ResourceID = {read=_scw_Get_ResourceID, write=Set_ResourceID};
};

__dispinterface PPIconDisp;
typedef System::DelphiInterface<PPIconDisp> _di_PPIconDisp;
__dispinterface INTERFACE_UUID("{914934AE-5A91-11CF-8700-00AA0060263B}") PPIconDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934AF-5A91-11CF-8700-00AA0060263B}") PPBitmap  : public PPControl 
{
	
public:
	virtual HRESULT __safecall Get_ResourceID(int &Get_ResourceID_result) = 0 ;
	virtual HRESULT __safecall Set_ResourceID(int ResourceID) = 0 ;
	virtual HRESULT __safecall Get_OnClick(WideString &Get_OnClick_result) = 0 ;
	virtual HRESULT __safecall Set_OnClick(const WideString OnClick) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ResourceID() { int r; HRESULT hr = Get_ResourceID(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int ResourceID = {read=_scw_Get_ResourceID, write=Set_ResourceID};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnClick() { WideString r; HRESULT hr = Get_OnClick(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnClick = {read=_scw_Get_OnClick, write=Set_OnClick};
};

__dispinterface PPBitmapDisp;
typedef System::DelphiInterface<PPBitmapDisp> _di_PPBitmapDisp;
__dispinterface INTERFACE_UUID("{914934AF-5A91-11CF-8700-00AA0060263B}") PPBitmapDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934B0-5A91-11CF-8700-00AA0060263B}") PPSpinner  : public PPControl 
{
	
public:
	virtual HRESULT __safecall Get_Minimum(int &Get_Minimum_result) = 0 ;
	virtual HRESULT __safecall Set_Minimum(int Minimum) = 0 ;
	virtual HRESULT __safecall Get_Maximum(int &Get_Maximum_result) = 0 ;
	virtual HRESULT __safecall Set_Maximum(int Maximum) = 0 ;
	virtual HRESULT __safecall Get_Increment(int &Get_Increment_result) = 0 ;
	virtual HRESULT __safecall Set_Increment(int Increment) = 0 ;
	virtual HRESULT __safecall Get_PageChange(int &Get_PageChange_result) = 0 ;
	virtual HRESULT __safecall Set_PageChange(int PageChange) = 0 ;
	virtual HRESULT __safecall Get_CurrentValue(int &Get_CurrentValue_result) = 0 ;
	virtual HRESULT __safecall Set_CurrentValue(int CurrentValue) = 0 ;
	virtual HRESULT __safecall Get_OnAChange(WideString &Get_OnAChange_result) = 0 ;
	virtual HRESULT __safecall Set_OnAChange(const WideString OnAChange) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Minimum() { int r; HRESULT hr = Get_Minimum(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Minimum = {read=_scw_Get_Minimum, write=Set_Minimum};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Maximum() { int r; HRESULT hr = Get_Maximum(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Maximum = {read=_scw_Get_Maximum, write=Set_Maximum};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Increment() { int r; HRESULT hr = Get_Increment(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Increment = {read=_scw_Get_Increment, write=Set_Increment};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_PageChange() { int r; HRESULT hr = Get_PageChange(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int PageChange = {read=_scw_Get_PageChange, write=Set_PageChange};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_CurrentValue() { int r; HRESULT hr = Get_CurrentValue(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int CurrentValue = {read=_scw_Get_CurrentValue, write=Set_CurrentValue};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnAChange() { WideString r; HRESULT hr = Get_OnAChange(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnAChange = {read=_scw_Get_OnAChange, write=Set_OnAChange};
};

__dispinterface PPSpinnerDisp;
typedef System::DelphiInterface<PPSpinnerDisp> _di_PPSpinnerDisp;
__dispinterface INTERFACE_UUID("{914934B0-5A91-11CF-8700-00AA0060263B}") PPSpinnerDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934B1-5A91-11CF-8700-00AA0060263B}") PPScrollBar  : public PPControl 
	
{
	
public:
	virtual HRESULT __safecall Get_Minimum(int &Get_Minimum_result) = 0 ;
	virtual HRESULT __safecall Set_Minimum(int Minimum) = 0 ;
	virtual HRESULT __safecall Get_Maximum(int &Get_Maximum_result) = 0 ;
	virtual HRESULT __safecall Set_Maximum(int Maximum) = 0 ;
	virtual HRESULT __safecall Get_Increment(int &Get_Increment_result) = 0 ;
	virtual HRESULT __safecall Set_Increment(int Increment) = 0 ;
	virtual HRESULT __safecall Get_PageChange(int &Get_PageChange_result) = 0 ;
	virtual HRESULT __safecall Set_PageChange(int PageChange) = 0 ;
	virtual HRESULT __safecall Get_CurrentValue(int &Get_CurrentValue_result) = 0 ;
	virtual HRESULT __safecall Set_CurrentValue(int CurrentValue) = 0 ;
	virtual HRESULT __safecall Get_OnScroll(WideString &Get_OnScroll_result) = 0 ;
	virtual HRESULT __safecall Set_OnScroll(const WideString OnScroll) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Minimum() { int r; HRESULT hr = Get_Minimum(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Minimum = {read=_scw_Get_Minimum, write=Set_Minimum};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Maximum() { int r; HRESULT hr = Get_Maximum(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Maximum = {read=_scw_Get_Maximum, write=Set_Maximum};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Increment() { int r; HRESULT hr = Get_Increment(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Increment = {read=_scw_Get_Increment, write=Set_Increment};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_PageChange() { int r; HRESULT hr = Get_PageChange(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int PageChange = {read=_scw_Get_PageChange, write=Set_PageChange};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_CurrentValue() { int r; HRESULT hr = Get_CurrentValue(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int CurrentValue = {read=_scw_Get_CurrentValue, write=Set_CurrentValue};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnScroll() { WideString r; HRESULT hr = Get_OnScroll(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnScroll = {read=_scw_Get_OnScroll, write=Set_OnScroll};
};

__dispinterface PPScrollBarDisp;
typedef System::DelphiInterface<PPScrollBarDisp> _di_PPScrollBarDisp;
__dispinterface INTERFACE_UUID("{914934B1-5A91-11CF-8700-00AA0060263B}") PPScrollBarDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934B2-5A91-11CF-8700-00AA0060263B}") PPGroupBox  : public PPControl 
	
{
	
};

__dispinterface PPGroupBoxDisp;
typedef System::DelphiInterface<PPGroupBoxDisp> _di_PPGroupBoxDisp;
__dispinterface INTERFACE_UUID("{914934B2-5A91-11CF-8700-00AA0060263B}") PPGroupBoxDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934B3-5A91-11CF-8700-00AA0060263B}") PPFrame  : public PPControl 
{
	
};

__dispinterface PPFrameDisp;
typedef System::DelphiInterface<PPFrameDisp> _di_PPFrameDisp;
__dispinterface INTERFACE_UUID("{914934B3-5A91-11CF-8700-00AA0060263B}") PPFrameDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934B4-5A91-11CF-8700-00AA0060263B}") PPTabControl  : public PPControl 
	
{
	
};

__dispinterface PPTabControlDisp;
typedef System::DelphiInterface<PPTabControlDisp> _di_PPTabControlDisp;
__dispinterface INTERFACE_UUID("{914934B4-5A91-11CF-8700-00AA0060263B}") PPTabControlDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934B5-5A91-11CF-8700-00AA0060263B}") PPDropDown  : public PPControl 
	
{
	
public:
	virtual HRESULT __safecall Get_Strings(_di_PPStrings &Get_Strings_result) = 0 ;
	virtual HRESULT __safecall Get_FocusItem(int &Get_FocusItem_result) = 0 ;
	virtual HRESULT __safecall Set_FocusItem(int FocusItem) = 0 ;
	virtual HRESULT __safecall Get_OnSelectionChange(WideString &Get_OnSelectionChange_result) = 0 ;
	virtual HRESULT __safecall Set_OnSelectionChange(const WideString OnSelectionChange) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_PPStrings _scw_Get_Strings() { _di_PPStrings r; HRESULT hr = Get_Strings(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_PPStrings Strings = {read=_scw_Get_Strings};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_FocusItem() { int r; HRESULT hr = Get_FocusItem(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int FocusItem = {read=_scw_Get_FocusItem, write=Set_FocusItem};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnSelectionChange() { WideString r; HRESULT hr = Get_OnSelectionChange(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnSelectionChange = {read=_scw_Get_OnSelectionChange, write=Set_OnSelectionChange
		};
};

__dispinterface PPDropDownDisp;
typedef System::DelphiInterface<PPDropDownDisp> _di_PPDropDownDisp;
__dispinterface INTERFACE_UUID("{914934B5-5A91-11CF-8700-00AA0060263B}") PPDropDownDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934B6-5A91-11CF-8700-00AA0060263B}") PPDropDownEdit  : public PPControl 
	
{
	
public:
	virtual HRESULT __safecall Get_Strings(_di_PPStrings &Get_Strings_result) = 0 ;
	virtual HRESULT __safecall Get_FocusItem(int &Get_FocusItem_result) = 0 ;
	virtual HRESULT __safecall Set_FocusItem(int FocusItem) = 0 ;
	virtual HRESULT __safecall Get_OnSelectionChange(WideString &Get_OnSelectionChange_result) = 0 ;
	virtual HRESULT __safecall Set_OnSelectionChange(const WideString OnSelectionChange) = 0 ;
	virtual HRESULT __safecall Get_OnEdit(WideString &Get_OnEdit_result) = 0 ;
	virtual HRESULT __safecall Set_OnEdit(const WideString OnEdit) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_PPStrings _scw_Get_Strings() { _di_PPStrings r; HRESULT hr = Get_Strings(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_PPStrings Strings = {read=_scw_Get_Strings};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_FocusItem() { int r; HRESULT hr = Get_FocusItem(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int FocusItem = {read=_scw_Get_FocusItem, write=Set_FocusItem};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnSelectionChange() { WideString r; HRESULT hr = Get_OnSelectionChange(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnSelectionChange = {read=_scw_Get_OnSelectionChange, write=Set_OnSelectionChange
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnEdit() { WideString r; HRESULT hr = Get_OnEdit(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnEdit = {read=_scw_Get_OnEdit, write=Set_OnEdit};
};

__dispinterface PPDropDownEditDisp;
typedef System::DelphiInterface<PPDropDownEditDisp> _di_PPDropDownEditDisp;
__dispinterface INTERFACE_UUID("{914934B6-5A91-11CF-8700-00AA0060263B}") PPDropDownEditDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934B7-5A91-11CF-8700-00AA0060263B}") PPSlideMiniature  : public PPControl 
	
{
	
public:
	virtual HRESULT __safecall SetImage(const _di__Slide Slide) = 0 ;
	virtual HRESULT __safecall Get_Selected(int &Get_Selected_result) = 0 ;
	virtual HRESULT __safecall Set_Selected(int Selected) = 0 ;
	virtual HRESULT __safecall Get_OnClick(WideString &Get_OnClick_result) = 0 ;
	virtual HRESULT __safecall Set_OnClick(const WideString OnClick) = 0 ;
	virtual HRESULT __safecall Get_OnDoubleClick(WideString &Get_OnDoubleClick_result) = 0 ;
	virtual HRESULT __safecall Set_OnDoubleClick(const WideString OnDoubleClick) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Selected() { int r; HRESULT hr = Get_Selected(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int Selected = {read=_scw_Get_Selected, write=Set_Selected};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnClick() { WideString r; HRESULT hr = Get_OnClick(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnClick = {read=_scw_Get_OnClick, write=Set_OnClick};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnDoubleClick() { WideString r; HRESULT hr = Get_OnDoubleClick(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnDoubleClick = {read=_scw_Get_OnDoubleClick, write=Set_OnDoubleClick};
};

__dispinterface PPSlideMiniatureDisp;
typedef System::DelphiInterface<PPSlideMiniatureDisp> _di_PPSlideMiniatureDisp;
__dispinterface INTERFACE_UUID("{914934B7-5A91-11CF-8700-00AA0060263B}") PPSlideMiniatureDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934B8-5A91-11CF-8700-00AA0060263B}") PPRadioButton  : public PPControl 
	
{
	
public:
	virtual HRESULT __safecall Get_State(Activex::TOleEnum &Get_State_result) = 0 ;
	virtual HRESULT __safecall Set_State(Activex::TOleEnum State) = 0 ;
	virtual HRESULT __safecall Click(void) = 0 ;
	virtual HRESULT __safecall DoubleClick(void) = 0 ;
	virtual HRESULT __safecall Get_OnClick(WideString &Get_OnClick_result) = 0 ;
	virtual HRESULT __safecall Set_OnClick(const WideString OnClick) = 0 ;
	virtual HRESULT __safecall Get_OnDoubleClick(WideString &Get_OnDoubleClick_result) = 0 ;
	virtual HRESULT __safecall Set_OnDoubleClick(const WideString OnDoubleClick) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_State() { Activex::TOleEnum r; HRESULT hr = Get_State(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum State = {read=_scw_Get_State, write=Set_State};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnClick() { WideString r; HRESULT hr = Get_OnClick(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnClick = {read=_scw_Get_OnClick, write=Set_OnClick};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnDoubleClick() { WideString r; HRESULT hr = Get_OnDoubleClick(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnDoubleClick = {read=_scw_Get_OnDoubleClick, write=Set_OnDoubleClick};
};

__dispinterface PPRadioButtonDisp;
typedef System::DelphiInterface<PPRadioButtonDisp> _di_PPRadioButtonDisp;
__dispinterface INTERFACE_UUID("{914934B8-5A91-11CF-8700-00AA0060263B}") PPRadioButtonDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934B9-5A91-11CF-8700-00AA0060263B}") Tags  : public Collection 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Item(const WideString Name, WideString &Item_result) = 0 ;
	virtual HRESULT __safecall Add(const WideString Name, const WideString Value) = 0 ;
	virtual HRESULT __safecall Delete(const WideString Name) = 0 ;
	virtual HRESULT __safecall AddBinary(const WideString Name, const WideString FilePath) = 0 ;
	virtual HRESULT __safecall BinaryValue(const WideString Name, int &BinaryValue_result) = 0 ;
	virtual HRESULT __safecall Name(int index, WideString &Name_result) = 0 ;
	virtual HRESULT __safecall Value(int index, WideString &Value_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface TagsDisp;
typedef System::DelphiInterface<TagsDisp> _di_TagsDisp;
__dispinterface INTERFACE_UUID("{914934B9-5A91-11CF-8700-00AA0060263B}") TagsDisp  : public IDispatch 
	
{
	
};

__interface FileDialogFileList;
typedef System::DelphiInterface<FileDialogFileList> _di_FileDialogFileList;
__interface INTERFACE_UUID("{914934BA-5A91-11CF-8700-00AA0060263B}") FileDialogFileList  : public Collection 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Item(int index, WideString &Item_result) = 0 ;
	virtual HRESULT __safecall DisplayName(int index, WideString &DisplayName_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface FileDialogFileListDisp;
typedef System::DelphiInterface<FileDialogFileListDisp> _di_FileDialogFileListDisp;
__dispinterface INTERFACE_UUID("{914934BA-5A91-11CF-8700-00AA0060263B}") FileDialogFileListDisp  : public IDispatch 
	
{
	
};

__interface FileDialogExtension;
typedef System::DelphiInterface<FileDialogExtension> _di_FileDialogExtension;
__interface INTERFACE_UUID("{914934BB-5A91-11CF-8700-00AA0060263B}") FileDialogExtension  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Extensions(WideString &Get_Extensions_result) = 0 ;
	virtual HRESULT __safecall Set_Extensions(const WideString Extensions) = 0 ;
	virtual HRESULT __safecall Get_Description(WideString &Get_Description_result) = 0 ;
	virtual HRESULT __safecall Set_Description(const WideString Description) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Extensions() { WideString r; HRESULT hr = Get_Extensions(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Extensions = {read=_scw_Get_Extensions, write=Set_Extensions};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_Description() { WideString r; HRESULT hr = Get_Description(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString Description = {read=_scw_Get_Description, write=Set_Description};
};

__dispinterface FileDialogExtensionDisp;
typedef System::DelphiInterface<FileDialogExtensionDisp> _di_FileDialogExtensionDisp;
__dispinterface INTERFACE_UUID("{914934BB-5A91-11CF-8700-00AA0060263B}") FileDialogExtensionDisp  : public IDispatch 
	
{
	
};

__interface FileDialogExtensionList;
typedef System::DelphiInterface<FileDialogExtensionList> _di_FileDialogExtensionList;
__interface INTERFACE_UUID("{914934BC-5A91-11CF-8700-00AA0060263B}") FileDialogExtensionList  : public Collection 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Item(int index, _di_FileDialogExtension &Item_result) = 0 ;
	virtual HRESULT __safecall Add(const WideString Extension, const WideString Description, _di_FileDialogExtension &Add_result
		) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface FileDialogExtensionListDisp;
typedef System::DelphiInterface<FileDialogExtensionListDisp> _di_FileDialogExtensionListDisp;
__dispinterface INTERFACE_UUID("{914934BC-5A91-11CF-8700-00AA0060263B}") FileDialogExtensionListDisp 
	 : public IDispatch 
{
	
};

__interface INTERFACE_UUID("{914934BD-5A91-11CF-8700-00AA0060263B}") FileDialog  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Extensions(_di_FileDialogExtensionList &Get_Extensions_result) = 0 ;
		
	virtual HRESULT __safecall Get_DefaultDirectoryRegKey(WideString &Get_DefaultDirectoryRegKey_result
		) = 0 ;
	virtual HRESULT __safecall Set_DefaultDirectoryRegKey(const WideString DefaultDirectoryRegKey) = 0 
		;
	virtual HRESULT __safecall Get_DialogTitle(WideString &Get_DialogTitle_result) = 0 ;
	virtual HRESULT __safecall Set_DialogTitle(const WideString DialogTitle) = 0 ;
	virtual HRESULT __safecall Get_ActionButtonName(WideString &Get_ActionButtonName_result) = 0 ;
	virtual HRESULT __safecall Set_ActionButtonName(const WideString ActionButtonName) = 0 ;
	virtual HRESULT __safecall Get_IsMultiSelect(Activex::TOleEnum &Get_IsMultiSelect_result) = 0 ;
	virtual HRESULT __safecall Set_IsMultiSelect(Activex::TOleEnum IsMultiSelect) = 0 ;
	virtual HRESULT __safecall Get_IsPrintEnabled(Activex::TOleEnum &Get_IsPrintEnabled_result) = 0 ;
	virtual HRESULT __safecall Set_IsPrintEnabled(Activex::TOleEnum IsPrintEnabled) = 0 ;
	virtual HRESULT __safecall Get_IsReadOnlyEnabled(Activex::TOleEnum &Get_IsReadOnlyEnabled_result) = 0 
		;
	virtual HRESULT __safecall Set_IsReadOnlyEnabled(Activex::TOleEnum IsReadOnlyEnabled) = 0 ;
	virtual HRESULT __safecall Get_DirectoriesOnly(Activex::TOleEnum &Get_DirectoriesOnly_result) = 0 ;
		
	virtual HRESULT __safecall Set_DirectoriesOnly(Activex::TOleEnum DirectoriesOnly) = 0 ;
	virtual HRESULT __safecall Get_InitialView(Activex::TOleEnum &Get_InitialView_result) = 0 ;
	virtual HRESULT __safecall Set_InitialView(Activex::TOleEnum InitialView) = 0 ;
	virtual HRESULT __safecall Launch(const _di_IUnknown pUnk) = 0 ;
	virtual HRESULT __safecall Get_OnAction(WideString &Get_OnAction_result) = 0 ;
	virtual HRESULT __safecall Set_OnAction(const WideString OnAction) = 0 ;
	virtual HRESULT __safecall Get_Files(_di_FileDialogFileList &Get_Files_result) = 0 ;
	virtual HRESULT __safecall Get_UseODMADlgs(Activex::TOleEnum &Get_UseODMADlgs_result) = 0 ;
	virtual HRESULT __safecall Set_UseODMADlgs(Activex::TOleEnum UseODMADlgs) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_FileDialogExtensionList _scw_Get_Extensions() { _di_FileDialogExtensionList r; HRESULT hr = Get_Extensions(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_FileDialogExtensionList Extensions = {read=_scw_Get_Extensions};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_DefaultDirectoryRegKey() { WideString r; HRESULT hr = Get_DefaultDirectoryRegKey(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString DefaultDirectoryRegKey = {read=_scw_Get_DefaultDirectoryRegKey, write=Set_DefaultDirectoryRegKey
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_DialogTitle() { WideString r; HRESULT hr = Get_DialogTitle(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString DialogTitle = {read=_scw_Get_DialogTitle, write=Set_DialogTitle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_ActionButtonName() { WideString r; HRESULT hr = Get_ActionButtonName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString ActionButtonName = {read=_scw_Get_ActionButtonName, write=Set_ActionButtonName
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_IsMultiSelect() { Activex::TOleEnum r; HRESULT hr = Get_IsMultiSelect(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum IsMultiSelect = {read=_scw_Get_IsMultiSelect, write=Set_IsMultiSelect}
		;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_IsPrintEnabled() { Activex::TOleEnum r; HRESULT hr = Get_IsPrintEnabled(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum IsPrintEnabled = {read=_scw_Get_IsPrintEnabled, write=Set_IsPrintEnabled
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_IsReadOnlyEnabled() { Activex::TOleEnum r; HRESULT hr = Get_IsReadOnlyEnabled(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum IsReadOnlyEnabled = {read=_scw_Get_IsReadOnlyEnabled, write=Set_IsReadOnlyEnabled
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_DirectoriesOnly() { Activex::TOleEnum r; HRESULT hr = Get_DirectoriesOnly(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum DirectoriesOnly = {read=_scw_Get_DirectoriesOnly, write=Set_DirectoriesOnly
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_InitialView() { Activex::TOleEnum r; HRESULT hr = Get_InitialView(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum InitialView = {read=_scw_Get_InitialView, write=Set_InitialView};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_OnAction() { WideString r; HRESULT hr = Get_OnAction(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString OnAction = {read=_scw_Get_OnAction, write=Set_OnAction};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_FileDialogFileList _scw_Get_Files() { _di_FileDialogFileList r; HRESULT hr = Get_Files(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_FileDialogFileList Files = {read=_scw_Get_Files};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_UseODMADlgs() { Activex::TOleEnum r; HRESULT hr = Get_UseODMADlgs(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum UseODMADlgs = {read=_scw_Get_UseODMADlgs, write=Set_UseODMADlgs};
};

__dispinterface FileDialogDisp;
typedef System::DelphiInterface<FileDialogDisp> _di_FileDialogDisp;
__dispinterface INTERFACE_UUID("{914934BD-5A91-11CF-8700-00AA0060263B}") FileDialogDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934BE-5A91-11CF-8700-00AA0060263B}") MouseTracker  : public IUnknown 
	
{
	
public:
	virtual HRESULT __stdcall OnTrack(float X, float Y) = 0 ;
	virtual HRESULT __stdcall EndTrack(float X, float Y) = 0 ;
};

__dispinterface OCXExtenderDisp;
typedef System::DelphiInterface<OCXExtenderDisp> _di_OCXExtenderDisp;
__dispinterface INTERFACE_UUID("{914934BF-5A91-11CF-8700-00AA0060263B}") OCXExtenderDisp  : public IDispatch 
	
{
	
};

__interface OCXExtenderEvents;
typedef System::DelphiInterface<OCXExtenderEvents> _di_OCXExtenderEvents;
__interface INTERFACE_UUID("{914934C0-5A91-11CF-8700-00AA0060263B}") OCXExtenderEvents  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall GotFocus(void) = 0 ;
	virtual HRESULT __stdcall LostFocus(void) = 0 ;
};

__interface Columns;
typedef System::DelphiInterface<Columns> _di_Columns;
__interface Rows;
typedef System::DelphiInterface<Rows> _di_Rows;
__interface Cell;
typedef System::DelphiInterface<Cell> _di_Cell;
__interface INTERFACE_UUID("{914934C2-5A91-11CF-8700-00AA0060263B}") Table  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Columns(_di_Columns &Get_Columns_result) = 0 ;
	virtual HRESULT __safecall Get_Rows(_di_Rows &Get_Rows_result) = 0 ;
	virtual HRESULT __safecall Cell(int Row, int Column, _di_Cell &Cell_result) = 0 ;
	virtual HRESULT __safecall Get_TableDirection(Activex::TOleEnum &Get_TableDirection_result) = 0 ;
	virtual HRESULT __safecall Set_TableDirection(Activex::TOleEnum TableDirection) = 0 ;
	virtual HRESULT __safecall MergeBorders(void) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Columns _scw_Get_Columns() { _di_Columns r; HRESULT hr = Get_Columns(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Columns Columns = {read=_scw_Get_Columns};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Rows _scw_Get_Rows() { _di_Rows r; HRESULT hr = Get_Rows(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Rows Rows = {read=_scw_Get_Rows};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_TableDirection() { Activex::TOleEnum r; HRESULT hr = Get_TableDirection(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum TableDirection = {read=_scw_Get_TableDirection, write=Set_TableDirection
		};
};

__dispinterface TableDisp;
typedef System::DelphiInterface<TableDisp> _di_TableDisp;
__dispinterface INTERFACE_UUID("{914934C2-5A91-11CF-8700-00AA0060263B}") TableDisp  : public IDispatch 
	
{
	
};

__interface Column;
typedef System::DelphiInterface<Column> _di_Column;
__interface INTERFACE_UUID("{914934C3-5A91-11CF-8700-00AA0060263B}") Columns  : public Collection 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Item(int index, _di_Column &Item_result) = 0 ;
	virtual HRESULT __safecall Add(int BeforeColumn, _di_Column &Add_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface ColumnsDisp;
typedef System::DelphiInterface<ColumnsDisp> _di_ColumnsDisp;
__dispinterface INTERFACE_UUID("{914934C3-5A91-11CF-8700-00AA0060263B}") ColumnsDisp  : public IDispatch 
	
{
	
};

__interface CellRange;
typedef System::DelphiInterface<CellRange> _di_CellRange;
__interface INTERFACE_UUID("{914934C4-5A91-11CF-8700-00AA0060263B}") Column  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Cells(_di_CellRange &Get_Cells_result) = 0 ;
	virtual HRESULT __safecall Select(void) = 0 ;
	virtual HRESULT __safecall Delete(void) = 0 ;
	virtual HRESULT __safecall Get_Width(float &Get_Width_result) = 0 ;
	virtual HRESULT __safecall Set_Width(float Width) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_CellRange _scw_Get_Cells() { _di_CellRange r; HRESULT hr = Get_Cells(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_CellRange Cells = {read=_scw_Get_Cells};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Width() { float r; HRESULT hr = Get_Width(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Width = {read=_scw_Get_Width, write=Set_Width};
};

__dispinterface ColumnDisp;
typedef System::DelphiInterface<ColumnDisp> _di_ColumnDisp;
__dispinterface INTERFACE_UUID("{914934C4-5A91-11CF-8700-00AA0060263B}") ColumnDisp  : public IDispatch 
	
{
	
};

__interface Row;
typedef System::DelphiInterface<Row> _di_Row;
__interface INTERFACE_UUID("{914934C5-5A91-11CF-8700-00AA0060263B}") Rows  : public Collection 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Item(int index, _di_Row &Item_result) = 0 ;
	virtual HRESULT __safecall Add(int BeforeRow, _di_Row &Add_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface RowsDisp;
typedef System::DelphiInterface<RowsDisp> _di_RowsDisp;
__dispinterface INTERFACE_UUID("{914934C5-5A91-11CF-8700-00AA0060263B}") RowsDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934C6-5A91-11CF-8700-00AA0060263B}") Row  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Cells(_di_CellRange &Get_Cells_result) = 0 ;
	virtual HRESULT __safecall Select(void) = 0 ;
	virtual HRESULT __safecall Delete(void) = 0 ;
	virtual HRESULT __safecall Get_Height(float &Get_Height_result) = 0 ;
	virtual HRESULT __safecall Set_Height(float Height) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_CellRange _scw_Get_Cells() { _di_CellRange r; HRESULT hr = Get_Cells(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_CellRange Cells = {read=_scw_Get_Cells};
	#pragma option push -w-inl
	/* safecall wrapper */ inline float _scw_Get_Height() { float r; HRESULT hr = Get_Height(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property float Height = {read=_scw_Get_Height, write=Set_Height};
};

__dispinterface RowDisp;
typedef System::DelphiInterface<RowDisp> _di_RowDisp;
__dispinterface INTERFACE_UUID("{914934C6-5A91-11CF-8700-00AA0060263B}") RowDisp  : public IDispatch 
	
{
	
};

__interface Borders;
typedef System::DelphiInterface<Borders> _di_Borders;
__interface INTERFACE_UUID("{914934C7-5A91-11CF-8700-00AA0060263B}") CellRange  : public Collection 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Item(int index, _di_Cell &Item_result) = 0 ;
	virtual HRESULT __safecall Get_Borders(_di_Borders &Get_Borders_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Borders _scw_Get_Borders() { _di_Borders r; HRESULT hr = Get_Borders(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Borders Borders = {read=_scw_Get_Borders};
};

__dispinterface CellRangeDisp;
typedef System::DelphiInterface<CellRangeDisp> _di_CellRangeDisp;
__dispinterface INTERFACE_UUID("{914934C7-5A91-11CF-8700-00AA0060263B}") CellRangeDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934C8-5A91-11CF-8700-00AA0060263B}") Cell  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Shape(_di_Shape &Get_Shape_result) = 0 ;
	virtual HRESULT __safecall Get_Borders(_di_Borders &Get_Borders_result) = 0 ;
	virtual HRESULT __safecall Merge(const _di_Cell MergeTo) = 0 ;
	virtual HRESULT __safecall Split(int NumRows, int NumColumns) = 0 ;
	virtual HRESULT __safecall Select(void) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Shape _scw_Get_Shape() { _di_Shape r; HRESULT hr = Get_Shape(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property _di_Shape Shape = {read=_scw_Get_Shape};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_Borders _scw_Get_Borders() { _di_Borders r; HRESULT hr = Get_Borders(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_Borders Borders = {read=_scw_Get_Borders};
};

__dispinterface CellDisp;
typedef System::DelphiInterface<CellDisp> _di_CellDisp;
__dispinterface INTERFACE_UUID("{914934C8-5A91-11CF-8700-00AA0060263B}") CellDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934C9-5A91-11CF-8700-00AA0060263B}") Borders  : public Collection 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Item(Activex::TOleEnum BorderType, _di_LineFormat &Item_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface BordersDisp;
typedef System::DelphiInterface<BordersDisp> _di_BordersDisp;
__dispinterface INTERFACE_UUID("{914934C9-5A91-11CF-8700-00AA0060263B}") BordersDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934CA-5A91-11CF-8700-00AA0060263B}") Panes  : public Collection 
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Item(int index, _di_Pane &Item_result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface PanesDisp;
typedef System::DelphiInterface<PanesDisp> _di_PanesDisp;
__dispinterface INTERFACE_UUID("{914934CA-5A91-11CF-8700-00AA0060263B}") PanesDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934CB-5A91-11CF-8700-00AA0060263B}") Pane  : public IDispatch 
{
	
public:
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Activate(void) = 0 ;
	virtual HRESULT __safecall Get_Active(Activex::TOleEnum &Get_Active_result) = 0 ;
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_ViewType(Activex::TOleEnum &Get_ViewType_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Active() { Activex::TOleEnum r; HRESULT hr = Get_Active(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Active = {read=_scw_Get_Active};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ViewType() { Activex::TOleEnum r; HRESULT hr = Get_ViewType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ViewType = {read=_scw_Get_ViewType};
};

__dispinterface PaneDisp;
typedef System::DelphiInterface<PaneDisp> _di_PaneDisp;
__dispinterface INTERFACE_UUID("{914934CB-5A91-11CF-8700-00AA0060263B}") PaneDisp  : public IDispatch 
	
{
	
};

__dispinterface DefaultWebOptionsDisp;
typedef System::DelphiInterface<DefaultWebOptionsDisp> _di_DefaultWebOptionsDisp;
__dispinterface INTERFACE_UUID("{914934CC-5A91-11CF-8700-00AA0060263B}") DefaultWebOptionsDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934CD-5A91-11CF-8700-00AA0060263B}") WebOptions  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_IncludeNavigation(Activex::TOleEnum &Get_IncludeNavigation_result) = 0 
		;
	virtual HRESULT __safecall Set_IncludeNavigation(Activex::TOleEnum IncludeNavigation) = 0 ;
	virtual HRESULT __safecall Get_FrameColors(Activex::TOleEnum &Get_FrameColors_result) = 0 ;
	virtual HRESULT __safecall Set_FrameColors(Activex::TOleEnum FrameColors) = 0 ;
	virtual HRESULT __safecall Get_ResizeGraphics(Activex::TOleEnum &Get_ResizeGraphics_result) = 0 ;
	virtual HRESULT __safecall Set_ResizeGraphics(Activex::TOleEnum ResizeGraphics) = 0 ;
	virtual HRESULT __safecall Get_ShowSlideAnimation(Activex::TOleEnum &Get_ShowSlideAnimation_result)
		 = 0 ;
	virtual HRESULT __safecall Set_ShowSlideAnimation(Activex::TOleEnum ShowSlideAnimation) = 0 ;
	virtual HRESULT __safecall Get_OrganizeInFolder(Activex::TOleEnum &Get_OrganizeInFolder_result) = 0 
		;
	virtual HRESULT __safecall Set_OrganizeInFolder(Activex::TOleEnum OrganizeInFolder) = 0 ;
	virtual HRESULT __safecall Get_UseLongFileNames(Activex::TOleEnum &Get_UseLongFileNames_result) = 0 
		;
	virtual HRESULT __safecall Set_UseLongFileNames(Activex::TOleEnum UseLongFileNames) = 0 ;
	virtual HRESULT __safecall Get_RelyOnVML(Activex::TOleEnum &Get_RelyOnVML_result) = 0 ;
	virtual HRESULT __safecall Set_RelyOnVML(Activex::TOleEnum RelyOnVML) = 0 ;
	virtual HRESULT __safecall Get_AllowPNG(Activex::TOleEnum &Get_AllowPNG_result) = 0 ;
	virtual HRESULT __safecall Set_AllowPNG(Activex::TOleEnum AllowPNG) = 0 ;
	virtual HRESULT __safecall Get_ScreenSize(Activex::TOleEnum &Get_ScreenSize_result) = 0 ;
	virtual HRESULT __safecall Set_ScreenSize(Activex::TOleEnum ScreenSize) = 0 ;
	virtual HRESULT __safecall Get_Encoding(Activex::TOleEnum &Get_Encoding_result) = 0 ;
	virtual HRESULT __safecall Set_Encoding(Activex::TOleEnum Encoding) = 0 ;
	virtual HRESULT __safecall Get_FolderSuffix(WideString &Get_FolderSuffix_result) = 0 ;
	virtual HRESULT __safecall UseDefaultFolderSuffix(void) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_IncludeNavigation() { Activex::TOleEnum r; HRESULT hr = Get_IncludeNavigation(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum IncludeNavigation = {read=_scw_Get_IncludeNavigation, write=Set_IncludeNavigation
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_FrameColors() { Activex::TOleEnum r; HRESULT hr = Get_FrameColors(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum FrameColors = {read=_scw_Get_FrameColors, write=Set_FrameColors};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ResizeGraphics() { Activex::TOleEnum r; HRESULT hr = Get_ResizeGraphics(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ResizeGraphics = {read=_scw_Get_ResizeGraphics, write=Set_ResizeGraphics
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ShowSlideAnimation() { Activex::TOleEnum r; HRESULT hr = Get_ShowSlideAnimation(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ShowSlideAnimation = {read=_scw_Get_ShowSlideAnimation, write=Set_ShowSlideAnimation
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_OrganizeInFolder() { Activex::TOleEnum r; HRESULT hr = Get_OrganizeInFolder(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum OrganizeInFolder = {read=_scw_Get_OrganizeInFolder, write=Set_OrganizeInFolder
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_UseLongFileNames() { Activex::TOleEnum r; HRESULT hr = Get_UseLongFileNames(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum UseLongFileNames = {read=_scw_Get_UseLongFileNames, write=Set_UseLongFileNames
		};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_RelyOnVML() { Activex::TOleEnum r; HRESULT hr = Get_RelyOnVML(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum RelyOnVML = {read=_scw_Get_RelyOnVML, write=Set_RelyOnVML};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_AllowPNG() { Activex::TOleEnum r; HRESULT hr = Get_AllowPNG(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum AllowPNG = {read=_scw_Get_AllowPNG, write=Set_AllowPNG};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_ScreenSize() { Activex::TOleEnum r; HRESULT hr = Get_ScreenSize(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum ScreenSize = {read=_scw_Get_ScreenSize, write=Set_ScreenSize};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_Encoding() { Activex::TOleEnum r; HRESULT hr = Get_Encoding(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum Encoding = {read=_scw_Get_Encoding, write=Set_Encoding};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_FolderSuffix() { WideString r; HRESULT hr = Get_FolderSuffix(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString FolderSuffix = {read=_scw_Get_FolderSuffix};
};

__dispinterface WebOptionsDisp;
typedef System::DelphiInterface<WebOptionsDisp> _di_WebOptionsDisp;
__dispinterface INTERFACE_UUID("{914934CD-5A91-11CF-8700-00AA0060263B}") WebOptionsDisp  : public IDispatch 
	
{
	
};

__interface PublishObject;
typedef System::DelphiInterface<PublishObject> _di_PublishObject;
__interface INTERFACE_UUID("{914934CE-5A91-11CF-8700-00AA0060263B}") PublishObjects  : public Collection 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Item(int index, _di_PublishObject &Item_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
};

__dispinterface PublishObjectsDisp;
typedef System::DelphiInterface<PublishObjectsDisp> _di_PublishObjectsDisp;
__dispinterface INTERFACE_UUID("{914934CE-5A91-11CF-8700-00AA0060263B}") PublishObjectsDisp  : public IDispatch 
	
{
	
};

__interface INTERFACE_UUID("{914934CF-5A91-11CF-8700-00AA0060263B}") PublishObject  : public IDispatch 
	
{
	
public:
	virtual HRESULT __safecall Get_Application_(_di__Application &Get_Application__result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_HTMLVersion(Activex::TOleEnum &Get_HTMLVersion_result) = 0 ;
	virtual HRESULT __safecall Set_HTMLVersion(Activex::TOleEnum HTMLVersion) = 0 ;
	virtual HRESULT __safecall Get_SourceType(Activex::TOleEnum &Get_SourceType_result) = 0 ;
	virtual HRESULT __safecall Set_SourceType(Activex::TOleEnum SourceType) = 0 ;
	virtual HRESULT __safecall Get_RangeStart(int &Get_RangeStart_result) = 0 ;
	virtual HRESULT __safecall Set_RangeStart(int RangeStart) = 0 ;
	virtual HRESULT __safecall Get_RangeEnd(int &Get_RangeEnd_result) = 0 ;
	virtual HRESULT __safecall Set_RangeEnd(int RangeEnd) = 0 ;
	virtual HRESULT __safecall Get_SlideShowName(WideString &Get_SlideShowName_result) = 0 ;
	virtual HRESULT __safecall Set_SlideShowName(const WideString SlideShowName) = 0 ;
	virtual HRESULT __safecall Get_SpeakerNotes(Activex::TOleEnum &Get_SpeakerNotes_result) = 0 ;
	virtual HRESULT __safecall Set_SpeakerNotes(Activex::TOleEnum SpeakerNotes) = 0 ;
	virtual HRESULT __safecall Get_FileName(WideString &Get_FileName_result) = 0 ;
	virtual HRESULT __safecall Set_FileName(const WideString FileName) = 0 ;
	virtual HRESULT __safecall Publish(void) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di__Application _scw_Get_Application_() { _di__Application r; HRESULT hr = Get_Application_(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di__Application Application_ = {read=_scw_Get_Application_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch r; HRESULT hr = Get_Parent(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_HTMLVersion() { Activex::TOleEnum r; HRESULT hr = Get_HTMLVersion(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum HTMLVersion = {read=_scw_Get_HTMLVersion, write=Set_HTMLVersion};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_SourceType() { Activex::TOleEnum r; HRESULT hr = Get_SourceType(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum SourceType = {read=_scw_Get_SourceType, write=Set_SourceType};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_RangeStart() { int r; HRESULT hr = Get_RangeStart(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int RangeStart = {read=_scw_Get_RangeStart, write=Set_RangeStart};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_RangeEnd() { int r; HRESULT hr = Get_RangeEnd(r); System::CheckSafecallResult(hr); return r; }
		
	#pragma option pop
	__property int RangeEnd = {read=_scw_Get_RangeEnd, write=Set_RangeEnd};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_SlideShowName() { WideString r; HRESULT hr = Get_SlideShowName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString SlideShowName = {read=_scw_Get_SlideShowName, write=Set_SlideShowName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline Activex::TOleEnum _scw_Get_SpeakerNotes() { Activex::TOleEnum r; HRESULT hr = Get_SpeakerNotes(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property Activex::TOleEnum SpeakerNotes = {read=_scw_Get_SpeakerNotes, write=Set_SpeakerNotes};
	#pragma option push -w-inl
	/* safecall wrapper */ inline WideString _scw_Get_FileName() { WideString r; HRESULT hr = Get_FileName(
		r); System::CheckSafecallResult(hr); return r; }
	#pragma option pop
	__property WideString FileName = {read=_scw_Get_FileName, write=Set_FileName};
};

__dispinterface PublishObjectDisp;
typedef System::DelphiInterface<PublishObjectDisp> _di_PublishObjectDisp;
__dispinterface INTERFACE_UUID("{914934CF-5A91-11CF-8700-00AA0060263B}") PublishObjectDisp  : public IDispatch 
	
{
	
};

__dispinterface MarkerDisp;
typedef System::DelphiInterface<MarkerDisp> _di_MarkerDisp;
__dispinterface INTERFACE_UUID("{914934D0-5A91-11CF-8700-00AA0060263B}") MarkerDisp  : public IDispatch 
	
{
	
};

class DELPHICLASS CoGlobal;
class PASCALIMPLEMENTATION CoGlobal : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__Global __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__Global __fastcall CreateRemote(TMetaClass* vmt, const AnsiString 
		MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoGlobal(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoGlobal(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoSlide;
class PASCALIMPLEMENTATION CoSlide : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__Slide __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__Slide __fastcall CreateRemote(TMetaClass* vmt, const AnsiString 
		MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoSlide(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoSlide(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoPresentation;
class PASCALIMPLEMENTATION CoPresentation : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__Presentation __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__Presentation __fastcall CreateRemote(TMetaClass* vmt, const 
		AnsiString MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoPresentation(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoPresentation(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoOLEControl;
class PASCALIMPLEMENTATION CoOLEControl : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di_OCXExtender __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di_OCXExtender __fastcall CreateRemote(TMetaClass* vmt, const AnsiString 
		MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoOLEControl(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoOLEControl(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoApplication_;
class PASCALIMPLEMENTATION CoApplication_ : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__Application __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__Application __fastcall CreateRemote(TMetaClass* vmt, const AnsiString 
		MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoApplication_(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoApplication_(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE GUID LIBID_PowerPoint;
extern PACKAGE GUID IID_Collection;
extern PACKAGE GUID IID__Application;
extern PACKAGE GUID IID__Global;
extern PACKAGE GUID IID_EApplication;
extern PACKAGE GUID CLASS_Global;
extern PACKAGE GUID IID_ColorFormat;
extern PACKAGE GUID IID_SlideShowWindow;
extern PACKAGE GUID IID_Selection;
extern PACKAGE GUID IID_DocumentWindows;
extern PACKAGE GUID IID_SlideShowWindows;
extern PACKAGE GUID IID_DocumentWindow;
extern PACKAGE GUID IID_View;
extern PACKAGE GUID IID_SlideShowView;
extern PACKAGE GUID IID_SlideShowSettings;
extern PACKAGE GUID IID_NamedSlideShows;
extern PACKAGE GUID IID_NamedSlideShow;
extern PACKAGE GUID IID_PrintOptions;
extern PACKAGE GUID IID_PrintRanges;
extern PACKAGE GUID IID_PrintRange;
extern PACKAGE GUID IID_AddIns;
extern PACKAGE GUID IID_AddIn;
extern PACKAGE GUID IID_Presentations;
extern PACKAGE GUID IID_PresEvents;
extern PACKAGE GUID IID__Presentation;
extern PACKAGE GUID IID_Hyperlinks;
extern PACKAGE GUID IID_Hyperlink;
extern PACKAGE GUID IID_PageSetup;
extern PACKAGE GUID IID_Fonts;
extern PACKAGE GUID IID_ExtraColors;
extern PACKAGE GUID IID_Slides;
extern PACKAGE GUID IID__Slide;
extern PACKAGE GUID IID_SlideRange;
extern PACKAGE GUID IID_Master;
extern PACKAGE GUID IID_SldEvents;
extern PACKAGE GUID CLASS_Slide;
extern PACKAGE GUID IID_ColorSchemes;
extern PACKAGE GUID IID_ColorScheme;
extern PACKAGE GUID IID_RGBColor;
extern PACKAGE GUID IID_SlideShowTransition;
extern PACKAGE GUID IID_SoundEffect;
extern PACKAGE GUID IID_SoundFormat;
extern PACKAGE GUID IID_HeadersFooters;
extern PACKAGE GUID IID_Shapes;
extern PACKAGE GUID IID_Placeholders;
extern PACKAGE GUID IID_PlaceholderFormat;
extern PACKAGE GUID IID_FreeformBuilder;
extern PACKAGE GUID IID_Shape;
extern PACKAGE GUID IID_ShapeRange;
extern PACKAGE GUID IID_GroupShapes;
extern PACKAGE GUID IID_Adjustments;
extern PACKAGE GUID IID_PictureFormat;
extern PACKAGE GUID IID_FillFormat;
extern PACKAGE GUID IID_LineFormat;
extern PACKAGE GUID IID_ShadowFormat;
extern PACKAGE GUID IID_ConnectorFormat;
extern PACKAGE GUID IID_TextEffectFormat;
extern PACKAGE GUID IID_ThreeDFormat;
extern PACKAGE GUID IID_TextFrame;
extern PACKAGE GUID IID_CalloutFormat;
extern PACKAGE GUID IID_ShapeNodes;
extern PACKAGE GUID IID_ShapeNode;
extern PACKAGE GUID IID_OLEFormat;
extern PACKAGE GUID IID_LinkFormat;
extern PACKAGE GUID IID_ObjectVerbs;
extern PACKAGE GUID IID_AnimationSettings;
extern PACKAGE GUID IID_ActionSettings;
extern PACKAGE GUID IID_ActionSetting;
extern PACKAGE GUID IID_PlaySettings;
extern PACKAGE GUID IID_TextRange;
extern PACKAGE GUID IID_Ruler;
extern PACKAGE GUID IID_RulerLevels;
extern PACKAGE GUID IID_RulerLevel;
extern PACKAGE GUID IID_TabStops;
extern PACKAGE GUID IID_TabStop;
extern PACKAGE GUID IID_Font;
extern PACKAGE GUID IID_ParagraphFormat;
extern PACKAGE GUID IID_BulletFormat;
extern PACKAGE GUID IID_TextStyles;
extern PACKAGE GUID IID_TextStyle;
extern PACKAGE GUID IID_TextStyleLevels;
extern PACKAGE GUID IID_TextStyleLevel;
extern PACKAGE GUID IID_HeaderFooter;
extern PACKAGE GUID CLASS_Presentation;
extern PACKAGE GUID IID_PPDialogs;
extern PACKAGE GUID IID_PPAlert;
extern PACKAGE GUID IID_PPDialog;
extern PACKAGE GUID IID_PPTabSheet;
extern PACKAGE GUID IID_PPControls;
extern PACKAGE GUID IID_PPTabSheets;
extern PACKAGE GUID IID_PPControl;
extern PACKAGE GUID IID_PPPushButton;
extern PACKAGE GUID IID_PPToggleButton;
extern PACKAGE GUID IID_PPBitmapButton;
extern PACKAGE GUID IID_PPListBox;
extern PACKAGE GUID IID_PPStrings;
extern PACKAGE GUID IID_PPCheckBox;
extern PACKAGE GUID IID_PPRadioCluster;
extern PACKAGE GUID IID_PPStaticText;
extern PACKAGE GUID IID_PPEditText;
extern PACKAGE GUID IID_PPIcon;
extern PACKAGE GUID IID_PPBitmap;
extern PACKAGE GUID IID_PPSpinner;
extern PACKAGE GUID IID_PPScrollBar;
extern PACKAGE GUID IID_PPGroupBox;
extern PACKAGE GUID IID_PPFrame;
extern PACKAGE GUID IID_PPTabControl;
extern PACKAGE GUID IID_PPDropDown;
extern PACKAGE GUID IID_PPDropDownEdit;
extern PACKAGE GUID IID_PPSlideMiniature;
extern PACKAGE GUID IID_PPRadioButton;
extern PACKAGE GUID IID_Tags;
extern PACKAGE GUID IID_FileDialogFileList;
extern PACKAGE GUID IID_FileDialogExtension;
extern PACKAGE GUID IID_FileDialogExtensionList;
extern PACKAGE GUID IID_FileDialog;
extern PACKAGE GUID IID_MouseTracker;
extern PACKAGE GUID IID_OCXExtender;
extern PACKAGE GUID IID_OCXExtenderEvents;
extern PACKAGE GUID CLASS_OLEControl;
extern PACKAGE GUID CLASS_Application_;
extern PACKAGE GUID IID_Table;
extern PACKAGE GUID IID_Columns;
extern PACKAGE GUID IID_Column;
extern PACKAGE GUID IID_Rows;
extern PACKAGE GUID IID_Row;
extern PACKAGE GUID IID_CellRange;
extern PACKAGE GUID IID_Cell;
extern PACKAGE GUID IID_Borders;
extern PACKAGE GUID IID_Panes;
extern PACKAGE GUID IID_Pane;
extern PACKAGE GUID IID_DefaultWebOptions;
extern PACKAGE GUID IID_WebOptions;
extern PACKAGE GUID IID_PublishObjects;
extern PACKAGE GUID IID_PublishObject;
extern PACKAGE GUID IID_Marker;
static const Shortint ppWindowNormal = 0x1;
static const Shortint ppWindowMinimized = 0x2;
static const Shortint ppWindowMaximized = 0x3;
static const Shortint ppArrangeTiled = 0x1;
static const Shortint ppArrangeCascade = 0x2;
static const Shortint ppViewSlide = 0x1;
static const Shortint ppViewSlideMaster = 0x2;
static const Shortint ppViewNotesPage = 0x3;
static const Shortint ppViewHandoutMaster = 0x4;
static const Shortint ppViewNotesMaster = 0x5;
static const Shortint ppViewOutline = 0x6;
static const Shortint ppViewSlideSorter = 0x7;
static const Shortint ppViewTitleMaster = 0x8;
static const Shortint ppViewNormal = 0x9;
static const unsigned ppSchemeColorMixed = 0xfffffffe;
static const Shortint ppNotSchemeColor = 0x0;
static const Shortint ppBackground = 0x1;
static const Shortint ppForeground = 0x2;
static const Shortint ppShadow = 0x3;
static const Shortint ppTitle = 0x4;
static const Shortint ppFill = 0x5;
static const Shortint ppAccent1 = 0x6;
static const Shortint ppAccent2 = 0x7;
static const Shortint ppAccent3 = 0x8;
static const Shortint ppSlideSizeOnScreen = 0x1;
static const Shortint ppSlideSizeLetterPaper = 0x2;
static const Shortint ppSlideSizeA4Paper = 0x3;
static const Shortint ppSlideSize35MM = 0x4;
static const Shortint ppSlideSizeOverhead = 0x5;
static const Shortint ppSlideSizeBanner = 0x6;
static const Shortint ppSlideSizeCustom = 0x7;
static const Shortint ppSaveAsPresentation = 0x1;
static const Shortint ppSaveAsPowerPoint7 = 0x2;
static const Shortint ppSaveAsPowerPoint4 = 0x3;
static const Shortint ppSaveAsPowerPoint3 = 0x4;
static const Shortint ppSaveAsTemplate = 0x5;
static const Shortint ppSaveAsRTF = 0x6;
static const Shortint ppSaveAsShow = 0x7;
static const Shortint ppSaveAsAddIn = 0x8;
static const Shortint ppSaveAsPowerPoint4FarEast = 0xa;
static const Shortint ppSaveAsDefault = 0xb;
static const Shortint ppSaveAsHTML = 0xc;
static const Shortint ppSaveAsHTMLv3 = 0xd;
static const Shortint ppSaveAsHTMLDual = 0xe;
static const Shortint ppSaveAsMetaFile = 0xf;
static const Shortint ppSaveAsGIF = 0x10;
static const Shortint ppSaveAsJPG = 0x11;
static const Shortint ppSaveAsPNG = 0x12;
static const Shortint ppSaveAsBMP = 0x13;
static const Shortint ppDefaultStyle = 0x1;
static const Shortint ppTitleStyle = 0x2;
static const Shortint ppBodyStyle = 0x3;
static const unsigned ppLayoutMixed = 0xfffffffe;
static const Shortint ppLayoutTitle = 0x1;
static const Shortint ppLayoutText = 0x2;
static const Shortint ppLayoutTwoColumnText = 0x3;
static const Shortint ppLayoutTable = 0x4;
static const Shortint ppLayoutTextAndChart = 0x5;
static const Shortint ppLayoutChartAndText = 0x6;
static const Shortint ppLayoutOrgchart = 0x7;
static const Shortint ppLayoutChart = 0x8;
static const Shortint ppLayoutTextAndClipart = 0x9;
static const Shortint ppLayoutClipartAndText = 0xa;
static const Shortint ppLayoutTitleOnly = 0xb;
static const Shortint ppLayoutBlank = 0xc;
static const Shortint ppLayoutTextAndObject = 0xd;
static const Shortint ppLayoutObjectAndText = 0xe;
static const Shortint ppLayoutLargeObject = 0xf;
static const Shortint ppLayoutObject = 0x10;
static const Shortint ppLayoutTextAndMediaClip = 0x11;
static const Shortint ppLayoutMediaClipAndText = 0x12;
static const Shortint ppLayoutObjectOverText = 0x13;
static const Shortint ppLayoutTextOverObject = 0x14;
static const Shortint ppLayoutTextAndTwoObjects = 0x15;
static const Shortint ppLayoutTwoObjectsAndText = 0x16;
static const Shortint ppLayoutTwoObjectsOverText = 0x17;
static const Shortint ppLayoutFourObjects = 0x18;
static const Shortint ppLayoutVerticalText = 0x19;
static const Shortint ppLayoutClipArtAndVerticalText = 0x1a;
static const Shortint ppLayoutVerticalTitleAndText = 0x1b;
static const Shortint ppLayoutVerticalTitleAndTextOverChart = 0x1c;
static const unsigned ppEffectMixed = 0xfffffffe;
static const Shortint ppEffectNone = 0x0;
static const Word ppEffectCut = 0x101;
static const Word ppEffectCutThroughBlack = 0x102;
static const Word ppEffectRandom = 0x201;
static const Word ppEffectBlindsHorizontal = 0x301;
static const Word ppEffectBlindsVertical = 0x302;
static const Word ppEffectCheckerboardAcross = 0x401;
static const Word ppEffectCheckerboardDown = 0x402;
static const Word ppEffectCoverLeft = 0x501;
static const Word ppEffectCoverUp = 0x502;
static const Word ppEffectCoverRight = 0x503;
static const Word ppEffectCoverDown = 0x504;
static const Word ppEffectCoverLeftUp = 0x505;
static const Word ppEffectCoverRightUp = 0x506;
static const Word ppEffectCoverLeftDown = 0x507;
static const Word ppEffectCoverRightDown = 0x508;
static const Word ppEffectDissolve = 0x601;
static const Word ppEffectFade = 0x701;
static const Word ppEffectUncoverLeft = 0x801;
static const Word ppEffectUncoverUp = 0x802;
static const Word ppEffectUncoverRight = 0x803;
static const Word ppEffectUncoverDown = 0x804;
static const Word ppEffectUncoverLeftUp = 0x805;
static const Word ppEffectUncoverRightUp = 0x806;
static const Word ppEffectUncoverLeftDown = 0x807;
static const Word ppEffectUncoverRightDown = 0x808;
static const Word ppEffectRandomBarsHorizontal = 0x901;
static const Word ppEffectRandomBarsVertical = 0x902;
static const Word ppEffectStripsUpLeft = 0xa01;
static const Word ppEffectStripsUpRight = 0xa02;
static const Word ppEffectStripsDownLeft = 0xa03;
static const Word ppEffectStripsDownRight = 0xa04;
static const Word ppEffectStripsLeftUp = 0xa05;
static const Word ppEffectStripsRightUp = 0xa06;
static const Word ppEffectStripsLeftDown = 0xa07;
static const Word ppEffectStripsRightDown = 0xa08;
static const Word ppEffectWipeLeft = 0xb01;
static const Word ppEffectWipeUp = 0xb02;
static const Word ppEffectWipeRight = 0xb03;
static const Word ppEffectWipeDown = 0xb04;
static const Word ppEffectBoxOut = 0xc01;
static const Word ppEffectBoxIn = 0xc02;
static const Word ppEffectFlyFromLeft = 0xd01;
static const Word ppEffectFlyFromTop = 0xd02;
static const Word ppEffectFlyFromRight = 0xd03;
static const Word ppEffectFlyFromBottom = 0xd04;
static const Word ppEffectFlyFromTopLeft = 0xd05;
static const Word ppEffectFlyFromTopRight = 0xd06;
static const Word ppEffectFlyFromBottomLeft = 0xd07;
static const Word ppEffectFlyFromBottomRight = 0xd08;
static const Word ppEffectPeekFromLeft = 0xd09;
static const Word ppEffectPeekFromDown = 0xd0a;
static const Word ppEffectPeekFromRight = 0xd0b;
static const Word ppEffectPeekFromUp = 0xd0c;
static const Word ppEffectCrawlFromLeft = 0xd0d;
static const Word ppEffectCrawlFromUp = 0xd0e;
static const Word ppEffectCrawlFromRight = 0xd0f;
static const Word ppEffectCrawlFromDown = 0xd10;
static const Word ppEffectZoomIn = 0xd11;
static const Word ppEffectZoomInSlightly = 0xd12;
static const Word ppEffectZoomOut = 0xd13;
static const Word ppEffectZoomOutSlightly = 0xd14;
static const Word ppEffectZoomCenter = 0xd15;
static const Word ppEffectZoomBottom = 0xd16;
static const Word ppEffectStretchAcross = 0xd17;
static const Word ppEffectStretchLeft = 0xd18;
static const Word ppEffectStretchUp = 0xd19;
static const Word ppEffectStretchRight = 0xd1a;
static const Word ppEffectStretchDown = 0xd1b;
static const Word ppEffectSwivel = 0xd1c;
static const Word ppEffectSpiral = 0xd1d;
static const Word ppEffectSplitHorizontalOut = 0xe01;
static const Word ppEffectSplitHorizontalIn = 0xe02;
static const Word ppEffectSplitVerticalOut = 0xe03;
static const Word ppEffectSplitVerticalIn = 0xe04;
static const Word ppEffectFlashOnceFast = 0xf01;
static const Word ppEffectFlashOnceMedium = 0xf02;
static const Word ppEffectFlashOnceSlow = 0xf03;
static const Word ppEffectAppear = 0xf04;
static const unsigned ppAnimateLevelMixed = 0xfffffffe;
static const Shortint ppAnimateLevelNone = 0x0;
static const Shortint ppAnimateByFirstLevel = 0x1;
static const Shortint ppAnimateBySecondLevel = 0x2;
static const Shortint ppAnimateByThirdLevel = 0x3;
static const Shortint ppAnimateByFourthLevel = 0x4;
static const Shortint ppAnimateByFifthLevel = 0x5;
static const Shortint ppAnimateByAllLevels = 0x10;
static const unsigned ppAnimateUnitMixed = 0xfffffffe;
static const Shortint ppAnimateByParagraph = 0x0;
static const Shortint ppAnimateByWord = 0x1;
static const Shortint ppAnimateByCharacter = 0x2;
static const unsigned ppAnimateChartMixed = 0xfffffffe;
static const Shortint ppAnimateBySeries = 0x1;
static const Shortint ppAnimateByCategory = 0x2;
static const Shortint ppAnimateBySeriesElements = 0x3;
static const Shortint ppAnimateByCategoryElements = 0x4;
static const unsigned ppAfterEffectMixed = 0xfffffffe;
static const Shortint ppAfterEffectNothing = 0x0;
static const Shortint ppAfterEffectHide = 0x1;
static const Shortint ppAfterEffectDim = 0x2;
static const Shortint ppAfterEffectHideOnClick = 0x3;
static const unsigned ppAdvanceModeMixed = 0xfffffffe;
static const Shortint ppAdvanceOnClick = 0x1;
static const Shortint ppAdvanceOnTime = 0x2;
static const unsigned ppSoundEffectsMixed = 0xfffffffe;
static const Shortint ppSoundNone = 0x0;
static const Shortint ppSoundStopPrevious = 0x1;
static const Shortint ppSoundFile = 0x2;
static const unsigned ppFollowColorsMixed = 0xfffffffe;
static const Shortint ppFollowColorsNone = 0x0;
static const Shortint ppFollowColorsScheme = 0x1;
static const Shortint ppFollowColorsTextAndBackground = 0x2;
static const unsigned ppUpdateOptionMixed = 0xfffffffe;
static const Shortint ppUpdateOptionManual = 0x1;
static const Shortint ppUpdateOptionAutomatic = 0x2;
static const unsigned ppAlignmentMixed = 0xfffffffe;
static const Shortint ppAlignLeft = 0x1;
static const Shortint ppAlignCenter = 0x2;
static const Shortint ppAlignRight = 0x3;
static const Shortint ppAlignJustify = 0x4;
static const Shortint ppAlignDistribute = 0x5;
static const unsigned ppBaselineAlignMixed = 0xfffffffe;
static const Shortint ppBaselineAlignBaseline = 0x1;
static const Shortint ppBaselineAlignTop = 0x2;
static const Shortint ppBaselineAlignCenter = 0x3;
static const Shortint ppBaselineAlignFarEast50 = 0x4;
static const unsigned ppTabStopMixed = 0xfffffffe;
static const Shortint ppTabStopLeft = 0x1;
static const Shortint ppTabStopCenter = 0x2;
static const Shortint ppTabStopRight = 0x3;
static const Shortint ppTabStopDecimal = 0x4;
static const unsigned ppIndentControlMixed = 0xfffffffe;
static const Shortint ppIndentReplaceAttr = 0x1;
static const Shortint ppIndentKeepAttr = 0x2;
static const Shortint ppCaseSentence = 0x1;
static const Shortint ppCaseLower = 0x2;
static const Shortint ppCaseUpper = 0x3;
static const Shortint ppCaseTitle = 0x4;
static const Shortint ppCaseToggle = 0x5;
static const unsigned ppDialogModeMixed = 0xfffffffe;
static const Shortint ppDialogModeless = 0x0;
static const Shortint ppDialogModal = 0x1;
static const unsigned ppDialogStyleMixed = 0xfffffffe;
static const Shortint ppDialogStandard = 0x1;
static const Shortint ppDialogTabbed = 0x2;
static const Shortint ppDialogPositionNormal = 0x1;
static const Shortint ppDialogPositionCenterParent = 0x2;
static const Shortint ppDialogPositionCenterScreen = 0x3;
static const Shortint ppDialogPositionRememberLast = 0x4;
static const unsigned ppDialogFontStyleMixed = 0xfffffffe;
static const unsigned ppDialogSmall = 0xffffffff;
static const Shortint ppDialogItalic = 0x0;
static const Shortint ppScrollBarVertical = 0x0;
static const Shortint ppScrollBarHorizontal = 0x1;
static const Shortint ppListBoxSingle = 0x0;
static const Shortint ppListBoxMulti = 0x1;
static const Shortint ppListBoxAbbreviationNone = 0x0;
static const Shortint ppListBoxAbbreviationTruncation = 0x1;
static const Shortint ppListBoxAbbreviationTruncationWithEllipsis = 0x2;
static const Shortint ppListBoxAbbreviationFileNames = 0x3;
static const Shortint ppAlertTypeOK = 0x0;
static const Shortint ppAlertTypeOKCANCEL = 0x1;
static const Shortint ppAlertTypeYESNO = 0x2;
static const Shortint ppAlertTypeYESNOCANCEL = 0x3;
static const Shortint ppAlertTypeBACKNEXTCLOSE = 0x4;
static const Shortint ppAlertTypeRETRYCANCEL = 0x5;
static const Shortint ppAlertTypeABORTRETRYIGNORE = 0x6;
static const Shortint ppAlertButtonCLOSE = 0x0;
static const Shortint ppAlertButtonSNOOZE = 0x1;
static const Shortint ppAlertButtonSEARCH = 0x2;
static const Shortint ppAlertButtonIGNORE = 0x3;
static const Shortint ppAlertButtonABORT = 0x4;
static const Shortint ppAlertButtonRETRY = 0x5;
static const Shortint ppAlertButtonNEXT = 0x6;
static const Shortint ppAlertButtonBACK = 0x7;
static const Shortint ppAlertButtonNO = 0x8;
static const Shortint ppAlertButtonYES = 0x9;
static const Shortint ppAlertButtonCANCEL = 0xa;
static const Shortint ppAlertButtonOK = 0xb;
static const Shortint ppAlertButtonNULL = 0xc;
static const Shortint ppAlertIconQuestionMark = 0x0;
static const Shortint ppAlertIconNote = 0x1;
static const Shortint ppAlertIconCaution = 0x2;
static const Shortint ppAlertIconStop = 0x3;
static const Shortint ppSlideShowPointerNone = 0x0;
static const Shortint ppSlideShowPointerArrow = 0x1;
static const Shortint ppSlideShowPointerPen = 0x2;
static const Shortint ppSlideShowPointerAlwaysHidden = 0x3;
static const Shortint ppSlideShowPointerAutoArrow = 0x4;
static const Shortint ppSlideShowRunning = 0x1;
static const Shortint ppSlideShowPaused = 0x2;
static const Shortint ppSlideShowBlackScreen = 0x3;
static const Shortint ppSlideShowWhiteScreen = 0x4;
static const Shortint ppSlideShowDone = 0x5;
static const Shortint ppSlideShowManualAdvance = 0x1;
static const Shortint ppSlideShowUseSlideTimings = 0x2;
static const Shortint ppSlideShowRehearseNewTimings = 0x3;
static const Shortint ppFileDialogOpen = 0x1;
static const Shortint ppFileDialogSave = 0x2;
static const Shortint ppFileDialogViewDetails = 0x1;
static const Shortint ppFileDialogViewPreview = 0x2;
static const Shortint ppFileDialogViewProperties = 0x3;
static const Shortint ppFileDialogViewList = 0x4;
static const Shortint ppPrintOutputSlides = 0x1;
static const Shortint ppPrintOutputTwoSlideHandouts = 0x2;
static const Shortint ppPrintOutputThreeSlideHandouts = 0x3;
static const Shortint ppPrintOutputSixSlideHandouts = 0x4;
static const Shortint ppPrintOutputNotesPages = 0x5;
static const Shortint ppPrintOutputOutline = 0x6;
static const Shortint ppPrintOutputBuildSlides = 0x7;
static const Shortint ppPrintOutputFourSlideHandouts = 0x8;
static const Shortint ppPrintOutputNineSlideHandouts = 0x9;
static const Shortint ppPrintHandoutVerticalFirst = 0x0;
static const Shortint ppPrintHandoutHorizontalFirst = 0x1;
static const Shortint ppPrintColor = 0x1;
static const Shortint ppPrintBlackAndWhite = 0x2;
static const Shortint ppPrintPureBlackAndWhite = 0x3;
static const Shortint ppSelectionNone = 0x0;
static const Shortint ppSelectionSlides = 0x1;
static const Shortint ppSelectionShapes = 0x2;
static const Shortint ppSelectionText = 0x3;
static const unsigned ppDirectionMixed = 0xfffffffe;
static const Shortint ppDirectionLeftToRight = 0x1;
static const Shortint ppDirectionRightToLeft = 0x2;
static const unsigned ppDateTimeFormatMixed = 0xfffffffe;
static const Shortint ppDateTimeMdyy = 0x1;
static const Shortint ppDateTimeddddMMMMddyyyy = 0x2;
static const Shortint ppDateTimedMMMMyyyy = 0x3;
static const Shortint ppDateTimeMMMMdyyyy = 0x4;
static const Shortint ppDateTimedMMMyy = 0x5;
static const Shortint ppDateTimeMMMMyy = 0x6;
static const Shortint ppDateTimeMMyy = 0x7;
static const Shortint ppDateTimeMMddyyHmm = 0x8;
static const Shortint ppDateTimeMMddyyhmmAMPM = 0x9;
static const Shortint ppDateTimeHmm = 0xa;
static const Shortint ppDateTimeHmmss = 0xb;
static const Shortint ppDateTimehmmAMPM = 0xc;
static const Shortint ppDateTimehmmssAMPM = 0xd;
static const unsigned ppTransitionSpeedMixed = 0xfffffffe;
static const Shortint ppTransitionSpeedSlow = 0x1;
static const Shortint ppTransitionSpeedMedium = 0x2;
static const Shortint ppTransitionSpeedFast = 0x3;
static const Shortint ppMouseClick = 0x1;
static const Shortint ppMouseOver = 0x2;
static const unsigned ppActionMixed = 0xfffffffe;
static const Shortint ppActionNone = 0x0;
static const Shortint ppActionNextSlide = 0x1;
static const Shortint ppActionPreviousSlide = 0x2;
static const Shortint ppActionFirstSlide = 0x3;
static const Shortint ppActionLastSlide = 0x4;
static const Shortint ppActionLastSlideViewed = 0x5;
static const Shortint ppActionEndShow = 0x6;
static const Shortint ppActionHyperlink = 0x7;
static const Shortint ppActionRunMacro = 0x8;
static const Shortint ppActionRunProgram = 0x9;
static const Shortint ppActionNamedSlideShow = 0xa;
static const Shortint ppActionOLEVerb = 0xb;
static const Shortint ppActionPlay = 0xc;
static const unsigned ppPlaceholderMixed = 0xfffffffe;
static const Shortint ppPlaceholderTitle = 0x1;
static const Shortint ppPlaceholderBody = 0x2;
static const Shortint ppPlaceholderCenterTitle = 0x3;
static const Shortint ppPlaceholderSubtitle = 0x4;
static const Shortint ppPlaceholderVerticalTitle = 0x5;
static const Shortint ppPlaceholderVerticalBody = 0x6;
static const Shortint ppPlaceholderObject = 0x7;
static const Shortint ppPlaceholderChart = 0x8;
static const Shortint ppPlaceholderBitmap = 0x9;
static const Shortint ppPlaceholderMediaClip = 0xa;
static const Shortint ppPlaceholderOrgChart = 0xb;
static const Shortint ppPlaceholderTable = 0xc;
static const Shortint ppPlaceholderSlideNumber = 0xd;
static const Shortint ppPlaceholderHeader = 0xe;
static const Shortint ppPlaceholderFooter = 0xf;
static const Shortint ppPlaceholderDate = 0x10;
static const Shortint ppShowTypeSpeaker = 0x1;
static const Shortint ppShowTypeWindow = 0x2;
static const Shortint ppShowTypeKiosk = 0x3;
static const Shortint ppPrintAll = 0x1;
static const Shortint ppPrintSelection = 0x2;
static const Shortint ppPrintCurrent = 0x3;
static const Shortint ppPrintSlideRange = 0x4;
static const Shortint ppPrintNamedSlideShow = 0x5;
static const unsigned ppAutoSizeMixed = 0xfffffffe;
static const Shortint ppAutoSizeNone = 0x0;
static const Shortint ppAutoSizeShapeToFitText = 0x1;
static const unsigned ppMediaTypeMixed = 0xfffffffe;
static const Shortint ppMediaTypeOther = 0x1;
static const Shortint ppMediaTypeSound = 0x2;
static const Shortint ppMediaTypeMovie = 0x3;
static const unsigned ppSoundFormatMixed = 0xfffffffe;
static const Shortint ppSoundFormatNone = 0x0;
static const Shortint ppSoundFormatWAV = 0x1;
static const Shortint ppSoundFormatMIDI = 0x2;
static const Shortint ppSoundFormatCDAudio = 0x3;
static const Shortint ppFarEastLineBreakLevelNormal = 0x1;
static const Shortint ppFarEastLineBreakLevelStrict = 0x2;
static const Shortint ppFarEastLineBreakLevelCustom = 0x3;
static const Shortint ppShowAll = 0x1;
static const Shortint ppShowSlideRange = 0x2;
static const Shortint ppShowNamedSlideShow = 0x3;
static const Shortint ppFrameColorsBrowserColors = 0x1;
static const Shortint ppFrameColorsPresentationSchemeTextColor = 0x2;
static const Shortint ppFrameColorsPresentationSchemeAccentColor = 0x3;
static const Shortint ppFrameColorsWhiteTextOnBlack = 0x4;
static const Shortint ppFrameColorsBlackTextOnWhite = 0x5;
static const Shortint ppBorderTop = 0x1;
static const Shortint ppBorderLeft = 0x2;
static const Shortint ppBorderBottom = 0x3;
static const Shortint ppBorderRight = 0x4;
static const Shortint ppBorderDiagonalDown = 0x5;
static const Shortint ppBorderDiagonalUp = 0x6;
static const Shortint ppHTMLv3 = 0x1;
static const Shortint ppHTMLv4 = 0x2;
static const Shortint ppHTMLDual = 0x3;
static const Shortint ppPublishAll = 0x1;
static const Shortint ppPublishSlideRange = 0x2;
static const Shortint ppPublishNamedSlideShow = 0x3;
static const unsigned ppBulletMixed = 0xfffffffe;
static const Shortint ppBulletNone = 0x0;
static const Shortint ppBulletUnnumbered = 0x1;
static const Shortint ppBulletNumbered = 0x2;
static const Shortint ppBulletPicture = 0x3;
static const unsigned ppBulletStyleMixed = 0xfffffffe;
static const Shortint ppBulletAlphaLCPeriod = 0x0;
static const Shortint ppBulletAlphaUCPeriod = 0x1;
static const Shortint ppBulletArabicParenRight = 0x2;
static const Shortint ppBulletArabicPeriod = 0x3;
static const Shortint ppBulletRomanLCParenBoth = 0x4;
static const Shortint ppBulletRomanLCParenRight = 0x5;
static const Shortint ppBulletRomanLCPeriod = 0x6;
static const Shortint ppBulletRomanUCPeriod = 0x7;
static const Shortint ppBulletAlphaLCParenBoth = 0x8;
static const Shortint ppBulletAlphaLCParenRight = 0x9;
static const Shortint ppBulletAlphaUCParenBoth = 0xa;
static const Shortint ppBulletAlphaUCParenRight = 0xb;
static const Shortint ppBulletArabicParenBoth = 0xc;
static const Shortint ppBulletArabicPlain = 0xd;
static const Shortint ppBulletRomanUCParenBoth = 0xe;
static const Shortint ppBulletRomanUCParenRight = 0xf;
static const Shortint ppBulletSimpChinPlain = 0x10;
static const Shortint ppBulletSimpChinPeriod = 0x11;
static const Shortint ppBulletCircleNumDBPlain = 0x12;
static const Shortint ppBulletCircleNumWDWhitePlain = 0x13;
static const Shortint ppBulletCircleNumWDBlackPlain = 0x14;
static const Shortint ppBulletTradChinPlain = 0x15;
static const Shortint ppBulletTradChinPeriod = 0x16;
static const Shortint ppBulletArabicAlphaDash = 0x17;
static const Shortint ppBulletArabicAbjadDash = 0x18;
static const Shortint ppBulletHebrewAlphaDash = 0x19;
static const Shortint ppBulletKanjiKoreanPlain = 0x1a;
static const Shortint ppBulletKanjiKoreanPeriod = 0x1b;
static const Shortint ppBulletArabicDBPlain = 0x1c;
static const Shortint ppBulletArabicDBPeriod = 0x1d;
static const Shortint ppBoot = 0x0;
static const Shortint ppFileNew = 0x1;
static const Shortint ppFileOpen = 0x2;
static const Shortint ppFileSave = 0x3;
static const Shortint ppPrintForeground = 0x4;
static const Shortint ppPrintBackground = 0x5;
static const Shortint ppOLEInsert = 0x6;
static const Shortint ppSlideShowStart = 0x7;
static const Shortint ppSlideShowDraw = 0x8;
static const Shortint ppSlideViewScroll = 0x9;
static const Shortint ppDialogStart = 0xa;

}	/* namespace Opppt2k */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Opppt2k;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// OpPpt2k
