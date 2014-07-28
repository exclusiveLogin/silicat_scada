// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acSystemInfo.pas' rev: 5.00

#ifndef acSystemInfoHPP
#define acSystemInfoHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acUtils.hpp>	// Pascal unit
#include <acClasses.hpp>	// Pascal unit
#include <Registry.hpp>	// Pascal unit
#include <IniFiles.hpp>	// Pascal unit
#include <WinSock.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acsysteminfo
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacInternetStatus { iOffline, iOnline };
#pragma option pop

#pragma option push -b-
enum TacCPUArchitecture { paINTEL, paMIPS, paALPHA, paPPC, paUNKNOWN };
#pragma option pop

#pragma option push -b-
enum TacCPUType { ptIntel386, ptIntel486, ptPentium, ptMIPS_R4000, ptALPHA_21064, ptUNKNOWN };
#pragma option pop

#pragma option push -b-
enum TacScreenColorMode { sm4bit, sm8bit, sm16bit, sm24bit, sm32bit };
#pragma option pop

#pragma option push -b-
enum TacScreenResolution { sr640x480, sr800x600, sr1024x768, sr1152x864, sr1280x960, sr1280x1024 };
#pragma option pop

class DELPHICLASS TacSystemInfo;
class PASCALIMPLEMENTATION TacSystemInfo : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	bool FALLOW_EDIT;
	AnsiString __fastcall GetComputerDescription();
	void __fastcall SetComputerDescription(const AnsiString Value);
	AnsiString __fastcall GetComputerName();
	void __fastcall SetComputerName(const AnsiString Value);
	AnsiString __fastcall GetComputerWorkgroup();
	void __fastcall SetComputerWorkgroup(const AnsiString Value);
	AnsiString __fastcall GetCurrentUserName();
	void __fastcall SetCurrentUserName(const AnsiString Value);
	AnsiString __fastcall GetWinDirectXVersion();
	AnsiString __fastcall GetDefaultBrowser();
	AnsiString __fastcall GetDirAppData();
	void __fastcall SetDirAppData(const AnsiString Value);
	AnsiString __fastcall GetDirAppDataAll();
	void __fastcall SetDirAppDataAll(const AnsiString Value);
	AnsiString __fastcall GetDirCache();
	void __fastcall SetDirCache(const AnsiString Value);
	AnsiString __fastcall GetDirCookies();
	void __fastcall SetDirCookies(const AnsiString Value);
	AnsiString __fastcall GetDirDesktop();
	void __fastcall SetDirDesktop(const AnsiString Value);
	AnsiString __fastcall GetDirFavorites();
	void __fastcall SetDirFavorites(const AnsiString Value);
	AnsiString __fastcall GetDirFavoritesAll();
	void __fastcall SetDirFavoritesAll(const AnsiString Value);
	AnsiString __fastcall GetDirFonts();
	void __fastcall SetDirFonts(const AnsiString Value);
	AnsiString __fastcall GetDirHistory();
	void __fastcall SetDirHistory(const AnsiString Value);
	AnsiString __fastcall GetDirMyPictures();
	void __fastcall SetDirMyPictures(const AnsiString Value);
	AnsiString __fastcall GetDirNetHood();
	void __fastcall SetDirNetHood(const AnsiString Value);
	AnsiString __fastcall GetDirPersonal();
	void __fastcall SetDirPersonal(const AnsiString Value);
	AnsiString __fastcall GetDirPrintHood();
	void __fastcall SetDirPrintHood(const AnsiString Value);
	AnsiString __fastcall GetDirPrograms();
	void __fastcall SetDirPrograms(const AnsiString Value);
	AnsiString __fastcall GetDirProgramsAll();
	void __fastcall SetDirProgramsAll(const AnsiString Value);
	AnsiString __fastcall GetDirRecent();
	void __fastcall SetDirRecent(const AnsiString Value);
	AnsiString __fastcall GetDirSendTo();
	void __fastcall SetDirSendTo(const AnsiString Value);
	AnsiString __fastcall GetDirStartMenu();
	void __fastcall SetDirStartMenu(const AnsiString Value);
	AnsiString __fastcall GetDirStartMenuAll();
	void __fastcall SetDirStartMenuAll(const AnsiString Value);
	AnsiString __fastcall GetDirStartup();
	void __fastcall SetDirStartup(const AnsiString Value);
	AnsiString __fastcall GetDirStartupAll();
	void __fastcall SetDirStartupAll(const AnsiString Value);
	AnsiString __fastcall GetDirTemplates();
	void __fastcall SetDirTemplates(const AnsiString Value);
	AnsiString __fastcall GetDirTemplatesAll();
	void __fastcall SetDirTemplatesAll(const AnsiString Value);
	AnsiString __fastcall GetDirCommonFiles();
	void __fastcall SetDirCommonFiles(const AnsiString Value);
	AnsiString __fastcall GetDirMedia();
	void __fastcall SetDirMedia(const AnsiString Value);
	AnsiString __fastcall GetDirProgramFiles();
	void __fastcall SetDirProgramFiles(const AnsiString Value);
	AnsiString __fastcall GetDirSystem();
	AnsiString __fastcall GetDirTemp();
	AnsiString __fastcall GetDirWindows();
	int __fastcall GetDiskCSerialNumber(void);
	AnsiString __fastcall GetDiskCSerialNumberStr();
	TacInternetStatus __fastcall GetInternetStatus(void);
	void __fastcall SetInternetStatus(TacInternetStatus Value);
	int __fastcall GetMemAvailPhisical(void);
	int __fastcall GetMemAvailVirtual(void);
	int __fastcall GetMemTotalPhisical(void);
	int __fastcall GetMemTotalVirtual(void);
	int __fastcall GetMemLoad(void);
	Acutils::TacOSVersion __fastcall GetOSVersion(void);
	AnsiString __fastcall GetOwnerCompany();
	void __fastcall SetOwnerCompany(const AnsiString Value);
	AnsiString __fastcall GetOwnerName();
	void __fastcall SetOwnerName(const AnsiString Value);
	AnsiString __fastcall GetCPUIdentifier();
	AnsiString __fastcall GetCPUVendor();
	TacCPUArchitecture __fastcall GetCPUArchitecture(void);
	void __fastcall SetCPUArchitecture(const TacCPUArchitecture Value);
	int __fastcall GetCPUsNumber(void);
	TacCPUType __fastcall GetCPUType(void);
	void __fastcall SetCPUType(const TacCPUType Value);
	int __fastcall GetCPUFrequency(void);
	TacScreenColorMode __fastcall GetScreenColorMode(void);
	void __fastcall SetScreenColorMode(const TacScreenColorMode Value);
	TacScreenResolution __fastcall GetScreenResolution(void);
	void __fastcall SetScreenResolution(const TacScreenResolution Value);
	AnsiString __fastcall GetScreenSaver();
	void __fastcall SetScreenSaver(const AnsiString Value);
	int __fastcall GetSystemUpTime(void);
	AnsiString __fastcall GetSystemPathes();
	bool __fastcall GetWinNT(void);
	AnsiString __fastcall GetWinProductID();
	AnsiString __fastcall GetWinProductName();
	AnsiString __fastcall GetWinVersion();
	int __fastcall GetWinVersionBuild(void);
	int __fastcall GetWinVersionMajor(void);
	int __fastcall GetWinVersionMinor(void);
	AnsiString __fastcall GetWinVersionNumber();
	AnsiString __fastcall GetWinVersionSubNumber();
	void __fastcall SetNothingBool(const bool Value);
	void __fastcall SetNothingInteger(const int Value);
	void __fastcall SetNothingString(const AnsiString Value);
	void __fastcall SetNothingOSVersion(const Acutils::TacOSVersion Value);
	AnsiString __fastcall ReadRegString(const AnsiString Key, const AnsiString Name);
	void __fastcall WriteRegString(const AnsiString Key, const AnsiString Name, const AnsiString Value)
		;
	AnsiString __fastcall ReadUserRegString(const AnsiString Key, const AnsiString Name);
	void __fastcall WriteUserRegString(const AnsiString Key, const AnsiString Name, const AnsiString Value
		);
	void __fastcall CouldNotChangeValue(void);
	
__published:
	__property About ;
	__property bool ALLOW_EDIT = {read=FALLOW_EDIT, write=FALLOW_EDIT, nodefault};
	__property AnsiString ComputerDescription = {read=GetComputerDescription, write=SetComputerDescription
		, stored=false};
	__property AnsiString ComputerName = {read=GetComputerName, write=SetComputerName, stored=false};
	__property AnsiString ComputerWorkgroup = {read=GetComputerWorkgroup, write=SetComputerWorkgroup, stored=false
		};
	__property AnsiString CurrentUserName = {read=GetCurrentUserName, write=SetCurrentUserName, stored=false
		};
	__property AnsiString WinDirectXVersion = {read=GetWinDirectXVersion, write=SetNothingString, stored=false
		};
	__property AnsiString DefaultBrowser = {read=GetDefaultBrowser, write=SetNothingString, stored=false
		};
	__property AnsiString DirAppData = {read=GetDirAppData, write=SetDirAppData, stored=false};
	__property AnsiString DirAppDataAll = {read=GetDirAppDataAll, write=SetDirAppDataAll, stored=false}
		;
	__property AnsiString DirCache = {read=GetDirCache, write=SetDirCache, stored=false};
	__property AnsiString DirCookies = {read=GetDirCookies, write=SetDirCookies, stored=false};
	__property AnsiString DirCommonFiles = {read=GetDirCommonFiles, write=SetDirCommonFiles, stored=false
		};
	__property AnsiString DirDesktop = {read=GetDirDesktop, write=SetDirDesktop, stored=false};
	__property AnsiString DirFavorites = {read=GetDirFavorites, write=SetDirFavorites, stored=false};
	__property AnsiString DirFavoritesAll = {read=GetDirFavoritesAll, write=SetDirFavoritesAll, stored=false
		};
	__property AnsiString DirFonts = {read=GetDirFonts, write=SetDirFonts, stored=false};
	__property AnsiString DirHistory = {read=GetDirHistory, write=SetDirHistory, stored=false};
	__property AnsiString DirMedia = {read=GetDirMedia, write=SetDirMedia, stored=false};
	__property AnsiString DirMyPictures = {read=GetDirMyPictures, write=SetDirMyPictures, stored=false}
		;
	__property AnsiString DirNetHood = {read=GetDirNetHood, write=SetDirNetHood, stored=false};
	__property AnsiString DirPersonal = {read=GetDirPersonal, write=SetDirPersonal, stored=false};
	__property AnsiString DirPrintHood = {read=GetDirPrintHood, write=SetDirPrintHood, stored=false};
	__property AnsiString DirProgramFiles = {read=GetDirProgramFiles, write=SetDirProgramFiles, stored=false
		};
	__property AnsiString DirPrograms = {read=GetDirPrograms, write=SetDirPrograms, stored=false};
	__property AnsiString DirProgramsAll = {read=GetDirProgramsAll, write=SetDirProgramsAll, stored=false
		};
	__property AnsiString DirRecent = {read=GetDirRecent, write=SetDirRecent, stored=false};
	__property AnsiString DirSendTo = {read=GetDirSendTo, write=SetDirSendTo, stored=false};
	__property AnsiString DirStartMenu = {read=GetDirStartMenu, write=SetDirStartMenu, stored=false};
	__property AnsiString DirStartMenuAll = {read=GetDirStartMenuAll, write=SetDirStartMenuAll, stored=false
		};
	__property AnsiString DirStartup = {read=GetDirStartup, write=SetDirStartup, stored=false};
	__property AnsiString DirStartupAll = {read=GetDirStartupAll, write=SetDirStartupAll, stored=false}
		;
	__property AnsiString DirSystem = {read=GetDirSystem, write=SetNothingString, stored=false};
	__property AnsiString DirTemp = {read=GetDirTemp, write=SetNothingString, stored=false};
	__property AnsiString DirTemplates = {read=GetDirTemplates, write=SetDirTemplates, stored=false};
	__property AnsiString DirTemplatesAll = {read=GetDirTemplatesAll, write=SetDirTemplatesAll, stored=false
		};
	__property AnsiString DirWindows = {read=GetDirWindows, write=SetNothingString, stored=false};
	__property int DiskCSerialNumber = {read=GetDiskCSerialNumber, write=SetNothingInteger, stored=false
		, nodefault};
	__property AnsiString DiskCSerialNumberStr = {read=GetDiskCSerialNumberStr, write=SetNothingString, 
		stored=false};
	__property TacInternetStatus InternetStatus = {read=GetInternetStatus, write=SetInternetStatus, stored=false
		, nodefault};
	__property int MemAvailPhisical = {read=GetMemAvailPhisical, write=SetNothingInteger, stored=false, 
		nodefault};
	__property int MemTotalPhisical = {read=GetMemTotalPhisical, write=SetNothingInteger, stored=false, 
		nodefault};
	__property int MemAvailVirtual = {read=GetMemAvailVirtual, write=SetNothingInteger, stored=false, nodefault
		};
	__property int MemTotalVirtual = {read=GetMemTotalVirtual, write=SetNothingInteger, stored=false, nodefault
		};
	__property int MemLoad = {read=GetMemLoad, write=SetNothingInteger, stored=false, nodefault};
	__property Acutils::TacOSVersion OSVersion = {read=GetOSVersion, write=SetNothingOSVersion, stored=false
		, nodefault};
	__property AnsiString OwnerName = {read=GetOwnerName, write=SetOwnerName, stored=false};
	__property AnsiString OwnerCompany = {read=GetOwnerCompany, write=SetOwnerCompany, stored=false};
	__property AnsiString CPUIdentifier = {read=GetCPUIdentifier, write=SetNothingString, stored=false}
		;
	__property AnsiString CPUVendor = {read=GetCPUVendor, write=SetNothingString, stored=false};
	__property TacCPUArchitecture CPUArchitecture = {read=GetCPUArchitecture, write=SetCPUArchitecture, 
		stored=false, nodefault};
	__property int CPUsNumber = {read=GetCPUsNumber, write=SetNothingInteger, stored=false, nodefault};
		
	__property TacCPUType CPUType = {read=GetCPUType, write=SetCPUType, stored=false, nodefault};
	__property int CPUFrequency = {read=GetCPUFrequency, write=SetNothingInteger, stored=false, nodefault
		};
	__property TacScreenColorMode ScreenColorMode = {read=GetScreenColorMode, write=SetScreenColorMode, 
		stored=false, nodefault};
	__property TacScreenResolution ScreenResolution = {read=GetScreenResolution, write=SetScreenResolution
		, stored=false, nodefault};
	__property AnsiString ScreenSaver = {read=GetScreenSaver, write=SetScreenSaver, stored=false};
	__property int SystemUpTime = {read=GetSystemUpTime, write=SetNothingInteger, stored=false, nodefault
		};
	__property AnsiString SystemPathes = {read=GetSystemPathes, write=SetNothingString};
	__property bool WinNT = {read=GetWinNT, write=SetNothingBool, nodefault};
	__property AnsiString WinProductID = {read=GetWinProductID, write=SetNothingString, stored=false};
	__property AnsiString WinProductName = {read=GetWinProductName, write=SetNothingString, stored=false
		};
	__property AnsiString WinVersion = {read=GetWinVersion, write=SetNothingString, stored=false};
	__property int WinVersionBuild = {read=GetWinVersionBuild, write=SetNothingInteger, stored=false, nodefault
		};
	__property int WinVersionMajor = {read=GetWinVersionMajor, write=SetNothingInteger, stored=false, nodefault
		};
	__property int WinVersionMinor = {read=GetWinVersionMinor, write=SetNothingInteger, stored=false, nodefault
		};
	__property AnsiString WinVersionNumber = {read=GetWinVersionNumber, write=SetNothingString, stored=false
		};
	__property AnsiString WinVersionSubNumber = {read=GetWinVersionSubNumber, write=SetNothingString, stored=false
		};
public:
	#pragma option push -w-inl
	/* TacComponent.Create */ inline __fastcall virtual TacSystemInfo(Classes::TComponent* aOwner) : Acclasses::TacComponent(
		aOwner) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TComponent.Destroy */ inline __fastcall virtual ~TacSystemInfo(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acsysteminfo */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acsysteminfo;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acSystemInfo
