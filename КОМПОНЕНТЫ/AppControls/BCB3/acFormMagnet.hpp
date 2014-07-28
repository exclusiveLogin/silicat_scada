// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acFormMagnet.pas' rev: 3.00

#ifndef acFormMagnetHPP
#define acFormMagnetHPP
#include <acClasses.hpp>
#include <Forms.hpp>
#include <Classes.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acformmagnet
{
//-- type declarations -------------------------------------------------------
enum TacScreenArea { saWorkArea, saFullScreen };

enum acFormMagnet__1 { seLeft, seTop, seRight, seBottom };

typedef Set<acFormMagnet__1, seLeft, seBottom>  TacScreenEdges;

class DELPHICLASS TacScreenMagnet;
class PASCALIMPLEMENTATION TacScreenMagnet : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	TacScreenArea FArea;
	TacScreenEdges FEdges;
	Byte FScreenPower;
	
public:
	__fastcall TacScreenMagnet(void);
	
__published:
	__property TacScreenArea Area = {read=FArea, write=FArea, nodefault};
	__property TacScreenEdges Edges = {read=FEdges, write=FEdges, default=15};
	__property Byte ScreenPower = {read=FScreenPower, write=FScreenPower, default=16};
public:
	/* TPersistent.Destroy */ __fastcall virtual ~TacScreenMagnet(void) { }
	
};

class DELPHICLASS TacGluedObject;
class DELPHICLASS TacFormMagnet;
enum TacMagnetOption { moDockOnMoving, moDockToInnerBorders, moDockChains, moGlueChains };

typedef Set<TacMagnetOption, moDockOnMoving, moGlueChains>  TacMagnetOptions;

typedef void __fastcall (__closure *TOnGlue)(System::TObject* Sender, Forms::TForm* AnotherForm, bool 
	&AllowGlue);

typedef void __fastcall (__closure *TOnMagnet)(System::TObject* Sender, Forms::TForm* AnotherForm, bool 
	&AllowMagnet);

class DELPHICLASS TacGlueList;
class PASCALIMPLEMENTATION TacGlueList : public Classes::TList 
{
	typedef Classes::TList inherited;
	
public:
	bool __fastcall IsGluedTo(TacFormMagnet* Magnet);
	tagPOINT __fastcall GetFormPositionByMagnet(TacFormMagnet* Magnet);
public:
	/* TList.Destroy */ __fastcall virtual ~TacGlueList(void) { }
	
public:
	/* TObject.Create */ __fastcall TacGlueList(void) : Classes::TList() { }
	
};

class PASCALIMPLEMENTATION TacFormMagnet : public Acclasses::TacFormHookComponent 
{
	typedef Acclasses::TacFormHookComponent inherited;
	
private:
	bool FActive;
	bool FGlue;
	bool FFormDragable;
	TacMagnetOptions FOptions;
	Byte FPower;
	TacScreenMagnet* FScreenMagnet;
	TOnGlue FOnGlue;
	TOnMagnet FOnMagnet;
	Classes::TNotifyEvent FOnDragMove;
	bool Suspended;
	TacGlueList* GluedTo;
	bool Moving;
	tagPOINT BeginMovingPos;
	void __fastcall SetActive(bool Value);
	bool __fastcall GetFormTopmost(void);
	void __fastcall SetFormTopmost(bool Value);
	bool __fastcall AllowGlueTo(TacFormMagnet* AnotherMagnet);
	bool __fastcall AllowMagnetTo(TacFormMagnet* AnotherMagnet);
	void __fastcall RecalculateGluing(void);
	void __fastcall MagnetByDraggingRect(Windows::TRect &DraggingRect, bool CalculateRelativePlacement, 
		bool GlueOnly);
	
protected:
	virtual void __fastcall MessageBefore(Messages::TMessage &Message, bool &Handled);
	virtual void __fastcall MessageAfter(Messages::TMessage &Message);
	
public:
	__fastcall virtual TacFormMagnet(Classes::TComponent* aOwner);
	__fastcall virtual ~TacFormMagnet(void);
	void __fastcall DoMagnet(void);
	
__published:
	__property About ;
	__property bool Active = {read=FActive, write=SetActive, default=1};
	__property bool Glue = {read=FGlue, write=FGlue, nodefault};
	__property bool FormDragable = {read=FFormDragable, write=FFormDragable, nodefault};
	__property bool FormTopmost = {read=GetFormTopmost, write=SetFormTopmost, nodefault};
	__property TacMagnetOptions Options = {read=FOptions, write=FOptions, default=15};
	__property Byte Power = {read=FPower, write=FPower, default=20};
	__property TacScreenMagnet* ScreenMagnet = {read=FScreenMagnet, write=FScreenMagnet};
	__property TOnGlue OnGlue = {read=FOnGlue, write=FOnGlue};
	__property TOnMagnet OnMagnet = {read=FOnMagnet, write=FOnMagnet};
	__property Classes::TNotifyEvent OnDragMove = {read=FOnDragMove, write=FOnDragMove};
public:
	/* TacFormHookComponent.KreateHook */ __fastcall TacFormMagnet(Classes::TComponent* aOwner, Controls::TWinControl* 
		aHookedObject) : Acclasses::TacFormHookComponent(aOwner, aHookedObject) { }
	
};

class PASCALIMPLEMENTATION TacGluedObject : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	TacFormMagnet* Magnet;
	tagPOINT Position;
	
public:
	__fastcall TacGluedObject(TacFormMagnet* aMagnet, int aLeft, int aTop);
public:
	/* TObject.Destroy */ __fastcall virtual ~TacGluedObject(void) { }
	
};

//-- var, const, procedure ---------------------------------------------------
#define DEFAULT_POWER (Byte)(20)
#define DEFAULT_SCREEN_POWER (Byte)(16)

}	/* namespace Acformmagnet */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acformmagnet;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acFormMagnet
