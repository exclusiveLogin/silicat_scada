// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acFormMagnet.pas' rev: 4.00

#ifndef acFormMagnetHPP
#define acFormMagnetHPP

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

namespace Acformmagnet
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacScreenArea { saWorkArea, saFullScreen };
#pragma option pop

#pragma option push -b-
enum acFormMagnet__1 { seLeft, seTop, seRight, seBottom };
#pragma option pop

typedef Set<acFormMagnet__1, seLeft, seBottom>  TacScreenEdges;

class DELPHICLASS TacScreenMagnet;
#pragma pack(push, 4)
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
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacScreenMagnet(void) { }
	#pragma option pop
	
};

#pragma pack(pop)

class DELPHICLASS TacGluedObject;
class DELPHICLASS TacFormMagnet;
#pragma option push -b-
enum TacMagnetOption { moDockOnMoving, moDockToInnerBorders, moDockChains, moGlueChains };
#pragma option pop

typedef Set<TacMagnetOption, moDockOnMoving, moGlueChains>  TacMagnetOptions;

typedef void __fastcall (__closure *TOnGlue)(System::TObject* Sender, Forms::TForm* AnotherForm, bool 
	&AllowGlue);

typedef void __fastcall (__closure *TOnMagnet)(System::TObject* Sender, Forms::TForm* AnotherForm, bool 
	&AllowMagnet);

class DELPHICLASS TacGlueList;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacGlueList : public Classes::TList 
{
	typedef Classes::TList inherited;
	
public:
	bool __fastcall IsGluedTo(TacFormMagnet* Magnet);
	Windows::TPoint __fastcall GetFormPositionByMagnet(TacFormMagnet* Magnet);
public:
	#pragma option push -w-inl
	/* TList.Destroy */ inline __fastcall virtual ~TacGlueList(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TacGlueList(void) : Classes::TList() { }
	#pragma option pop
	
};

#pragma pack(pop)

#pragma pack(push, 4)
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
	Windows::TPoint BeginMovingPos;
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
	#pragma option push -w-inl
	/* TacFormHookComponent.KreateHook */ inline __fastcall TacFormMagnet(Classes::TComponent* aOwner, 
		Controls::TWinControl* aHookedObject) : Acclasses::TacFormHookComponent(aOwner, aHookedObject) { }
		
	#pragma option pop
	
};

#pragma pack(pop)

#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacGluedObject : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	TacFormMagnet* Magnet;
	Windows::TPoint Position;
	
public:
	__fastcall TacGluedObject(TacFormMagnet* aMagnet, int aLeft, int aTop);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TacGluedObject(void) { }
	#pragma option pop
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const Shortint DEFAULT_POWER = 0x14;
static const Shortint DEFAULT_SCREEN_POWER = 0x10;

}	/* namespace Acformmagnet */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acformmagnet;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acFormMagnet
