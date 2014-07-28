// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acHTTP.pas' rev: 3.00

#ifndef acHTTPHPP
#define acHTTPHPP
#include <acThread.hpp>
#include <acClasses.hpp>
#include <WinInet.hpp>
#include <Forms.hpp>
#include <Classes.hpp>
#include <SysUtils.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Achttp
{
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TacHTTPProgressEvent)(System::TObject* Sender, System::AnsiString 
	ContentType, int FileSize, int BytesRead, int ElapsedTime, int EstimatedTimeLeft, Byte PercentsDone
	, float TransferRate, Classes::TStream* Stream);

typedef void __fastcall (__closure *TacHTTPDoneEvent)(System::TObject* Sender, System::AnsiString ContentType
	, int FileSize, Classes::TStream* Stream);

typedef void __fastcall (__closure *TacHTTPConnLostEvent)(System::TObject* Sender, System::AnsiString 
	ContentType, int FileSize, int BytesRead, Classes::TStream* Stream);

typedef void __fastcall (__closure *TacHTTPErrorEvent)(System::TObject* Sender, int ErrorCode, Classes::TStream* 
	Stream);

typedef void __fastcall (__closure *TacHTTPPasswordRequestEvent)(System::TObject* Sender, bool &TryAgain
	);

enum TacHTTPRequestMethod { rmAutoDetect, rmGET, rmPOST };

enum TacHTTPAccessType { atPreconfig, atDirect, atUseProxy };

class DELPHICLASS TacHTTPProxy;
class PASCALIMPLEMENTATION TacHTTPProxy : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	TacHTTPAccessType FAccessType;
	int FProxyPort;
	System::AnsiString FProxyServer;
	System::AnsiString FProxyBypass;
	
public:
	__fastcall TacHTTPProxy(void);
	
__published:
	__property TacHTTPAccessType AccessType = {read=FAccessType, write=FAccessType, default=0};
	__property int ProxyPort = {read=FProxyPort, write=FProxyPort, default=8080};
	__property System::AnsiString ProxyServer = {read=FProxyServer, write=FProxyServer};
	__property System::AnsiString ProxyBypass = {read=FProxyBypass, write=FProxyBypass};
public:
	/* TPersistent.Destroy */ __fastcall virtual ~TacHTTPProxy(void) { }
	
};

class DELPHICLASS TacHTTPRange;
class PASCALIMPLEMENTATION TacHTTPRange : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	int FStartRange;
	int FEndRange;
	
__published:
	__property int StartRange = {read=FStartRange, write=FStartRange, default=0};
	__property int EndRange = {read=FEndRange, write=FEndRange, default=0};
public:
	/* TPersistent.Destroy */ __fastcall virtual ~TacHTTPRange(void) { }
	
public:
	/* TObject.Create */ __fastcall TacHTTPRange(void) : Classes::TPersistent() { }
	
};

class DELPHICLASS TacCustomHTTP;
class PASCALIMPLEMENTATION TacCustomHTTP : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	Classes::TStrings* FAddHeaders;
	System::AnsiString FAcceptTypes;
	System::AnsiString FAgent;
	System::AnsiString FOutputFileName;
	System::AnsiString FURL;
	System::AnsiString FPostData;
	System::AnsiString FReferer;
	System::AnsiString FUsername;
	System::AnsiString FPassword;
	bool FUseCache;
	bool FUseCookies;
	bool FWorkOffline;
	TacHTTPRange* FRange;
	TacHTTPRequestMethod FRequestMethod;
	TacHTTPProxy* FProxy;
	Acthread::TacCustomThread* FThread;
	Classes::TStream* HTTPStream;
	bool HTTPSuccess;
	int HTTPErrorCode;
	System::AnsiString HTTPContentType;
	int HTTPFileSize;
	int HTTPStartTime;
	void *hSession;
	void *hConnect;
	void *hRequest;
	TacHTTPDoneEvent FOnDone;
	TacHTTPProgressEvent FOnProgress;
	Classes::TNotifyEvent FOnAnyError;
	Classes::TNotifyEvent FOnAborted;
	TacHTTPConnLostEvent FOnConnLost;
	TacHTTPErrorEvent FOnHTTPError;
	TacHTTPPasswordRequestEvent FOnPasswordRequest;
	Classes::TNotifyEvent FOnHostUnreachable;
	void __fastcall SetAddHeaders(Classes::TStrings* Value);
	bool __fastcall GetSuspended(void);
	void __fastcall SetSuspended(bool Value);
	Classes::TThreadPriority __fastcall GetThreadPriority(void);
	void __fastcall SetThreadPriority(Classes::TThreadPriority Value);
	bool __fastcall GetWaitThread(void);
	void __fastcall SetWaitThread(bool Value);
	bool __fastcall GetBusy(void);
	System::AnsiString __fastcall GetFileName();
	System::AnsiString __fastcall GetHostName();
	void __fastcall CloseHTTPHandles(void);
	void __fastcall ReleaseHTTPStream(void);
	
protected:
	virtual void __fastcall HTTPExecute(System::TObject* Sender);
	virtual void __fastcall HTTPException(System::TObject* Sender);
	virtual void __fastcall HTTPDone(System::TObject* Sender);
	virtual void __fastcall DoProgress(void);
	
public:
	__fastcall virtual TacCustomHTTP(Classes::TComponent* aOwner);
	__fastcall virtual ~TacCustomHTTP(void);
	virtual bool __fastcall Read(void);
	virtual void __fastcall Abort(void);
	__property bool Busy = {read=GetBusy, nodefault};
	__property System::AnsiString FileName = {read=GetFileName};
	__property System::AnsiString HostName = {read=GetHostName};
	__property Acthread::TacCustomThread* Thread = {read=FThread};
	__property System::AnsiString AcceptTypes = {read=FAcceptTypes, write=FAcceptTypes};
	__property Classes::TStrings* AddHeaders = {read=FAddHeaders, write=SetAddHeaders};
	__property System::AnsiString Agent = {read=FAgent, write=FAgent};
	__property TacHTTPProxy* Proxy = {read=FProxy, write=FProxy};
	__property System::AnsiString OutputFileName = {read=FOutputFileName, write=FOutputFileName};
	__property System::AnsiString URL = {read=FURL, write=FURL};
	__property bool UseCache = {read=FUseCache, write=FUseCache, default=1};
	__property bool UseCookies = {read=FUseCookies, write=FUseCookies, default=1};
	__property System::AnsiString Username = {read=FUsername, write=FUsername};
	__property System::AnsiString Password = {read=FPassword, write=FPassword};
	__property System::AnsiString POSTData = {read=FPostData, write=FPostData};
	__property TacHTTPRange* Range = {read=FRange, write=FRange};
	__property System::AnsiString Referer = {read=FReferer, write=FReferer};
	__property TacHTTPRequestMethod RequestMethod = {read=FRequestMethod, write=FRequestMethod, default=0
		};
	__property bool WorkOffline = {read=FWorkOffline, write=FWorkOffline, default=0};
	__property bool Suspended = {read=GetSuspended, write=SetSuspended, nodefault};
	__property Classes::TThreadPriority ThreadPriority = {read=GetThreadPriority, write=SetThreadPriority
		, default=3};
	__property bool WaitThread = {read=GetWaitThread, write=SetWaitThread, default=0};
	__property TacHTTPDoneEvent OnDone = {read=FOnDone, write=FOnDone};
	__property TacHTTPProgressEvent OnProgress = {read=FOnProgress, write=FOnProgress};
	__property Classes::TNotifyEvent OnAnyError = {read=FOnAnyError, write=FOnAnyError};
	__property Classes::TNotifyEvent OnAborted = {read=FOnAborted, write=FOnAborted};
	__property TacHTTPConnLostEvent OnConnLost = {read=FOnConnLost, write=FOnConnLost};
	__property TacHTTPPasswordRequestEvent OnPasswordRequest = {read=FOnPasswordRequest, write=FOnPasswordRequest
		};
	__property TacHTTPErrorEvent OnHTTPError = {read=FOnHTTPError, write=FOnHTTPError};
	__property Classes::TNotifyEvent OnHostUnreachable = {read=FOnHostUnreachable, write=FOnHostUnreachable
		};
};

class DELPHICLASS TacHTTP;
class PASCALIMPLEMENTATION TacHTTP : public Achttp::TacCustomHTTP 
{
	typedef Achttp::TacCustomHTTP inherited;
	
__published:
	__property About ;
	__property AcceptTypes ;
	__property AddHeaders ;
	__property Agent ;
	__property Proxy ;
	__property URL ;
	__property UseCache ;
	__property UseCookies ;
	__property Username ;
	__property Password ;
	__property POSTData ;
	__property Range ;
	__property Referer ;
	__property RequestMethod ;
	__property ThreadPriority ;
	__property WaitThread ;
	__property WorkOffline ;
	__property OnDone ;
	__property OnProgress ;
	__property OnAnyError ;
	__property OnAborted ;
	__property OnConnLost ;
	__property OnHTTPError ;
	__property OnHostUnreachable ;
	__property OnPasswordRequest ;
public:
	/* TacCustomHTTP.Create */ __fastcall virtual TacHTTP(Classes::TComponent* aOwner) : Achttp::TacCustomHTTP(
		aOwner) { }
	/* TacCustomHTTP.Destroy */ __fastcall virtual ~TacHTTP(void) { }
	
};

//-- var, const, procedure ---------------------------------------------------
#define acDefaultProxyPort (Word)(8080)

}	/* namespace Achttp */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Achttp;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acHTTP
