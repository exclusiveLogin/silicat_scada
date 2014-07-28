// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acFileStorage.pas' rev: 5.00

#ifndef acFileStorageHPP
#define acFileStorageHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acClasses.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

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
#pragma option push -b-
enum TacToplevelDir { tdCurrentDir, tdWindowsDir, tdTempDir, tdSystemDir, tdMediaDir, tdCursorsDir, 
	tdHelpDir, tdSamplesDir, tdDesktop, tdProgramFiles, tdMyDocuments, tdMyPictures, tdAppData, tdNone 
	};
#pragma option pop

class PASCALIMPLEMENTATION TExtractTo : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FCreatePath;
	TacToplevelDir FToplevelDir;
	AnsiString FSubdirectory;
	void __fastcall SetSubdirectory(AnsiString Value);
	
__published:
	__property bool CreatePath = {read=FCreatePath, write=FCreatePath, nodefault};
	__property TacToplevelDir ToplevelDir = {read=FToplevelDir, write=FToplevelDir, nodefault};
	__property AnsiString Subdirectory = {read=FSubdirectory, write=SetSubdirectory};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TExtractTo(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TExtractTo(void) : Classes::TPersistent() { }
	#pragma option pop
	
};


#pragma option push -b-
enum TacFileStorageOverwrite { owIfSizeDifferent, owNever, owAlways };
#pragma option pop

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


typedef void __fastcall (__closure *TOnExtractEvent)(System::TObject* Sender, AnsiString FileName, int 
	FileSize, bool &AllowExtracting);

typedef void __fastcall (__closure *TOnExtractedEvent)(System::TObject* Sender, AnsiString FileName, 
	int FileSize, bool Successfully);

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
	bool __fastcall Extract(const AnsiString FileName, const AnsiString OutputFile);
	
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
	AnsiString FFileName;
	int FSize;
	Classes::TMemoryStream* FData;
	virtual bool __fastcall Extract(const AnsiString FileName, bool CreatePath);
	
public:
	__fastcall TStoredFile(TacFileStorage* aOwner);
	__fastcall virtual ~TStoredFile(void);
	virtual void __fastcall ReadData(Classes::TStream* Stream);
	virtual void __fastcall WriteData(Classes::TStream* Stream);
	virtual bool __fastcall Upload(const AnsiString FileName);
	virtual void __fastcall ClearData(void);
	__property AnsiString FileName = {read=FFileName, write=FFileName};
	__property int Size = {read=FSize, write=FSize, nodefault};
	__property Classes::TMemoryStream* Data = {read=FData, write=FData};
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acfilestorage */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acfilestorage;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acFileStorage
