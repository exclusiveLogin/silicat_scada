// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acWavPlayer.pas' rev: 3.00

#ifndef acWavPlayerHPP
#define acWavPlayerHPP
#include <acClasses.hpp>
#include <acFileStorage.hpp>
#include <MMSystem.hpp>
#include <Forms.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acwavplayer
{
//-- type declarations -------------------------------------------------------
enum TacWavPlayerSndType { stCustom, stAsterisk, stCloseProgram, stCriticalStop, stDefaultSound, stExclamation, 
	stExitWindows, stMaximize, stMenuCommand, stMenuPopup, stMinimize, stNewMailNotification, stOpenProgram, 
	stProgramError, stQuestion, stRestoreDown, stRestoreUp, stStartWindows };

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
//-- end unit ----------------------------------------------------------------
#endif	// acWavPlayer
