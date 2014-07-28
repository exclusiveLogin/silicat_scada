// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acExtAssociation.pas' rev: 3.00

#ifndef acExtAssociationHPP
#define acExtAssociationHPP
#include <acClasses.hpp>
#include <Graphics.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acextassociation
{
//-- type declarations -------------------------------------------------------
enum TacShellExtAccessMode { amReadOnly, amReadWrite };

class DELPHICLASS TacExtAssociation;
class PASCALIMPLEMENTATION TacExtAssociation : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	TacShellExtAccessMode FAccessMode;
	System::AnsiString FDefCommandName;
	System::AnsiString FExtension;
	System::AnsiString FExecutableFile;
	System::AnsiString FExtDescription;
	System::AnsiString FFileDescription;
	System::AnsiString FParamString;
	System::AnsiString FMIMEType;
	System::AnsiString FIconFile;
	int FIconIndex;
	Graphics::TIcon* FLargeIcon;
	Graphics::TIcon* FSmallIcon;
	void __fastcall SetDefCommandName(System::AnsiString Value);
	void __fastcall SetExtension(System::AnsiString Value);
	void __fastcall SetExecutableFile(System::AnsiString Value);
	void __fastcall SetExtDescription(System::AnsiString Value);
	void __fastcall SetFileDescription(System::AnsiString Value);
	void __fastcall SetParamString(System::AnsiString Value);
	void __fastcall SetMIMEType(System::AnsiString Value);
	void __fastcall SetIconFile(System::AnsiString Value);
	void __fastcall SetIconIndex(int Value);
	void __fastcall SetIcon(Graphics::TIcon* Value);
	bool __fastcall CheckAccessMode(void);
	void __fastcall GetExtensionInfo(void);
	void __fastcall DoInstallExtension(void);
	
public:
	__fastcall virtual TacExtAssociation(Classes::TComponent* aOwner);
	__fastcall virtual ~TacExtAssociation(void);
	bool __fastcall InstallExtension(System::AnsiString Extension, System::AnsiString ExecutableFile, System::AnsiString 
		ParamString, System::AnsiString MIMEType, System::AnsiString ExtDescription, System::AnsiString FileDescription
		, System::AnsiString IconFile, int IconIndex);
	bool __fastcall UninstallExtension(System::AnsiString Ext);
	
__published:
	__property About ;
	__property TacShellExtAccessMode AccessMode = {read=FAccessMode, write=FAccessMode, nodefault};
	__property System::AnsiString DefCommandName = {read=FDefCommandName, write=SetDefCommandName};
	__property System::AnsiString ExecutableFile = {read=FExecutableFile, write=SetExecutableFile};
	__property System::AnsiString ExtDescription = {read=FExtDescription, write=SetExtDescription};
	__property System::AnsiString EXTENSION = {read=FExtension, write=SetExtension};
	__property System::AnsiString FileDescription = {read=FFileDescription, write=SetFileDescription};
	__property System::AnsiString ParamString = {read=FParamString, write=SetParamString};
	__property System::AnsiString MIMEType = {read=FMIMEType, write=SetMIMEType};
	__property System::AnsiString IconFile = {read=FIconFile, write=SetIconFile};
	__property int IconIndex = {read=FIconIndex, write=SetIconIndex, nodefault};
	__property Graphics::TIcon* LargeIcon = {read=FLargeIcon, write=SetIcon};
	__property Graphics::TIcon* SmallIcon = {read=FSmallIcon, write=SetIcon};
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acextassociation */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acextassociation;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acExtAssociation
