// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acSimpleTCP.pas' rev: 5.00

#ifndef acSimpleTCPHPP
#define acSimpleTCPHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acClasses.hpp>	// Pascal unit
#include <WinSock.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acsimpletcp
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacSimpleTCPClient;
typedef void __fastcall (__closure *TacSimpleTCPAcceptEvent)(System::TObject* Sender, TacSimpleTCPClient* 
	Client, bool &Accept);

typedef void __fastcall (__closure *TacSimpleTCPServerEvent)(System::TObject* Sender, TacSimpleTCPClient* 
	Client);

typedef void __fastcall (__closure *TacSimpleTCPServerIOEvent)(System::TObject* Sender, TacSimpleTCPClient* 
	Client, Classes::TStream* Stream);

typedef void __fastcall (__closure *TacSimpleTCPClientIOEvent)(System::TObject* Sender, Classes::TStream* 
	Stream);

typedef void __fastcall (__closure *TacSimpleTCPErrorEvent)(System::TObject* Sender, int Socket, int 
	ErrorCode, AnsiString ErrorMsg);

class DELPHICLASS TacCustomSimpleSocket;
class PASCALIMPLEMENTATION TacCustomSimpleSocket : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	bool FAllowChangeHostAndPortOnConnection;
	bool FConnected;
	void *FData;
	AnsiString FHost;
	Word FPort;
	int FSocket;
	TacSimpleTCPErrorEvent FOnError;
	Classes::TList* FConnections;
	sockaddr_in SockAddrIn;
	hostent *HostEnt;
	protoent *PProtoEnt;
	WSAData WSAData;
	HWND WindowHandle;
	void __fastcall WndProc(Messages::TMessage &Msg);
	MESSAGE void __fastcall UMTCPSelect(Messages::TMessage &Msg);
	int __fastcall SendBufferTo(int Socket, char * Buffer, int BufLength);
	int __fastcall SendStreamTo(int Socket, Classes::TStream* Stream);
	
protected:
	virtual void __fastcall SocketError(int Socket, int ErrorCode);
	virtual void __fastcall SetHost(AnsiString Value) = 0 ;
	virtual void __fastcall SetPort(Word Value) = 0 ;
	virtual void __fastcall DoAccept(void) = 0 ;
	virtual void __fastcall DoConnect(void) = 0 ;
	virtual void __fastcall DoClose(int Socket) = 0 ;
	virtual void __fastcall DoRead(TacSimpleTCPClient* Client, Classes::TStream* Stream) = 0 ;
	
public:
	__fastcall virtual TacCustomSimpleSocket(Classes::TComponent* aOwner);
	__fastcall virtual ~TacCustomSimpleSocket(void);
	__property bool AllowChangeHostAndPortOnConnection = {read=FAllowChangeHostAndPortOnConnection, write=
		FAllowChangeHostAndPortOnConnection, nodefault};
	__property void * Data = {read=FData, write=FData};
	__property AnsiString Host = {read=FHost, write=SetHost};
	__property Word Port = {read=FPort, write=SetPort, nodefault};
	__property int Socket = {read=FSocket, write=FSocket, nodefault};
	__property TacSimpleTCPErrorEvent OnError = {read=FOnError, write=FOnError};
};


class DELPHICLASS TacSimpleTCPServer;
class PASCALIMPLEMENTATION TacSimpleTCPServer : public TacCustomSimpleSocket 
{
	typedef TacCustomSimpleSocket inherited;
	
private:
	bool FListen;
	TacSimpleTCPAcceptEvent FOnAccept;
	TacSimpleTCPServerEvent FOnClientConnected;
	TacSimpleTCPServerEvent FOnClientDisconnected;
	TacSimpleTCPServerIOEvent FOnClientRead;
	AnsiString __fastcall GetLocalHostName();
	AnsiString __fastcall GetLocalIP();
	void __fastcall SetNoneStr(AnsiString Value);
	
protected:
	virtual void __fastcall SocketError(int Socket, int ErrorCode);
	virtual void __fastcall SetListen(bool Value);
	virtual void __fastcall SetPort(Word Value);
	virtual void __fastcall DoAccept(void);
	virtual void __fastcall DoClose(int Socket);
	virtual void __fastcall DoRead(TacSimpleTCPClient* Client, Classes::TStream* Stream);
	
public:
	__fastcall virtual TacSimpleTCPServer(Classes::TComponent* aOwner);
	__fastcall virtual ~TacSimpleTCPServer(void);
	int __fastcall Send(TacSimpleTCPClient* Client, char * Buffer, int BufLength);
	int __fastcall SendStream(TacSimpleTCPClient* Client, Classes::TStream* Stream);
	void __fastcall Broadcast(char * Buffer, int BufLength);
	void __fastcall BroadcastStream(Classes::TStream* Stream);
	__property Classes::TList* Connections = {read=FConnections};
	
__published:
	__property bool Listen = {read=FListen, write=SetListen, nodefault};
	__property AnsiString LocalHostName = {read=GetLocalHostName, write=SetNoneStr};
	__property AnsiString LocalIP = {read=GetLocalIP, write=SetNoneStr};
	__property TacSimpleTCPAcceptEvent OnAccept = {read=FOnAccept, write=FOnAccept};
	__property TacSimpleTCPServerEvent OnClientConnected = {read=FOnClientConnected, write=FOnClientConnected
		};
	__property TacSimpleTCPServerEvent OnClientDisconnected = {read=FOnClientDisconnected, write=FOnClientDisconnected
		};
	__property TacSimpleTCPServerIOEvent OnClientRead = {read=FOnClientRead, write=FOnClientRead};
	__property About ;
	__property AllowChangeHostAndPortOnConnection ;
	__property Port ;
	__property OnError ;
};


class PASCALIMPLEMENTATION TacSimpleTCPClient : public TacCustomSimpleSocket 
{
	typedef TacCustomSimpleSocket inherited;
	
private:
	Classes::TNotifyEvent FOnConnected;
	Classes::TNotifyEvent FOnDisconnected;
	TacSimpleTCPClientIOEvent FOnRead;
	int __fastcall GetIP(void);
	void __fastcall SetIP(int Value);
	
protected:
	virtual void __fastcall SocketError(int Socket, int ErrorCode);
	virtual void __fastcall SetConnected(bool Value);
	virtual void __fastcall SetHost(AnsiString Value);
	virtual void __fastcall SetPort(Word Value);
	virtual void __fastcall DoConnect(void);
	virtual void __fastcall DoClose(int Socket);
	virtual void __fastcall DoRead(TacSimpleTCPClient* Client, Classes::TStream* Stream);
	
public:
	__fastcall virtual ~TacSimpleTCPClient(void);
	int __fastcall Send(char * Buffer, int BufLength);
	int __fastcall SendStream(Classes::TStream* Stream);
	__property int IP = {read=GetIP, write=SetIP, nodefault};
	
__published:
	__property bool Connected = {read=FConnected, write=SetConnected, nodefault};
	__property Classes::TNotifyEvent OnConnected = {read=FOnConnected, write=FOnConnected};
	__property Classes::TNotifyEvent OnDisconnected = {read=FOnDisconnected, write=FOnDisconnected};
	__property TacSimpleTCPClientIOEvent OnRead = {read=FOnRead, write=FOnRead};
	__property About ;
	__property AllowChangeHostAndPortOnConnection ;
	__property Host ;
	__property Port ;
	__property OnError ;
public:
	#pragma option push -w-inl
	/* TacCustomSimpleSocket.Create */ inline __fastcall virtual TacSimpleTCPClient(Classes::TComponent* 
		aOwner) : TacCustomSimpleSocket(aOwner) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
static const Word UM_TCPASYNCSELECT = 0x401;

}	/* namespace Acsimpletcp */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acsimpletcp;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acSimpleTCP
