// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acSystemImageList.pas' rev: 3.00

#ifndef acSystemImageListHPP
#define acSystemImageListHPP
#include <Graphics.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acsystemimagelist
{
//-- type declarations -------------------------------------------------------
enum TacSystemImageSize { is16x16, is32x32 };

class DELPHICLASS TacSystemImageList;
class PASCALIMPLEMENTATION TacSystemImageList : public Controls::TImageList 
{
	typedef Controls::TImageList inherited;
	
private:
	System::AnsiString FAbout;
	TacSystemImageSize FImageSize;
	int FImageSizeInt;
	HIDESBASE void __fastcall ReadLeft(Classes::TReader* Reader);
	HIDESBASE void __fastcall ReadTop(Classes::TReader* Reader);
	HIDESBASE void __fastcall WriteLeft(Classes::TWriter* Writer);
	HIDESBASE void __fastcall WriteTop(Classes::TWriter* Writer);
	int __fastcall GetAllocBy(void);
	HIDESBASE Graphics::TColor __fastcall GetBkColor(void);
	Graphics::TColor __fastcall GetBlendColor(void);
	Controls::TDrawingStyle __fastcall GetDrawingStyle(void);
	Controls::TImageType __fastcall GetImageType(void);
	bool __fastcall GetMasked(void);
	bool __fastcall GetShareImages(void);
	void __fastcall SetImageSize(TacSystemImageSize Value);
	
protected:
	virtual void __fastcall DefineProperties(Classes::TFiler* Filer);
	virtual void __fastcall SysInitialize(void);
	
public:
	__fastcall virtual TacSystemImageList(Classes::TComponent* aOwner);
	__fastcall TacSystemImageList(int aWidth, int aHeight);
	
__published:
	__property System::AnsiString About = {read=FAbout, write=FAbout, stored=false};
	__property TacSystemImageSize ImageSize = {read=FImageSize, write=SetImageSize, default=0};
	__property int AllocBy = {read=GetAllocBy, stored=false, nodefault};
	__property Graphics::TColor BkColor = {read=GetBkColor, stored=false, nodefault};
	__property Graphics::TColor BlendColor = {read=GetBlendColor, stored=false, nodefault};
	__property Controls::TDrawingStyle DrawingStyle = {read=GetDrawingStyle, stored=false, nodefault};
	__property Controls::TImageType ImageType = {read=GetImageType, stored=false, nodefault};
	__property bool Masked = {read=GetMasked, stored=false, nodefault};
	__property bool ShareImages = {read=GetShareImages, default=1};
	__property int Width = {read=FImageSizeInt, stored=false, nodefault};
	__property int Height = {read=FImageSizeInt, stored=false, nodefault};
public:
	/* TCustomImageList.Destroy */ __fastcall virtual ~TacSystemImageList(void) { }
	
};

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acsystemimagelist */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acsystemimagelist;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acSystemImageList
