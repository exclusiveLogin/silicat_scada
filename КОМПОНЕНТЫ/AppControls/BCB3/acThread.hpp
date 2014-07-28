// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acThread.pas' rev: 3.00

#ifndef acThreadHPP
#define acThreadHPP
#include <acClasses.hpp>
#include <Classes.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acthread
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacEventThread;
class DELPHICLASS TacCustomThread;
class PASCALIMPLEMENTATION TacCustomThread : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	Classes::TNotifyEvent FOnTerminate;
	TacEventThread* FThread;
	bool FTrueStart;
	bool FHardBusy;
	bool FWaitThread;
	Classes::TThreadPriority __fastcall GetPriority(void);
	void __fastcall SetPriority(Classes::TThreadPriority Value);
	bool __fastcall GetSuspended(void);
	void __fastcall SetSuspended(bool Value);
	bool __fastcall GetRunning(void);
	bool __fastcall GetTerminated(void);
	int __fastcall GetThreadID(void);
	Classes::TNotifyEvent __fastcall GetOnException();
	void __fastcall SetOnException(Classes::TNotifyEvent Value);
	Classes::TNotifyEvent __fastcall GetOnExecute();
	void __fastcall SetOnExecute(Classes::TNotifyEvent Value);
	int __fastcall GetHandle(void);
	int __fastcall GetReturnValue(void);
	void __fastcall SetReturnValue(int Value);
	
public:
	__fastcall virtual TacCustomThread(Classes::TComponent* aOwner);
	__fastcall virtual ~TacCustomThread(void);
	virtual void __fastcall Execute(void);
	virtual void __fastcall Synchronize(Classes::TThreadMethod Method);
	void __fastcall Suspend(void);
	void __fastcall Resume(void);
	void __fastcall Terminate(bool Forced);
	int __fastcall WaitFor(void);
	__property int Handle = {read=GetHandle, nodefault};
	__property bool Running = {read=GetRunning, nodefault};
	__property bool Terminated = {read=GetTerminated, nodefault};
	__property int ThreadID = {read=GetThreadID, nodefault};
	__property int ReturnValue = {read=GetReturnValue, write=SetReturnValue, nodefault};
	__property bool WaitThread = {read=FWaitThread, write=FWaitThread, default=0};
	__property Classes::TThreadPriority Priority = {read=GetPriority, write=SetPriority, default=3};
	__property bool Suspended = {read=GetSuspended, write=SetSuspended, default=1};
	__property Classes::TNotifyEvent OnException = {read=GetOnException, write=SetOnException};
	__property Classes::TNotifyEvent OnExecute = {read=GetOnExecute, write=SetOnExecute};
	__property Classes::TNotifyEvent OnTerminate = {read=FOnTerminate, write=FOnTerminate};
};

class PASCALIMPLEMENTATION TacEventThread : public Classes::TThread 
{
	typedef Classes::TThread inherited;
	
private:
	TacCustomThread* Owner;
	bool FRunning;
	Classes::TNotifyEvent FOnExecute;
	Classes::TNotifyEvent FOnException;
	void __fastcall SynchronizedException(void);
	
protected:
	virtual void __fastcall Execute(void);
	virtual TacEventThread* __fastcall RecreateThread(void);
	
public:
	__fastcall TacEventThread(TacCustomThread* aOwner);
	__property Classes::TNotifyEvent OnExecute = {read=FOnExecute, write=FOnExecute};
	__property Classes::TNotifyEvent OnException = {read=FOnException, write=FOnException};
	__property bool Running = {read=FRunning, nodefault};
public:
	/* TThread.Destroy */ __fastcall virtual ~TacEventThread(void) { }
	
};

class DELPHICLASS TacThread;
class PASCALIMPLEMENTATION TacThread : public Acthread::TacCustomThread 
{
	typedef Acthread::TacCustomThread inherited;
	
__published:
	__property About ;
	__property Priority ;
	__property Suspended ;
	__property WaitThread ;
	__property OnException ;
	__property OnExecute ;
	__property OnTerminate ;
public:
	/* TacCustomThread.Create */ __fastcall virtual TacThread(Classes::TComponent* aOwner) : Acthread::
		TacCustomThread(aOwner) { }
	/* TacCustomThread.Destroy */ __fastcall virtual ~TacThread(void) { }
	
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acthread */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acthread;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acThread
