// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acProxyEditor.pas' rev: 3.00

#ifndef acProxyEditorHPP
#define acProxyEditorHPP
#include <acHTTP.hpp>
#include <acEdit.hpp>
#include <acFormHelp.hpp>
#include <acCaptionButton.hpp>
#include <acClasses.hpp>
#include <DsgnWnds.hpp>
#include <DsgnIntf.hpp>
#include <ExtCtrls.hpp>
#include <StdCtrls.hpp>
#include <Dialogs.hpp>
#include <Forms.hpp>
#include <Controls.hpp>
#include <Graphics.hpp>
#include <Classes.hpp>
#include <SysUtils.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acproxyeditor
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacProxyEditor;
class PASCALIMPLEMENTATION TacProxyEditor : public Dsgnwnds::TDesignWindow 
{
	typedef Dsgnwnds::TDesignWindow inherited;
	
__published:
	Acformhelp::TacFormHelp* acFormHelp1;
	Stdctrls::TRadioButton* PreconfigBtn;
	Stdctrls::TRadioButton* DirectBtn;
	Extctrls::TBevel* Bevel1;
	Stdctrls::TRadioButton* ProxyBtn;
	Stdctrls::TLabel* ProxyServerLab;
	Stdctrls::TLabel* BypassLab;
	Stdctrls::TMemo* BypassMemo;
	Stdctrls::TLabel* TipLab;
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	Stdctrls::TLabel* ProxyAddressLab;
	Stdctrls::TLabel* SeparatorLab;
	Acedit::TacNumberEdit* PortEdit;
	Stdctrls::TLabel* PortLab;
	Acedit::TacEdit* ServerEdit;
	void __fastcall CancelBtnClick(System::TObject* Sender);
	void __fastcall PreconfigBtnClick(System::TObject* Sender);
	void __fastcall FormClose(System::TObject* Sender, Forms::TCloseAction &Action);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall OKBtnClick(System::TObject* Sender);
	
private:
	Achttp::TacHTTPProxy* Proxy;
public:
	/* TDesignWindow.Create */ __fastcall virtual TacProxyEditor(Classes::TComponent* AOwner) : Dsgnwnds::
		TDesignWindow(AOwner) { }
	/* TDesignWindow.Destroy */ __fastcall virtual ~TacProxyEditor(void) { }
	
public:
	/* TCustomForm.CreateNew */ __fastcall TacProxyEditor(Classes::TComponent* AOwner, int Dummy) : Dsgnwnds::
		TDesignWindow(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ __fastcall TacProxyEditor(HWND ParentWindow) : Dsgnwnds::TDesignWindow(
		ParentWindow) { }
	
};

typedef TDesigner IDesigner;
;

typedef TFormDesigner IFormDesigner;
;

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall ShowProxyDesigner(Forms::TDesigner* Designer, Achttp::TacHTTPProxy* Proxy
	);

}	/* namespace Acproxyeditor */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Acproxyeditor;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// acProxyEditor
