// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acSystemImageList.pas' rev: 5.00

#ifndef acSystemImageListHPP
#define acSystemImageListHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <ImgList.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acsystemimagelist
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacSystemImageSize { is16x16, is32x32 };
#pragma option pop

class DELPHICLASS TacSystemImageList;
class PASCALIMPLEMENTATION TacSystemImageList : public Controls::TImageList 
{
	typedef Controls::TImageList inherited;
	
private:
	AnsiString FAbout;
	TacSystemImageSize FImageSize;
	int FImageSizeInt;
	HIDESBASE void __fastcall ReadLeft(Classes::TReader* Reader);
	HIDESBASE void __fastcall ReadTop(Classes::TReader* Reader);
	HIDESBASE void __fastcall WriteLeft(Classes::TWriter* Writer);
	HIDESBASE void __fastcall WriteTop(Classes::TWriter* Writer);
	int __fastcall GetAllocBy(void);
	HIDESBASE Graphics::TColor __fastcall GetBkColor(void);
	Graphics::TColor __fastcall GetBlendColor(void);
	Imglist::TDrawingStyle __fastcall GetDrawingStyle(void);
	Imglist::TImageType __fastcall GetImageType(void);
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
	__property AnsiString About = {read=FAbout, write=FAbout, stored=false};
	__property TacSystemImageSize ImageSize = {read=FImageSize, write=SetImageSize, default=0};
	__property int AllocBy = {read=GetAllocBy, stored=false, nodefault};
	__property Graphics::TColor BkColor = {read=GetBkColor, stored=false, nodefault};
	__property Graphics::TColor BlendColor = {read=GetBlendColor, stored=false, nodefault};
	__property Imglist::TDrawingStyle DrawingStyle = {read=GetDrawingStyle, stored=false, nodefault};
	__property Imglist::TImageType ImageType = {read=GetImageType, stored=false, nodefault};
	__property bool Masked = {read=GetMasked, stored=false, nodefault};
	__property bool ShareImages = {read=GetShareImages, default=1};
	__property int Width = {read=FImageSizeInt, stored=false, nodefault};
	__property int Height = {read=FImageSizeInt, stored=false, nodefault};
public:
	#pragma option push -w-inl
	/* TCustomImageList.Destroy */ inline __fastcall virtual ~TacSystemImageList(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Acsystemimagelist */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acsystemimagelist;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acSystemImageList
