{*******************************************************************************

  Advanced Application Controls v2.4
  FILE: _AACReg.pas - Components Registration and Property Editors.

  Copyright (c) 1998-2001 UtilMind Solutions
  All rights reserved.
  E-Mail: info@utilmind.com
  WWW: http://www.utilmind.com, http://www.appcontrols.com

  The entire contents of this file is protected by International Copyright
Laws. Unauthorized reproduction, reverse-engineering, and distribution of all
or any portion of the code contained in this file is strictly prohibited and
may result in severe civil and criminal penalties and will be prosecuted to
the maximum extent possible under the law.

  Restrictions

  The source code contained within this file and all related files or any
portion of its contents shall at no time be copied, transferred, sold,
distributed, or otherwise made available to other individuals without express
written consent and permission from the UtilMind Solutions.

  Consult the End User License Agreement (EULA) for information on additional
restrictions.

*******************************************************************************}
{$I umDefines.inc}

unit _AACReg;

interface

procedure Register;

implementation

uses Windows, Classes, Controls, Graphics, Forms, StdCtrls, Dialogs,
     TypInfo, SysUtils, {$IFDEF D5} Menus, {$ENDIF}
{$IFDEF D6}
     DesignIntf, DesignEditors, DesignMenus, VCLEditors, acIDEEditorsD6,
{$ELSE}
     DsgnIntf, acIDEEditors,
{$ENDIF}
     acFormHelpReg, acAbout, acClasses, acGraphics, acRichTextUtils,
     acInet, acHTTP, acSendMail, acAppAutoRun, acAppStartCounter, acAppBar,
     acAutoUpgrader, acAppEvents, acAppCursors, acOnlyOne,
     acShortcut, acExtAssociation, acEmbeddedForm,
     acTrayIcon, acCaptionButton, {acGradientCaption,}
     acAnimationEffect, acWin2kEffects, acFormHelp,
     acFormHints, acFormMagnet, acFormSystemMenu,
     acFormTopmost, acFormRoller, acFormPlacementSaver,
     acFormSizeRestrictions, acFormResizeGrip, acFormHook,
     acFormBackground, acFileStorage, acWavPlayer, acUnixCrypt,
     acCursorLocker, acThread, acQuickAboutBox, acSystemInfo,
     acDesktopWallpaper, acControlKeyState, acDateTimeCalc,
     acSimpleTCP,

     acControls, acDragPanel, acRichLabel, acLabels, acButtons,
     acEdit, acMRUComboBox, acImagesComboBox, {acTreeComboBox,}
     acComCtrls, acSystemImageList, acStatusControl,

     acDBListView,

     acStringEditor, acRichTextEditor, acProxyEditor,
     acSendMailRecipientEditor, acAutoUpgraderEditor,
     acAutoUpgraderWizard, acFileStorageEditor;

const
  acVersion = 'v2.4';

type
{$IFDEF D5}
  {$IFNDEF D6}
  IMenuItem = TMenuItem;
  IProperty = TPropertyEditor;
  {$ENDIF}
{$ENDIF}

{$IFNDEF D5}
  TComponents = TComponentList;
  IComponents = TComponentList;
{$ELSE}
  {$IFNDEF D6}
  TComponents = TDesignerSelectionList;
  IComponents = TDesignerSelectionList;
  {$ELSE}
  TComponents = TDesignerSelections;
  IComponents = IDesignerSelections;
  {$ENDIF}
{$ENDIF}

{*******************************************************************************
  About property editor for all App Controls, implements About dialog.
*******************************************************************************}
 { TacAboutProperty }
  TacAboutProperty = class(TStringProperty)
    procedure Edit; override;
    function  GetAttributes: TPropertyAttributes; override;
    function  GetValue: String; override;
  end;

{*******************************************************************************
  Default component editor for all App Controls, implements About dialog.
*******************************************************************************}
  { TacComponentEditor }
  TacComponentEditor = class(TComponentEditor)
  public
    procedure ExecuteVerb(Index: Integer); override;
    function  GetVerbCount: Integer; override;
    function  GetVerb(Index: Integer): string; override;
    {$IFDEF D5}
    procedure PrepareItem(Index: Integer; const AItem: IMenuItem); override;
    {$ENDIF}
  end;

{*******************************************************************************
  Template for "TStringProperties"
*******************************************************************************}
 { TacStringProperty }
  TacStringProperty = class(TStringProperty)
  public
    function GetAttributes: TPropertyAttributes; override;
  end;

{*******************************************************************************
  Multiline string PROPERTY editor for ac_xxx controls
*******************************************************************************}
 { TacMultilineStringProperty }
  TacMultilineStringProperty = class(TCaptionProperty)
  public
    function GetEditLimit: Integer; override;
    function GetAttributes: TPropertyAttributes; override;    
    procedure Edit; override;
  end;

{*******************************************************************************
  RichText PROPERTY editor for ac_xxx controls
*******************************************************************************}
 { TacRichTextProperty }
  TacRichTextProperty = class(TCaptionProperty)
  public
    function GetEditLimit: Integer; override;
    function GetAttributes: TPropertyAttributes; override;    
    procedure Edit; override;
  end;


{*******************************************************************************
  ClearCounter property for acAppStartCounter
*******************************************************************************}
 { TacAppStartCounterCompEditor }
  TacAppStartCounterCompEditor = class(TacComponentEditor)
  public
    procedure ExecuteVerb(Index: Integer); override;
    function GetVerbCount: Integer; override;
    function GetVerb(Index: Integer): String; override;
    {$IFDEF D5}
    procedure PrepareItem(Index: Integer; const AItem: IMenuItem); override;
    {$ENDIF}
  end;

{*******************************************************************************
  Proxy structure PROPERTY editor for acCustomHTTP
*******************************************************************************}
 { TacHTTPProxyProperty }
  TacHTTPProxyProperty = class(TClassProperty)
  public
    function GetValue: String; override;
    function GetAttributes: TPropertyAttributes; override;
    procedure Edit; override;
  end;


{*******************************************************************************
  VersionInfo/Upgrade Message PROPERTY editor for AugoUpgrader
*******************************************************************************}
 { TacAutoUpgraderProperty }
  TacAutoUpgraderProperty = class(TClassProperty)
  public
    function GetValue: String; override;
    function GetAttributes: TPropertyAttributes; override;
    procedure Edit; override;
  end;

{*******************************************************************************
  VersionInfo/Upgrade Message COMPONENT editor for AugoUpgrader
*******************************************************************************}
 { TacAutoUpgraderCompEditor }
  TacAutoUpgraderCompEditor = class(TacComponentEditor)
  public
    procedure ExecuteVerb(Index: Integer); override;
    function GetVerbCount: Integer; override;
    function GetVerb(Index: Integer): String; override;
    {$IFDEF D5}
    procedure PrepareItem(Index: Integer; const AItem: IMenuItem); override;
    {$ENDIF}
  end;

{*******************************************************************************
  Recipients for acSendMail
*******************************************************************************}
 { TacSendMailRecipientsProperty }
  TacSendMailRecipientsProperty = class(TacStringProperty)
  public
    procedure Edit; override;
  end;

{*******************************************************************************
  Executable property editor
*******************************************************************************}
  TacExecutableFileNameProperty = class(TacStringProperty)
  public
    procedure Edit; override;
  end;

{*******************************************************************************
  Shortcut property editor
*******************************************************************************}
  TacShortcutFileNameProperty = class(TacStringProperty)
  public
    procedure Edit; override;
  end;

{*******************************************************************************
  Shortcut component editor - implements file open dialog (for .lnk files only) on doubleclick
*******************************************************************************}
  TacShortcutCompEditor = class(TacComponentEditor)
  public
    procedure ExecuteVerb(Index: Integer); override;
    function GetVerbCount: Integer; override;
    function GetVerb(Index: Integer): string; override;
    {$IFDEF D5}
    procedure PrepareItem(Index: Integer; const AItem: IMenuItem); override;
    {$ENDIF}
  end;


{*******************************************************************************
  StoredFiles property editor for FileStorage component
*******************************************************************************}
 { TacStoredFilesProperty }
 TacStoredFilesProperty = class(TPropertyEditor)
 public
   procedure Edit; override;
   function GetValue: String; override;
   function GetAttributes: TPropertyAttributes; override;
 end;

{*******************************************************************************
  StoredFiles component editor for FileStorage component
*******************************************************************************}
 { TacFileStorageCompEditor }
 TacFileStorageCompEditor = class(TacComponentEditor)
    procedure ExecuteVerb(Index: Integer); override;
    function GetVerbCount: Integer; override;
    function GetVerb(Index: Integer): String; override;
    {$IFDEF D5}
    procedure PrepareItem(Index: Integer; const AItem: IMenuItem); override;
    {$ENDIF}
  end;

{*******************************************************************************
  WaveFile PROPERTY editor for WavPlayer
*******************************************************************************}
 { TacWavPlayerProperty }
  TacWavPlayerWavFileProperty = class(TClassProperty)
  public
    function GetValue: String; override;
    function GetAttributes: TPropertyAttributes; override;
    procedure Edit; override;
  end;

{*******************************************************************************
  WavFile COMPONENT editor for WavPlayer
*******************************************************************************}
 { TacWavPlayerCompEditor }
  TacWavPlayerCompEditor = class(TacComponentEditor)
  public
    procedure ExecuteVerb(Index: Integer); override;
    function GetVerbCount: Integer; override;
    function GetVerb(Index: Integer): String; override;
    {$IFDEF D5}
    procedure PrepareItem(Index: Integer; const AItem: IMenuItem); override;
    {$ENDIF}
  end;

{*******************************************************************************
  TreeView COMPONENT editor for acListView
*******************************************************************************}
 { TacTreeViewCompEditor }
  TacTreeViewCompEditor = class(TacComponentEditor)
    FPropName: String;
{$IFNDEF D6}
    procedure FindProperty(PropertyEditor: TPropertyEditor); virtual;
{$ELSE}
    procedure FindProperty(const PropertyEditor: IProperty); virtual;
{$ENDIF}
  public
    procedure ExecuteVerb(Index: Integer); override;
    function GetVerbCount: Integer; override;
    function GetVerb(Index: Integer): String; override;
  end;

{*******************************************************************************
  ListView COMPONENT editor for acListView
*******************************************************************************}
 { TacListViewCompEditor }
  TacListViewCompEditor = class(TacComponentEditor)
    FPropName: String;
{$IFNDEF D6}
    procedure FindProperty(PropertyEditor: TPropertyEditor); virtual;
{$ELSE}
    procedure FindProperty(const PropertyEditor: IProperty); virtual;
{$ENDIF}
  public
    procedure ExecuteVerb(Index: Integer); override;
    function GetVerbCount: Integer; override;
    function GetVerb(Index: Integer): String; override;
  end;

{*******************************************************************************
  DBListView COMPONENT editor for acDBListView
*******************************************************************************}
 { TacDBListViewCompEditor }
  TacDBListViewCompEditor = class(TacComponentEditor)
    FPropName: String;
{$IFNDEF D6}
    procedure FindProperty(PropertyEditor: TPropertyEditor); virtual;
{$ELSE}
    procedure FindProperty(const PropertyEditor: IProperty); virtual;
{$ENDIF}
  public
    procedure ExecuteVerb(Index: Integer); override;
    function GetVerbCount: Integer; override;
    function GetVerb(Index: Integer): String; override;
  end;


{*******************************************************************************
  QuickAboutBox COMPONENT editor
*******************************************************************************}
 { TacQuickAboutBoxCompEditor }
  TacQuickAboutBoxCompEditor = class(TacComponentEditor)
  public
    procedure ExecuteVerb(Index: Integer); override;
    function GetVerbCount: Integer; override;
    function GetVerb(Index: Integer): String; override;
    {$IFDEF D5}
    procedure PrepareItem(Index: Integer; const AItem: IMenuItem); override;
    {$ENDIF}
  end;

{*******************************************************************************
  Wallpaper PROPERTY editor for DesktopWallpaper
*******************************************************************************}
 { TacWallpaperProperty }
  TacWallpaperProperty = class(TStringProperty)
  public
    function GetAttributes: TPropertyAttributes; override;
    procedure Edit; override;
  end;


{*******************************************************************************
  acURLLabel COMPONENT editor
*******************************************************************************}
 { TacURLLabelCompEditor }
  TacURLLabelCompEditor = class(TacComponentEditor)
  public
    procedure ExecuteVerb(Index: Integer); override;
    function GetVerbCount: Integer; override;
    function GetVerb(Index: Integer): String; override;
    {$IFDEF D5}
    procedure PrepareItem(Index: Integer; const AItem: IMenuItem); override;
    {$ENDIF}
  end;


{ *** implementation for property editors *** }

{ TacAboutProperty }
procedure TacAboutProperty.Edit;
begin
  acShowAbout(TComponent(GetComponent(0)).ClassName);
end;

function TacAboutProperty.GetAttributes: TPropertyAttributes;
begin
  Result := inherited GetAttributes + [paReadOnly, paDialog];
end;

function TacAboutProperty.GetValue: String;
begin
  Result := acVersion;
end;


{ TacComponentEditor}
procedure TacComponentEditor.ExecuteVerb(Index: Integer);
begin
  if Index = GetVerbCount - 1 then
    acShowAbout(Component.ClassName)
  else inherited ExecuteVerb(Index);
end;

function TacComponentEditor.GetVerb(Index: Integer): string;
begin
  if Index = GetVerbCount - 1 then Result := 'About...'
  else Result := inherited GetVerb(Index);
end;

function TacComponentEditor.GetVerbCount: Integer;
begin
  Result := inherited GetVerbCount + 1;
end;

{$IFDEF D5}
procedure TacComponentEditor.PrepareItem(Index: Integer; const AItem: IMenuItem);
begin
{$IFNDEF D6}
  if (Index = GetVerbCount - 1) then
    AItem.Bitmap.LoadFromResourceName(hInstance, 'ACABOUT')
  else
{$ENDIF}  
    inherited PrepareItem(Index, AItem)
end;
{$ENDIF}


{ TacStringProperty}
function TacStringProperty.GetAttributes: TPropertyAttributes;
begin
  Result := [paDialog, paRevertable];
end;


{ TacMultilineStringProperty }
function TacMultilineStringProperty.GetEditLimit: Integer;
begin
  if GetPropType^.Kind = tkString then
    Result := GetTypeData(GetPropType)^.MaxLength
  else Result := 1024;
end;

function TacMultilineStringProperty.GetAttributes: TPropertyAttributes;
begin
  Result := inherited GetAttributes + [paDialog];
end;

procedure TacMultilineStringProperty.Edit;
var
  Comp: TPersistent;
  St: String;
begin
  with TacStringEditor.Create(Application) do
  try
    Comp := GetComponent(0);
    if Comp is TComponent then
      Caption := TComponent(Comp).Name + '.' + GetName
    else Caption := GetName;
    Memo.Text := GetStrValue;
    Memo.MaxLength := GetEditLimit;
    if ShowModal = mrOk then
     begin
      St := Memo.Text;
      while (Length(St) > 0) and (St[Length(St)] < ' ') do
        System.Delete(St, Length(St), 1);
      SetStrValue(St);
     end;
  finally
    Free;
  end;
end;


{ TacRichTextProperty }
function TacRichTextProperty.GetEditLimit: Integer;
begin
  if GetPropType^.Kind = tkString then
    Result := GetTypeData(GetPropType)^.MaxLength
  else Result := 1024;
end;

function TacRichTextProperty.GetAttributes: TPropertyAttributes;
begin
  Result := inherited GetAttributes + [paDialog];
end;

procedure TacRichTextProperty.Edit;
var
  Comp: TPersistent;
  St: String;
begin
  with TacRichTextEditor.Create(Application) do
   try
     GTagOpen := DEFAULT_TAG_OPEN;
     GTagClose := DEFAULT_TAG_CLOSE;

     Comp := GetComponent(0);
     if Comp is TComponent then
       Caption := TComponent(Comp).Name + '.' + GetName
     else Caption := GetName;

     if Comp is TacRichLabel then
      begin
       GTagOpen := TacRichLabel(Comp).TagOpen;
       GTagClose := TacRichLabel(Comp).TagClose;
      end;

     TagEditor.Text := GetStrValue;
     TagToRich(TagEditor.Text, RichEditor, GTagOpen, GTagClose);
     RichEditor.MaxLength := GetEditLimit;
     if ShowModal = mrOk then
      begin
       if not TagEditor.Visible then
         TagEditor.Text := RichToTag(RichEditor, GTagOpen, GTagClose);
       St := TagEditor.Text;
       while (Length(St) > 0) and (St[Length(St)] < ' ') do
         System.Delete(St, Length(St), 1);
       SetStrValue(St);
      end;
   finally
     Free;
   end;
end;


{ TacAppStartCounterCompEditor }
procedure TacAppStartCounterCompEditor.ExecuteVerb(Index: Integer);
begin
  if Index = GetVerbCount - 3 then
    if Application.MessageBox('Reset Start Counter on this machine ?', PChar(Component.Name), mb_YesNo or mb_IconQuestion) = id_Yes then
     begin
      TacAppStartCounter(Component).ResetCounter;
      Designer.Modified;
     end
    else
  else inherited ExecuteVerb(Index);
end;

function TacAppStartCounterCompEditor.GetVerbCount: Integer;
begin
  Result := inherited GetVerbCount + 2;
end;

function TacAppStartCounterCompEditor.GetVerb(Index: Integer): String;
begin
  if Index = GetVerbCount - 3 then Result := '&Reset Counter'
  else
   if Index = GetVerbCount - 2 then Result := '-'
   else Result := inherited GetVerb(Index);
end;

{$IFDEF D5}
procedure TacAppStartCounterCompEditor.PrepareItem(Index: Integer; const AItem: IMenuItem);
begin
{$IFNDEF D6}
  if (Index = GetVerbCount - 3) then
    AItem.Bitmap.LoadFromResourceName(hInstance, 'ACRESET')
  else
{$ENDIF}  
    inherited PrepareItem(Index, AItem)
end;
{$ENDIF}


{ TacHTTPProxyProperty Editor }
function TacHTTPProxyProperty.GetValue: String;
begin
  Result := '(Proxy settings)';
end;

function TacHTTPProxyProperty.GetAttributes: TPropertyAttributes;
begin
  Result := [paSubProperties, paDialog];
end;

procedure TacHTTPProxyProperty.Edit;
var
  Component: TPersistent;
begin
  Component := GetComponent(0);
{$IFDEF AUTOUPGRADERPROXY}
  if Component is TacAutoUpgrader then
    ShowProxyDesigner(Designer, TacAutoUpgrader(Component).Proxy)
  else
{$ENDIF}
    ShowProxyDesigner(Designer, TacCustomHTTP(Component).Proxy)
end;


{ TacAutoUpgraderProperty Editor }
function TacAutoUpgraderProperty.GetValue: String;
begin
  Result := '(Upgrade Info)';
end;

function TacAutoUpgraderProperty.GetAttributes: TPropertyAttributes;
begin
  Result := [paSubProperties, paDialog];
end;

procedure TacAutoUpgraderProperty.Edit;
begin
  ShowAutoUpgraderDesigner(Designer, TacAutoUpgrader(GetComponent(0)));
end;


{ TacAutoUpgraderCompEditor }
procedure TacAutoUpgraderCompEditor.ExecuteVerb(Index: Integer);
begin
  if Index = GetVerbCount - 3 then
    ShowAutoUpgraderDesigner(Designer, TacAutoUpgrader(Component))
  else inherited ExecuteVerb(Index);
end;

function TacAutoUpgraderCompEditor.GetVerbCount: Integer;
begin
  Result := inherited GetVerbCount + 2;
end;

function TacAutoUpgraderCompEditor.GetVerb(Index: Integer): String;
begin
  if Index = GetVerbCount - 3 then
    Result := '&Edit Info-file...'
  else
    if Index = GetVerbCount - 2 then
      Result := '-'
    else
      Result := inherited GetVerb(Index);
end;

{$IFDEF D5}
procedure TacAutoUpgraderCompEditor.PrepareItem(Index: Integer; const AItem: IMenuItem);
begin
{$IFNDEF D6}
  if (Index = GetVerbCount - 2) then
    AItem.Bitmap.LoadFromResourceName(hInstance, 'ACEDIT')
  else
   if (Index = GetVerbCount - 1) then
     AItem.Bitmap.LoadFromResourceName(hInstance, 'ACABOUT')
   else
{$ENDIF}   
     inherited PrepareItem(Index, AItem)
end;
{$ENDIF}


{ TacSendRecipientsProperty Editor }
procedure TacSendMailRecipientsProperty.Edit;
begin
  with TacSendMailRecipientEditor.Create(Application) do
   try
     Recipients := GetValue;
     if ShowModal = ID_OK then
      SetValue(Recipients);
   finally
     Free;
   end;
end;


{ TacExecutableFileName property }
procedure TacExecutableFileNameProperty.Edit;
begin
  with TOpenDialog.Create(Application) do
   try
     FileName   := GetValue;
     Filter     := 'Executable files|*.exe;*.com;*.bat|All files (*.*)|*.*';
     Options    := Options + [ofHideReadOnly, ofNoDereferenceLinks];
     if Execute then SetValue(FileName);
   finally
     Free;
   end;
end;


{ TacShorcutFileName property }
procedure TacShortcutFileNameProperty.Edit;
begin
  with TOpenDialog.Create(Application) do
   try
     FileName   := GetValue;
     Filter     := 'Shortcut files (*.lnk)|*.lnk|All files (*.*)|*.*';
     Options    := Options + [ofHideReadOnly, ofNoDereferenceLinks];
     if Execute then SetValue(FileName);
   finally
     Free;
   end;
end;


{ acShortcut Component Editor }
procedure TacShortcutCompEditor.ExecuteVerb(Index: Integer);
begin
  if Index = GetVerbCount - 3 then
   with TOpenDialog.Create(Application) do
    try
      FileName   := TacShortcut(Component).FileName;
      Title      := 'Select shortcut';
      Filter     := 'Shortcut files (*.lnk)|*.lnk|All files (*.*)|*.*';
      Options    := Options + [ofHideReadOnly, ofNoDereferenceLinks];
      if Execute then
       begin
        TacShortcut(Component).FileName := FileName;
        Designer.Modified;
       end;
    finally
      Free;
    end
  else inherited ExecuteVerb(Index);
end;
             
function TacShortcutCompEditor.GetVerbCount: Integer;
begin
  Result := inherited GetVerbCount + 2;
end;

function TacShortcutCompEditor.GetVerb(Index: Integer): String;
begin
  if Index = GetVerbCount - 3 then Result := '&Select shortcut...'
  else
   if Index = GetVerbCount - 2 then Result := '-'
   else Result := inherited GetVerb(Index);
end;

{$IFDEF D5}
procedure TacShortcutCompEditor.PrepareItem(Index: Integer; const AItem: IMenuItem);
begin
{$IFNDEF D6}
  if (Index = GetVerbCount - 2) then
    AItem.Bitmap.LoadFromResourceName(hInstance, 'ACLOAD')
  else
{$ENDIF}  
    inherited PrepareItem(Index, AItem)
end;
{$ENDIF}


{ acStoredFiles Property Editor }
procedure TacStoredFilesProperty.Edit;
begin
  ShowFileStorageDesigner(Designer, TacFileStorage(GetComponent(0)));
end;

function TacStoredFilesProperty.GetValue: String;
begin
  if TacFileStorage(GetComponent(0)).Files.Count = 0 then
    Result := '(None)'
  else
    Result := '(TStoredFiles)';
end;

function TacStoredFilesProperty.GetAttributes: TPropertyAttributes;
begin
  Result := [paDialog];
end;

{ acFileStorage Component Editor }
procedure TacFileStorageCompEditor.ExecuteVerb(Index: Integer);
begin
  if Index = GetVerbCount - 3 then
    ShowFileStorageDesigner(Designer, TacFileStorage(Component))
  else inherited ExecuteVerb(Index);
end;

function TacFileStorageCompEditor.GetVerb(Index: Integer): String;
begin
  if Index = GetVerbCount - 3 then Result := '&Files Designer...'
  else
   if Index = GetVerbCount - 2 then Result := '-'
   else Result := inherited GetVerb(Index);
end;

function TacFileStorageCompEditor.GetVerbCount: Integer;
begin
  Result := inherited GetVerbCount + 2;
end;

{$IFDEF D5}
procedure TacFileStorageCompEditor.PrepareItem(Index: Integer; const AItem: IMenuItem);
begin
{$IFNDEF D6}
  if Index = GetVerbCount - 3 then
    AItem.Bitmap.LoadFromResourceName(hInstance, 'ACEDIT')
  else
{$ENDIF}  
    inherited PrepareItem(Index, AItem)
end;
{$ENDIF}


{ TacWavPlayerWavFileProperty Editor }
function TacWavPlayerWavFileProperty.GetValue: String;
var
  WaveSound: TStoredFile;
begin
  WaveSound := TacWavPlayer(GetComponent(0)).WaveSound;
  if WaveSound.Data.Memory = nil then
    Result := '(None)'
  else
    Result := '(WAV Sound)'
end;

function TacWavPlayerWavFileProperty.GetAttributes: TPropertyAttributes;
begin
  Result := [paDialog];
end;

procedure TacWavPlayerWavFileProperty.Edit;
var
  WaveSound: TStoredFile;
begin
  WaveSound := TacWavPlayer(GetComponent(0)).WaveSound;

  with TOpenDialog.Create(Application) do
   try
     FileName   := WaveSound.FileName;
     InitialDir := ExtractFilePath(FileName);
     FileName   := ExtractFileName(FileName);
     Filter     := 'WAV files (*.wav)|*.wav|All files (*.*)|*.*';
     Options    := Options + [ofHideReadOnly];
     if Execute then
      begin
       WaveSound.Upload(FileName);
       TacWavPlayer(GetComponent(0)).SoundType := stCustom;
       Designer.Modified;
      end;
   finally
     Free;
   end;
end;


{ TacWavPlayerEditor }
procedure TacWavPlayerCompEditor.ExecuteVerb(Index: Integer);
var
  WaveSound: TStoredFile;
begin
  if Index = GetVerbCount - 4 then
    TacWavPlayer(Component).Play
  else
   if Index = GetVerbCount - 3 then
    begin
     WaveSound := TacWavPlayer(Component).WaveSound;

     with TOpenDialog.Create(Application) do
      try
        Title      := 'Select Wave-Audio file';
        FileName   := WaveSound.FileName;
        InitialDir := ExtractFilePath(FileName);
        FileName   := ExtractFileName(FileName);
        Filter     := 'WAV files (*.wav)|*.wav|All files (*.*)|*.*';
        Options    := Options + [ofHideReadOnly];
        if Execute then
         begin
          WaveSound.Upload(FileName);
          TacWavPlayer(Component).SoundType := stCustom;
          Designer.Modified;
         end;
      finally
        Free;
      end;
    end
   else inherited ExecuteVerb(Index);
end;

function TacWavPlayerCompEditor.GetVerbCount: Integer;
begin
  Result := inherited GetVerbCount + 3;
end;

function TacWavPlayerCompEditor.GetVerb(Index: Integer): String;
begin
  if Index = GetVerbCount - 4 then Result := '&Test!'
  else
   if Index = GetVerbCount - 3 then Result := '&Upload WAV Sound...'
   else
    if Index = GetVerbCount - 2 then Result := '-'
    else Result := inherited GetVerb(Index);
end;

{$IFDEF D5}
procedure TacWavPlayerCompEditor.PrepareItem(Index: Integer; const AItem: IMenuItem);
begin
{$IFNDEF D6}
  if Index = GetVerbCount - 4 then
    AItem.Bitmap.LoadFromResourceName(hInstance, 'ACLIGHT')
  else
   if Index = GetVerbCount - 3 then
     AItem.Bitmap.LoadFromResourceName(hInstance, 'ACLOAD')
   else
{$ENDIF}   
     inherited PrepareItem(Index, AItem)
end;
{$ENDIF}


{ TacQuickAboutBoxCompEditor }
procedure TacQuickAboutBoxCompEditor.ExecuteVerb(Index: Integer);
begin
  if Index = GetVerbCount - 2 then
    TacQuickAboutBox(Component).Execute
  else
    inherited ExecuteVerb(Index);
end;

function TacQuickAboutBoxCompEditor.GetVerbCount: Integer;
begin
  Result := inherited GetVerbCount + 1;
end;

function TacQuickAboutBoxCompEditor.GetVerb(Index: Integer): String;
begin
  if Index = GetVerbCount - 2 then Result := '&Test...'
  else Result := inherited GetVerb(Index);
end;

{$IFDEF D5}
procedure TacQuickAboutBoxCompEditor.PrepareItem(Index: Integer; const AItem: IMenuItem);
begin
{$IFNDEF D6}
  if Index = GetVerbCount - 2 then
    AItem.Bitmap.LoadFromResourceName(hInstance, 'ACLIGHT')
  else
{$ENDIF}  
    inherited PrepareItem(Index, AItem)
end;
{$ENDIF}


procedure TacURLLabelCompEditor.ExecuteVerb(Index: Integer);
begin
  if Index = GetVerbCount - 2 then
    TacURLLabel(Component).Execute
  else inherited ExecuteVerb(Index);
end;

function TacURLLabelCompEditor.GetVerbCount: Integer;
begin
  Result := inherited GetVerbCount + 1;
end;

function TacURLLabelCompEditor.GetVerb(Index: Integer): String;
begin
  if Index = GetVerbCount - 2 then Result := '&Test...'
  else Result := inherited GetVerb(Index);
end;

{$IFDEF D5}
procedure TacURLLabelCompEditor.PrepareItem(Index: Integer; const AItem: IMenuItem);
begin
{$IFNDEF D6}
  if Index = GetVerbCount - 2 then
    AItem.Bitmap.LoadFromResourceName(hInstance, 'ACLIGHT')
  else
{$ENDIF}
    inherited PrepareItem(Index, AItem)
end;
{$ENDIF}


{ TacTreeViewCompEditor }
procedure TacTreeViewCompEditor.ExecuteVerb(Index: Integer);

  procedure ExecutePropEditor(const APropName: String);
  var
    Components: IComponents;
  begin
    FPropName := APropName;
    Components := TComponents.Create;
    try
      Components.Add(Component);
      GetComponentProperties(Components, [tkClass], Designer,
        FindProperty{$IFDEF D6}, nil{$ENDIF});
    finally
{$IFNDEF D6}
      Components.Free;
{$ENDIF}
    end;
  end;

begin
  if Index = GetVerbCount - 3 then ExecutePropEditor('Items')
  else inherited ExecuteVerb(Index);
end;

function TacTreeViewCompEditor.GetVerbCount: Integer;
begin
  Result := inherited GetVerbCount + 2;
end;

function TacTreeViewCompEditor.GetVerb(Index: Integer): String;
begin
  if Index = GetVerbCount - 2 then Result := '-'
  else
   if Index = GetVerbCount - 3 then Result := '&Items Editor...'
   else Result := inherited GetVerb(Index);
end;

{$IFNDEF D6}
procedure TacTreeViewCompEditor.FindProperty(PropertyEditor: TPropertyEditor);
{$ELSE}
procedure TacTreeViewCompEditor.FindProperty(const PropertyEditor: IProperty);
{$ENDIF}
begin
  if PropertyEditor.GetName = FPropName then PropertyEditor.Edit;
{$IFNDEF D6}
  PropertyEditor.Free;
{$ENDIF}
end;


{ TacListViewCompEditor }
procedure TacListViewCompEditor.ExecuteVerb(Index: Integer);

  procedure ExecutePropEditor(const APropName: String);
  var
    Components: IComponents;
  begin
    FPropName := APropName;
    Components := TComponents.Create;
    try
      Components.Add(Component);
      GetComponentProperties(Components, [tkClass], Designer,
        FindProperty{$IFDEF D6}, nil{$ENDIF});
    finally
{$IFNDEF D6}
      Components.Free;
{$ENDIF}
    end;
  end;

begin
  if Index = GetVerbCount - 3 then ExecutePropEditor('Items')
  else
   if Index = GetVerbCount - 4 then ExecutePropEditor('Columns')
   else inherited ExecuteVerb(Index);
end;

function TacListViewCompEditor.GetVerbCount: Integer;
begin
  Result := inherited GetVerbCount + 3;
end;

function TacListViewCompEditor.GetVerb(Index: Integer): String;
begin
  if Index = GetVerbCount - 2 then Result := '-'
  else
   if Index = GetVerbCount - 3 then Result := '&Items Editor...'
   else
    if Index = GetVerbCount - 4 then Result := 'Col&umns Editor...'
    else Result := inherited GetVerb(Index);
end;

{$IFNDEF D6}
procedure TacListViewCompEditor.FindProperty(PropertyEditor: TPropertyEditor);
{$ELSE}
procedure TacListViewCompEditor.FindProperty(const PropertyEditor: IProperty);
{$ENDIF}
begin
  if PropertyEditor.GetName = FPropName then PropertyEditor.Edit;
{$IFNDEF D6}
  PropertyEditor.Free;
{$ENDIF}
end;


{ TacDBListViewCompEditor }
procedure TacDBListViewCompEditor.ExecuteVerb(Index: Integer);

  procedure ExecutePropEditor(const APropName: String);
  var
    Components: IComponents;
  begin
    FPropName := APropName;
    Components := TComponents.Create;
    try
      Components.Add(Component);
      GetComponentProperties(Components, [tkClass], Designer,
        FindProperty{$IFDEF D6}, nil{$ENDIF});
    finally
{$IFNDEF D6}
      Components.Free;
{$ENDIF}
    end;
  end;

begin
  if Index = GetVerbCount - 3 then ExecutePropEditor('Columns')
  else inherited ExecuteVerb(Index);
end;

function TacDBListViewCompEditor.GetVerbCount: Integer;
begin
  Result := inherited GetVerbCount + 2;
end;

function TacDBListViewCompEditor.GetVerb(Index: Integer): String;
begin
  if Index = GetVerbCount - 2 then Result := '-'
  else
   if Index = GetVerbCount - 3 then Result := 'Col&umns Editor...'
   else Result := inherited GetVerb(Index);
end;

{$IFNDEF D6}
procedure TacDBListViewCompEditor.FindProperty(PropertyEditor: TPropertyEditor);
{$ELSE}
procedure TacDBListViewCompEditor.FindProperty(const PropertyEditor: IProperty);
{$ENDIF}
begin
  if PropertyEditor.GetName = FPropName then PropertyEditor.Edit;
{$IFNDEF D6}
  PropertyEditor.Free;
{$ENDIF}
end;


{ TacWallpaperProperty Editor }
function TacWallpaperProperty.GetAttributes: TPropertyAttributes;
begin
  Result := [paDialog];
end;

procedure TacWallpaperProperty.Edit;
begin
  with TOpenDialog.Create(Application) do
   try
     FileName   := GetValue;
     InitialDir := ExtractFilePath(FileName);
     FileName   := ExtractFileName(FileName);
     Filter     := 'Wallpaper Bitmaps (*.bmp)|*.bmp|All files (*.*)|*.*';
     Options    := Options + [ofHideReadOnly];
     if Execute then SetValue(FileName);
   finally
     Free;
   end;
end;

procedure Register;
begin
  RegisterComponents('App Controls', [TacAppAutoRun,            {+}
                                      TacAppStartCounter,       {+}
                                      TacAppEvents,             {+}
                                      TacAppCursors,            {+}                                      
                                      TacOnlyOne,               {+}
                                      TacTrayIcon,              {+}
                                      TacShortcut,              {+}
                                      TacExtAssociation,        {+}
                                      TacAutoUpgrader,          {+}
                                      TacHTTP,                  {+}
                                      TacSendMail,              {+}                                      
                                      TacAppBar,                {+}
                                      TacCaptionButton,         {+}
                                      TacAnimationEffect,       {+}
                                      TacWin2kEffects,          {+}
                                      TacFormHelp,              {+}
                                      TacFormHints,             {+}
                                      TacFormMagnet,            {+}
                                      TacFormSystemMenu,        {+}
                                      TacFormTopmost,           {+}
                                      TacFormRoller,            {+}
                                      TacFormPlacementSaver,    {+}
                                      TacFormSizeRestrictions,  {+}
                                      TacFormResizeGrip,        {+}
                                      TacFormBackground,        {+}
                                      TacFormHook,              {+}
                                      TacEmbeddedForm,          {+}
                                      TacFileStorage,           {+}
                                      TacWavPlayer,             {+}
                                      TacCursorLocker,          {+}
                                      TacThread]);              {+}

  RegisterComponents('App Controls ++', [TacLabel,             {b!}
                                         TacURLLabel,          {+?}
                                         TacRichLabel,         {+!}
                                         TacCheckBox,          {+?}
                                         TacRadioButton,       {+?}
                                         TacCheckGroupBox,     {+?}
                                         TacDragPanel,         {+?}
                                         TacButton,            {+?}
                                         TacBitBtn,            {b!}
                                         TacEdit,              {+?}
                                         TacNumberEdit,        {+?}
                                         TacIPEdit,            {+?}
                                         TacMRUComboBox,       {+?}
                                         TacImagesComboBox,    { }                                         
//                                         TacTreeComboBox,    {xx}
                                         TacTreeView,          {+?}
                                         TacListView,          {+?}
                                         TacDBListView,        {+}
                                         TacSystemImageList,   {+?}
                                         TacStatusControl,     {+?}
                                         TacSystemInfo,        {+?}
                                         TacDateTimeCalc,      {+?}
                                         TacUnixCrypt,         {+}
                                         TacSimpleTCPServer,   {}
                                         TacSimpleTCPClient,   {}
                                         TacControlKeyState,   {+?}
                                         TacDesktopWallpaper,  {+?}
                                         TacQuickAboutBox]);   {+}

  RegisterComponentEditor(TacAppAutoRun, TacComponentEditor);
  RegisterComponentEditor(TacAppStartCounter, TacAppStartCounterCompEditor);
  RegisterComponentEditor(TacAppEvents, TacComponentEditor);
  RegisterComponentEditor(TacAppCursors, TacComponentEditor);  
  RegisterComponentEditor(TacOnlyOne, TacComponentEditor);
  RegisterComponentEditor(TacTrayIcon, TacComponentEditor);
  RegisterComponentEditor(TacShortcut, TacShortcutCompEditor);
  RegisterComponentEditor(TacExtAssociation, TacComponentEditor);
  RegisterComponentEditor(TacAutoUpgrader, TacAutoUpgraderCompEditor);
  RegisterComponentEditor(TacHTTP, TacComponentEditor);
  RegisterComponentEditor(TacSendMail, TacComponentEditor);  
  RegisterComponentEditor(TacAppBar, TacComponentEditor);
  RegisterComponentEditor(TacCaptionButton, TacComponentEditor);
  RegisterComponentEditor(TacAnimationEffect, TacComponentEditor);
  RegisterComponentEditor(TacWin2kEffects, TacComponentEditor);
  RegisterComponentEditor(TacFormHelp, TacComponentEditor);
  RegisterComponentEditor(TacFormHints, TacComponentEditor);
  RegisterComponentEditor(TacFormMagnet, TacComponentEditor);
  RegisterComponentEditor(TacFormTopmost, TacComponentEditor);
  RegisterComponentEditor(TacFormRoller, TacComponentEditor);
  RegisterComponentEditor(TacFormPlacementSaver, TacComponentEditor);
  RegisterComponentEditor(TacFormSizeRestrictions, TacComponentEditor);
  RegisterComponentEditor(TacFormResizeGrip, TacComponentEditor);
  RegisterComponentEditor(TacFormBackground, TacComponentEditor);
  RegisterComponentEditor(TacFormHook, TacComponentEditor);
  RegisterComponentEditor(TacEmbeddedForm, TacComponentEditor);
  RegisterComponentEditor(TacFileStorage, TacFileStorageCompEditor);
  RegisterComponentEditor(TacWavPlayer, TacWavPlayerCompEditor);
  RegisterComponentEditor(TacCursorLocker, TacComponentEditor);
  RegisterComponentEditor(TacThread, TacComponentEditor);
  RegisterComponentEditor(TacStatusControl, TacComponentEditor);  
  RegisterComponentEditor(TacQuickAboutBox, TacQuickAboutBoxCompEditor);
  RegisterComponentEditor(TacSystemInfo, TacComponentEditor);
  RegisterComponentEditor(TacDesktopWallpaper, TacComponentEditor);
  RegisterComponentEditor(TacControlKeyState, TacComponentEditor);
  RegisterComponentEditor(TacDateTimeCalc, TacComponentEditor);
  RegisterComponentEditor(TacUnixCrypt, TacComponentEditor);
  RegisterComponentEditor(TacCustomSimpleSocket, TacComponentEditor);    

  RegisterComponentEditor(TacBaseLabel, TacComponentEditor);
  RegisterComponentEditor(TacURLLabel, TacURLLabelCompEditor);
  RegisterComponentEditor(TacCheckBox, TacComponentEditor);
  RegisterComponentEditor(TacRadioButton, TacComponentEditor);
  RegisterComponentEditor(TacCheckGroupBox, TacComponentEditor);
  RegisterComponentEditor(TacDragPanel, TacComponentEditor);  
  RegisterComponentEditor(TacButton, TacComponentEditor);
  RegisterComponentEditor(TacCustomEdit, TacComponentEditor);
  RegisterComponentEditor(TacIPEdit, TacComponentEditor);
  RegisterComponentEditor(TacMRUComboBox, TacComponentEditor);
  RegisterComponentEditor(TacImagesComboBox, TacComponentEditor);  
//  RegisterComponentEditor(TacTreeComboBox, TacComponentEditor);  
  RegisterComponentEditor(TacTreeView, TacTreeViewCompEditor);
  RegisterComponentEditor(TacListView, TacListViewCompEditor);
  RegisterComponentEditor(TacDBListView, TacDBListViewCompEditor);  
  RegisterComponentEditor(TacSystemImageList, TacComponentEditor);  

  RegisterPropertyEditor(TypeInfo(String), TacComponent, 'About', TacAboutProperty);
  RegisterPropertyEditor(TypeInfo(String), TacAppEvents, 'About', TacAboutProperty);
  RegisterPropertyEditor(TypeInfo(String), TacFormSystemMenu, 'About', TacAboutProperty);
  RegisterPropertyEditor(TypeInfo(String), TacBaseLabel, 'About', TacAboutProperty);
  RegisterPropertyEditor(TypeInfo(String), TacCheckBox, 'About', TacAboutProperty);
  RegisterPropertyEditor(TypeInfo(String), TacRadioButton, 'About', TacAboutProperty);
  RegisterPropertyEditor(TypeInfo(String), TacDragPanel, 'About', TacAboutProperty);
  RegisterPropertyEditor(TypeInfo(String), TacCheckGroupBox, 'About', TacAboutProperty);
  RegisterPropertyEditor(TypeInfo(String), TacButton, 'About', TacAboutProperty);
  RegisterPropertyEditor(TypeInfo(String), TacCustomEdit, 'About', TacAboutProperty);
  RegisterPropertyEditor(TypeInfo(String), TacIPEdit, 'About', TacAboutProperty);
  RegisterPropertyEditor(TypeInfo(String), TacMRUComboBox, 'About', TacAboutProperty);
  RegisterPropertyEditor(TypeInfo(String), TacImagesComboBox, 'About', TacAboutProperty);  
//  RegisterPropertyEditor(TypeInfo(String), TacTreeComboBox, 'About', TacAboutProperty);
  RegisterPropertyEditor(TypeInfo(String), TacTreeView, 'About', TacAboutProperty);
  RegisterPropertyEditor(TypeInfo(String), TacListView, 'About', TacAboutProperty);
  RegisterPropertyEditor(TypeInfo(String), TacDBListView, 'About', TacAboutProperty);  
  RegisterPropertyEditor(TypeInfo(String), TacSystemImageList, 'About', TacAboutProperty);  
                                                                   
  RegisterPropertyEditor(TypeInfo(String), TacAutoRunLogonNotice, 'Text', TacMultilineStringProperty);
  RegisterPropertyEditor(TypeInfo(String), TacAutoUpgraderInfo, 'MsgText', TacMultilineStringProperty);
  RegisterPropertyEditor(TypeInfo(String), TacSendMail, 'MsgBody', TacMultilineStringProperty);  
  RegisterPropertyEditor(TypeInfo(TCaption), TCustomLabel, 'Caption', TacMultilineStringProperty);
  RegisterPropertyEditor(TypeInfo(TCaption), TacBaseLabel, 'Caption', TacMultilineStringProperty);
  RegisterPropertyEditor(TypeInfo(TCaption), TacRichLabel, 'Caption', TacRichTextProperty);
  RegisterPropertyEditor(TypeInfo(TCaption), TacCheckBox, 'Caption', TacMultilineStringProperty);
  RegisterPropertyEditor(TypeInfo(TCaption), TacRadioButton, 'Caption', TacMultilineStringProperty);
  RegisterPropertyEditor(TypeInfo(TCaption), TacButton, 'Caption', TacMultilineStringProperty);
  RegisterPropertyEditor(TypeInfo(String), TacQuickAboutBox, 'Copyright', TacRichTextProperty);  
  RegisterPropertyEditor(TypeInfo(String), TacQuickAboutBox, 'Description', TacRichTextProperty);

  RegisterPropertyEditor(TypeInfo(TacHTTPProxy), TacCustomHTTP, 'Proxy', TacHTTPProxyProperty);
{$IFDEF AUTOUPGRADERPROXY}
  RegisterPropertyEditor(TypeInfo(TacHTTPProxy), TacAutoUpgrader, 'Proxy', TacHTTPProxyProperty);
{$ENDIF}  
  RegisterPropertyEditor(TypeInfo(TacAutoUpgraderInfo), TacAutoUpgrader, 'InfoFile', TacAutoUpgraderProperty);
  RegisterPropertyEditor(TypeInfo(String), TacSendMail, 'ToAddr', TacSendMailRecipientsProperty);
  RegisterPropertyEditor(TypeInfo(String), TacSendMail, 'ToCC', TacSendMailRecipientsProperty);
  RegisterPropertyEditor(TypeInfo(String), TacSendMail, 'ToBCC', TacSendMailRecipientsProperty);
  RegisterPropertyEditor(TypeInfo(String), TacExtAssociation, 'ExecutableFile', TacExecutableFileNameProperty);
  RegisterPropertyEditor(TypeInfo(String), TacShortcut, 'FILENAME', TacShortcutFileNameProperty);
  RegisterPropertyEditor(TypeInfo(TStoredFiles), TacFileStorage, 'Files', TacStoredFilesProperty);
  RegisterPropertyEditor(TypeInfo(TStoredFile), TacWavPlayer, 'WaveSound', TacWavPlayerWavFileProperty);
  RegisterPropertyEditor(TypeInfo(String), TacDesktopWallpaper, 'Wallpaper', TacWallpaperProperty);

  acFormHelpReg.Register;
{$IFDEF D6}
  acIDEEditorsD6.Register;
{$ELSE}
  acIDEEditors.Register;
{$ENDIF}
end;

end.
