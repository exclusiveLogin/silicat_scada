// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acSystemInfo.pas' rev: 3.00

#ifndef acSystemInfoHPP
#define acSystemInfoHPP
#include <acUtils.hpp>
#include <acClasses.hpp>
#include <Registry.hpp>
#include <IniFiles.hpp>
#include <WinSock.hpp>
#include <Forms.hpp>
#include <SysUtils.hpp>
#include <Graphics.hpp>
#include <Classes.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acsysteminfo
{
//-- type declarations -------------------------------------------------------
enum TacInternetStatus { iOffline, iOnline };

enum TacCPUArchitecture { paINTEL, paMIPS, paALPHA, paPPC, paUNKNOWN };

enum TacCPUType { ptIntel386, ptIntel486, ptPentium, ptMIPS_R4000, ptALPHA_21064, ptUNKNOWN };

enum TacScreenColorMode { sm4bit, sm8bit, sm16bit, sm24bit, sm32bit };

enum TacScreenResolution { sr640x480, sr800x600, sr1024x768, sr1152x864, sr1280x960, sr1280x1024 };

class DELPHICLASS TacSystemInfo;
class PASCALIMPLEMENTATION TacSystemInfo : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	bool FALLOW_EDIT;
	System::AnsiString __fastcall GetComputerDescription();
	void __fastcall SetComputerDescription(const System::AnsiString Value);
	System::AnsiString __fastcall GetComputerName();
	void __fastcall SetComputerName(const System::AnsiString Value);
	System::AnsiString __fastcall GetComputerWorkgroup();
	void __fastcall SetComputerWorkgroup(const System::AnsiString Value);
	System::AnsiString __fastcall GetCurrentUserName();
	void __fastcall SetCurrentUserName(const System::AnsiString Value);
	System::AnsiString __fastcall GetWinDirectXVersion();
	System::AnsiString __fastcall GetDefaultBrowser();
	System::AnsiString __fastcall GetDirAppData();
	void __fastcall SetDirAppData(const System::AnsiString Value);
	System::AnsiString __fastcall GetDirAppDataAll();
	void __fastcall SetDirAppDataAll(const System::AnsiString Value);
	System::AnsiString __fastcall GetDirCache();
	void __fastcall SetDirCache(const System::AnsiString Value);
	System::AnsiString __fastcall GetDirCookies();
	void __fastcall SetDirCookies(const System::AnsiString Value);
	System::AnsiString __fastcall GetDirDesktop();
	void __fastcall SetDirDesktop(const System::AnsiString Value);
	System::AnsiString __fastcall GetDirFavorites();
	void __fastcall SetDirFavorites(const System::AnsiString Value);
	System::AnsiString __fastcall GetDirFavoritesAll();
	void __fastcall SetDirFavoritesAll(const System::AnsiString Value);
	System::AnsiString __fastcall GetDirFonts();
	void __fastcall SetDirFonts(const System::AnsiString Value);
	System::AnsiString __fastcall GetDirHistory();
	void __fastcall SetDirHistory(const System::AnsiString Value);
	System::AnsiString __fastcall GetDirMyPictures();
	void __fastcall SetDirMyPictures(const System::AnsiString Value);
	System::AnsiString __fastcall GetDirNetHood();
	void __fastcall SetDirNetHood(const System::AnsiString Value);
	System::AnsiString __fastcall GetDirPersonal();
	void __fastcall SetDirPersonal(const System::AnsiString Value);
	System::AnsiString __fastcall GetDirPrintHood();
	void __fastcall SetDirPrintHood(const System::AnsiString Value);
	System::AnsiString __fastcall GetDirPrograms();
	void __fastcall SetDirPrograms(const System::AnsiString Value);
	System::AnsiString __fastcall GetDirProgramsAll();
	void __fastcall SetDirProgramsAll(const System::AnsiString Value);
	System::AnsiString __fastcall GetDirRecent();
	void __fastcall SetDirRecent(const System::AnsiString Value);
	System::AnsiString __fastcall GetDirSendTo();
	void __fastcall SetDirSendTo(const System::AnsiString Value);
	System::AnsiString __fastcall GetDirStartMenu();
	void __fastcall SetDirStartMenu(const System::AnsiString Value);
	System::AnsiString __fastcall GetDirStartMenuAll();
	void __fastcall SetDirStartMenuAll(const System::AnsiString Value);
	System::AnsiString __fastcall GetDirStartup();
	void __fastcall SetDirStartup(const System::AnsiString Value);
	System::AnsiString __fastcall GetDirStartupAll();
	void __fastcall SetDirStartupAll(const System::AnsiString Value);
	System::AnsiString __fastcall GetDirTemplates();
	void __fastcall SetDirTemplates(const System::AnsiString Value);
	System::AnsiString __fastcall GetDirTemplatesAll();
	void __fastcall SetDirTemplatesAll(const System::AnsiString Value);
	System::AnsiString __fastcall GetDirCommonFiles();
	void __fastcall SetDirCommonFiles(const System::AnsiString Value);
	System::AnsiString __fastcall GetDirMedia();
	void __fastcall SetDirMedia(const System::AnsiString Value);
	System::AnsiString __fastcall GetDirProgramFiles();
	void __fastcall SetDirProgramFiles(const System::AnsiString Value);
	System::AnsiString __fastcall GetDirSystem();
	System::AnsiString __fastcall GetDirTemp();
	System::AnsiString __fastcall GetDirWindows();
	int __fastcall GetDiskCSerialNumber(void);
	System::AnsiString __fastcall GetDiskCSerialNumberStr();
	TacInternetStatus __fastcall GetInternetStatus(void);
	void __fastcall SetInternetStatus(TacInternetStatus Value);
	int __fastcall GetMemAvailPhisical(void);
	int __fastcall GetMemAvailVirtual(void);
	int __fastcall GetMemTotalPhisical(void);
	int __fastcall GetMemTotalVirtual(void);
	int __fastcall GetMemLoad(void);
	Acutils::TacOSVersion __fastcall GetOSVersion(void);
	System::AnsiString __fastcall GetOwnerCompany();
	void __fastcall SetOwnerCompany(const System::AnsiString Value);
	System::AnsiString __fastcall GetOwnerName();
	void __fastcall SetOwnerName(const System::AnsiString Value);
	System::AnsiString __fastcall GetCPUIdentifier();
	System::AnsiString __fastcall GetCPUVendor();
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
	System::AnsiString __fastcall GetScreenSaver();
	void __fastcall SetScreenSaver(const System::AnsiString Value);
	int __fastcall GetSystemUpTime(void);
	System::AnsiString __fastcall GetSystemPathes();
	bool __fastcall GetWinNT(void);
	System::AnsiString __fastcall GetWinProductID();
	System::AnsiString __fastcall GetWinProductName();
	System::AnsiString __fastcall GetWinVersion();
	int __fastcall GetWinVersionBuild(void);
	int __fastcall GetWinVersionMajor(void);
	int __fastcall GetWinVersionMinor(void);
	System::AnsiString __fastcall GetWinVersionNumber();
	System::AnsiString __fastcall GetWinVersionSubNumber();
	void __fastcall SetNothingBool(const bool Value);
	void __fastcall SetNothingInteger(const int Value);
	void __fastcall SetNothingString(const System::AnsiString Value);
	void __fastcall SetNothingOSVersion(const Acutils::TacOSVersion Value);
	System::AnsiString __fastcall ReadRegString(const System::AnsiString Key, const System::AnsiString 
		Name);
	void __fastcall WriteRegString(const System::AnsiString Key, const System::AnsiString Name, const System::AnsiString 
		Value);
	System::AnsiString __fastcall ReadUserRegString(const System::AnsiString Key, const System::AnsiString 
		Name);
	void __fastcall WriteUserRegString(const System::AnsiString Key, const System::AnsiString Name, const 
		System::AnsiString Value);
	void __fastcall CouldNotChangeValue(void);
	
__published:
	__property About ;
	__property bool ALLOW_EDIT = {read=FALLOW_EDIT, write=FALLOW_EDIT, nodefault};
	__property System::AnsiString ComputerDescription = {read=GetComputerDescription, write=SetComputerDescription
		, stored=false};
	__property System::AnsiString ComputerName = {read=GetComputerName, write=SetComputerName, stored=false
		};
	__property System::AnsiString ComputerWorkgroup = {read=GetComputerWorkgroup, write=SetComputerWorkgroup
		, stored=false};
	__property System::AnsiString CurrentUserName = {read=GetCurrentUserName, write=SetCurrentUserName, 
		stored=false};
	__property System::AnsiString WinDirectXVersion = {read=GetWinDirectXVersion, write=SetNothingString
		, stored=false};
	__property System::AnsiString DefaultBrowser = {read=GetDefaultBrowser, write=SetNothingString, stored=false
		};
	__property System::AnsiString DirAppData = {read=GetDirAppData, write=SetDirAppData, stored=false};
		
	__property System::AnsiString DirAppDataAll = {read=GetDirAppDataAll, write=SetDirAppDataAll, stored=false
		};
	__property System::AnsiString DirCache = {read=GetDirCache, write=SetDirCache, stored=false};
	__property System::AnsiString DirCookies = {read=GetDirCookies, write=SetDirCookies, stored=false};
		
	__property System::AnsiString DirCommonFiles = {read=GetDirCommonFiles, write=SetDirCommonFiles, stored=false
		};
	__property System::AnsiString DirDesktop = {read=GetDirDesktop, write=SetDirDesktop, stored=false};
		
	__property System::AnsiString DirFavorites = {read=GetDirFavorites, write=SetDirFavorites, stored=false
		};
	__property System::AnsiString DirFavoritesAll = {read=GetDirFavoritesAll, write=SetDirFavoritesAll, 
		stored=false};
	__property System::AnsiString DirFonts = {read=GetDirFonts, write=SetDirFonts, stored=false};
	__property System::AnsiString DirHistory = {read=GetDirHistory, write=SetDirHistory, stored=false};
		
	__property System::AnsiString DirMedia = {read=GetDirMedia, write=SetDirMedia, stored=false};
	__property System::AnsiString DirMyPictures = {read=GetDirMyPictures, write=SetDirMyPictures, stored=false
		};
	__property System::AnsiString DirNetHood = {read=GetDirNetHood, write=SetDirNetHood, stored=false};
		
	__property System::AnsiString DirPersonal = {read=GetDirPersonal, write=SetDirPersonal, stored=false
		};
	__property System::AnsiString DirPrintHood = {read=GetDirPrintHood, write=SetDirPrintHood, stored=false
		};
	__property System::AnsiString DirProgramFiles = {read=GetDirProgramFiles, write=SetDirProgramFiles, 
		stored=false};
	__property System::AnsiString DirPrograms = {read=GetDirPrograms, write=SetDirPrograms, stored=false
		};
	__property System::AnsiString DirProgramsAll = {read=GetDirProgramsAll, write=SetDirProgramsAll, stored=false
		};
	__property System::AnsiString DirRecent = {read=GetDirRecent, write=SetDirRecent, stored=false};
	__property System::AnsiString DirSendTo = {read=GetDirSendTo, write=SetDirSendTo, stored=false};
	__property System::AnsiString DirStartMenu = {read=GetDirStartMenu, write=SetDirStartMenu, stored=false
		};
	__property System::AnsiString DirStartMenuAll = {read=GetDirStartMenuAll, write=SetDirStartMenuAll, 
		stored=false};
	__property System::AnsiString DirStartup = {read=GetDirStartup, write=SetDirStartup, stored=false};
		
	__property System::AnsiString DirStartupAll = {read=GetDirStartupAll, write=SetDirStartupAll, stored=false
		};
	__property System::AnsiString DirSystem = {read=GetDirSystem, write=SetNothingString, stored=false}
		;
	__property System::AnsiString DirTemp = {read=GetDirTemp, write=SetNothingString, stored=false};
	__property System::AnsiString DirTemplates = {read=GetDirTemplates, write=SetDirTemplates, stored=false
		};
	__property System::AnsiString DirTemplatesAll = {read=GetDirTemplatesAll, write=SetDirTemplatesAll, 
		stored=false};
	__property System::AnsiString DirWindows = {read=GetDirWindows, write=SetNothingString, stored=false
		};
	__property int DiskCSerialNumber = {read=GetDiskCSerialNumber, write=SetNothingInteger, stored=false
		, nodefault};
	__property System::AnsiString DiskCSerialNumberStr = {read=GetDiskCSerialNumberStr, write=SetNothingString
		, stored=false};
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
	__property System::AnsiString OwnerName = {read=GetOwnerName, write=SetOwnerName, stored=false};
	__property System::AnsiString OwnerCompany = {read=GetOwnerCompany, write=SetOwnerCompany, stored=false
		};
	__property System::AnsiString CPUIdentifier = {read=GetCPUIdentifier, write=SetNothingString, stored=false
		};
	__property System::AnsiString CPUVendor = {read=GetCPUVendor, write=SetNothingString, stored=false}
		;
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
	__property System::AnsiString ScreenSaver = {read=GetScreenSaver, write=SetScreenSaver, stored=false
		};
	__property int SystemUpTime = {read=GetSystemUpTime, write=SetNothingInteger, stored=false, nodefault
		};
	__property System::AnsiString SystemPathes = {read=GetSystemPathes, write=SetNothingString};
	__property bool WinNT = {read=GetWinNT, write=SetNothingBool, nodefault};
	__property System::AnsiString WinProductID = {read=GetWinProductID, write=SetNothingString, stored=false
		};
	__property System::AnsiString WinProductName = {read=GetWinProductName, write=SetNothingString, stored=false
		};
	__property System::AnsiString WinVersion = {read=GetWinVersion, write=SetNothingString, stored=false
		};
	__property int WinVersionBuild = {read=GetWinVersionBuild, write=SetNothingInteger, stored=false, nodefault
		};
	__property int WinVersionMajor = {read=GetWinVersionMajor, write=SetNothingInteger, stored=false, nodefault
		};
	__property int WinVersionMinor = {read=GetWinVersionMinor, write=SetNothingInteger, stored=false, nodefault
		};
	__property System::AnsiString WinVersionNumber = {read=GetWinVersionNumber, write=SetNothingString, 
		stored=false};
	__property System::AnsiString WinVersionSubNumber = {read=GetWinVersionSubNumber, write=SetNothingString
		, stored=false};
public:
	/* TacComponent.Create */ __fastcall virtual TacSystemInfo(Classes::TComponent* aOwner) : Acclasses::
		TacComponent(aOwner) { }
	
public:
	/* TComponent.Destroy */ __fastcall virtual ~TacSystemInfo(void) { }
	
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acsysteminfo */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acsysteminfo;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acSystemInfo
