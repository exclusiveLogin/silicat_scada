// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acFileStorage.pas' rev: 3.00

#ifndef acFileStorageHPP
#define acFileStorageHPP
#include <acClasses.hpp>
#include <Forms.hpp>
#include <Classes.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acfilestorage
{
//-- type declarations -------------------------------------------------------
typedef TList TStoredFiles;
;

class DELPHICLASS TStoredFile;
class DELPHICLASS TacFileStorage;
class DELPHICLASS TAutoExtract;
class DELPHICLASS TExtractTo;
enum TacToplevelDir { tdCurrentDir, tdWindowsDir, tdTempDir, tdSystemDir, tdMediaDir, tdCursorsDir, 
	tdHelpDir, tdSamplesDir, tdDesktop, tdProgramFiles, tdMyDocuments, tdMyPictures, tdAppData, tdNone 
	};

class PASCALIMPLEMENTATION TExtractTo : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FCreatePath;
	TacToplevelDir FToplevelDir;
	System::AnsiString FSubdirectory;
	void __fastcall SetSubdirectory(System::AnsiString Value);
	
__published:
	__property bool CreatePath = {read=FCreatePath, write=FCreatePath, nodefault};
	__property TacToplevelDir ToplevelDir = {read=FToplevelDir, write=FToplevelDir, nodefault};
	__property System::AnsiString Subdirectory = {read=FSubdirectory, write=SetSubdirectory};
public:
	/* TPersistent.Destroy */ __fastcall virtual ~TExtractTo(void) { }
	
public:
	/* TObject.Create */ __fastcall TExtractTo(void) : Classes::TPersistent() { }
	
};

enum TacFileStorageOverwrite { owIfSizeDifferent, owNever, owAlways };

class PASCALIMPLEMENTATION TAutoExtract : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FEnabled;
	TExtractTo* FExtractTo;
	TacFileStorageOverwrite FOverwrite;
	bool FRemoveOnTerminate;
	
public:
	__fastcall TAutoExtract(void);
	__fastcall virtual ~TAutoExtract(void);
	
__published:
	__property bool Enabled = {read=FEnabled, write=FEnabled, nodefault};
	__property TExtractTo* ExtractTo = {read=FExtractTo, write=FExtractTo};
	__property TacFileStorageOverwrite Overwrite = {read=FOverwrite, write=FOverwrite, nodefault};
	__property bool RemoveOnTerminate = {read=FRemoveOnTerminate, write=FRemoveOnTerminate, nodefault};
		
};

typedef void __fastcall (__closure *TOnExtractEvent)(System::TObject* Sender, System::AnsiString FileName
	, int FileSize, bool &AllowExtracting);

typedef void __fastcall (__closure *TOnExtractedEvent)(System::TObject* Sender, System::AnsiString FileName
	, int FileSize, bool Successfully);

class PASCALIMPLEMENTATION TacFileStorage : public Acclasses::TacComponent 
{
	typedef Acclasses::TacComponent inherited;
	
private:
	TAutoExtract* FAutoExtract;
	Classes::TList* FFiles;
	Classes::TStringList* ExtractedFilesList;
	TOnExtractEvent FOnExtract;
	TOnExtractedEvent FOnExtracted;
	void __fastcall SetNone(int Value);
	
protected:
	virtual void __fastcall Loaded(void);
	virtual void __fastcall ReadData(Classes::TStream* Stream);
	virtual void __fastcall WriteData(Classes::TStream* Stream);
	virtual void __fastcall DefineProperties(Classes::TFiler* Filer);
	
public:
	int FCount;
	int FDataSize;
	__fastcall virtual TacFileStorage(Classes::TComponent* aOwner);
	__fastcall virtual ~TacFileStorage(void);
	bool __fastcall Extract(const System::AnsiString FileName, const System::AnsiString OutputFile);
	
__published:
	__property About ;
	__property TAutoExtract* AutoExtract = {read=FAutoExtract, write=FAutoExtract};
	__property int Count = {read=FCount, write=SetNone, nodefault};
	__property int DataSize = {read=FDataSize, write=SetNone, nodefault};
	__property Classes::TList* Files = {read=FFiles, write=FFiles};
	__property TOnExtractEvent OnExtract = {read=FOnExtract, write=FOnExtract};
	__property TOnExtractedEvent OnExtracted = {read=FOnExtracted, write=FOnExtracted};
};

class PASCALIMPLEMENTATION TStoredFile : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	TacFileStorage* FOwner;
	System::AnsiString FFileName;
	int FSize;
	Classes::TMemoryStream* FData;
	virtual bool __fastcall Extract(const System::AnsiString FileName, bool CreatePath);
	
public:
	__fastcall TStoredFile(TacFileStorage* aOwner);
	__fastcall virtual ~TStoredFile(void);
	virtual void __fastcall ReadData(Classes::TStream* Stream);
	virtual void __fastcall WriteData(Classes::TStream* Stream);
	virtual bool __fastcall Upload(const System::AnsiString FileName);
	virtual void __fastcall ClearData(void);
	__property System::AnsiString FileName = {read=FFileName, write=FFileName};
	__property int Size = {read=FSize, write=FSize, nodefault};
	__property Classes::TMemoryStream* Data = {read=FData, write=FData};
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acfilestorage */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acfilestorage;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acFileStorage
