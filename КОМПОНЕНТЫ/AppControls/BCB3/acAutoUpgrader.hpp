// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acAutoUpgrader.pas' rev: 3.00

#ifndef acAutoUpgraderHPP
#define acAutoUpgraderHPP
#include <acHTTP.hpp>
#include <acClasses.hpp>
#include <SysUtils.hpp>
#include <Forms.hpp>
#include <Graphics.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acautoupgrader
{
//-- type declarations -------------------------------------------------------
enum TacAutoUpgraderLanguage { wlAuto, wlEnglish, wlRussian, wlGerman, wlDutch, wlItalian };

enum TacAutoUpgraderVersionControl { byDate, byNumber };

enum TacUpgradeMethod { umSelfUpgrade, umUseExternalSetup, umRedirectToURL };

class DELPHICLASS TacAutoUpgraderInfo;
class PASCALIMPLEMENTATION TacAutoUpgraderInfo : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	Classes::TStrings* FFiles;
	TacUpgradeMethod FUpgradeMethod;
	System::AnsiString FUpgradeMsg;
	void __fastcall SetFiles(Classes::TStrings* Value);
	
public:
	__fastcall TacAutoUpgraderInfo(void);
	__fastcall virtual ~TacAutoUpgraderInfo(void);
	
__published:
	__property Classes::TStrings* Files = {read=FFiles, write=SetFiles};
	__property TacUpgradeMethod UpgradeMethod = {read=FUpgradeMethod, write=FUpgradeMethod, default=0};
		
	__property System::AnsiString UpgradeMsg = {read=FUpgradeMsg, write=FUpgradeMsg};
};

enum acAutoUpgrader__2 { mAskUpgrade, mConnLost, mHostUnreachable, mLostFile, mNoInfoFile, mNoUpdateAvailable, 
	mPasswordRequest };

typedef Set<acAutoUpgrader__2, mAskUpgrade, mPasswordRequest>  TacAutoUpgraderShowMessages;

class DELPHICLASS TacAutoUpgraderWizard;
class DELPHICLASS TacAutoUpgrader;
typedef void __fastcall (__closure *TacAUBeginUpgradeEvent)(System::TObject* Sender, System::AnsiString 
	UpgradeMsg, TacUpgradeMethod UpgradeMethod, Classes::TStringList* Files, bool &CanUpgrade);

typedef void __fastcall (__closure *TacAUProgressEvent)(System::TObject* Sender, System::AnsiString 
	FileURL, int FileSize, int BytesRead, int ElapsedTime, int EstimatedTimeLeft, Byte PercentsDone, Byte 
	TotalPercentsDone, float TransferRate);

typedef void __fastcall (__closure *TacAUFileDoneEvent)(System::TObject* Sender, System::AnsiString 
	FileURL);

typedef void __fastcall (__closure *TacAUHostUnreachableEvent)(System::TObject* Sender, System::AnsiString 
	URL, System::AnsiString Hostname);

typedef void __fastcall (__closure *TacAULostFileEvent)(System::TObject* Sender, System::AnsiString 
	FileURL, int ErrorCode, bool &ContinueUpgrade);

class PASCALIMPLEMENTATION TacAutoUpgrader : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	bool FAutoCheck;
	Achttp::TacCustomHTTP* FHTTP;
	TacAutoUpgraderInfo* FInfoFile;
	System::AnsiString FInfoFileURL;
	TacAutoUpgraderVersionControl FVersionControl;
	System::AnsiString FVersionDate;
	bool FVersionDateAutoSet;
	System::AnsiString FVersionNumber;
	System::AnsiString FRestartParams;
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
	int FHandle;
	bool FAutoCheckDone;
	bool FQueryInfoStage;
	TacUpgradeMethod UpdateMethod;
	Classes::TStringList* DownloadQueue;
	bool HiddenAttributesSet;
	System::AnsiString CurrentFileName;
	int CurrentFileIndex;
	int LanguageID;
	void __fastcall SetAutoCheck(bool Value);
	System::AnsiString __fastcall GetHTTPUsername();
	void __fastcall SetHTTPUsername(System::AnsiString Value);
	System::AnsiString __fastcall GetHTTPPassword();
	void __fastcall SetHTTPPassword(System::AnsiString Value);
	bool __fastcall GetUpgrading(void);
	void __fastcall SetQueryInfoStage(bool Value);
	Achttp::TacHTTPProxy* __fastcall GetProxy(void);
	void __fastcall SetProxy(Achttp::TacHTTPProxy* Value);
	void __fastcall SetRestartParams(System::AnsiString Value);
	Classes::TThreadPriority __fastcall GetThreadPriority(void);
	void __fastcall SetThreadPriority(Classes::TThreadPriority Value);
	void __fastcall SetVersionDateAutoSet(bool Value);
	void __fastcall HTTPDone(System::TObject* Sender, System::AnsiString ContentType, int FileSize, Classes::TStream* 
		Stream);
	void __fastcall HTTPProgress(System::TObject* Sender, System::AnsiString ContentType, int FileSize, 
		int BytesRead, int ElapsedTime, int EstimatedTimeLeft, Byte PercentsDone, float TransferRate, Classes::TStream* 
		Stream);
	void __fastcall HTTPConnLost(System::TObject* Sender, System::AnsiString ContentType, int FileSize, 
		int BytesRead, Classes::TStream* Stream);
	void __fastcall HTTPError(System::TObject* Sender, int ErrorCode, Classes::TStream* Stream);
	void __fastcall HTTPHostUnreachable(System::TObject* Sender);
	void __fastcall HTTPPasswordRequest(System::TObject* Sender, bool &TryAgain);
	void __fastcall UpdateTimer(void);
	
protected:
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	void __fastcall ParseInfoFile(Classes::TStream* Stream);
	void __fastcall DoUpgrade(bool FirstFile);
	void __fastcall SafeTerminate(void);
	void __fastcall Relaunch(System::AnsiString ParamStr);
	
public:
	__fastcall virtual TacAutoUpgrader(Classes::TComponent* aOwner);
	__fastcall virtual ~TacAutoUpgrader(void);
	virtual void __fastcall Loaded(void);
	void __fastcall CheckUpdate(void);
	void __fastcall Abort(void);
	void __fastcall RestartApplication(const System::AnsiString Params);
	System::AnsiString __fastcall LangStr(int Ident);
	System::AnsiString __fastcall FmtLangStr(int Ident, const System::TVarRec * Args, const int Args_Size
		);
	__property bool QInfoStage = {read=FQueryInfoStage, write=SetQueryInfoStage, nodefault};
	__property bool Upgrading = {read=GetUpgrading, nodefault};
	
__published:
	__property About ;
	__property bool AutoCheck = {read=FAutoCheck, write=SetAutoCheck, default=0};
	__property System::AnsiString HTTPUsername = {read=GetHTTPUsername, write=SetHTTPUsername};
	__property System::AnsiString HTTPPassword = {read=GetHTTPPassword, write=SetHTTPPassword};
	__property TacAutoUpgraderInfo* InfoFile = {read=FInfoFile, write=FInfoFile};
	__property System::AnsiString InfoFileURL = {read=FInfoFileURL, write=FInfoFileURL};
	__property Achttp::TacHTTPProxy* Proxy = {read=GetProxy, write=SetProxy};
	__property System::AnsiString RestartParams = {read=FRestartParams, write=SetRestartParams};
	__property Classes::TThreadPriority ThreadPriority = {read=GetThreadPriority, write=SetThreadPriority
		, default=3};
	__property TacAutoUpgraderVersionControl VersionControl = {read=FVersionControl, write=FVersionControl
		, default=0};
	__property System::AnsiString VersionDate = {read=FVersionDate, write=FVersionDate};
	__property bool VersionDateAutoSet = {read=FVersionDateAutoSet, write=SetVersionDateAutoSet, nodefault
		};
	__property System::AnsiString VersionNumber = {read=FVersionNumber, write=FVersionNumber};
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

//-- var, const, procedure ---------------------------------------------------
#define LanguageResEntryPoint (int)(51000)
#define auWizardTitle (Byte)(0)
#define auDownloadingFiles (Byte)(1)
#define auUpdateCompleted (Byte)(2)
#define auCurrentFile (Byte)(3)
#define auAllFiles (Byte)(4)
#define auDownloadingFrom (Byte)(5)
#define auFileSize (Byte)(6)
#define auTransferRate (Byte)(7)
#define auEstimatedTime (Byte)(8)
#define auDownloadingOf (Byte)(9)
#define auSuccessUpdate (Byte)(10)
#define auPressOKToFinish (Byte)(11)
#define auEnterPassword (Byte)(12)
#define auUsername (Byte)(13)
#define auPassword (Byte)(14)
#define auYes (Byte)(15)
#define auNo (Byte)(16)
#define auOK (Byte)(17)
#define auCancel (Byte)(18)
#define auNext (Byte)(19)
#define auLater (Byte)(20)
#define auWarning (Byte)(21)
#define auError (Byte)(22)
#define auPreparing (Byte)(23)
#define auWelcome (Byte)(24)
#define auNoUpdate (Byte)(25)
#define auNoInfoFile (Byte)(26)
#define auHostUnreachable (Byte)(27)
#define auInterrupt (Byte)(28)
#define auLostFile (Byte)(29)
#define auPasswordRequired (Byte)(30)
#define auCantStoreFile (Byte)(31)
#define auConnectionLost (Byte)(32)
#define auAutoUpgraderStr (int)(50999)
#define auDelphiStr (int)(50998)
#define auAppTitle (int)(50997)

}	/* namespace Acautoupgrader */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acautoupgrader;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acAutoUpgrader
