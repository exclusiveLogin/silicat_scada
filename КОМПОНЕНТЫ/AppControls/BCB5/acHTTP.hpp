// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acHTTP.pas' rev: 5.00

#ifndef acHTTPHPP
#define acHTTPHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acThread.hpp>	// Pascal unit
#include <acClasses.hpp>	// Pascal unit
#include <WinInet.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Achttp
{
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TacHTTPProgressEvent)(System::TObject* Sender, AnsiString ContentType
	, int FileSize, int BytesRead, int ElapsedTime, int EstimatedTimeLeft, Byte PercentsDone, float TransferRate
	, Classes::TStream* Stream);

typedef void __fastcall (__closure *TacHTTPDoneEvent)(System::TObject* Sender, AnsiString ContentType
	, int FileSize, Classes::TStream* Stream);

typedef void __fastcall (__closure *TacHTTPConnLostEvent)(System::TObject* Sender, AnsiString ContentType
	, int FileSize, int BytesRead, Classes::TStream* Stream);

typedef void __fastcall (__closure *TacHTTPErrorEvent)(System::TObject* Sender, int ErrorCode, Classes::TStream* 
	Stream);

typedef void __fastcall (__closure *TacHTTPPasswordRequestEvent)(System::TObject* Sender, bool &TryAgain
	);

#pragma option push -b-
enum TacHTTPRequestMethod { rmAutoDetect, rmGET, rmPOST };
#pragma option pop

#pragma option push -b-
enum TacHTTPAccessType { atPreconfig, atDirect, atUseProxy };
#pragma option pop

class DELPHICLASS TacHTTPProxy;
class PASCALIMPLEMENTATION TacHTTPProxy : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	TacHTTPAccessType FAccessType;
	int FProxyPort;
	AnsiString FProxyServer;
	AnsiString FProxyBypass;
	
public:
	__fastcall TacHTTPProxy(void);
	
__published:
	__property TacHTTPAccessType AccessType = {read=FAccessType, write=FAccessType, default=0};
	__property int ProxyPort = {read=FProxyPort, write=FProxyPort, default=8080};
	__property AnsiString ProxyServer = {read=FProxyServer, write=FProxyServer};
	__property AnsiString ProxyBypass = {read=FProxyBypass, write=FProxyBypass};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacHTTPProxy(void) { }
	#pragma option pop
	
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
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacHTTPRange(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TacHTTPRange(void) : Classes::TPersistent() { }
	#pragma option pop
	
};


class DELPHICLASS TacCustomHTTP;
class PASCALIMPLEMENTATION TacCustomHTTP : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	Classes::TStrings* FAddHeaders;
	AnsiString FAcceptTypes;
	AnsiString FAgent;
	AnsiString FOutputFileName;
	AnsiString FURL;
	AnsiString FPostData;
	AnsiString FReferer;
	AnsiString FUsername;
	AnsiString FPassword;
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
	AnsiString HTTPContentType;
	unsigned HTTPFileSize;
	unsigned HTTPStartTime;
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
	AnsiString __fastcall GetFileName();
	AnsiString __fastcall GetHostName();
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
	__property AnsiString FileName = {read=GetFileName};
	__property AnsiString HostName = {read=GetHostName};
	__property Acthread::TacCustomThread* Thread = {read=FThread};
	__property AnsiString AcceptTypes = {read=FAcceptTypes, write=FAcceptTypes};
	__property Classes::TStrings* AddHeaders = {read=FAddHeaders, write=SetAddHeaders};
	__property AnsiString Agent = {read=FAgent, write=FAgent};
	__property TacHTTPProxy* Proxy = {read=FProxy, write=FProxy};
	__property AnsiString OutputFileName = {read=FOutputFileName, write=FOutputFileName};
	__property AnsiString URL = {read=FURL, write=FURL};
	__property bool UseCache = {read=FUseCache, write=FUseCache, default=1};
	__property bool UseCookies = {read=FUseCookies, write=FUseCookies, default=1};
	__property AnsiString Username = {read=FUsername, write=FUsername};
	__property AnsiString Password = {read=FPassword, write=FPassword};
	__property AnsiString POSTData = {read=FPostData, write=FPostData};
	__property TacHTTPRange* Range = {read=FRange, write=FRange};
	__property AnsiString Referer = {read=FReferer, write=FReferer};
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
class PASCALIMPLEMENTATION TacHTTP : public TacCustomHTTP 
{
	typedef TacCustomHTTP inherited;
	
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
	#pragma option push -w-inl
	/* TacCustomHTTP.Create */ inline __fastcall virtual TacHTTP(Classes::TComponent* aOwner) : TacCustomHTTP(
		aOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacCustomHTTP.Destroy */ inline __fastcall virtual ~TacHTTP(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
static const Word acDefaultProxyPort = 0x1f90;

}	/* namespace Achttp */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Achttp;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acHTTP
