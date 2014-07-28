// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acSendMail.pas' rev: 5.00

#ifndef acSendMailHPP
#define acSendMailHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acThread.hpp>	// Pascal unit
#include <acClasses.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acsendmail
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacSMTPPriority { mpHighest, mpHigh, mpNormal, mpLow, mpLowest };
#pragma option pop

#pragma option push -b-
enum TacSMTPAttachType { atNormal, atEmbedded };
#pragma option pop

#pragma option push -b-
enum TacSMTPContentType { ctPlainText, ctHTML };
#pragma option pop

typedef void __fastcall (__closure *TacSMTPCantAttachEvent)(System::TObject* Sender, AnsiString FileName
	);

typedef void __fastcall (__closure *TacSMTPProgressEvent)(System::TObject* Sender, int MessageSize, 
	int BytesSent, Byte PercentsDone);

typedef void __fastcall (__closure *TacSMTPResponseEvent)(System::TObject* Sender, int Code, AnsiString 
	Response);

class DELPHICLASS TacSendMail;
class PASCALIMPLEMENTATION TacSendMail : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	AnsiString FSMTPHost;
	int FSMTPPort;
	TacSMTPContentType FMsgContentType;
	AnsiString FMsgContentCharset;
	AnsiString FMsgSubject;
	AnsiString FMsgBody;
	TacSMTPPriority FMsgPriority;
	AnsiString FAgent;
	AnsiString FFromAddress;
	AnsiString FFromName;
	AnsiString FFromOrganization;
	AnsiString FTo;
	AnsiString FToCC;
	AnsiString FToBCC;
	AnsiString FReplyTo;
	Classes::TStrings* FAddHeaders;
	Classes::TStrings* FAttach;
	TacSMTPAttachType FAttachType;
	TacSMTPProgressEvent FOnProgress;
	TacSMTPResponseEvent FOnResponse;
	Classes::TNotifyEvent FOnSuccess;
	Classes::TNotifyEvent FOnAborted;
	Classes::TNotifyEvent FOnAnyError;
	TacSMTPCantAttachEvent FOnCantAttach;
	Classes::TNotifyEvent FOnConnLost;
	Classes::TNotifyEvent FOnHostUnreachable;
	TacSMTPResponseEvent FOnSMTPError;
	Acthread::TacCustomThread* FThread;
	int SOCK;
	Classes::TMemoryStream* SMTPStream;
	bool SMTPHostUnreachable;
	int SMTPDeliveryCode;
	int SMTPResponseCode;
	int SMTPErrorCode;
	AnsiString SMTPResponseStr;
	AnsiString SMTPErrorStr;
	bool SMTPSuccess;
	AnsiString SMTPAttachFile;
	void __fastcall SetAddHeaders(Classes::TStrings* Value);
	void __fastcall SetAttach(Classes::TStrings* Value);
	bool __fastcall GetSuspended(void);
	void __fastcall SetSuspended(bool Value);
	Classes::TThreadPriority __fastcall GetThreadPriority(void);
	void __fastcall SetThreadPriority(Classes::TThreadPriority Value);
	bool __fastcall GetWaitThread(void);
	void __fastcall SetWaitThread(bool Value);
	bool __fastcall GetBusy(void);
	
protected:
	void __fastcall ProduceMessage(const Classes::TStream* Stream, bool ToFile, bool Unsent);
	virtual void __fastcall SMTPExecute(System::TObject* Sender);
	virtual void __fastcall SMTPException(System::TObject* Sender);
	virtual void __fastcall SMTPDone(System::TObject* Sender);
	void __fastcall DoCantAttach(void);
	void __fastcall DoProgress(void);
	void __fastcall DoResponse(void);
	
public:
	__fastcall virtual TacSendMail(Classes::TComponent* aOwner);
	__fastcall virtual ~TacSendMail(void);
	bool __fastcall Send(void);
	bool __fastcall SaveToFile(const AnsiString FileName, bool Unsent);
	void __fastcall Abort(void);
	__property bool Busy = {read=GetBusy, nodefault};
	__property bool Suspended = {read=GetSuspended, write=SetSuspended, nodefault};
	__property Acthread::TacCustomThread* Thread = {read=FThread};
	__property Classes::TThreadPriority ThreadPriority = {read=GetThreadPriority, write=SetThreadPriority
		, default=3};
	
__published:
	__property About ;
	__property AnsiString SMTPHost = {read=FSMTPHost, write=FSMTPHost};
	__property int SMTPPort = {read=FSMTPPort, write=FSMTPPort, default=25};
	__property AnsiString MsgContentCharset = {read=FMsgContentCharset, write=FMsgContentCharset};
	__property TacSMTPContentType MsgContentType = {read=FMsgContentType, write=FMsgContentType, default=0
		};
	__property AnsiString MsgSubject = {read=FMsgSubject, write=FMsgSubject};
	__property AnsiString MsgBody = {read=FMsgBody, write=FMsgBody};
	__property TacSMTPPriority MsgPriority = {read=FMsgPriority, write=FMsgPriority, default=2};
	__property AnsiString Agent = {read=FAgent, write=FAgent};
	__property Classes::TStrings* AddHeaders = {read=FAddHeaders, write=SetAddHeaders};
	__property Classes::TStrings* Attach = {read=FAttach, write=SetAttach};
	__property TacSMTPAttachType AttachType = {read=FAttachType, write=FAttachType, default=0};
	__property AnsiString FromAddress = {read=FFromAddress, write=FFromAddress};
	__property AnsiString FromName = {read=FFromName, write=FFromName};
	__property AnsiString FromOrganization = {read=FFromOrganization, write=FFromOrganization};
	__property AnsiString ToAddr = {read=FTo, write=FTo};
	__property AnsiString ToCC = {read=FToCC, write=FToCC};
	__property AnsiString ToBCC = {read=FToBCC, write=FToBCC};
	__property AnsiString ReplyTo = {read=FReplyTo, write=FReplyTo};
	__property bool WaitThread = {read=GetWaitThread, write=SetWaitThread, nodefault};
	__property TacSMTPProgressEvent OnProgress = {read=FOnProgress, write=FOnProgress};
	__property TacSMTPResponseEvent OnResponse = {read=FOnResponse, write=FOnResponse};
	__property Classes::TNotifyEvent OnSuccess = {read=FOnSuccess, write=FOnSuccess};
	__property Classes::TNotifyEvent OnAborted = {read=FOnAborted, write=FOnAborted};
	__property Classes::TNotifyEvent OnAnyError = {read=FOnAnyError, write=FOnAnyError};
	__property TacSMTPCantAttachEvent OnCantAttach = {read=FOnCantAttach, write=FOnCantAttach};
	__property Classes::TNotifyEvent OnConnLost = {read=FOnConnLost, write=FOnConnLost};
	__property Classes::TNotifyEvent OnHostUnreachable = {read=FOnHostUnreachable, write=FOnHostUnreachable
		};
	__property TacSMTPResponseEvent OnSMTPError = {read=FOnSMTPError, write=FOnSMTPError};
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acsendmail */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acsendmail;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acSendMail
