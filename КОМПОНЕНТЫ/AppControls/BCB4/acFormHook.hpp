// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acFormHook.pas' rev: 4.00

#ifndef acFormHookHPP
#define acFormHookHPP

#pragma delphiheader begin
#pragma option push -w-
#include <acClasses.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acformhook
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacCloseButtonState { cbEnabled, cbDisabled };
#pragma option pop

typedef void __fastcall (__closure *TacDropFilesEvent)(Classes::TStrings* Files, const Windows::TPoint 
	&Pos);

typedef void __fastcall (__closure *TacWndProcMessageBeforeEvent)(System::TObject* Sender, Messages::TMessage 
	&Message, bool &Handled);

typedef void __fastcall (__closure *TacWndProcMessageAfterEvent)(System::TObject* Sender, Messages::TMessage 
	&Message);

class DELPHICLASS TacFormHook;
#pragma pack(push, 4)
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
	#pragma option push -w-inl
	/* TacHFormHookComponent.Destroy */ inline __fastcall virtual ~TacFormHook(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TacFormHookComponent.KreateHook */ inline __fastcall TacFormHook(Classes::TComponent* aOwner, Controls::TWinControl* 
		aHookedObject) : Acclasses::TacHFormHookComponent(aOwner, aHookedObject) { }
	#pragma option pop
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acformhook */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acformhook;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acFormHook
