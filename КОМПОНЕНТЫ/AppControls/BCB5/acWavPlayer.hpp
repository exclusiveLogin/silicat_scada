// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acWavPlayer.pas' rev: 5.00

#ifndef acWavPlayerHPP
#define acWavPlayerHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acClasses.hpp>	// Pascal unit
#include <acFileStorage.hpp>	// Pascal unit
#include <MMSystem.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acwavplayer
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacWavPlayerSndType { stCustom, stAsterisk, stCloseProgram, stCriticalStop, stDefaultSound, stExclamation, 
	stExitWindows, stMaximize, stMenuCommand, stMenuPopup, stMinimize, stNewMailNotification, stOpenProgram, 
	stProgramError, stQuestion, stRestoreDown, stRestoreUp, stStartWindows };
#pragma option pop

class DELPHICLASS TacWavPlayer;
class PASCALIMPLEMENTATION TacWavPlayer : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	bool FAsynchronous;
	bool FLooped;
	TacWavPlayerSndType FSoundType;
	Acfilestorage::TStoredFile* FWaveSound;
	Classes::TNotifyEvent FOnBeforePlay;
	Classes::TNotifyEvent FOnAfterPlay;
	void __fastcall SetLooped(bool Value);
	void __fastcall SetSoundType(TacWavPlayerSndType Value);
	
protected:
	virtual void __fastcall DefineProperties(Classes::TFiler* Filer);
	
public:
	__fastcall virtual TacWavPlayer(Classes::TComponent* aOwner);
	__fastcall virtual ~TacWavPlayer(void);
	virtual void __fastcall Play(void);
	virtual void __fastcall Stop(void);
	
__published:
	__property About ;
	__property bool Asynchronous = {read=FAsynchronous, write=FAsynchronous, nodefault};
	__property bool Looped = {read=FLooped, write=SetLooped, nodefault};
	__property TacWavPlayerSndType SoundType = {read=FSoundType, write=SetSoundType, nodefault};
	__property Acfilestorage::TStoredFile* WaveSound = {read=FWaveSound, write=FWaveSound};
	__property Classes::TNotifyEvent OnBeforePlay = {read=FOnBeforePlay, write=FOnBeforePlay};
	__property Classes::TNotifyEvent OnAfterPlay = {read=FOnAfterPlay, write=FOnAfterPlay};
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acwavplayer */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acwavplayer;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acWavPlayer
