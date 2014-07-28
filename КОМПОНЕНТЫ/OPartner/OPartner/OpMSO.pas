{*********************************************************}
{*                   OpMSO.PAS 1.61                      *}
{*       Copyright (c) TurboPower Software 2000          *}
{*                 All rights reserved.                  *}
{*********************************************************}

{$I OPDEFINE.INC}

{$IFDEF CBuilder}
  {$Warnings Off}
{$ENDIF}

unit OpMSO;

interface

uses
  Windows, Messages, SysUtils, Classes, Dialogs, OpWrd2k, OpOfc2K, ActiveX,
  OpConst, OpShared, OpXL2K, OpPpt2k;

type
   TOpBalloon = class(TPersistent)
  private
    FAssistant: TPersistent;
    FCOMBalloon: Balloon;
    FText: string;
    procedure SetText(const Value: string);
  public
    constructor Create(AOwner: TPersistent);
    function GetOwner: TPersistent; override;
    procedure Show;
    procedure SetAppAssistant(COMAssistant: Assistant);
  published
    property Text: string read FText write SetText;
  end;

  TOpAssistant = class(TOpBaseComponent)
  private
    FVisible: Boolean;
    FBalloon: TOpBalloon;
    FTop: SYSINT;
    FLeft: SYSINT;
    FReduced: WordBool;
    FAssistWithHelp: WordBool;
    FAssistWithWizards: WordBool;
    FAssistWithAlerts: WordBool;
    FMoveWhenInTheWay: WordBool;
    FSounds: WordBool;
    FFeatureTips: WordBool;
    FMouseTips: WordBool;
    FKeyboardShortcutTips: WordBool;
    FHighPriorityTips: WordBool;
    FTipOfDay: WordBool;
    FGuessHelp: WordBool;
    FSearchWhenProgramming: WordBool;
    FFileName: TFileName;
    FOfficeComponent: TOpOfficeComponent;
    procedure ConnectListener(Instance: TOpOfficeComponent; Connect: Boolean);
    procedure SetVisible(Value: Boolean);
    procedure SetBalloon(Value: TOpBalloon);
    function GetAssistWithAlerts: WordBool;
    function GetAssistWithHelp: WordBool;
    function GetAssistWithWizards: WordBool;
    function GetFeatureTips: WordBool;
    function GetFileName: TFileName;
    function GetGuessHelp: WordBool;
    function GetHighPriorityTips: WordBool;
    function GetKeyboardShortcutTips: WordBool;
    function GetLeft: SYSINT;
    function GetMouseTips: WordBool;
    function GetMoveWhenInTheWay: WordBool;
    function GetReduced: WordBool;
    function GetSearchWhenProgramming: WordBool;
    function GetSounds: WordBool;
    function GetTipOfDay: WordBool;
    function GetTop: SYSINT;
    procedure SetAssistWithAlerts(const Value: WordBool);
    procedure SetAssistWithHelp(const Value: WordBool);
    procedure SetAssistWithWizards(const Value: WordBool);
    procedure SetFeatureTips(const Value: WordBool);
    procedure SetFileName(const Value: TFileName);
    procedure SetGuessHelp(const Value: WordBool);
    procedure SetHighPriorityTips(const Value: WordBool);
    procedure SetKeyboardShortcutTips(const Value: WordBool);
    procedure SetLeft(const Value: SYSINT);
    procedure SetMouseTips(const Value: WordBool);
    procedure SetMoveWhenInTheWay(const Value: WordBool);
    procedure SetReduced(const Value: WordBool);
    procedure SetSearchWhenProgramming(const Value: WordBool);
    procedure SetSounds(const Value: WordBool);
    procedure SetTipOfDay(const Value: WordBool);
    procedure SetTop(const Value: SYSINT);
    procedure SetOfficeComponent(const Value: TOpOfficeComponent);
  protected
    procedure Notification(AComponent: TComponent; Operation: TOperation); override;
  public
    constructor Create(AOwner: TComponent); override;
    destructor Destroy; override;
    procedure GetFileInfo(var Filter, DefExt: string);
    function GetOfficeConnected: Boolean;
  published
    property Visible: Boolean read FVisible write SetVisible default False;
    property Balloon: TOpBalloon read FBalloon write SetBalloon;
    property AssistantTop: SYSINT read GetTop write SetTop;
    property AssistantLeft: SYSINT read GetLeft write SetLeft;
    property Reduced: WordBool read GetReduced write SetReduced;
    property AssistWithHelp: WordBool read GetAssistWithHelp write SetAssistWithHelp;
    property AssistWithWizards: WordBool read GetAssistWithWizards write SetAssistWithWizards;
    property AssistWithAlerts: WordBool read GetAssistWithAlerts write SetAssistWithAlerts;
    property MoveWhenInTheWay: WordBool read GetMoveWhenInTheWay write SetMoveWhenInTheWay;
    property Sounds: WordBool read GetSounds write SetSounds;
    property FeatureTips: WordBool read GetFeatureTips write SetFeatureTips;
    property MouseTips: WordBool read GetMouseTips write SetMouseTips;
    property KeyboardShortcutTips: WordBool read GetKeyboardShortcutTips write SetKeyboardShortcutTips;
    property HighPriorityTips: WordBool read GetHighPriorityTips write SetHighPriorityTips;
    property TipOfDay: WordBool read GetTipOfDay write SetTipOfDay;
    property GuessHelp: WordBool read GetGuessHelp write SetGuessHelp;
    property SearchWhenProgramming: WordBool read GetSearchWhenProgramming write SetSearchWhenProgramming;
    property FileName: TFileName read GetFileName write SetFileName stored False;
    property OfficeComponent: TOpOfficeComponent read FOfficeComponent write SetOfficeComponent;
  end;

implementation

uses OpWord, OpExcel, OpPower, OpOutlk;

{ TOpBalloon }

procedure TOpBalloon.SetText(const Value: string);
begin
  FText:= Value;
  if FCOMBalloon <> nil then
    if FCOMBalloon.Application_ <> nil then
    begin
      FCOMBalloon.Text:= Value;
    end;
end;

procedure TOpBalloon.SetAppAssistant(COMAssistant: Assistant);
begin
  if COMAssistant = nil then
    FCOMBalloon := nil
  else
    begin
      FCOMBalloon:= (COMAssistant.NewBalloon as Balloon);
      SetText(FText);
    end;
end;

procedure TOpBalloon.Show;
begin
  if FCOMBalloon <> nil then
    if FCOMBalloon.Application_ <> nil then
    begin
      if (GetOwner is TOpAssistant) then
      begin
        if (TOpAssistant(GetOwner).FOfficeComponent is TOpExcel) then
         (FCOMBalloon.Application_ as OpXL2K.Application_).Visible[0]:= True
        else if (TOpAssistant(GetOwner).FOfficeComponent is TOpWord) then
         (FCOMBalloon.Application_ as OpWrd2k.Application_).Visible:= True
        else if (TOpAssistant(GetOwner).FOfficeComponent is TOpPowerPoint) then
        {$IFDEF VERSION6}
         (FCOMBalloon.Application_ as OpPpt2k.Application_).Visible:= Int64(OpOfc2K.msoTrue);
        {$ELSE}
         (FCOMBalloon.Application_ as OpPpt2k.Application_).Visible:= Integer(OpOfc2K.msoTrue);
        {$ENDIF}
      end;
      FCOMBalloon.Show;
    end;
end;

function TOpBalloon.GetOwner: TPersistent;
begin
  Result:= FAssistant;
end;

constructor TOpBalloon.Create(AOwner: TPersistent);
begin
  inherited Create;
  FAssistant:= AOwner;
end;

{ TOpAssistant }

constructor TOpAssistant.Create(AOwner: TComponent);
begin
  inherited Create(AOwner);
  FBalloon:= TOpBalloon.Create(self);
end;

destructor TOpAssistant.Destroy;
begin
  if FOfficeComponent <> nil then
    FOfficeComponent.RemoveConnectListener(ConnectListener);
  FBalloon.Free;    
  inherited Destroy;
end;

procedure TOpAssistant.SetBalloon(Value: TOpBalloon);
begin
  FBalloon := Value;
end;

procedure TOpAssistant.SetVisible(Value: Boolean);
begin
  FVisible:= Value;
  if GetOfficeConnected then
  begin
    if (FOfficeComponent is TOpWord) then
    begin
      TOpWord(FOfficeComponent).Server.Application_.Activate;
      TOpWord(FOfficeComponent).Server.Assistant.Visible:= Value;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      TOpExcel(FOfficeComponent).Server.Application_.Visible[0]:= True;
      TOpExcel(FOfficeComponent).Server.Assistant.Visible:= Value;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      TOpPowerPoint(FOfficeComponent).Server.Assistant.Visible:= Value;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      TOpOutlook(FOfficeComponent).Server.Assistant.Visible:= Value;
    end;
  end;
end;

function TOpAssistant.GetAssistWithAlerts: WordBool;
begin
  if GetOfficeConnected then
  begin
    Result := False;
    if (FOfficeComponent is TOpWord) then
    begin
      Result:= TOpWord(FOfficeComponent).Server.Assistant.AssistWithAlerts;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      Result:= TOpExcel(FOfficeComponent).Server.Assistant.AssistWithAlerts;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      Result:= TOpPowerPoint(FOfficeComponent).Server.Assistant.AssistWithAlerts;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      Result:= TOpOutlook(FOfficeComponent).Server.Assistant.AssistWithAlerts;
    end;
    FAssistWithAlerts:= Result;
  end
  else
    Result:= FAssistWithAlerts;
end;

function TOpAssistant.GetAssistWithHelp: WordBool;
begin
  if GetOfficeConnected then
  begin
    Result := False;
    if (FOfficeComponent is TOpWord) then
    begin
      Result:= TOpWord(FOfficeComponent).Server.Assistant.AssistWithHelp;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      Result:= TOpExcel(FOfficeComponent).Server.Assistant.AssistWithHelp;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      Result:= TOpPowerPoint(FOfficeComponent).Server.Assistant.AssistWithHelp;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      Result:= TOpOutlook(FOfficeComponent).Server.Assistant.AssistWithHelp;
    end;
    FAssistWithHelp:= Result;
  end
  else
    Result:= FAssistWithHelp;
end;

function TOpAssistant.GetAssistWithWizards: WordBool;
begin
  if GetOfficeConnected then
  begin
    Result := False;
    if (FOfficeComponent is TOpWord) then
    begin
      Result:= TOpWord(FOfficeComponent).Server.Assistant.AssistWithWizards;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      Result:= TOpExcel(FOfficeComponent).Server.Assistant.AssistWithWizards;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      Result:= TOpPowerPoint(FOfficeComponent).Server.Assistant.AssistWithWizards;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      Result:= TOpOutlook(FOfficeComponent).Server.Assistant.AssistWithWizards;
    end;
    FAssistWithWizards:= Result;
  end
  else
    Result:= FAssistWithWizards;
end;

function TOpAssistant.GetFeatureTips: WordBool;
begin
  if GetOfficeConnected then
  begin
    Result := False;
    if (FOfficeComponent is TOpWord) then
    begin
      Result:= TOpWord(FOfficeComponent).Server.Assistant.FeatureTips;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      Result:= TOpExcel(FOfficeComponent).Server.Assistant.FeatureTips;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      Result:= TOpPowerPoint(FOfficeComponent).Server.Assistant.FeatureTips;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      Result:= TOpOutlook(FOfficeComponent).Server.Assistant.FeatureTips;
    end;
    FFeatureTips:= Result;
  end
  else
    Result:= FFeatureTips;
end;

function TOpAssistant.GetFileName: TFileName;
begin
  if GetOfficeConnected then
  begin
    Result := '';
    if (FOfficeComponent is TOpWord) then
    begin
      Result:= TOpWord(FOfficeComponent).Server.Assistant.FileName;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      Result:= TOpExcel(FOfficeComponent).Server.Assistant.FileName;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      Result:= TOpPowerPoint(FOfficeComponent).Server.Assistant.FileName;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      Result:= TOpOutlook(FOfficeComponent).Server.Assistant.FileName;
    end;
    FFileName:= Result;
  end
  else
    Result:= FFileName;
end;

function TOpAssistant.GetGuessHelp: WordBool;
begin
  if GetOfficeConnected then
  begin
    Result := False;
    if (FOfficeComponent is TOpWord) then
    begin
      Result:= TOpWord(FOfficeComponent).Server.Assistant.GuessHelp;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      Result:= TOpExcel(FOfficeComponent).Server.Assistant.GuessHelp;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      Result:= TOpPowerPoint(FOfficeComponent).Server.Assistant.GuessHelp;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      Result:= TOpOutlook(FOfficeComponent).Server.Assistant.GuessHelp;
    end;
    FGuessHelp:= Result;
  end
  else
    Result:= FGuessHelp;
end;

function TOpAssistant.GetHighPriorityTips: WordBool;
begin
  if GetOfficeConnected then
  begin
    Result := False;
    if (FOfficeComponent is TOpWord) then
    begin
      Result:= TOpWord(FOfficeComponent).Server.Assistant.HighPriorityTips;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      Result:= TOpExcel(FOfficeComponent).Server.Assistant.HighPriorityTips;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      Result:= TOpPowerPoint(FOfficeComponent).Server.Assistant.HighPriorityTips;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      Result:= TOpOutlook(FOfficeComponent).Server.Assistant.HighPriorityTips;
    end;
    FHighPriorityTips:= Result;
  end
  else
    Result:= FHighPriorityTips;
end;

function TOpAssistant.GetKeyboardShortcutTips: WordBool;
begin
  if GetOfficeConnected then
  begin
    Result := False;
    if (FOfficeComponent is TOpWord) then
    begin
      Result:= TOpWord(FOfficeComponent).Server.Assistant.KeyboardShortcutTips;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      Result:= TOpExcel(FOfficeComponent).Server.Assistant.KeyboardShortcutTips;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      Result:= TOpPowerPoint(FOfficeComponent).Server.Assistant.KeyboardShortcutTips;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      Result:= TOpOutlook(FOfficeComponent).Server.Assistant.KeyboardShortcutTips;
    end;
    FKeyboardShortcutTips:= Result;
  end
  else
    Result:= FKeyboardShortcutTips;
end;

function TOpAssistant.GetLeft: SYSINT;
begin
  if GetOfficeConnected then
  begin
    Result := 0;
    if (FOfficeComponent is TOpWord) then
    begin
      Result:= TOpWord(FOfficeComponent).Server.Assistant.Left;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      Result:= TOpExcel(FOfficeComponent).Server.Assistant.Left;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      Result:= TOpPowerPoint(FOfficeComponent).Server.Assistant.Left;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      Result:= TOpOutlook(FOfficeComponent).Server.Assistant.Left;
    end;
    FLeft:= Result;
  end
  else
    Result:= FLeft;
end;

function TOpAssistant.GetMouseTips: WordBool;
begin
  if GetOfficeConnected then
  begin
    Result := False;
    if (FOfficeComponent is TOpWord) then
    begin
      Result:= TOpWord(FOfficeComponent).Server.Assistant.MouseTips;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      Result:= TOpExcel(FOfficeComponent).Server.Assistant.MouseTips;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      Result:= TOpPowerPoint(FOfficeComponent).Server.Assistant.MouseTips;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      Result:= TOpOutlook(FOfficeComponent).Server.Assistant.MouseTips;
    end;
    FMouseTips:= Result;
  end
  else
    Result:= FMouseTips;
end;

function TOpAssistant.GetMoveWhenInTheWay: WordBool;
begin
  if GetOfficeConnected then
  begin
    Result := False;
    if (FOfficeComponent is TOpWord) then
    begin
      Result:= TOpWord(FOfficeComponent).Server.Assistant.MoveWhenInTheWay;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      Result:= TOpExcel(FOfficeComponent).Server.Assistant.MoveWhenInTheWay;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      Result:= TOpPowerPoint(FOfficeComponent).Server.Assistant.MoveWhenInTheWay;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      Result:= TOpOutlook(FOfficeComponent).Server.Assistant.MoveWhenInTheWay;
    end;
    FMoveWhenInTheWay:= Result;
  end
  else
    Result:= FMoveWhenInTheWay;
end;

function TOpAssistant.GetReduced: WordBool;
begin
  if GetOfficeConnected then
  begin
    Result := False;
    if (FOfficeComponent is TOpWord) then
    begin
      Result:= TOpWord(FOfficeComponent).Server.Assistant.Reduced;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      Result:= TOpExcel(FOfficeComponent).Server.Assistant.Reduced;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      Result:= TOpPowerPoint(FOfficeComponent).Server.Assistant.Reduced;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      Result:= TOpOutlook(FOfficeComponent).Server.Assistant.Reduced;
    end;
    FReduced:= Result;
  end
  else
    Result:= FReduced;
end;

function TOpAssistant.GetSearchWhenProgramming: WordBool;
begin
  if GetOfficeConnected then
  begin
    Result := False;
    if (FOfficeComponent is TOpWord) then
    begin
      Result:= TOpWord(FOfficeComponent).Server.Assistant.SearchWhenProgramming;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      Result:= TOpExcel(FOfficeComponent).Server.Assistant.SearchWhenProgramming;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      Result:= TOpPowerPoint(FOfficeComponent).Server.Assistant.SearchWhenProgramming;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      Result:= TOpOutlook(FOfficeComponent).Server.Assistant.SearchWhenProgramming;
    end;
    FSearchWhenProgramming:= Result;
  end
  else
    Result:= FSearchWhenProgramming;
end;

function TOpAssistant.GetSounds: WordBool;
begin
  if GetOfficeConnected then
  begin
    Result := False;
    if (FOfficeComponent is TOpWord) then
    begin
      Result:= TOpWord(FOfficeComponent).Server.Assistant.Sounds;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      Result:= TOpExcel(FOfficeComponent).Server.Assistant.Sounds;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      Result:= TOpPowerPoint(FOfficeComponent).Server.Assistant.Sounds;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      Result:= TOpOutlook(FOfficeComponent).Server.Assistant.Sounds;
    end;
    FSounds:= Result;
  end
  else
    Result:= FSounds;
end;

function TOpAssistant.GetTipOfDay: WordBool;
begin
  if GetOfficeConnected then
  begin
    Result := False;
    if (FOfficeComponent is TOpWord) then
    begin
      Result:= TOpWord(FOfficeComponent).Server.Assistant.TipOfDay;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      Result:= TOpExcel(FOfficeComponent).Server.Assistant.TipOfDay;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      Result:= TOpPowerPoint(FOfficeComponent).Server.Assistant.TipOfDay;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      Result:= TOpOutlook(FOfficeComponent).Server.Assistant.TipOfDay;
    end;
    FTipOfDay:= Result;
  end
  else
    Result:= FTipOfDay;
end;

function TOpAssistant.GetTop: SYSINT;
begin
  if GetOfficeConnected then
  begin
    Result := 0;
    if (FOfficeComponent is TOpWord) then
    begin
      Result:= TOpWord(FOfficeComponent).Server.Assistant.Top;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      Result:= TOpExcel(FOfficeComponent).Server.Assistant.Top;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      Result:= TOpPowerPoint(FOfficeComponent).Server.Assistant.Top;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      Result:= TOpOutlook(FOfficeComponent).Server.Assistant.Top;
    end;
    FTop:= Result;
  end
  else
    Result:= FTop;
end;

procedure TOpAssistant.SetAssistWithAlerts(const Value: WordBool);
begin
  FAssistWithAlerts:= Value;
  if GetOfficeConnected then
  begin
    if (FOfficeComponent is TOpWord) then
    begin
      TOpWord(FOfficeComponent).Server.Application_.Activate;
      TOpWord(FOfficeComponent).Server.Assistant.AssistWithAlerts:= Value;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      TOpExcel(FOfficeComponent).Server.Assistant.AssistWithAlerts:= Value;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      TOpPowerPoint(FOfficeComponent).Server.Assistant.AssistWithAlerts:= Value;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      TOpOutlook(FOfficeComponent).Server.Assistant.AssistWithAlerts:= Value;
    end;
  end;
end;

procedure TOpAssistant.SetAssistWithHelp(const Value: WordBool);
begin
  FAssistWithHelp:= Value;
  if GetOfficeConnected then
  begin

    if (FOfficeComponent is TOpWord) then
    begin
      TOpWord(FOfficeComponent).Server.Application_.Activate;
      TOpWord(FOfficeComponent).Server.Assistant.AssistWithHelp:= Value;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      TOpExcel(FOfficeComponent).Server.Assistant.AssistWithHelp:= Value;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      TOpPowerPoint(FOfficeComponent).Server.Assistant.AssistWithHelp:= Value;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      TOpOutlook(FOfficeComponent).Server.Assistant.AssistWithHelp:= Value;
    end;
  end;
end;

procedure TOpAssistant.SetAssistWithWizards(const Value: WordBool);
begin
  FAssistWithWizards:= Value;
  if GetOfficeConnected then
  begin
    if (FOfficeComponent is TOpWord) then
    begin
      TOpWord(FOfficeComponent).Server.Application_.Activate;
      TOpWord(FOfficeComponent).Server.Assistant.AssistWithWizards:= Value;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      TOpExcel(FOfficeComponent).Server.Assistant.AssistWithWizards:= Value;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      TOpPowerPoint(FOfficeComponent).Server.Assistant.AssistWithWizards:= Value;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      TOpOutlook(FOfficeComponent).Server.Assistant.AssistWithWizards:= Value;
    end;
  end;
end;

procedure TOpAssistant.SetFeatureTips(const Value: WordBool);
begin
  FFeatureTips:= Value;
  if GetOfficeConnected then
  begin
    if (FOfficeComponent is TOpWord) then
    begin
      TOpWord(FOfficeComponent).Server.Application_.Activate;
      TOpWord(FOfficeComponent).Server.Assistant.FeatureTips:= Value;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      TOpExcel(FOfficeComponent).Server.Assistant.FeatureTips:= Value;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      TOpPowerPoint(FOfficeComponent).Server.Assistant.FeatureTips:= Value;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      TOpOutlook(FOfficeComponent).Server.Assistant.FeatureTips:= Value;
    end;
  end;
end;

procedure TOpAssistant.SetFileName(const Value: TFileName);
begin
  FFileName:= Value;
  if GetOfficeConnected then
  begin
    if (FOfficeComponent is TOpWord) then
    begin
      TOpWord(FOfficeComponent).Server.Application_.Activate;
      TOpWord(FOfficeComponent).Server.Assistant.FileName:= Value;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      TOpExcel(FOfficeComponent).Server.Assistant.FileName:= Value;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      TOpPowerPoint(FOfficeComponent).Server.Assistant.FileName:= Value;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      TOpOutlook(FOfficeComponent).Server.Assistant.FileName:= Value;
    end;
  end;
end;

procedure TOpAssistant.SetGuessHelp(const Value: WordBool);
begin
  FGuessHelp:= Value;
  if GetOfficeConnected then
  begin
    if (FOfficeComponent is TOpWord) then
    begin
      TOpWord(FOfficeComponent).Server.Application_.Activate;
      TOpWord(FOfficeComponent).Server.Assistant.GuessHelp:= Value;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      TOpExcel(FOfficeComponent).Server.Assistant.GuessHelp:= Value;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      TOpPowerPoint(FOfficeComponent).Server.Assistant.GuessHelp:= Value;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      TOpOutlook(FOfficeComponent).Server.Assistant.GuessHelp:= Value;
    end;
  end;
end;

procedure TOpAssistant.SetHighPriorityTips(const Value: WordBool);
begin
  FHighPriorityTips:= Value;
  if GetOfficeConnected then
  begin
    if (FOfficeComponent is TOpWord) then
    begin
      TOpWord(FOfficeComponent).Server.Application_.Activate;
      TOpWord(FOfficeComponent).Server.Assistant.HighPriorityTips:= Value;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      TOpExcel(FOfficeComponent).Server.Assistant.HighPriorityTips:= Value;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      TOpPowerPoint(FOfficeComponent).Server.Assistant.HighPriorityTips:= Value;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      TOpOutlook(FOfficeComponent).Server.Assistant.HighPriorityTips:= Value;
    end;
  end;
end;

procedure TOpAssistant.SetKeyboardShortcutTips(const Value: WordBool);
begin
  FKeyboardShortcutTips:= Value;
  if GetOfficeConnected then
  begin
    if (FOfficeComponent is TOpWord) then
    begin
      TOpWord(FOfficeComponent).Server.Application_.Activate;
      TOpWord(FOfficeComponent).Server.Assistant.KeyboardShortcutTips:= Value;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      TOpExcel(FOfficeComponent).Server.Assistant.KeyboardShortcutTips:= Value;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      TOpPowerPoint(FOfficeComponent).Server.Assistant.KeyboardShortcutTips:= Value;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      TOpOutlook(FOfficeComponent).Server.Assistant.KeyboardShortcutTips:= Value;
    end;
  end;
end;

procedure TOpAssistant.SetLeft(const Value: SYSINT);
begin
  FLeft:= Value;
  if GetOfficeConnected then
  begin
    if (FOfficeComponent is TOpWord) then
    begin
      TOpWord(FOfficeComponent).Server.Application_.Activate;
      TOpWord(FOfficeComponent).Server.Assistant.Left:= Value;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      TOpExcel(FOfficeComponent).Server.Assistant.Left:= Value;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      TOpPowerPoint(FOfficeComponent).Server.Assistant.Left:= Value;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      TOpOutlook(FOfficeComponent).Server.Assistant.Left:= Value;
    end;
  end;
end;

procedure TOpAssistant.SetMouseTips(const Value: WordBool);
begin
  FMouseTips:= Value;
  if GetOfficeConnected then
  begin
    if (FOfficeComponent is TOpWord) then
    begin
      TOpWord(FOfficeComponent).Server.Application_.Activate;
      TOpWord(FOfficeComponent).Server.Assistant.MouseTips:= Value;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      TOpExcel(FOfficeComponent).Server.Assistant.MouseTips:= Value;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      TOpPowerPoint(FOfficeComponent).Server.Assistant.MouseTips:= Value;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      TOpOutlook(FOfficeComponent).Server.Assistant.MouseTips:= Value;
    end;
  end;
end;

procedure TOpAssistant.SetMoveWhenInTheWay(const Value: WordBool);
begin
  FMoveWhenInTheWay:= Value;
  if GetOfficeConnected then
  begin
    if (FOfficeComponent is TOpWord) then
    begin
      TOpWord(FOfficeComponent).Server.Application_.Activate;
      TOpWord(FOfficeComponent).Server.Assistant.MoveWhenInTheWay:= Value;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      TOpExcel(FOfficeComponent).Server.Assistant.MoveWhenInTheWay:= Value;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      TOpPowerPoint(FOfficeComponent).Server.Assistant.MoveWhenInTheWay:= Value;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      TOpOutlook(FOfficeComponent).Server.Assistant.MoveWhenInTheWay:= Value;
    end;
  end;
end;

procedure TOpAssistant.SetReduced(const Value: WordBool);
begin
  FReduced:= Value;
  if GetOfficeConnected then
  begin
    if (FOfficeComponent is TOpWord) then
    begin
      TOpWord(FOfficeComponent).Server.Application_.Activate;
      TOpWord(FOfficeComponent).Server.Assistant.Reduced:= Value;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      TOpExcel(FOfficeComponent).Server.Assistant.Reduced:= Value;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      TOpPowerPoint(FOfficeComponent).Server.Assistant.Reduced:= Value;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      TOpOutlook(FOfficeComponent).Server.Assistant.Reduced:= Value;
    end;
  end;
end;

procedure TOpAssistant.SetSearchWhenProgramming(const Value: WordBool);
begin
  FSearchWhenProgramming:= Value;
  if GetOfficeConnected then
  begin
    if (FOfficeComponent is TOpWord) then
    begin
      TOpWord(FOfficeComponent).Server.Application_.Activate;
      TOpWord(FOfficeComponent).Server.Assistant.SearchWhenProgramming:= Value;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      TOpExcel(FOfficeComponent).Server.Assistant.SearchWhenProgramming:= Value;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      TOpPowerPoint(FOfficeComponent).Server.Assistant.SearchWhenProgramming:= Value;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      TOpOutlook(FOfficeComponent).Server.Assistant.SearchWhenProgramming:= Value;
    end;
  end;
end;

procedure TOpAssistant.SetSounds(const Value: WordBool);
begin
  FSounds:= Value;
  if GetOfficeConnected then
  begin
    if (FOfficeComponent is TOpWord) then
    begin
      TOpWord(FOfficeComponent).Server.Application_.Activate;
      TOpWord(FOfficeComponent).Server.Assistant.Sounds:= Value;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      TOpExcel(FOfficeComponent).Server.Assistant.Sounds:= Value;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      TOpPowerPoint(FOfficeComponent).Server.Assistant.Sounds:= Value;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      TOpOutlook(FOfficeComponent).Server.Assistant.Sounds:= Value;
    end;
  end;
end;

procedure TOpAssistant.SetTipOfDay(const Value: WordBool);
begin
  FTipOfDay:= Value;
  if GetOfficeConnected then
  begin
    if (FOfficeComponent is TOpWord) then
    begin
      TOpWord(FOfficeComponent).Server.Application_.Activate;
      TOpWord(FOfficeComponent).Server.Assistant.TipOfDay:= Value;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      TOpExcel(FOfficeComponent).Server.Assistant.TipOfDay:= Value;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      TOpPowerPoint(FOfficeComponent).Server.Assistant.TipOfDay:= Value;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      TOpOutlook(FOfficeComponent).Server.Assistant.TipOfDay:= Value;
    end;
  end;
end;

procedure TOpAssistant.SetTop(const Value: SYSINT);
begin
  FTop:= Value;
  if GetOfficeConnected then
  begin
    if (FOfficeComponent is TOpWord) then
    begin
      TOpWord(FOfficeComponent).Server.Application_.Activate;
      TOpWord(FOfficeComponent).Server.Assistant.Top:= Value;
    end
    else if (FOfficeComponent is TOpExcel) then
    begin
      TOpExcel(FOfficeComponent).Server.Assistant.Top:= Value;
    end
    else if (FOfficeComponent is TOpPowerPoint) then
    begin
      TOpPowerPoint(FOfficeComponent).Server.Assistant.Top:= Value;
    end
    else if (FOfficeComponent is TOpOutlook) then
    begin
      TOpOutlook(FOfficeComponent).Server.Assistant.Top:= Value;
    end;
  end;
end;

procedure TOpAssistant.GetFileInfo(var Filter, DefExt: string);
begin
  Filter := SAssistantFilter;
  DefExt := SAssistantDef;
end;

procedure TOpAssistant.SetOfficeComponent(const Value: TOpOfficeComponent);
begin
  if FOfficeComponent <> Value then
  begin
    FOfficeComponent := Value;
    if Value <> nil then
    begin
      Value.FreeNotification(Self);
      Value.AddConnectListener(ConnectListener);
      if Value.Connected then ConnectListener(Value, True);
    end;
  end;
end;

function TOpAssistant.GetOfficeConnected: Boolean;
begin
  if (FOfficeComponent <> nil) and (FOfficeComponent.Connected) then
    Result:= True
  else
    Result:= False;
end;

procedure TOpAssistant.Notification(AComponent: TComponent; Operation: TOperation);
begin
  inherited Notification(AComponent,Operation);
  if (AComponent = FOfficeComponent) and (Operation = opRemove) then
    OfficeComponent := nil;
end;

procedure TOpAssistant.ConnectListener(Instance: TOpOfficeComponent; Connect: Boolean);
begin
  if Connect then
  begin
    if (Instance is TOpWord) then
      FBalloon.SetAppAssistant(TOpWord(Instance).Server.Assistant)
    else if (Instance is TOpExcel) then
      FBalloon.SetAppAssistant(TOpExcel(Instance).Server.Assistant)
    else if (Instance is TOpPowerPoint) then
      FBalloon.SetAppAssistant(TOpPowerPoint(Instance).Server.Assistant)
    else if (Instance is TOpOutlook) then
      FBalloon.SetAppAssistant(TOpOutlook(Instance).Server.Assistant);
  end
  else FBalloon.SetAppAssistant(nil);
end;

end.
