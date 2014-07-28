// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acAutoUpgrader.pas' rev: 4.00

#ifndef acAutoUpgraderHPP
#define acAutoUpgraderHPP

#pragma delphiheader begin
#pragma option push -w-
#include <acHTTP.hpp>	// Pascal unit
#include <acClasses.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acautoupgrader
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacAutoUpgraderLanguage { wlAuto, wlEnglish, wlRussian, wlGerman, wlDutch, wlItalian };
#pragma option pop

#pragma option push -b-
enum TacAutoUpgraderVersionControl { byDate, byNumber };
#pragma option pop

#pragma option push -b-
enum TacUpgradeMethod { umSelfUpgrade, umUseExternalSetup, umRedirectToURL };
#pragma option pop

class DELPHICLASS TacAutoUpgraderInfo;
#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacAutoUpgraderInfo : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	Classes::TStrings* FFiles;
	TacUpgradeMethod FUpgradeMethod;
	AnsiString FUpgradeMsg;
	void __fastcall SetFiles(Classes::TStrings* Value);
	
public:
	__fastcall TacAutoUpgraderInfo(void);
	__fastcall virtual ~TacAutoUpgraderInfo(void);
	
__published:
	__property Classes::TStrings* Files = {read=FFiles, write=SetFiles};
	__property TacUpgradeMethod UpgradeMethod = {read=FUpgradeMethod, write=FUpgradeMethod, default=0};
		
	__property AnsiString UpgradeMsg = {read=FUpgradeMsg, write=FUpgradeMsg};
};

#pragma pack(pop)

#pragma option push -b-
enum acAutoUpgrader__2 { mAskUpgrade, mConnLost, mHostUnreachable, mLostFile, mNoInfoFile, mNoUpdateAvailable, 
	mPasswordRequest };
#pragma option pop

typedef Set<acAutoUpgrader__2, mAskUpgrade, mPasswordRequest>  TacAutoUpgraderShowMessages;

class DELPHICLASS TacAutoUpgraderWizard;
class DELPHICLASS TacAutoUpgrader;
typedef void __fastcall (__closure *TacAUBeginUpgradeEvent)(System::TObject* Sender, AnsiString UpgradeMsg
	, TacUpgradeMethod UpgradeMethod, Classes::TStringList* Files, bool &CanUpgrade);

typedef void __fastcall (__closure *TacAUProgressEvent)(System::TObject* Sender, AnsiString FileURL, 
	int FileSize, int BytesRead, int ElapsedTime, int EstimatedTimeLeft, Byte PercentsDone, Byte TotalPercentsDone
	, float TransferRate);

typedef void __fastcall (__closure *TacAUFileDoneEvent)(System::TObject* Sender, AnsiString FileURL)
	;

typedef void __fastcall (__closure *TacAUHostUnreachableEvent)(System::TObject* Sender, AnsiString URL
	, AnsiString Hostname);

typedef void __fastcall (__closure *TacAULostFileEvent)(System::TObject* Sender, AnsiString FileURL, 
	int ErrorCode, bool &ContinueUpgrade);

#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacAutoUpgrader : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	bool FAutoCheck;
	Achttp::TacCustomHTTP* FHTTP;
	TacAutoUpgraderInfo* FInfoFile;
	AnsiString FInfoFileURL;
	TacAutoUpgraderVersionControl FVersionControl;
	AnsiString FVersionDate;
	bool FVersionDateAutoSet;
	AnsiString FVersionNumber;
	AnsiString FRestartParams;
	TacAutoUpgraderShowMessages FShowMessages;
	TacAutoUpgraderWizard* FWizard;
	TacAUBeginUpgradeEvent FOnBeginUpgrade;
	Classes::TNotifyEvent FOnEndUpgrade;
	Classes::TNotifyEvent FOnLaterUpgrade;
	TacAUProgressEvent FOnProgress;
	TacAUFileDoneEvent FOnFileDone;
	Classes::TNotifyEvent FOnAfterRestart;
	Classes::TNotifyEvent FOnAborted;
	Classes::TNotifyEvent FOnConnLost;
	TacAUHostUnreachableEvent FOnHostUnreachable;
	Classes::TNotifyEvent FOnNoUpdateAvailable;
	Classes::TNotifyEvent FOnNoInfoFile;
	TacAULostFileEvent FOnLostFile;
	Achttp::TacHTTPPasswordRequestEvent FOnPasswordRequest;
	unsigned FHandle;
	bool FAutoCheckDone;
	bool FQueryInfoStage;
	TacUpgradeMethod UpdateMethod;
	Classes::TStringList* DownloadQueue;
	bool HiddenAttributesSet;
	AnsiString CurrentFileName;
	int CurrentFileIndex;
	int LanguageID;
	void __fastcall SetAutoCheck(bool Value);
	AnsiString __fastcall GetHTTPUsername();
	void __fastcall SetHTTPUsername(AnsiString Value);
	AnsiString __fastcall GetHTTPPassword();
	void __fastcall SetHTTPPassword(AnsiString Value);
	bool __fastcall GetUpgrading(void);
	void __fastcall SetQueryInfoStage(bool Value);
	Achttp::TacHTTPProxy* __fastcall GetProxy(void);
	void __fastcall SetProxy(Achttp::TacHTTPProxy* Value);
	void __fastcall SetRestartParams(AnsiString Value);
	Classes::TThreadPriority __fastcall GetThreadPriority(void);
	void __fastcall SetThreadPriority(Classes::TThreadPriority Value);
	void __fastcall SetVersionDateAutoSet(bool Value);
	void __fastcall HTTPDone(System::TObject* Sender, AnsiString ContentType, int FileSize, Classes::TStream* 
		Stream);
	void __fastcall HTTPProgress(System::TObject* Sender, AnsiString ContentType, int FileSize, int BytesRead
		, int ElapsedTime, int EstimatedTimeLeft, Byte PercentsDone, float TransferRate, Classes::TStream* 
		Stream);
	void __fastcall HTTPConnLost(System::TObject* Sender, AnsiString ContentType, int FileSize, int BytesRead
		, Classes::TStream* Stream);
	void __fastcall HTTPError(System::TObject* Sender, int ErrorCode, Classes::TStream* Stream);
	void __fastcall HTTPHostUnreachable(System::TObject* Sender);
	void __fastcall HTTPPasswordRequest(System::TObject* Sender, bool &TryAgain);
	void __fastcall UpdateTimer(void);
	
protected:
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	void __fastcall ParseInfoFile(Classes::TStream* Stream);
	void __fastcall DoUpgrade(bool FirstFile);
	void __fastcall SafeTerminate(void);
	void __fastcall Relaunch(AnsiString ParamStr);
	
public:
	__fastcall virtual TacAutoUpgrader(Classes::TComponent* aOwner);
	__fastcall virtual ~TacAutoUpgrader(void);
	virtual void __fastcall Loaded(void);
	void __fastcall CheckUpdate(void);
	void __fastcall Abort(void);
	void __fastcall RestartApplication(const AnsiString Params);
	AnsiString __fastcall LangStr(int Ident);
	AnsiString __fastcall FmtLangStr(int Ident, const System::TVarRec * Args, const int Args_Size);
	__property bool QInfoStage = {read=FQueryInfoStage, write=SetQueryInfoStage, nodefault};
	__property bool Upgrading = {read=GetUpgrading, nodefault};
	
__published:
	__property About ;
	__property bool AutoCheck = {read=FAutoCheck, write=SetAutoCheck, default=0};
	__property AnsiString HTTPUsername = {read=GetHTTPUsername, write=SetHTTPUsername};
	__property AnsiString HTTPPassword = {read=GetHTTPPassword, write=SetHTTPPassword};
	__property TacAutoUpgraderInfo* InfoFile = {read=FInfoFile, write=FInfoFile};
	__property AnsiString InfoFileURL = {read=FInfoFileURL, write=FInfoFileURL};
	__property Achttp::TacHTTPProxy* Proxy = {read=GetProxy, write=SetProxy};
	__property AnsiString RestartParams = {read=FRestartParams, write=SetRestartParams};
	__property Classes::TThreadPriority ThreadPriority = {read=GetThreadPriority, write=SetThreadPriority
		, default=3};
	__property TacAutoUpgraderVersionControl VersionControl = {read=FVersionControl, write=FVersionControl
		, default=0};
	__property AnsiString VersionDate = {read=FVersionDate, write=FVersionDate};
	__property bool VersionDateAutoSet = {read=FVersionDateAutoSet, write=SetVersionDateAutoSet, nodefault
		};
	__property AnsiString VersionNumber = {read=FVersionNumber, write=FVersionNumber};
	__property TacAutoUpgraderShowMessages ShowMessages = {read=FShowMessages, write=FShowMessages, default=75
		};
	__property TacAutoUpgraderWizard* Wizard = {read=FWizard, write=FWizard};
	__property TacAUBeginUpgradeEvent OnBeginUpgrade = {read=FOnBeginUpgrade, write=FOnBeginUpgrade};
	__property Classes::TNotifyEvent OnEndUpgrade = {read=FOnEndUpgrade, write=FOnEndUpgrade};
	__property Classes::TNotifyEvent OnLaterUpgrade = {read=FOnLaterUpgrade, write=FOnLaterUpgrade};
	__property TacAUProgressEvent OnProgress = {read=FOnProgress, write=FOnProgress};
	__property TacAUFileDoneEvent OnFileDone = {read=FOnFileDone, write=FOnFileDone};
	__property Classes::TNotifyEvent OnAfterRestart = {read=FOnAfterRestart, write=FOnAfterRestart};
	__property Classes::TNotifyEvent OnAborted = {read=FOnAborted, write=FOnAborted};
	__property Classes::TNotifyEvent OnConnLost = {read=FOnConnLost, write=FOnConnLost};
	__property TacAUHostUnreachableEvent OnHostUnreachable = {read=FOnHostUnreachable, write=FOnHostUnreachable
		};
	__property Classes::TNotifyEvent OnNoUpdateAvailable = {read=FOnNoUpdateAvailable, write=FOnNoUpdateAvailable
		};
	__property Classes::TNotifyEvent OnNoInfoFile = {read=FOnNoInfoFile, write=FOnNoInfoFile};
	__property TacAULostFileEvent OnLostFile = {read=FOnLostFile, write=FOnLostFile};
	__property Achttp::TacHTTPPasswordRequestEvent OnPasswordRequest = {read=FOnPasswordRequest, write=
		FOnPasswordRequest};
};

#pragma pack(pop)

#pragma pack(push, 4)
class PASCALIMPLEMENTATION TacAutoUpgraderWizard : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FEnabled;
	Graphics::TBitmap* FPicture;
	TacAutoUpgraderLanguage FLanguage;
	TacAutoUpgrader* FOwner;
	void __fastcall SetPicture(Graphics::TBitmap* Value);
	void __fastcall SetLanguage(TacAutoUpgraderLanguage Value);
	
public:
	__fastcall TacAutoUpgraderWizard(TacAutoUpgrader* aOwner);
	__fastcall virtual ~TacAutoUpgraderWizard(void);
	
__published:
	__property bool Enabled = {read=FEnabled, write=FEnabled, default=1};
	__property Graphics::TBitmap* Pic118x218 = {read=FPicture, write=SetPicture};
	__property TacAutoUpgraderLanguage Language = {read=FLanguage, write=SetLanguage, default=0};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const Word LanguageResEntryPoint = 0xc738;
static const Shortint auWizardTitle = 0x0;
static const Shortint auDownloadingFiles = 0x1;
static const Shortint auUpdateCompleted = 0x2;
static const Shortint auCurrentFile = 0x3;
static const Shortint auAllFiles = 0x4;
static const Shortint auDownloadingFrom = 0x5;
static const Shortint auFileSize = 0x6;
static const Shortint auTransferRate = 0x7;
static const Shortint auEstimatedTime = 0x8;
static const Shortint auDownloadingOf = 0x9;
static const Shortint auSuccessUpdate = 0xa;
static const Shortint auPressOKToFinish = 0xb;
static const Shortint auEnterPassword = 0xc;
static const Shortint auUsername = 0xd;
static const Shortint auPassword = 0xe;
static const Shortint auYes = 0xf;
static const Shortint auNo = 0x10;
static const Shortint auOK = 0x11;
static const Shortint auCancel = 0x12;
static const Shortint auNext = 0x13;
static const Shortint auLater = 0x14;
static const Shortint auWarning = 0x15;
static const Shortint auError = 0x16;
static const Shortint auPreparing = 0x17;
static const Shortint auWelcome = 0x18;
static const Shortint auNoUpdate = 0x19;
static const Shortint auNoInfoFile = 0x1a;
static const Shortint auHostUnreachable = 0x1b;
static const Shortint auInterrupt = 0x1c;
static const Shortint auLostFile = 0x1d;
static const Shortint auPasswordRequired = 0x1e;
static const Shortint auCantStoreFile = 0x1f;
static const Shortint auConnectionLost = 0x20;
static const Word auAutoUpgraderStr = 0xc737;
static const Word auDelphiStr = 0xc736;
static const Word auAppTitle = 0xc735;

}	/* namespace Acautoupgrader */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acautoupgrader;
#endif
#pragma option pop	// -w-

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acAutoUpgrader
