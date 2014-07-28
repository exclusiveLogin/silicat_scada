// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acFormHook.pas' rev: 3.00

#ifndef acFormHookHPP
#define acFormHookHPP
#include <acClasses.hpp>
#include <Forms.hpp>
#include <Classes.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acformhook
{
//-- type declarations -------------------------------------------------------
enum TacCloseButtonState { cbEnabled, cbDisabled };

typedef void __fastcall (__closure *TacDropFilesEvent)(Classes::TStrings* Files, const tagPOINT &Pos
	);

typedef void __fastcall (__closure *TacWndProcMessageBeforeEvent)(System::TObject* Sender, Messages::TMessage 
	&Message, bool &Handled);

typedef void __fastcall (__closure *TacWndProcMessageAfterEvent)(System::TObject* Sender, Messages::TMessage 
	&Message);

class DELPHICLASS TacFormHook;
class PASCALIMPLEMENTATION TacFormHook : public Acclasses::TacHFormHookComponent 
{
	typedef Acclasses::TacHFormHookComponent inherited;
	
private:
	bool FAcceptFiles;
	bool FActivateFormOnAcceptFiles;
	TacCloseButtonState FCloseButton;
	bool FDragByCaption;
	bool FDragByClient;
	bool FNoCaption;
	bool FNoPaintBackground;
	Classes::TNotifyEvent FOnCaptionChanged;
	Classes::TNotifyEvent FOnFormRecreate;
	TacDropFilesEvent FOnDropFiles;
	TacWndProcMessageBeforeEvent FOnMessageBefore;
	TacWndProcMessageAfterEvent FOnMessageAfter;
	void __fastcall SetAcceptFiles(bool Value);
	void __fastcall SetCloseButton(TacCloseButtonState Value);
	bool __fastcall GetNoCaption(void);
	void __fastcall SetNoCaption(bool Value);
	
protected:
	virtual void __fastcall MessageBefore(Messages::TMessage &Message, bool &Handled);
	virtual void __fastcall MessageAfter(Messages::TMessage &Message);
	virtual void __fastcall FormRecreate(void);
	
public:
	__fastcall virtual TacFormHook(Classes::TComponent* aOwner);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	
__published:
	__property About ;
	__property Topmost ;
	__property bool AcceptFiles = {read=FAcceptFiles, write=SetAcceptFiles, default=0};
	__property bool ActivateFormOnAcceptFiles = {read=FActivateFormOnAcceptFiles, write=FActivateFormOnAcceptFiles
		, default=0};
	__property TacCloseButtonState CloseButton = {read=FCloseButton, write=SetCloseButton, default=0};
	__property bool DragByCaption = {read=FDragByCaption, write=FDragByCaption, default=1};
	__property bool DragByClient = {read=FDragByClient, write=FDragByClient, default=0};
	__property bool NoCaption = {read=GetNoCaption, write=SetNoCaption, default=0};
	__property bool NoPaintBackground = {read=FNoPaintBackground, write=FNoPaintBackground, default=0};
		
	__property Classes::TNotifyEvent OnCaptionChanged = {read=FOnCaptionChanged, write=FOnCaptionChanged
		};
	__property Classes::TNotifyEvent OnFormRecreate = {read=FOnFormRecreate, write=FOnFormRecreate};
	__property TacDropFilesEvent OnDropFiles = {read=FOnDropFiles, write=FOnDropFiles};
	__property TacWndProcMessageBeforeEvent OnMessageBefore = {read=FOnMessageBefore, write=FOnMessageBefore
		};
	__property TacWndProcMessageAfterEvent OnMessageAfter = {read=FOnMessageAfter, write=FOnMessageAfter
		};
public:
	/* TacHFormHookComponent.Destroy */ __fastcall virtual ~TacFormHook(void) { }
	
public:
	/* TacFormHookComponent.KreateHook */ __fastcall TacFormHook(Classes::TComponent* aOwner, Controls::TWinControl* 
		aHookedObject) : Acclasses::TacHFormHookComponent(aOwner, aHookedObject) { }
	
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acformhook */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acformhook;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acFormHook
