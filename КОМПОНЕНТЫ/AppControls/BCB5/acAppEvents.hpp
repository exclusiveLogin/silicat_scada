// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acAppEvents.pas' rev: 5.00

#ifndef acAppEventsHPP
#define acAppEventsHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acClasses.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <ActnList.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acappevents
{
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TacAppKeyEvent)(System::TObject* Sender, Word &Key, Classes::TShiftState 
	Shift, AnsiString KeyName, bool RepeatedKeypress);

typedef void __fastcall (__closure *TacAppMouseMoveEvent)(System::TObject* Sender, Classes::TShiftState 
	ShiftState, const Windows::TPoint &ScreenPoint, HWND WindowHandle, int HitTestCode);

typedef void __fastcall (__closure *TacAppMouseEvent)(System::TObject* Sender, Controls::TMouseButton 
	Button, Classes::TShiftState Shift, const Windows::TPoint &ScreenPoint, HWND WindowHandle, int HitTestCode
	);

class DELPHICLASS TacAppEvents;
class PASCALIMPLEMENTATION TacAppEvents : public Acclasses::TacAppHookComponent 
{
	typedef Acclasses::TacAppHookComponent inherited;
	
private:
	AnsiString FAbout;
	bool FAnimateIcon;
	Word FAnimateInterval;
	Graphics::TColor FHintColor;
	Graphics::TFont* FHintFont;
	int FHintHidePause;
	int FHintPause;
	int FHintShortPause;
	Graphics::TIcon* FIcon;
	Controls::TImageList* FImageList;
	int FImageIndex;
	bool FShowHint;
	bool FShowMainForm;
	bool FShowTaskIcon;
	bool FUpdateFormatSettings;
	bool FUpdateMetricSettings;
	Classes::TBiDiMode FBiDiMode;
	bool FHintShortCuts;
	bool FMouseDragImmediate;
	int FMouseDragThreshold;
	AnsiString FBiDiKeyboard;
	AnsiString FNonBiDiKeyboard;
	Classes::TNotifyEvent FOnActivate;
	Classes::TNotifyEvent FOnDeactivate;
	Forms::TExceptionEvent FOnException;
	Forms::TIdleEvent FOnIdle;
	Classes::THelpEvent FOnHelp;
	Classes::TNotifyEvent FOnHint;
	Forms::TMessageEvent FOnMessage;
	Classes::TNotifyEvent FOnMinimize;
	Classes::TNotifyEvent FOnRestore;
	Forms::TShowHintEvent FOnShowHint;
	TacAppKeyEvent FOnAppKeyDown;
	TacAppKeyEvent FOnAppKeyUp;
	TacAppMouseMoveEvent FOnAppMouseMove;
	TacAppMouseEvent FOnAppMouseDown;
	TacAppMouseEvent FOnAppMouseUp;
	Classes::TNotifyEvent FOnSettingsChanged;
	Classes::TNotifyEvent FOnActiveControlChange;
	Classes::TNotifyEvent FOnActiveFormChange;
	Actnlist::TActionEvent FOnActionExecute;
	Actnlist::TActionEvent FOnActionUpdate;
	Forms::TShortCutEvent FOnShortCut;
	void __fastcall SetAnimateIcon(bool Value);
	void __fastcall SetAnimateInterval(Word Value);
	Graphics::TColor __fastcall GetHintColor(void);
	void __fastcall SetHintColor(Graphics::TColor Value);
	void __fastcall SetHintFont(Graphics::TFont* Value);
	int __fastcall GetHintHidePause(void);
	void __fastcall SetHintHidePause(int Value);
	int __fastcall GetHintPause(void);
	void __fastcall SetHintPause(int Value);
	int __fastcall GetHintShortPause(void);
	void __fastcall SetHintShortPause(int Value);
	Graphics::TIcon* __fastcall GetIcon(void);
	void __fastcall SetIcon(Graphics::TIcon* Value);
	void __fastcall SetImageList(Controls::TImageList* Value);
	void __fastcall SetImageIndex(int Value);
	bool __fastcall GetShowHint(void);
	void __fastcall SetShowHint(bool Value);
	bool __fastcall GetShowMainForm(void);
	void __fastcall SetShowMainForm(bool Value);
	void __fastcall SetShowTaskIcon(bool Value);
	bool __fastcall GetUpdateFormatSettings(void);
	void __fastcall SetUpdateFormatSettings(bool Value);
	bool __fastcall GetUpdateMetricSettings(void);
	void __fastcall SetUpdateMetricSettings(bool Value);
	Classes::TBiDiMode __fastcall GetBiDiMode(void);
	void __fastcall SetBiDiMode(Classes::TBiDiMode Value);
	bool __fastcall GetHintShortCuts(void);
	void __fastcall SetHintShortCuts(bool Value);
	bool __fastcall GetMouseDragImmediate(void);
	void __fastcall SetMouseDragImmediate(bool Value);
	int __fastcall GetMouseDragThreshold(void);
	void __fastcall SetMouseDragThreshold(int Value);
	AnsiString __fastcall GetBiDiKeyboard();
	void __fastcall SetBiDiKeyboard(const AnsiString Value);
	AnsiString __fastcall GetNonBiDiKeyboard();
	void __fastcall SetNonBiDiKeyboard(const AnsiString Value);
	bool __fastcall ApplicationMinimize(void);
	bool __fastcall ApplicationRestore(void);
	void __fastcall OverFontChanged(System::TObject* Sender);
	void __fastcall SetupHintFont(void);
	void __fastcall UpdateTimer(void);
	
protected:
	virtual void __fastcall Notification(Classes::TComponent* aComponent, Classes::TOperation aOperation
		);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall UpdateProperties(void);
	virtual void __fastcall UpdateTaskIcon(void);
	virtual void __fastcall UpdateIcon(void);
	DYNAMIC void __fastcall SettingsChanged(void);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	virtual void __fastcall MessageBefore(Messages::TMessage &Message, bool &Handled);
	virtual void __fastcall AppMessageBefore(Messages::TMessage &Message, bool &Handled);
	virtual bool __fastcall HookMainWndProc(Messages::TMessage &Message);
	
public:
	__fastcall virtual TacAppEvents(Classes::TComponent* aOwner);
	__fastcall virtual ~TacAppEvents(void);
	
__published:
	__property AnsiString About = {read=FAbout, write=FAbout, stored=false};
	__property bool AnimateIcon = {read=FAnimateIcon, write=SetAnimateIcon, nodefault};
	__property Word AnimateInterval = {read=FAnimateInterval, write=SetAnimateInterval, nodefault};
	__property Graphics::TColor HintColor = {read=GetHintColor, write=SetHintColor, default=-2147483624
		};
	__property Graphics::TFont* HintFont = {read=FHintFont, write=SetHintFont};
	__property int HintPause = {read=GetHintPause, write=SetHintPause, default=500};
	__property Graphics::TIcon* Icon = {read=GetIcon, write=SetIcon};
	__property Controls::TImageList* ImageList = {read=FImageList, write=SetImageList};
	__property int ImageIndex = {read=FImageIndex, write=SetImageIndex, nodefault};
	__property bool ShowHint = {read=GetShowHint, write=SetShowHint, default=1};
	__property bool UpdateFormatSettings = {read=GetUpdateFormatSettings, write=SetUpdateFormatSettings
		, default=1};
	__property int HintShortPause = {read=GetHintShortPause, write=SetHintShortPause, default=50};
	__property int HintHidePause = {read=GetHintHidePause, write=SetHintHidePause, default=2500};
	__property bool ShowMainForm = {read=GetShowMainForm, write=SetShowMainForm, default=1};
	__property bool ShowTaskIcon = {read=FShowTaskIcon, write=SetShowTaskIcon, default=1};
	__property bool UpdateMetricSettings = {read=GetUpdateMetricSettings, write=SetUpdateMetricSettings
		, default=1};
	__property bool HintShortCuts = {read=GetHintShortCuts, write=SetHintShortCuts, default=1};
	__property Classes::TBiDiMode BiDiMode = {read=GetBiDiMode, write=SetBiDiMode, default=0};
	__property bool MouseDragImmediate = {read=GetMouseDragImmediate, write=SetMouseDragImmediate, default=1
		};
	__property int MouseDragThreshold = {read=GetMouseDragThreshold, write=SetMouseDragThreshold, default=5
		};
	__property AnsiString BiDiKeyboard = {read=GetBiDiKeyboard, write=SetBiDiKeyboard};
	__property AnsiString NonBiDiKeyboard = {read=GetNonBiDiKeyboard, write=SetNonBiDiKeyboard};
	__property Classes::TNotifyEvent OnSettingsChanged = {read=FOnSettingsChanged, write=FOnSettingsChanged
		};
	__property Classes::TNotifyEvent OnActiveControlChange = {read=FOnActiveControlChange, write=FOnActiveControlChange
		};
	__property Classes::TNotifyEvent OnActiveFormChange = {read=FOnActiveFormChange, write=FOnActiveFormChange
		};
	__property Classes::TNotifyEvent OnActivate = {read=FOnActivate, write=FOnActivate};
	__property Classes::TNotifyEvent OnDeactivate = {read=FOnDeactivate, write=FOnDeactivate};
	__property Forms::TExceptionEvent OnException = {read=FOnException, write=FOnException};
	__property Forms::TIdleEvent OnIdle = {read=FOnIdle, write=FOnIdle};
	__property Classes::THelpEvent OnHelp = {read=FOnHelp, write=FOnHelp};
	__property Classes::TNotifyEvent OnHint = {read=FOnHint, write=FOnHint};
	__property Forms::TMessageEvent OnMessage = {read=FOnMessage, write=FOnMessage};
	__property Classes::TNotifyEvent OnMinimize = {read=FOnMinimize, write=FOnMinimize};
	__property Classes::TNotifyEvent OnRestore = {read=FOnRestore, write=FOnRestore};
	__property Forms::TShowHintEvent OnShowHint = {read=FOnShowHint, write=FOnShowHint};
	__property TacAppKeyEvent OnAppKeyDown = {read=FOnAppKeyDown, write=FOnAppKeyDown};
	__property TacAppKeyEvent OnAppKeyUp = {read=FOnAppKeyUp, write=FOnAppKeyUp};
	__property TacAppMouseMoveEvent OnAppMouseMove = {read=FOnAppMouseMove, write=FOnAppMouseMove};
	__property TacAppMouseEvent OnAppMouseDown = {read=FOnAppMouseDown, write=FOnAppMouseDown};
	__property TacAppMouseEvent OnAppMouseUp = {read=FOnAppMouseUp, write=FOnAppMouseUp};
	__property Actnlist::TActionEvent OnActionExecute = {read=FOnActionExecute, write=FOnActionExecute}
		;
	__property Actnlist::TActionEvent OnActionUpdate = {read=FOnActionUpdate, write=FOnActionUpdate};
	__property Forms::TShortCutEvent OnShortCut = {read=FOnShortCut, write=FOnShortCut};
public:
	#pragma option push -w-inl
	/* TacFormHookComponent.KreateHook */ inline __fastcall TacAppEvents(Classes::TComponent* aOwner, Controls::TWinControl* 
		aHookedObject) : Acclasses::TacAppHookComponent(aOwner, aHookedObject) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE int __stdcall MouseCallbackProc(int nCode, int wParam, int lParam);
extern PACKAGE int __stdcall KeyboardCallbackProc(int nCode, int wParam, int lParam);

}	/* namespace Acappevents */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acappevents;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acAppEvents
