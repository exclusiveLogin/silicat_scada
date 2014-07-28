// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'OpOlk97.pas' rev: 5.00

#ifndef OpOlk97HPP
#define OpOlk97HPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <OpFrms97.hpp>	// Pascal unit
#include <OpOfc97.hpp>	// Pascal unit
#include <StdVCL.hpp>	// Pascal unit
#include <OleCtrls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <ActiveX.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Opolk97
{
//-- type declarations -------------------------------------------------------
typedef Activex::TOleEnum OlAttachmentType;

typedef Activex::TOleEnum OlBusyStatus;

typedef Activex::TOleEnum OlDaysOfWeek;

typedef Activex::TOleEnum OlDefaultFolders;

typedef Activex::TOleEnum OlFolderDisplayMode;

typedef Activex::TOleEnum OlFormRegistry;

typedef Activex::TOleEnum OlGender;

typedef Activex::TOleEnum OlImportance;

typedef Activex::TOleEnum OlInspectorClose;

typedef Activex::TOleEnum OlItems;

typedef Activex::TOleEnum OlJournalRecipientType;

typedef Activex::TOleEnum OlMailingAddress;

typedef Activex::TOleEnum OlMailRecipientType;

typedef Activex::TOleEnum OlMeetingRecipientType;

typedef Activex::TOleEnum OlMeetingStatus;

typedef Activex::TOleEnum OlNoteColor;

typedef Activex::TOleEnum OlRecurrenceType;

typedef Activex::TOleEnum OlRemoteStatus;

typedef Activex::TOleEnum OlMeetingResponse;

typedef Activex::TOleEnum OlResponseStatus;

typedef Activex::TOleEnum OlSaveAsType;

typedef Activex::TOleEnum OlSensitivity;

typedef Activex::TOleEnum OlFlagStatus;

typedef Activex::TOleEnum OlTaskDelegationState;

typedef Activex::TOleEnum OlTaskOwnership;

typedef Activex::TOleEnum OlTaskRecipientType;

typedef Activex::TOleEnum OlTaskResponse;

typedef Activex::TOleEnum OlTaskStatus;

typedef Activex::TOleEnum OlTrackingStatus;

typedef Activex::TOleEnum OlUserPropertyType;

typedef Activex::TOleEnum OlActionCopyLike;

typedef Activex::TOleEnum OlActionReplyStyle;

typedef Activex::TOleEnum OlActionResponseStyle;

typedef Activex::TOleEnum OlActionShowOn;

__dispinterface _DApplication;
typedef System::DelphiInterface<_DApplication> _di__DApplication;
__dispinterface Explorer;
typedef System::DelphiInterface<Explorer> _di_Explorer;
__dispinterface Inspector;
typedef System::DelphiInterface<Inspector> _di_Inspector;
__dispinterface NameSpace;
typedef System::DelphiInterface<NameSpace> _di_NameSpace;
__dispinterface INTERFACE_UUID("{00063001-0000-0000-C000-000000000046}") _DApplication  : public IDispatch 
	
{
	
};
typedef _DApplication Application_;

__dispinterface _DAppointmentItem;
typedef System::DelphiInterface<_DAppointmentItem> _di__DAppointmentItem;
__dispinterface Actions;
typedef System::DelphiInterface<Actions> _di_Actions;
__dispinterface Action;
typedef System::DelphiInterface<Action> _di_Action;
__dispinterface INTERFACE_UUID("{0006303E-0000-0000-C000-000000000046}") Actions  : public IDispatch 
	
{
	
};

__dispinterface Attachments;
typedef System::DelphiInterface<Attachments> _di_Attachments;
__dispinterface Attachment;
typedef System::DelphiInterface<Attachment> _di_Attachment;
__dispinterface INTERFACE_UUID("{0006303C-0000-0000-C000-000000000046}") Attachments  : public IDispatch 
	
{
	
};

__dispinterface FormDescription;
typedef System::DelphiInterface<FormDescription> _di_FormDescription;
__dispinterface INTERFACE_UUID("{00063046-0000-0000-C000-000000000046}") FormDescription  : public IDispatch 
	
{
	
};

__dispinterface UserProperties;
typedef System::DelphiInterface<UserProperties> _di_UserProperties;
__dispinterface UserProperty;
typedef System::DelphiInterface<UserProperty> _di_UserProperty;
__dispinterface INTERFACE_UUID("{0006303D-0000-0000-C000-000000000046}") UserProperties  : public IDispatch 
	
{
	
};

__dispinterface Recipients;
typedef System::DelphiInterface<Recipients> _di_Recipients;
__dispinterface Recipient;
typedef System::DelphiInterface<Recipient> _di_Recipient;
__dispinterface INTERFACE_UUID("{0006303B-0000-0000-C000-000000000046}") Recipients  : public IDispatch 
	
{
	
};

__dispinterface MAPIFolder;
typedef System::DelphiInterface<MAPIFolder> _di_MAPIFolder;
__dispinterface RecurrencePattern;
typedef System::DelphiInterface<RecurrencePattern> _di_RecurrencePattern;
__dispinterface INTERFACE_UUID("{00063033-0000-0000-C000-000000000046}") _DAppointmentItem  : public IDispatch 
	
{
	
};
typedef _DAppointmentItem AppointmentItem;

__dispinterface _DContactItem;
typedef System::DelphiInterface<_DContactItem> _di__DContactItem;
__dispinterface INTERFACE_UUID("{00063021-0000-0000-C000-000000000046}") _DContactItem  : public IDispatch 
	
{
	
};
typedef _DContactItem ContactItem;

__dispinterface _DJournalItem;
typedef System::DelphiInterface<_DJournalItem> _di__DJournalItem;
__dispinterface _DMailItem;
typedef System::DelphiInterface<_DMailItem> _di__DMailItem;
__dispinterface INTERFACE_UUID("{00063022-0000-0000-C000-000000000046}") _DJournalItem  : public IDispatch 
	
{
	
};
typedef _DJournalItem JournalItem;

typedef _DMailItem MailItem;
;

__dispinterface _DMeetingCanceledItem;
typedef System::DelphiInterface<_DMeetingCanceledItem> _di__DMeetingCanceledItem;
__dispinterface INTERFACE_UUID("{00063028-0000-0000-C000-000000000046}") _DMeetingCanceledItem  : public IDispatch 
	
{
	
};
typedef _DMeetingCanceledItem _MeetingCanceledItem;

__dispinterface _DMeetingRequestAcceptedItem;
typedef System::DelphiInterface<_DMeetingRequestAcceptedItem> _di__DMeetingRequestAcceptedItem;
__dispinterface INTERFACE_UUID("{00063030-0000-0000-C000-000000000046}") _DMeetingRequestAcceptedItem 
	 : public IDispatch 
{
	
};
typedef _DMeetingRequestAcceptedItem _MeetingRequestAcceptedItem;

__dispinterface _DMeetingRequestDeclinedItem;
typedef System::DelphiInterface<_DMeetingRequestDeclinedItem> _di__DMeetingRequestDeclinedItem;
__dispinterface INTERFACE_UUID("{00063031-0000-0000-C000-000000000046}") _DMeetingRequestDeclinedItem 
	 : public IDispatch 
{
	
};
typedef _DMeetingRequestDeclinedItem _MeetingRequestDeclinedItem;

__dispinterface _DMeetingRequestItem;
typedef System::DelphiInterface<_DMeetingRequestItem> _di__DMeetingRequestItem;
__dispinterface INTERFACE_UUID("{00063029-0000-0000-C000-000000000046}") _DMeetingRequestItem  : public IDispatch 
	
{
	
};
typedef _DMeetingRequestItem MeetingRequestItem;

__dispinterface _DMeetingRequestTentativeItem;
typedef System::DelphiInterface<_DMeetingRequestTentativeItem> _di__DMeetingRequestTentativeItem;
__dispinterface INTERFACE_UUID("{00063032-0000-0000-C000-000000000046}") _DMeetingRequestTentativeItem 
	 : public IDispatch 
{
	
};
typedef _DMeetingRequestTentativeItem _MeetingRequestTentativeItem;

__dispinterface _DNoteItem;
typedef System::DelphiInterface<_DNoteItem> _di__DNoteItem;
__dispinterface INTERFACE_UUID("{00063025-0000-0000-C000-000000000046}") _DNoteItem  : public IDispatch 
	
{
	
};
typedef _DNoteItem NoteItem;

__dispinterface _DOfficeDocumentItem;
typedef System::DelphiInterface<_DOfficeDocumentItem> _di__DOfficeDocumentItem;
__dispinterface INTERFACE_UUID("{00063020-0000-0000-C000-000000000046}") _DOfficeDocumentItem  : public IDispatch 
	
{
	
};
typedef _DOfficeDocumentItem _OfficeDocumentItem;

__dispinterface _DPostItem;
typedef System::DelphiInterface<_DPostItem> _di__DPostItem;
__dispinterface INTERFACE_UUID("{00063024-0000-0000-C000-000000000046}") _DPostItem  : public IDispatch 
	
{
	
};
typedef _DPostItem PostItem;

__dispinterface _DRemoteItem;
typedef System::DelphiInterface<_DRemoteItem> _di__DRemoteItem;
__dispinterface INTERFACE_UUID("{00063023-0000-0000-C000-000000000046}") _DRemoteItem  : public IDispatch 
	
{
	
};
typedef _DRemoteItem RemoteItem;

__dispinterface _DReportItem;
typedef System::DelphiInterface<_DReportItem> _di__DReportItem;
__dispinterface INTERFACE_UUID("{00063026-0000-0000-C000-000000000046}") _DReportItem  : public IDispatch 
	
{
	
};
typedef _DReportItem ReportItem;

__dispinterface _DTaskItem;
typedef System::DelphiInterface<_DTaskItem> _di__DTaskItem;
__dispinterface INTERFACE_UUID("{00063035-0000-0000-C000-000000000046}") _DTaskItem  : public IDispatch 
	
{
	
};
typedef _DTaskItem TaskItem;

__dispinterface _DTaskRequestAcceptItem;
typedef System::DelphiInterface<_DTaskRequestAcceptItem> _di__DTaskRequestAcceptItem;
__dispinterface INTERFACE_UUID("{00063038-0000-0000-C000-000000000046}") _DTaskRequestAcceptItem  : public IDispatch 
	
{
	
};
typedef _DTaskRequestAcceptItem _TaskRequestAcceptItem;

__dispinterface _DTaskRequestDeclineItem;
typedef System::DelphiInterface<_DTaskRequestDeclineItem> _di__DTaskRequestDeclineItem;
__dispinterface INTERFACE_UUID("{00063039-0000-0000-C000-000000000046}") _DTaskRequestDeclineItem  : public IDispatch 
	
{
	
};
typedef _DTaskRequestDeclineItem _TaskRequestDeclineItem;

__dispinterface _DTaskRequestItem;
typedef System::DelphiInterface<_DTaskRequestItem> _di__DTaskRequestItem;
__dispinterface INTERFACE_UUID("{00063036-0000-0000-C000-000000000046}") _DTaskRequestItem  : public IDispatch 
	
{
	
};
typedef _DTaskRequestItem TaskRequestItem;

__dispinterface _DTaskRequestUpdateItem;
typedef System::DelphiInterface<_DTaskRequestUpdateItem> _di__DTaskRequestUpdateItem;
__dispinterface INTERFACE_UUID("{00063037-0000-0000-C000-000000000046}") _DTaskRequestUpdateItem  : public IDispatch 
	
{
	
};
typedef _DTaskRequestUpdateItem _TaskRequestUpdateItem;

__dispinterface _DRecipientControl;
typedef System::DelphiInterface<_DRecipientControl> _di__DRecipientControl;
__dispinterface INTERFACE_UUID("{0006F025-0000-0000-C000-000000000046}") _DRecipientControl  : public IDispatch 
	
{
	
};
typedef _DRecipientControl _RecipientControl;

__dispinterface _DDocSiteControl;
typedef System::DelphiInterface<_DDocSiteControl> _di__DDocSiteControl;
__dispinterface INTERFACE_UUID("{0006F026-0000-0000-C000-000000000046}") _DDocSiteControl  : public IDispatch 
	
{
	
};
typedef _DDocSiteControl _DocSiteControl;

typedef GUID *PUserType1;

typedef Shortint *PShortint1;

typedef PShortint1 *PPShortint1;

typedef tagDISPPARAMS *PUserType2;

__interface _IItemEvents;
typedef System::DelphiInterface<_IItemEvents> _di__IItemEvents;
__interface INTERFACE_UUID("{0006313A-0000-0000-C000-000000000046}") _IItemEvents  : public IDispatch 
	
{
	
public:
	virtual Word __stdcall Read(void) = 0 ;
	virtual Word __stdcall Write(void) = 0 ;
	virtual Word __stdcall Open(void) = 0 ;
	virtual Word __stdcall Close(void) = 0 ;
	virtual Word __stdcall Send(void) = 0 ;
	virtual Word __stdcall Reply(const _di_IDispatch Response) = 0 ;
	virtual Word __stdcall ReplyAll(const _di_IDispatch Response) = 0 ;
	virtual Word __stdcall Forward(const _di_IDispatch Forward) = 0 ;
	virtual Word __stdcall CustomAction(const _di_IDispatch Action, const _di_IDispatch Response) = 0 ;
		
	virtual void __stdcall CustomPropertyChange(const WideString Name) = 0 ;
	virtual void __stdcall PropertyChange(const WideString Name) = 0 ;
};

__dispinterface _DItemEvents;
typedef System::DelphiInterface<_DItemEvents> _di__DItemEvents;
__dispinterface INTERFACE_UUID("{0006303A-0000-0000-C000-000000000046}") _DItemEvents  : public IDispatch 
	
{
	
};

__interface _IAction;
typedef System::DelphiInterface<_IAction> _di__IAction;
__interface INTERFACE_UUID("{00063143-0000-0000-C000-000000000046}") _IAction  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_CopyLike(/* out */ Activex::TOleEnum &CopyLike) = 0 ;
	virtual HRESULT __stdcall Set_CopyLike(Activex::TOleEnum CopyLike) = 0 ;
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &Enabled) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word Enabled) = 0 ;
	virtual HRESULT __stdcall Get_MessageClass(/* out */ WideString &MessageClass) = 0 ;
	virtual HRESULT __stdcall Set_MessageClass(const WideString MessageClass) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &Name) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString Name) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &Parent) = 0 ;
	virtual HRESULT __stdcall Get_Prefix(/* out */ WideString &Prefix) = 0 ;
	virtual HRESULT __stdcall Set_Prefix(const WideString Prefix) = 0 ;
	virtual HRESULT __stdcall Get_ReplyStyle(/* out */ Activex::TOleEnum &ReplyStyle) = 0 ;
	virtual HRESULT __stdcall Set_ReplyStyle(Activex::TOleEnum ReplyStyle) = 0 ;
	virtual HRESULT __stdcall Get_ResponseStyle(/* out */ Activex::TOleEnum &ResponseStyle) = 0 ;
	virtual HRESULT __stdcall Set_ResponseStyle(Activex::TOleEnum ResponseStyle) = 0 ;
	virtual HRESULT __stdcall Get_ShowOn(/* out */ Activex::TOleEnum &ShowOn) = 0 ;
	virtual HRESULT __stdcall Set_ShowOn(Activex::TOleEnum ShowOn) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Execute(/* out */ _di_IDispatch &Item) = 0 ;
};

__dispinterface INTERFACE_UUID("{00063043-0000-0000-C000-000000000046}") Action  : public IDispatch 
	
{
	
};

__interface _IActions;
typedef System::DelphiInterface<_IActions> _di__IActions;
__interface INTERFACE_UUID("{0006313E-0000-0000-C000-000000000046}") _IActions  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Count(/* out */ int &Count) = 0 ;
	virtual HRESULT __stdcall Add(/* out */ _di_Action &Action) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_Action &Action) = 0 ;
	virtual HRESULT __stdcall Remove(int Index) = 0 ;
};

__interface _IApplication;
typedef System::DelphiInterface<_IApplication> _di__IApplication;
__interface INTERFACE_UUID("{00063101-0000-0000-C000-000000000046}") _IApplication  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Assistant(/* out */ Opofc97::_di_Assistant &Assistant) = 0 ;
	virtual HRESULT __stdcall ActiveExplorer(/* out */ _di_Explorer &ActiveExplorer) = 0 ;
	virtual HRESULT __stdcall ActiveInspector(/* out */ _di_Inspector &ActiveInspector) = 0 ;
	virtual HRESULT __stdcall CreateItem(Activex::TOleEnum ItemType, /* out */ _di_IDispatch &Item) = 0 
		;
	virtual HRESULT __stdcall CreateItemFromTemplate(const WideString TemplatePath, const OleVariant InFolder
		, /* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall CreateObject(const WideString ObjectName, /* out */ _di_IDispatch &Object_
		) = 0 ;
	virtual HRESULT __stdcall GetNamespace(const WideString Type_, /* out */ _di_NameSpace &NameSpace) = 0 
		;
	virtual HRESULT __stdcall Quit(void) = 0 ;
};

__interface _IAppointmentItem;
typedef System::DelphiInterface<_IAppointmentItem> _di__IAppointmentItem;
__interface INTERFACE_UUID("{00063133-0000-0000-C000-000000000046}") _IAppointmentItem  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Actions(/* out */ _di_Actions &Actions) = 0 ;
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__DApplication &Application_) = 0 ;
	virtual HRESULT __stdcall Get_Attachments(/* out */ _di_Attachments &Attachments) = 0 ;
	virtual HRESULT __stdcall Get_BillingInformation(/* out */ WideString &BillingInformation) = 0 ;
	virtual HRESULT __stdcall Set_BillingInformation(const WideString BillingInformation) = 0 ;
	virtual HRESULT __stdcall Get_Body(/* out */ WideString &Body) = 0 ;
	virtual HRESULT __stdcall Set_Body(const WideString Body) = 0 ;
	virtual HRESULT __stdcall Get_Categories(/* out */ WideString &Categories) = 0 ;
	virtual HRESULT __stdcall Set_Categories(const WideString Categories) = 0 ;
	virtual HRESULT __stdcall Get_Companies(/* out */ WideString &Companies) = 0 ;
	virtual HRESULT __stdcall Set_Companies(const WideString Companies) = 0 ;
	virtual HRESULT __stdcall Get_CreationTime(/* out */ System::TDateTime &CreationTime) = 0 ;
	virtual HRESULT __stdcall Get_EntryID(/* out */ WideString &EntryID) = 0 ;
	virtual HRESULT __stdcall Get_FormDescription(/* out */ _di_FormDescription &FormDescription) = 0 ;
		
	virtual HRESULT __stdcall Get_GetInspector(/* out */ _di_Inspector &GetInspector) = 0 ;
	virtual HRESULT __stdcall Get_Importance(/* out */ Activex::TOleEnum &Importance) = 0 ;
	virtual HRESULT __stdcall Set_Importance(Activex::TOleEnum Importance) = 0 ;
	virtual HRESULT __stdcall Get_LastModificationTime(/* out */ System::TDateTime &LastModificationTime
		) = 0 ;
	virtual HRESULT __stdcall Get_MessageClass(/* out */ WideString &MessageClass) = 0 ;
	virtual HRESULT __stdcall Set_MessageClass(const WideString MessageClass) = 0 ;
	virtual HRESULT __stdcall Get_Mileage(/* out */ WideString &Mileage) = 0 ;
	virtual HRESULT __stdcall Set_Mileage(const WideString Mileage) = 0 ;
	virtual HRESULT __stdcall Get_NoAging(/* out */ Word &NoAging) = 0 ;
	virtual HRESULT __stdcall Set_NoAging(Word NoAging) = 0 ;
	virtual HRESULT __stdcall Get_OutlookInternalVersion(/* out */ WideString &OutlookInternalVersion) = 0 
		;
	virtual HRESULT __stdcall Get_OutlookVersion(/* out */ WideString &OutlookVersion) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &Parent) = 0 ;
	virtual HRESULT __stdcall Get_Saved(/* out */ Word &Saved) = 0 ;
	virtual HRESULT __stdcall Get_Sensitivity(/* out */ Activex::TOleEnum &Sensitivity) = 0 ;
	virtual HRESULT __stdcall Set_Sensitivity(Activex::TOleEnum Sensitivity) = 0 ;
	virtual HRESULT __stdcall Get_Size(/* out */ int &Size) = 0 ;
	virtual HRESULT __stdcall Get_Subject(/* out */ WideString &Subject) = 0 ;
	virtual HRESULT __stdcall Set_Subject(const WideString Subject) = 0 ;
	virtual HRESULT __stdcall Get_UnRead(/* out */ Word &UnRead) = 0 ;
	virtual HRESULT __stdcall Set_UnRead(Word UnRead) = 0 ;
	virtual HRESULT __stdcall Get_UserProperties(/* out */ _di_UserProperties &UserProperties) = 0 ;
	virtual HRESULT __stdcall Get_AllDayEvent(/* out */ Word &AllDayEvent) = 0 ;
	virtual HRESULT __stdcall Set_AllDayEvent(Word AllDayEvent) = 0 ;
	virtual HRESULT __stdcall Get_BusyStatus(/* out */ Activex::TOleEnum &BusyStatus) = 0 ;
	virtual HRESULT __stdcall Set_BusyStatus(Activex::TOleEnum BusyStatus) = 0 ;
	virtual HRESULT __stdcall Get_Duration(/* out */ int &Duration) = 0 ;
	virtual HRESULT __stdcall Set_Duration(int Duration) = 0 ;
	virtual HRESULT __stdcall Get_End_(/* out */ System::TDateTime &End_) = 0 ;
	virtual HRESULT __stdcall Set_End_(System::TDateTime End_) = 0 ;
	virtual HRESULT __stdcall Get_IsRecurring(/* out */ Word &IsRecurring) = 0 ;
	virtual HRESULT __stdcall Get_Location(/* out */ WideString &Location) = 0 ;
	virtual HRESULT __stdcall Set_Location(const WideString Location) = 0 ;
	virtual HRESULT __stdcall Get_MeetingStatus(/* out */ Activex::TOleEnum &MeetingStatus) = 0 ;
	virtual HRESULT __stdcall Set_MeetingStatus(Activex::TOleEnum MeetingStatus) = 0 ;
	virtual HRESULT __stdcall Get_OptionalAttendees(/* out */ WideString &OptionalAttendees) = 0 ;
	virtual HRESULT __stdcall Set_OptionalAttendees(const WideString OptionalAttendees) = 0 ;
	virtual HRESULT __stdcall Get_Organizer(/* out */ WideString &Organizer) = 0 ;
	virtual HRESULT __stdcall Get_Recipients(/* out */ _di_Recipients &Recipients) = 0 ;
	virtual HRESULT __stdcall Get_ReminderMinutesBeforeStart(/* out */ int &ReminderMinutesBeforeStart)
		 = 0 ;
	virtual HRESULT __stdcall Set_ReminderMinutesBeforeStart(int ReminderMinutesBeforeStart) = 0 ;
	virtual HRESULT __stdcall Get_ReminderOverrideDefault(/* out */ Word &ReminderOverrideDefault) = 0 
		;
	virtual HRESULT __stdcall Set_ReminderOverrideDefault(Word ReminderOverrideDefault) = 0 ;
	virtual HRESULT __stdcall Get_ReminderPlaySound(/* out */ Word &ReminderPlaySound) = 0 ;
	virtual HRESULT __stdcall Set_ReminderPlaySound(Word ReminderPlaySound) = 0 ;
	virtual HRESULT __stdcall Get_ReminderSet(/* out */ Word &ReminderSet) = 0 ;
	virtual HRESULT __stdcall Set_ReminderSet(Word ReminderSet) = 0 ;
	virtual HRESULT __stdcall Get_ReminderSoundFile(/* out */ WideString &ReminderSoundFile) = 0 ;
	virtual HRESULT __stdcall Set_ReminderSoundFile(const WideString ReminderSoundFile) = 0 ;
	virtual HRESULT __stdcall Get_ReplyTime(/* out */ System::TDateTime &ReplyTime) = 0 ;
	virtual HRESULT __stdcall Set_ReplyTime(System::TDateTime ReplyTime) = 0 ;
	virtual HRESULT __stdcall Get_RequiredAttendees(/* out */ WideString &RequiredAttendees) = 0 ;
	virtual HRESULT __stdcall Set_RequiredAttendees(const WideString RequiredAttendees) = 0 ;
	virtual HRESULT __stdcall Get_Resources(/* out */ WideString &Resources) = 0 ;
	virtual HRESULT __stdcall Set_Resources(const WideString Resources) = 0 ;
	virtual HRESULT __stdcall Get_ResponseRequested(/* out */ Word &ResponseRequested) = 0 ;
	virtual HRESULT __stdcall Set_ResponseRequested(Word ResponseRequested) = 0 ;
	virtual HRESULT __stdcall Get_ResponseStatus(/* out */ Activex::TOleEnum &ResponseStatus) = 0 ;
	virtual HRESULT __stdcall Get_Start(/* out */ System::TDateTime &Start) = 0 ;
	virtual HRESULT __stdcall Set_Start(System::TDateTime Start) = 0 ;
	virtual HRESULT __stdcall Close(Activex::TOleEnum SaveMode) = 0 ;
	virtual HRESULT __stdcall Copy(/* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Display(const OleVariant Modal) = 0 ;
	virtual HRESULT __stdcall Move(const _di_MAPIFolder DestFldr, /* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Save(void) = 0 ;
	virtual HRESULT __stdcall SaveAs(const WideString Path, const OleVariant Type_) = 0 ;
	virtual HRESULT __stdcall PrintOut(void) = 0 ;
	virtual HRESULT __stdcall ClearRecurrencePattern(void) = 0 ;
	virtual HRESULT __stdcall GetRecurrencePattern(/* out */ _di_RecurrencePattern &RecurrencPattern) = 0 
		;
	virtual HRESULT __stdcall Respond(Activex::TOleEnum Response, const OleVariant fNoUI, const OleVariant 
		fAdditionalTextDialog, /* out */ _di_IDispatch &ResponseItem) = 0 ;
	virtual HRESULT __stdcall Send(void) = 0 ;
};

__interface _IAttachment;
typedef System::DelphiInterface<_IAttachment> _di__IAttachment;
__interface INTERFACE_UUID("{00063107-0000-0000-C000-000000000046}") _IAttachment  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__DApplication &Application_) = 0 ;
	virtual HRESULT __stdcall Get_DisplayName(/* out */ WideString &DisplayName) = 0 ;
	virtual HRESULT __stdcall Set_DisplayName(const WideString DisplayName) = 0 ;
	virtual HRESULT __stdcall Get_FileName(/* out */ WideString &FileName) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &Parent) = 0 ;
	virtual HRESULT __stdcall Get_PathName(/* out */ WideString &PathName) = 0 ;
	virtual HRESULT __stdcall Get_Position(/* out */ int &Position) = 0 ;
	virtual HRESULT __stdcall Set_Position(int Position) = 0 ;
	virtual HRESULT __stdcall Get_Type_(/* out */ Activex::TOleEnum &Type_) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall SaveAsFile(const WideString Path) = 0 ;
};

__dispinterface INTERFACE_UUID("{00063007-0000-0000-C000-000000000046}") Attachment  : public IDispatch 
	
{
	
};

__interface _IAttachments;
typedef System::DelphiInterface<_IAttachments> _di__IAttachments;
__interface INTERFACE_UUID("{0006313C-0000-0000-C000-000000000046}") _IAttachments  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Count(/* out */ int &Count) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &Parent) = 0 ;
	virtual HRESULT __stdcall Add(const OleVariant Source, const OleVariant Type_, const OleVariant Position
		, const OleVariant DisplayName, /* out */ _di_Attachment &Attachment) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_Attachment &Attachment) = 0 ;
	virtual HRESULT __stdcall Remove(int Index) = 0 ;
};

__interface _IContactItem;
typedef System::DelphiInterface<_IContactItem> _di__IContactItem;
__interface INTERFACE_UUID("{00063121-0000-0000-C000-000000000046}") _IContactItem  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Actions(/* out */ _di_Actions &Actions) = 0 ;
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__DApplication &Application_) = 0 ;
	virtual HRESULT __stdcall Get_Attachments(/* out */ _di_Attachments &Attachments) = 0 ;
	virtual HRESULT __stdcall Get_BillingInformation(/* out */ WideString &BillingInformation) = 0 ;
	virtual HRESULT __stdcall Set_BillingInformation(const WideString BillingInformation) = 0 ;
	virtual HRESULT __stdcall Get_Body(/* out */ WideString &Body) = 0 ;
	virtual HRESULT __stdcall Set_Body(const WideString Body) = 0 ;
	virtual HRESULT __stdcall Get_Categories(/* out */ WideString &Categories) = 0 ;
	virtual HRESULT __stdcall Set_Categories(const WideString Categories) = 0 ;
	virtual HRESULT __stdcall Get_Companies(/* out */ WideString &Companies) = 0 ;
	virtual HRESULT __stdcall Set_Companies(const WideString Companies) = 0 ;
	virtual HRESULT __stdcall Get_CreationTime(/* out */ System::TDateTime &CreationTime) = 0 ;
	virtual HRESULT __stdcall Get_EntryID(/* out */ WideString &EntryID) = 0 ;
	virtual HRESULT __stdcall Get_FormDescription(/* out */ _di_FormDescription &FormDescription) = 0 ;
		
	virtual HRESULT __stdcall Get_GetInspector(/* out */ _di_Inspector &GetInspector) = 0 ;
	virtual HRESULT __stdcall Get_Importance(/* out */ Activex::TOleEnum &Importance) = 0 ;
	virtual HRESULT __stdcall Set_Importance(Activex::TOleEnum Importance) = 0 ;
	virtual HRESULT __stdcall Get_LastModificationTime(/* out */ System::TDateTime &LastModificationTime
		) = 0 ;
	virtual HRESULT __stdcall Get_MessageClass(/* out */ WideString &MessageClass) = 0 ;
	virtual HRESULT __stdcall Set_MessageClass(const WideString MessageClass) = 0 ;
	virtual HRESULT __stdcall Get_Mileage(/* out */ WideString &Mileage) = 0 ;
	virtual HRESULT __stdcall Set_Mileage(const WideString Mileage) = 0 ;
	virtual HRESULT __stdcall Get_NoAging(/* out */ Word &NoAging) = 0 ;
	virtual HRESULT __stdcall Set_NoAging(Word NoAging) = 0 ;
	virtual HRESULT __stdcall Get_OutlookInternalVersion(/* out */ WideString &OutlookInternalVersion) = 0 
		;
	virtual HRESULT __stdcall Get_OutlookVersion(/* out */ WideString &OutlookVersion) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &Parent) = 0 ;
	virtual HRESULT __stdcall Get_Saved(/* out */ Word &Saved) = 0 ;
	virtual HRESULT __stdcall Get_Sensitivity(/* out */ Activex::TOleEnum &Sensitivity) = 0 ;
	virtual HRESULT __stdcall Set_Sensitivity(Activex::TOleEnum Sensitivity) = 0 ;
	virtual HRESULT __stdcall Get_Size(/* out */ int &Size) = 0 ;
	virtual HRESULT __stdcall Get_Subject(/* out */ WideString &Subject) = 0 ;
	virtual HRESULT __stdcall Set_Subject(const WideString Subject) = 0 ;
	virtual HRESULT __stdcall Get_UnRead(/* out */ Word &UnRead) = 0 ;
	virtual HRESULT __stdcall Set_UnRead(Word UnRead) = 0 ;
	virtual HRESULT __stdcall Get_UserProperties(/* out */ _di_UserProperties &UserProperties) = 0 ;
	virtual HRESULT __stdcall Get_Account(/* out */ WideString &Account) = 0 ;
	virtual HRESULT __stdcall Set_Account(const WideString Account) = 0 ;
	virtual HRESULT __stdcall Get_Anniversary(/* out */ System::TDateTime &Anniversary) = 0 ;
	virtual HRESULT __stdcall Set_Anniversary(System::TDateTime Anniversary) = 0 ;
	virtual HRESULT __stdcall Get_AssistantName(/* out */ WideString &AssistantName) = 0 ;
	virtual HRESULT __stdcall Set_AssistantName(const WideString AssistantName) = 0 ;
	virtual HRESULT __stdcall Get_AssistantTelephoneNumber(/* out */ WideString &AssistantTelephoneNumber
		) = 0 ;
	virtual HRESULT __stdcall Set_AssistantTelephoneNumber(const WideString AssistantTelephoneNumber) = 0 
		;
	virtual HRESULT __stdcall Get_Birthday(/* out */ System::TDateTime &Birthday) = 0 ;
	virtual HRESULT __stdcall Set_Birthday(System::TDateTime Birthday) = 0 ;
	virtual HRESULT __stdcall Get_Business2TelephoneNumber(/* out */ WideString &Business2TelephoneNumber
		) = 0 ;
	virtual HRESULT __stdcall Set_Business2TelephoneNumber(const WideString Business2TelephoneNumber) = 0 
		;
	virtual HRESULT __stdcall Get_BusinessAddress(/* out */ WideString &BusinessAddress) = 0 ;
	virtual HRESULT __stdcall Set_BusinessAddress(const WideString BusinessAddress) = 0 ;
	virtual HRESULT __stdcall Get_BusinessAddressCity(/* out */ WideString &BusinessAddressCity) = 0 ;
	virtual HRESULT __stdcall Set_BusinessAddressCity(const WideString BusinessAddressCity) = 0 ;
	virtual HRESULT __stdcall Get_BusinessAddressCountry(/* out */ WideString &BusinessAddressCountry) = 0 
		;
	virtual HRESULT __stdcall Set_BusinessAddressCountry(const WideString BusinessAddressCountry) = 0 ;
		
	virtual HRESULT __stdcall Get_BusinessAddressPostalCode(/* out */ WideString &BusinessAddressPostalCode
		) = 0 ;
	virtual HRESULT __stdcall Set_BusinessAddressPostalCode(const WideString BusinessAddressPostalCode)
		 = 0 ;
	virtual HRESULT __stdcall Get_BusinessAddressPostOfficeBox(/* out */ WideString &BusinessAddressPostOfficeBox
		) = 0 ;
	virtual HRESULT __stdcall Set_BusinessAddressPostOfficeBox(const WideString BusinessAddressPostOfficeBox
		) = 0 ;
	virtual HRESULT __stdcall Get_BusinessAddressState(/* out */ WideString &BusinessAddressState) = 0 
		;
	virtual HRESULT __stdcall Set_BusinessAddressState(const WideString BusinessAddressState) = 0 ;
	virtual HRESULT __stdcall Get_BusinessAddressStreet(/* out */ WideString &BusinessAddressStreet) = 0 
		;
	virtual HRESULT __stdcall Set_BusinessAddressStreet(const WideString BusinessAddressStreet) = 0 ;
	virtual HRESULT __stdcall Get_BusinessFaxNumber(/* out */ WideString &BusinessFaxNumber) = 0 ;
	virtual HRESULT __stdcall Set_BusinessFaxNumber(const WideString BusinessFaxNumber) = 0 ;
	virtual HRESULT __stdcall Get_BusinessHomePage(/* out */ WideString &BusinessHomePage) = 0 ;
	virtual HRESULT __stdcall Set_BusinessHomePage(const WideString BusinessHomePage) = 0 ;
	virtual HRESULT __stdcall Get_BusinessTelephoneNumber(/* out */ WideString &BusinessTelephoneNumber
		) = 0 ;
	virtual HRESULT __stdcall Set_BusinessTelephoneNumber(const WideString BusinessTelephoneNumber) = 0 
		;
	virtual HRESULT __stdcall Get_CallbackTelephoneNumber(/* out */ WideString &CallbackTelephoneNumber
		) = 0 ;
	virtual HRESULT __stdcall Set_CallbackTelephoneNumber(const WideString CallbackTelephoneNumber) = 0 
		;
	virtual HRESULT __stdcall Get_CarTelephoneNumber(/* out */ WideString &CarTelephoneNumber) = 0 ;
	virtual HRESULT __stdcall Set_CarTelephoneNumber(const WideString CarTelephoneNumber) = 0 ;
	virtual HRESULT __stdcall Get_Children(/* out */ WideString &Children) = 0 ;
	virtual HRESULT __stdcall Set_Children(const WideString Children) = 0 ;
	virtual HRESULT __stdcall Get_CompanyAndFullName(/* out */ WideString &CompanyAndFullName) = 0 ;
	virtual HRESULT __stdcall Get_CompanyMainTelephoneNumber(/* out */ WideString &CompanyMainTelephoneNumber
		) = 0 ;
	virtual HRESULT __stdcall Set_CompanyMainTelephoneNumber(const WideString CompanyMainTelephoneNumber
		) = 0 ;
	virtual HRESULT __stdcall Get_CompanyName(/* out */ WideString &CompanyName) = 0 ;
	virtual HRESULT __stdcall Set_CompanyName(const WideString CompanyName) = 0 ;
	virtual HRESULT __stdcall Get_ComputerNetworkName(/* out */ WideString &ComputerNetworkName) = 0 ;
	virtual HRESULT __stdcall Set_ComputerNetworkName(const WideString ComputerNetworkName) = 0 ;
	virtual HRESULT __stdcall Get_CustomerID(/* out */ WideString &CustomerID) = 0 ;
	virtual HRESULT __stdcall Set_CustomerID(const WideString CustomerID) = 0 ;
	virtual HRESULT __stdcall Get_Department(/* out */ WideString &Department) = 0 ;
	virtual HRESULT __stdcall Set_Department(const WideString Department) = 0 ;
	virtual HRESULT __stdcall Get_Email1Address(/* out */ WideString &Email1Address) = 0 ;
	virtual HRESULT __stdcall Set_Email1Address(const WideString Email1Address) = 0 ;
	virtual HRESULT __stdcall Get_Email1AddressType(/* out */ WideString &Email1AddressType) = 0 ;
	virtual HRESULT __stdcall Set_Email1AddressType(const WideString Email1AddressType) = 0 ;
	virtual HRESULT __stdcall Get_Email1DisplayName(/* out */ WideString &Email1DisplayName) = 0 ;
	virtual HRESULT __stdcall Get_Email1EntryID(/* out */ WideString &Email1EntryID) = 0 ;
	virtual HRESULT __stdcall Get_Email2Address(/* out */ WideString &Email2Address) = 0 ;
	virtual HRESULT __stdcall Set_Email2Address(const WideString Email2Address) = 0 ;
	virtual HRESULT __stdcall Get_Email2AddressType(/* out */ WideString &Email2AddressType) = 0 ;
	virtual HRESULT __stdcall Set_Email2AddressType(const WideString Email2AddressType) = 0 ;
	virtual HRESULT __stdcall Get_Email2DisplayName(/* out */ WideString &Email2DisplayName) = 0 ;
	virtual HRESULT __stdcall Get_Email2EntryID(/* out */ WideString &Email2EntryID) = 0 ;
	virtual HRESULT __stdcall Get_Email3Address(/* out */ WideString &Email3Address) = 0 ;
	virtual HRESULT __stdcall Set_Email3Address(const WideString Email3Address) = 0 ;
	virtual HRESULT __stdcall Get_Email3AddressType(/* out */ WideString &Email3AddressType) = 0 ;
	virtual HRESULT __stdcall Set_Email3AddressType(const WideString Email3AddressType) = 0 ;
	virtual HRESULT __stdcall Get_Email3DisplayName(/* out */ WideString &Email3DisplayName) = 0 ;
	virtual HRESULT __stdcall Get_Email3EntryID(/* out */ WideString &Email3EntryID) = 0 ;
	virtual HRESULT __stdcall Get_FileAs(/* out */ WideString &FileAs) = 0 ;
	virtual HRESULT __stdcall Set_FileAs(const WideString FileAs) = 0 ;
	virtual HRESULT __stdcall Get_FirstName(/* out */ WideString &FirstName) = 0 ;
	virtual HRESULT __stdcall Set_FirstName(const WideString FirstName) = 0 ;
	virtual HRESULT __stdcall Get_FTPSite(/* out */ WideString &FTPSite) = 0 ;
	virtual HRESULT __stdcall Set_FTPSite(const WideString FTPSite) = 0 ;
	virtual HRESULT __stdcall Get_FullName(/* out */ WideString &FullName) = 0 ;
	virtual HRESULT __stdcall Set_FullName(const WideString FullName) = 0 ;
	virtual HRESULT __stdcall Get_FullNameAndCompany(/* out */ WideString &FullNameAndCompany) = 0 ;
	virtual HRESULT __stdcall Get_Gender(/* out */ Activex::TOleEnum &Gender) = 0 ;
	virtual HRESULT __stdcall Set_Gender(Activex::TOleEnum Gender) = 0 ;
	virtual HRESULT __stdcall Get_GovernmentIDNumber(/* out */ WideString &GovernmentIDNumber) = 0 ;
	virtual HRESULT __stdcall Set_GovernmentIDNumber(const WideString GovernmentIDNumber) = 0 ;
	virtual HRESULT __stdcall Get_Hobby(/* out */ WideString &Hobby) = 0 ;
	virtual HRESULT __stdcall Set_Hobby(const WideString Hobby) = 0 ;
	virtual HRESULT __stdcall Get_Home2TelephoneNumber(/* out */ WideString &Home2TelephoneNumber) = 0 
		;
	virtual HRESULT __stdcall Set_Home2TelephoneNumber(const WideString Home2TelephoneNumber) = 0 ;
	virtual HRESULT __stdcall Get_HomeAddress(/* out */ WideString &HomeAddress) = 0 ;
	virtual HRESULT __stdcall Set_HomeAddress(const WideString HomeAddress) = 0 ;
	virtual HRESULT __stdcall Get_HomeAddressCity(/* out */ WideString &HomeAddressCity) = 0 ;
	virtual HRESULT __stdcall Set_HomeAddressCity(const WideString HomeAddressCity) = 0 ;
	virtual HRESULT __stdcall Get_HomeAddressCountry(/* out */ WideString &HomeAddressCountry) = 0 ;
	virtual HRESULT __stdcall Set_HomeAddressCountry(const WideString HomeAddressCountry) = 0 ;
	virtual HRESULT __stdcall Get_HomeAddressPostalCode(/* out */ WideString &HomeAddressPostalCode) = 0 
		;
	virtual HRESULT __stdcall Set_HomeAddressPostalCode(const WideString HomeAddressPostalCode) = 0 ;
	virtual HRESULT __stdcall Get_HomeAddressPostOfficeBox(/* out */ WideString &HomeAddressPostOfficeBox
		) = 0 ;
	virtual HRESULT __stdcall Set_HomeAddressPostOfficeBox(const WideString HomeAddressPostOfficeBox) = 0 
		;
	virtual HRESULT __stdcall Get_HomeAddressState(/* out */ WideString &HomeAddressState) = 0 ;
	virtual HRESULT __stdcall Set_HomeAddressState(const WideString HomeAddressState) = 0 ;
	virtual HRESULT __stdcall Get_HomeAddressStreet(/* out */ WideString &HomeAddressStreet) = 0 ;
	virtual HRESULT __stdcall Set_HomeAddressStreet(const WideString HomeAddressStreet) = 0 ;
	virtual HRESULT __stdcall Get_HomeFaxNumber(/* out */ WideString &HomeFaxNumber) = 0 ;
	virtual HRESULT __stdcall Set_HomeFaxNumber(const WideString HomeFaxNumber) = 0 ;
	virtual HRESULT __stdcall Get_HomeTelephoneNumber(/* out */ WideString &HomeTelephoneNumber) = 0 ;
	virtual HRESULT __stdcall Set_HomeTelephoneNumber(const WideString HomeTelephoneNumber) = 0 ;
	virtual HRESULT __stdcall Get_Initials(/* out */ WideString &Initials) = 0 ;
	virtual HRESULT __stdcall Set_Initials(const WideString Initials) = 0 ;
	virtual HRESULT __stdcall Get_ISDNNumber(/* out */ WideString &ISDNNumber) = 0 ;
	virtual HRESULT __stdcall Set_ISDNNumber(const WideString ISDNNumber) = 0 ;
	virtual HRESULT __stdcall Get_JobTitle(/* out */ WideString &JobTitle) = 0 ;
	virtual HRESULT __stdcall Set_JobTitle(const WideString JobTitle) = 0 ;
	virtual HRESULT __stdcall Get_Journal(/* out */ Word &Journal) = 0 ;
	virtual HRESULT __stdcall Set_Journal(Word Journal) = 0 ;
	virtual HRESULT __stdcall Get_Language(/* out */ WideString &Language) = 0 ;
	virtual HRESULT __stdcall Set_Language(const WideString Language) = 0 ;
	virtual HRESULT __stdcall Get_LastName(/* out */ WideString &LastName) = 0 ;
	virtual HRESULT __stdcall Set_LastName(const WideString LastName) = 0 ;
	virtual HRESULT __stdcall Get_LastNameAndFirstName(/* out */ WideString &LastNameAndFirstName) = 0 
		;
	virtual HRESULT __stdcall Get_MailingAddress(/* out */ WideString &MailingAddress) = 0 ;
	virtual HRESULT __stdcall Set_MailingAddress(const WideString MailingAddress) = 0 ;
	virtual HRESULT __stdcall Get_MailingAddressCity(/* out */ WideString &MailingAddressCity) = 0 ;
	virtual HRESULT __stdcall Set_MailingAddressCity(const WideString MailingAddressCity) = 0 ;
	virtual HRESULT __stdcall Get_MailingAddressCountry(/* out */ WideString &MailingAddressCountry) = 0 
		;
	virtual HRESULT __stdcall Set_MailingAddressCountry(const WideString MailingAddressCountry) = 0 ;
	virtual HRESULT __stdcall Get_MailingAddressPostalCode(/* out */ WideString &MailingAddressPostalCode
		) = 0 ;
	virtual HRESULT __stdcall Set_MailingAddressPostalCode(const WideString MailingAddressPostalCode) = 0 
		;
	virtual HRESULT __stdcall Get_MailingAddressPostOfficeBox(/* out */ WideString &MailingAddressPostOfficeBox
		) = 0 ;
	virtual HRESULT __stdcall Set_MailingAddressPostOfficeBox(const WideString MailingAddressPostOfficeBox
		) = 0 ;
	virtual HRESULT __stdcall Get_MailingAddressState(/* out */ WideString &MailingAddressState) = 0 ;
	virtual HRESULT __stdcall Set_MailingAddressState(const WideString MailingAddressState) = 0 ;
	virtual HRESULT __stdcall Get_MailingAddressStreet(/* out */ WideString &MailingAddressStreet) = 0 
		;
	virtual HRESULT __stdcall Set_MailingAddressStreet(const WideString MailingAddressStreet) = 0 ;
	virtual HRESULT __stdcall Get_ManagerName(/* out */ WideString &ManagerName) = 0 ;
	virtual HRESULT __stdcall Set_ManagerName(const WideString ManagerName) = 0 ;
	virtual HRESULT __stdcall Get_MiddleName(/* out */ WideString &MiddleName) = 0 ;
	virtual HRESULT __stdcall Set_MiddleName(const WideString MiddleName) = 0 ;
	virtual HRESULT __stdcall Get_MobileTelephoneNumber(/* out */ WideString &MobileTelephoneNumber) = 0 
		;
	virtual HRESULT __stdcall Set_MobileTelephoneNumber(const WideString MobileTelephoneNumber) = 0 ;
	virtual HRESULT __stdcall Get_NickName(/* out */ WideString &NickName) = 0 ;
	virtual HRESULT __stdcall Set_NickName(const WideString NickName) = 0 ;
	virtual HRESULT __stdcall Get_OfficeLocation(/* out */ WideString &OfficeLocation) = 0 ;
	virtual HRESULT __stdcall Set_OfficeLocation(const WideString OfficeLocation) = 0 ;
	virtual HRESULT __stdcall Get_OrganizationalIDNumber(/* out */ WideString &OrganizationalIDNumber) = 0 
		;
	virtual HRESULT __stdcall Set_OrganizationalIDNumber(const WideString OrganizationalIDNumber) = 0 ;
		
	virtual HRESULT __stdcall Get_OtherAddress(/* out */ WideString &OtherAddress) = 0 ;
	virtual HRESULT __stdcall Set_OtherAddress(const WideString OtherAddress) = 0 ;
	virtual HRESULT __stdcall Get_OtherAddressCity(/* out */ WideString &OtherAddressCity) = 0 ;
	virtual HRESULT __stdcall Set_OtherAddressCity(const WideString OtherAddressCity) = 0 ;
	virtual HRESULT __stdcall Get_OtherAddressCountry(/* out */ WideString &OtherAddressCountry) = 0 ;
	virtual HRESULT __stdcall Set_OtherAddressCountry(const WideString OtherAddressCountry) = 0 ;
	virtual HRESULT __stdcall Get_OtherAddressPostalCode(/* out */ WideString &OtherAddressPostalCode) = 0 
		;
	virtual HRESULT __stdcall Set_OtherAddressPostalCode(const WideString OtherAddressPostalCode) = 0 ;
		
	virtual HRESULT __stdcall Get_OtherAddressPostOfficeBox(/* out */ WideString &OtherAddressPostOfficeBox
		) = 0 ;
	virtual HRESULT __stdcall Set_OtherAddressPostOfficeBox(const WideString OtherAddressPostOfficeBox)
		 = 0 ;
	virtual HRESULT __stdcall Get_OtherAddressState(/* out */ WideString &OtherAddressState) = 0 ;
	virtual HRESULT __stdcall Set_OtherAddressState(const WideString OtherAddressState) = 0 ;
	virtual HRESULT __stdcall Get_OtherAddressStreet(/* out */ WideString &OtherAddressStreet) = 0 ;
	virtual HRESULT __stdcall Set_OtherAddressStreet(const WideString OtherAddressStreet) = 0 ;
	virtual HRESULT __stdcall Get_OtherFaxNumber(/* out */ WideString &OtherFaxNumber) = 0 ;
	virtual HRESULT __stdcall Set_OtherFaxNumber(const WideString OtherFaxNumber) = 0 ;
	virtual HRESULT __stdcall Get_OtherTelephoneNumber(/* out */ WideString &OtherTelephoneNumber) = 0 
		;
	virtual HRESULT __stdcall Set_OtherTelephoneNumber(const WideString OtherTelephoneNumber) = 0 ;
	virtual HRESULT __stdcall Get_PagerNumber(/* out */ WideString &PagerNumber) = 0 ;
	virtual HRESULT __stdcall Set_PagerNumber(const WideString PagerNumber) = 0 ;
	virtual HRESULT __stdcall Get_PersonalHomePage(/* out */ WideString &PersonalHomePage) = 0 ;
	virtual HRESULT __stdcall Set_PersonalHomePage(const WideString PersonalHomePage) = 0 ;
	virtual HRESULT __stdcall Get_PrimaryTelephoneNumber(/* out */ WideString &PrimaryTelephoneNumber) = 0 
		;
	virtual HRESULT __stdcall Set_PrimaryTelephoneNumber(const WideString PrimaryTelephoneNumber) = 0 ;
		
	virtual HRESULT __stdcall Get_Profession(/* out */ WideString &Profession) = 0 ;
	virtual HRESULT __stdcall Set_Profession(const WideString Profession) = 0 ;
	virtual HRESULT __stdcall Get_RadioTelephoneNumber(/* out */ WideString &RadioTelephoneNumber) = 0 
		;
	virtual HRESULT __stdcall Set_RadioTelephoneNumber(const WideString RadioTelephoneNumber) = 0 ;
	virtual HRESULT __stdcall Get_ReferredBy(/* out */ WideString &ReferredBy) = 0 ;
	virtual HRESULT __stdcall Set_ReferredBy(const WideString ReferredBy) = 0 ;
	virtual HRESULT __stdcall Get_SelectedMailingAddress(/* out */ Activex::TOleEnum &SelectedMailingAddress
		) = 0 ;
	virtual HRESULT __stdcall Set_SelectedMailingAddress(Activex::TOleEnum SelectedMailingAddress) = 0 
		;
	virtual HRESULT __stdcall Get_Spouse(/* out */ WideString &Spouse) = 0 ;
	virtual HRESULT __stdcall Set_Spouse(const WideString Spouse) = 0 ;
	virtual HRESULT __stdcall Get_Suffix(/* out */ WideString &Suffix) = 0 ;
	virtual HRESULT __stdcall Set_Suffix(const WideString Suffix) = 0 ;
	virtual HRESULT __stdcall Get_TelexNumber(/* out */ WideString &TelexNumber) = 0 ;
	virtual HRESULT __stdcall Set_TelexNumber(const WideString TelexNumber) = 0 ;
	virtual HRESULT __stdcall Get_Title(/* out */ WideString &Title) = 0 ;
	virtual HRESULT __stdcall Set_Title(const WideString Title) = 0 ;
	virtual HRESULT __stdcall Get_TTYTDDTelephoneNumber(/* out */ WideString &TTYTDDTelephoneNumber) = 0 
		;
	virtual HRESULT __stdcall Set_TTYTDDTelephoneNumber(const WideString TTYTDDTelephoneNumber) = 0 ;
	virtual HRESULT __stdcall Get_User1(/* out */ WideString &User1) = 0 ;
	virtual HRESULT __stdcall Set_User1(const WideString User1) = 0 ;
	virtual HRESULT __stdcall Get_User2(/* out */ WideString &User2) = 0 ;
	virtual HRESULT __stdcall Set_User2(const WideString User2) = 0 ;
	virtual HRESULT __stdcall Get_User3(/* out */ WideString &User3) = 0 ;
	virtual HRESULT __stdcall Set_User3(const WideString User3) = 0 ;
	virtual HRESULT __stdcall Get_User4(/* out */ WideString &User4) = 0 ;
	virtual HRESULT __stdcall Set_User4(const WideString User4) = 0 ;
	virtual HRESULT __stdcall Get_UserCertificate(/* out */ WideString &UserCertificate) = 0 ;
	virtual HRESULT __stdcall Set_UserCertificate(const WideString UserCertificate) = 0 ;
	virtual HRESULT __stdcall Get_WebPage(/* out */ WideString &WebPage) = 0 ;
	virtual HRESULT __stdcall Set_WebPage(const WideString WebPage) = 0 ;
	virtual HRESULT __stdcall Get_YomiCompanyName(/* out */ WideString &YomiCompanyName) = 0 ;
	virtual HRESULT __stdcall Set_YomiCompanyName(const WideString YomiCompanyName) = 0 ;
	virtual HRESULT __stdcall Get_YomiFirstName(/* out */ WideString &YomiFirstName) = 0 ;
	virtual HRESULT __stdcall Set_YomiFirstName(const WideString YomiFirstName) = 0 ;
	virtual HRESULT __stdcall Get_YomiLastName(/* out */ WideString &YomiLastName) = 0 ;
	virtual HRESULT __stdcall Set_YomiLastName(const WideString YomiLastName) = 0 ;
	virtual HRESULT __stdcall Close(Activex::TOleEnum SaveMode) = 0 ;
	virtual HRESULT __stdcall Copy(/* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Display(const OleVariant Modal) = 0 ;
	virtual HRESULT __stdcall Move(const _di_MAPIFolder DestFldr, /* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Save(void) = 0 ;
	virtual HRESULT __stdcall SaveAs(const WideString Path, const OleVariant Type_) = 0 ;
	virtual HRESULT __stdcall PrintOut(void) = 0 ;
};

__interface _IExplorer;
typedef System::DelphiInterface<_IExplorer> _di__IExplorer;
__interface INTERFACE_UUID("{00063103-0000-0000-C000-000000000046}") _IExplorer  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__DApplication &Application_) = 0 ;
	virtual HRESULT __stdcall Get_CommandBars(/* out */ Opofc97::_di_CommandBars &CommandBars) = 0 ;
	virtual HRESULT __stdcall Get_CurrentFolder(/* out */ _di_MAPIFolder &CurrentFolder) = 0 ;
	virtual HRESULT __stdcall Set_CurrentFolder(const _di_MAPIFolder CurrentFolder) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di__DApplication &Parent) = 0 ;
	virtual HRESULT __stdcall Close(void) = 0 ;
	virtual HRESULT __stdcall Display(void) = 0 ;
};

__dispinterface INTERFACE_UUID("{00063003-0000-0000-C000-000000000046}") Explorer  : public IDispatch 
	
{
	
};

__interface _IFolders;
typedef System::DelphiInterface<_IFolders> _di__IFolders;
__interface INTERFACE_UUID("{00063140-0000-0000-C000-000000000046}") _IFolders  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Count(/* out */ int &Count) = 0 ;
	virtual HRESULT __stdcall Add(const WideString Name, const OleVariant Type_, /* out */ _di_MAPIFolder 
		&Folder) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_MAPIFolder &Folder) = 0 ;
	virtual HRESULT __stdcall Remove(int Index) = 0 ;
};

__dispinterface Folders;
typedef System::DelphiInterface<Folders> _di_Folders;
__dispinterface INTERFACE_UUID("{00063040-0000-0000-C000-000000000046}") Folders  : public IDispatch 
	
{
	
};

__interface _IFormDescription;
typedef System::DelphiInterface<_IFormDescription> _di__IFormDescription;
__interface INTERFACE_UUID("{00063146-0000-0000-C000-000000000046}") _IFormDescription  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Category(/* out */ WideString &Category) = 0 ;
	virtual HRESULT __stdcall Set_Category(const WideString Category) = 0 ;
	virtual HRESULT __stdcall Get_CategorySub(/* out */ WideString &CategorySub) = 0 ;
	virtual HRESULT __stdcall Set_CategorySub(const WideString CategorySub) = 0 ;
	virtual HRESULT __stdcall Get_Comment(/* out */ WideString &Comment) = 0 ;
	virtual HRESULT __stdcall Set_Comment(const WideString Comment) = 0 ;
	virtual HRESULT __stdcall Get_ContactName(/* out */ WideString &ContactName) = 0 ;
	virtual HRESULT __stdcall Set_ContactName(const WideString ContactName) = 0 ;
	virtual HRESULT __stdcall Get_DisplayName(/* out */ WideString &DisplayName) = 0 ;
	virtual HRESULT __stdcall Set_DisplayName(const WideString DisplayName) = 0 ;
	virtual HRESULT __stdcall Get_Hidden(/* out */ Word &Hidden) = 0 ;
	virtual HRESULT __stdcall Set_Hidden(Word Hidden) = 0 ;
	virtual HRESULT __stdcall Get_Icon(/* out */ WideString &Icon) = 0 ;
	virtual HRESULT __stdcall Set_Icon(const WideString Icon) = 0 ;
	virtual HRESULT __stdcall Get_Locked(/* out */ Word &Locked) = 0 ;
	virtual HRESULT __stdcall Set_Locked(Word Locked) = 0 ;
	virtual HRESULT __stdcall Get_MessageClass(/* out */ WideString &MessageClass) = 0 ;
	virtual HRESULT __stdcall Get_MiniIcon(/* out */ WideString &MiniIcon) = 0 ;
	virtual HRESULT __stdcall Set_MiniIcon(const WideString MiniIcon) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &Name) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString Name) = 0 ;
	virtual HRESULT __stdcall Get_Number(/* out */ WideString &Number) = 0 ;
	virtual HRESULT __stdcall Set_Number(const WideString Number) = 0 ;
	virtual HRESULT __stdcall Get_OneOff(/* out */ Word &OneOff) = 0 ;
	virtual HRESULT __stdcall Set_OneOff(Word OneOff) = 0 ;
	virtual HRESULT __stdcall Get_Password(/* out */ WideString &Password) = 0 ;
	virtual HRESULT __stdcall Set_Password(const WideString Password) = 0 ;
	virtual HRESULT __stdcall Get_Template(/* out */ WideString &Template) = 0 ;
	virtual HRESULT __stdcall Set_Template(const WideString Template) = 0 ;
	virtual HRESULT __stdcall Get_UseWordMail(/* out */ Word &UseWordMail) = 0 ;
	virtual HRESULT __stdcall Set_UseWordMail(Word UseWordMail) = 0 ;
	virtual HRESULT __stdcall Get_Version(/* out */ WideString &Version) = 0 ;
	virtual HRESULT __stdcall Set_Version(const WideString Version) = 0 ;
	virtual HRESULT __stdcall PublishForm(Activex::TOleEnum Registry, const OleVariant Folder) = 0 ;
};

__interface _IInspector;
typedef System::DelphiInterface<_IInspector> _di__IInspector;
__dispinterface Pages;
typedef System::DelphiInterface<Pages> _di_Pages;
__interface INTERFACE_UUID("{00063105-0000-0000-C000-000000000046}") _IInspector  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__DApplication &Application_) = 0 ;
	virtual HRESULT __stdcall Get_CommandBars(/* out */ Opofc97::_di_CommandBars &CommandBars) = 0 ;
	virtual HRESULT __stdcall Get_CurrentItem(/* out */ _di_IDispatch &CurrentItem) = 0 ;
	virtual HRESULT __stdcall Get_ModifiedFormPages(/* out */ _di_Pages &ModifiedFormPages) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di__DApplication &Parent) = 0 ;
	virtual HRESULT __stdcall Close(Activex::TOleEnum SaveMode) = 0 ;
	virtual HRESULT __stdcall Display(const OleVariant Modal) = 0 ;
	virtual HRESULT __stdcall HideFormPage(const WideString PageName) = 0 ;
	virtual HRESULT __stdcall IsWordMail(/* out */ Word &IsWordMail) = 0 ;
	virtual HRESULT __stdcall SetCurrentFormPage(const WideString PageName) = 0 ;
	virtual HRESULT __stdcall ShowFormPage(const WideString PageName) = 0 ;
};

__dispinterface INTERFACE_UUID("{00063005-0000-0000-C000-000000000046}") Inspector  : public IDispatch 
	
{
	
};

__interface _IItems;
typedef System::DelphiInterface<_IItems> _di__IItems;
__dispinterface Items;
typedef System::DelphiInterface<Items> _di_Items;
__interface INTERFACE_UUID("{00063141-0000-0000-C000-000000000046}") _IItems  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Count(/* out */ int &Count) = 0 ;
	virtual HRESULT __stdcall Get_IncludeRecurrences(/* out */ Word &IncludeRecurrences) = 0 ;
	virtual HRESULT __stdcall Set_IncludeRecurrences(Word IncludeRecurrences) = 0 ;
	virtual HRESULT __stdcall Add(const OleVariant Type_, /* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Find(const WideString Filter, /* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall FindNext(/* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Remove(int Index) = 0 ;
	virtual HRESULT __stdcall Restrict(const WideString Filter, /* out */ _di_Items &Items) = 0 ;
	virtual HRESULT __stdcall Sort(const WideString Property_, const OleVariant Descending) = 0 ;
};

__dispinterface INTERFACE_UUID("{00063041-0000-0000-C000-000000000046}") Items  : public IDispatch 
{
	
};

__interface _IJournalItem;
typedef System::DelphiInterface<_IJournalItem> _di__IJournalItem;
__interface INTERFACE_UUID("{00063122-0000-0000-C000-000000000046}") _IJournalItem  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Actions(/* out */ _di_Actions &Actions) = 0 ;
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__DApplication &Application_) = 0 ;
	virtual HRESULT __stdcall Get_Attachments(/* out */ _di_Attachments &Attachments) = 0 ;
	virtual HRESULT __stdcall Get_BillingInformation(/* out */ WideString &BillingInformation) = 0 ;
	virtual HRESULT __stdcall Set_BillingInformation(const WideString BillingInformation) = 0 ;
	virtual HRESULT __stdcall Get_Body(/* out */ WideString &Body) = 0 ;
	virtual HRESULT __stdcall Set_Body(const WideString Body) = 0 ;
	virtual HRESULT __stdcall Get_Categories(/* out */ WideString &Categories) = 0 ;
	virtual HRESULT __stdcall Set_Categories(const WideString Categories) = 0 ;
	virtual HRESULT __stdcall Get_Companies(/* out */ WideString &Companies) = 0 ;
	virtual HRESULT __stdcall Set_Companies(const WideString Companies) = 0 ;
	virtual HRESULT __stdcall Get_CreationTime(/* out */ System::TDateTime &CreationTime) = 0 ;
	virtual HRESULT __stdcall Get_EntryID(/* out */ WideString &EntryID) = 0 ;
	virtual HRESULT __stdcall Get_FormDescription(/* out */ _di_FormDescription &FormDescription) = 0 ;
		
	virtual HRESULT __stdcall Get_GetInspector(/* out */ _di_Inspector &GetInspector) = 0 ;
	virtual HRESULT __stdcall Get_Importance(/* out */ Activex::TOleEnum &Importance) = 0 ;
	virtual HRESULT __stdcall Set_Importance(Activex::TOleEnum Importance) = 0 ;
	virtual HRESULT __stdcall Get_LastModificationTime(/* out */ System::TDateTime &LastModificationTime
		) = 0 ;
	virtual HRESULT __stdcall Get_MessageClass(/* out */ WideString &MessageClass) = 0 ;
	virtual HRESULT __stdcall Set_MessageClass(const WideString MessageClass) = 0 ;
	virtual HRESULT __stdcall Get_Mileage(/* out */ WideString &Mileage) = 0 ;
	virtual HRESULT __stdcall Set_Mileage(const WideString Mileage) = 0 ;
	virtual HRESULT __stdcall Get_NoAging(/* out */ Word &NoAging) = 0 ;
	virtual HRESULT __stdcall Set_NoAging(Word NoAging) = 0 ;
	virtual HRESULT __stdcall Get_OutlookInternalVersion(/* out */ WideString &OutlookInternalVersion) = 0 
		;
	virtual HRESULT __stdcall Get_OutlookVersion(/* out */ WideString &OutlookVersion) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &Parent) = 0 ;
	virtual HRESULT __stdcall Get_Saved(/* out */ Word &Saved) = 0 ;
	virtual HRESULT __stdcall Get_Sensitivity(/* out */ Activex::TOleEnum &Sensitivity) = 0 ;
	virtual HRESULT __stdcall Set_Sensitivity(Activex::TOleEnum Sensitivity) = 0 ;
	virtual HRESULT __stdcall Get_Size(/* out */ int &Size) = 0 ;
	virtual HRESULT __stdcall Get_Subject(/* out */ WideString &Subject) = 0 ;
	virtual HRESULT __stdcall Set_Subject(const WideString Subject) = 0 ;
	virtual HRESULT __stdcall Get_UnRead(/* out */ Word &UnRead) = 0 ;
	virtual HRESULT __stdcall Set_UnRead(Word UnRead) = 0 ;
	virtual HRESULT __stdcall Get_UserProperties(/* out */ _di_UserProperties &UserProperties) = 0 ;
	virtual HRESULT __stdcall Get_ContactNames(/* out */ WideString &ContactNames) = 0 ;
	virtual HRESULT __stdcall Set_ContactNames(const WideString ContactNames) = 0 ;
	virtual HRESULT __stdcall Get_DocPosted(/* out */ Word &DocPosted) = 0 ;
	virtual HRESULT __stdcall Set_DocPosted(Word DocPosted) = 0 ;
	virtual HRESULT __stdcall Get_DocPrinted(/* out */ Word &DocPrinted) = 0 ;
	virtual HRESULT __stdcall Set_DocPrinted(Word DocPrinted) = 0 ;
	virtual HRESULT __stdcall Get_DocRouted(/* out */ Word &DocRouted) = 0 ;
	virtual HRESULT __stdcall Set_DocRouted(Word DocRouted) = 0 ;
	virtual HRESULT __stdcall Get_DocSaved(/* out */ Word &DocSaved) = 0 ;
	virtual HRESULT __stdcall Set_DocSaved(Word DocSaved) = 0 ;
	virtual HRESULT __stdcall Get_Duration(/* out */ int &Duration) = 0 ;
	virtual HRESULT __stdcall Set_Duration(int Duration) = 0 ;
	virtual HRESULT __stdcall Get_End_(/* out */ System::TDateTime &End_) = 0 ;
	virtual HRESULT __stdcall Set_End_(System::TDateTime End_) = 0 ;
	virtual HRESULT __stdcall Get_Recipients(/* out */ _di_Recipients &Recipients) = 0 ;
	virtual HRESULT __stdcall Get_Start(/* out */ System::TDateTime &Start) = 0 ;
	virtual HRESULT __stdcall Set_Start(System::TDateTime Start) = 0 ;
	virtual HRESULT __stdcall Get_Type_(/* out */ WideString &Type_) = 0 ;
	virtual HRESULT __stdcall Set_Type_(const WideString Type_) = 0 ;
	virtual HRESULT __stdcall Close(Activex::TOleEnum SaveMode) = 0 ;
	virtual HRESULT __stdcall Copy(/* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Display(const OleVariant Modal) = 0 ;
	virtual HRESULT __stdcall Move(const _di_MAPIFolder DestFldr, /* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Save(void) = 0 ;
	virtual HRESULT __stdcall SaveAs(const WideString Path, const OleVariant Type_) = 0 ;
	virtual HRESULT __stdcall PrintOut(void) = 0 ;
	virtual HRESULT __stdcall Forward(/* out */ _di__DMailItem &Item) = 0 ;
	virtual HRESULT __stdcall Reply(/* out */ _di__DMailItem &Item) = 0 ;
	virtual HRESULT __stdcall ReplyAll(/* out */ _di__DMailItem &Item) = 0 ;
	virtual HRESULT __stdcall StartTimer(void) = 0 ;
	virtual HRESULT __stdcall StopTimer(void) = 0 ;
};

__interface _IMailItem;
typedef System::DelphiInterface<_IMailItem> _di__IMailItem;
__interface INTERFACE_UUID("{00063134-0000-0000-C000-000000000046}") _IMailItem  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Actions(/* out */ _di_Actions &Actions) = 0 ;
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__DApplication &Application_) = 0 ;
	virtual HRESULT __stdcall Get_Attachments(/* out */ _di_Attachments &Attachments) = 0 ;
	virtual HRESULT __stdcall Get_BillingInformation(/* out */ WideString &BillingInformation) = 0 ;
	virtual HRESULT __stdcall Set_BillingInformation(const WideString BillingInformation) = 0 ;
	virtual HRESULT __stdcall Get_Body(/* out */ WideString &Body) = 0 ;
	virtual HRESULT __stdcall Set_Body(const WideString Body) = 0 ;
	virtual HRESULT __stdcall Get_Categories(/* out */ WideString &Categories) = 0 ;
	virtual HRESULT __stdcall Set_Categories(const WideString Categories) = 0 ;
	virtual HRESULT __stdcall Get_Companies(/* out */ WideString &Companies) = 0 ;
	virtual HRESULT __stdcall Set_Companies(const WideString Companies) = 0 ;
	virtual HRESULT __stdcall Get_CreationTime(/* out */ System::TDateTime &CreationTime) = 0 ;
	virtual HRESULT __stdcall Get_EntryID(/* out */ WideString &EntryID) = 0 ;
	virtual HRESULT __stdcall Get_FormDescription(/* out */ _di_FormDescription &FormDescription) = 0 ;
		
	virtual HRESULT __stdcall Get_GetInspector(/* out */ _di_Inspector &GetInspector) = 0 ;
	virtual HRESULT __stdcall Get_Importance(/* out */ Activex::TOleEnum &Importance) = 0 ;
	virtual HRESULT __stdcall Set_Importance(Activex::TOleEnum Importance) = 0 ;
	virtual HRESULT __stdcall Get_LastModificationTime(/* out */ System::TDateTime &LastModificationTime
		) = 0 ;
	virtual HRESULT __stdcall Get_MessageClass(/* out */ WideString &MessageClass) = 0 ;
	virtual HRESULT __stdcall Set_MessageClass(const WideString MessageClass) = 0 ;
	virtual HRESULT __stdcall Get_Mileage(/* out */ WideString &Mileage) = 0 ;
	virtual HRESULT __stdcall Set_Mileage(const WideString Mileage) = 0 ;
	virtual HRESULT __stdcall Get_NoAging(/* out */ Word &NoAging) = 0 ;
	virtual HRESULT __stdcall Set_NoAging(Word NoAging) = 0 ;
	virtual HRESULT __stdcall Get_OutlookInternalVersion(/* out */ WideString &OutlookInternalVersion) = 0 
		;
	virtual HRESULT __stdcall Get_OutlookVersion(/* out */ WideString &OutlookVersion) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &Parent) = 0 ;
	virtual HRESULT __stdcall Get_Saved(/* out */ Word &Saved) = 0 ;
	virtual HRESULT __stdcall Get_Sensitivity(/* out */ Activex::TOleEnum &Sensitivity) = 0 ;
	virtual HRESULT __stdcall Set_Sensitivity(Activex::TOleEnum Sensitivity) = 0 ;
	virtual HRESULT __stdcall Get_Size(/* out */ int &Size) = 0 ;
	virtual HRESULT __stdcall Get_Subject(/* out */ WideString &Subject) = 0 ;
	virtual HRESULT __stdcall Set_Subject(const WideString Subject) = 0 ;
	virtual HRESULT __stdcall Get_UnRead(/* out */ Word &UnRead) = 0 ;
	virtual HRESULT __stdcall Set_UnRead(Word UnRead) = 0 ;
	virtual HRESULT __stdcall Get_UserProperties(/* out */ _di_UserProperties &UserProperties) = 0 ;
	virtual HRESULT __stdcall Get_AlternateRecipientAllowed(/* out */ Word &AlternateRecipientAllowed) = 0 
		;
	virtual HRESULT __stdcall Set_AlternateRecipientAllowed(Word AlternateRecipientAllowed) = 0 ;
	virtual HRESULT __stdcall Get_AutoForwarded(/* out */ Word &AutoForwarded) = 0 ;
	virtual HRESULT __stdcall Set_AutoForwarded(Word AutoForwarded) = 0 ;
	virtual HRESULT __stdcall Get_BCC(/* out */ WideString &BCC) = 0 ;
	virtual HRESULT __stdcall Set_BCC(const WideString BCC) = 0 ;
	virtual HRESULT __stdcall Get_CC(/* out */ WideString &CC) = 0 ;
	virtual HRESULT __stdcall Set_CC(const WideString CC) = 0 ;
	virtual HRESULT __stdcall Get_ConversationIndex(/* out */ WideString &ConversationIndex) = 0 ;
	virtual HRESULT __stdcall Get_ConversationTopic(/* out */ WideString &ConversationTopic) = 0 ;
	virtual HRESULT __stdcall Get_DeferredDeliveryTime(/* out */ System::TDateTime &DeferredDeliveryTime
		) = 0 ;
	virtual HRESULT __stdcall Set_DeferredDeliveryTime(System::TDateTime DeferredDeliveryTime) = 0 ;
	virtual HRESULT __stdcall Get_DeleteAfterSubmit(/* out */ Word &DeleteAfterSubmit) = 0 ;
	virtual HRESULT __stdcall Set_DeleteAfterSubmit(Word DeleteAfterSubmit) = 0 ;
	virtual HRESULT __stdcall Get_ExpiryTime(/* out */ System::TDateTime &ExpiryTime) = 0 ;
	virtual HRESULT __stdcall Set_ExpiryTime(System::TDateTime ExpiryTime) = 0 ;
	virtual HRESULT __stdcall Get_FlagDueBy(/* out */ System::TDateTime &FlagDueBy) = 0 ;
	virtual HRESULT __stdcall Set_FlagDueBy(System::TDateTime FlagDueBy) = 0 ;
	virtual HRESULT __stdcall Get_FlagRequest(/* out */ WideString &FlagRequest) = 0 ;
	virtual HRESULT __stdcall Set_FlagRequest(const WideString FlagRequest) = 0 ;
	virtual HRESULT __stdcall Get_FlagStatus(/* out */ Activex::TOleEnum &FlagStatus) = 0 ;
	virtual HRESULT __stdcall Set_FlagStatus(Activex::TOleEnum FlagStatus) = 0 ;
	virtual HRESULT __stdcall Get_OriginatorDeliveryReportRequested(/* out */ Word &OriginatorDeliveryReportRequested
		) = 0 ;
	virtual HRESULT __stdcall Set_OriginatorDeliveryReportRequested(Word OriginatorDeliveryReportRequested
		) = 0 ;
	virtual HRESULT __stdcall Get_ReadReceiptRequested(/* out */ Word &ReadReceiptRequested) = 0 ;
	virtual HRESULT __stdcall Set_ReadReceiptRequested(Word ReadReceiptRequested) = 0 ;
	virtual HRESULT __stdcall Get_ReceivedByEntryID(/* out */ WideString &ReceivedByEntryID) = 0 ;
	virtual HRESULT __stdcall Get_ReceivedByName(/* out */ WideString &ReceivedByName) = 0 ;
	virtual HRESULT __stdcall Get_ReceivedOnBehalfOfEntryID(/* out */ WideString &ReceivedOnBehalfOfEntryID
		) = 0 ;
	virtual HRESULT __stdcall Get_ReceivedOnBehalfOfName(/* out */ WideString &ReceivedOnBehalfOfName) = 0 
		;
	virtual HRESULT __stdcall Get_ReceivedTime(/* out */ System::TDateTime &ReceivedTime) = 0 ;
	virtual HRESULT __stdcall Get_RecipientReassignmentProhibited(/* out */ Word &RecipientReassignmentProhibited
		) = 0 ;
	virtual HRESULT __stdcall Set_RecipientReassignmentProhibited(Word RecipientReassignmentProhibited)
		 = 0 ;
	virtual HRESULT __stdcall Get_Recipients(/* out */ _di_Recipients &Recipients) = 0 ;
	virtual HRESULT __stdcall Get_ReminderOverrideDefault(/* out */ Word &ReminderOverrideDefault) = 0 
		;
	virtual HRESULT __stdcall Set_ReminderOverrideDefault(Word ReminderOverrideDefault) = 0 ;
	virtual HRESULT __stdcall Get_ReminderPlaySound(/* out */ Word &ReminderPlaySound) = 0 ;
	virtual HRESULT __stdcall Set_ReminderPlaySound(Word ReminderPlaySound) = 0 ;
	virtual HRESULT __stdcall Get_ReminderSet(/* out */ Word &ReminderSet) = 0 ;
	virtual HRESULT __stdcall Set_ReminderSet(Word ReminderSet) = 0 ;
	virtual HRESULT __stdcall Get_ReminderSoundFile(/* out */ WideString &ReminderSoundFile) = 0 ;
	virtual HRESULT __stdcall Set_ReminderSoundFile(const WideString ReminderSoundFile) = 0 ;
	virtual HRESULT __stdcall Get_ReminderTime(/* out */ System::TDateTime &ReminderTime) = 0 ;
	virtual HRESULT __stdcall Set_ReminderTime(System::TDateTime ReminderTime) = 0 ;
	virtual HRESULT __stdcall Get_RemoteStatus(/* out */ Activex::TOleEnum &RemoteStatus) = 0 ;
	virtual HRESULT __stdcall Get_ReplyRecipientNames(/* out */ WideString &ReplyRecipientNames) = 0 ;
	virtual HRESULT __stdcall Get_ReplyRecipients(/* out */ _di_Recipients &ReplyRecipients) = 0 ;
	virtual HRESULT __stdcall Get_SaveSentMessageFolder(/* out */ _di_MAPIFolder &SaveSentMessageFolder
		) = 0 ;
	virtual HRESULT __stdcall Set_SaveSentMessageFolder(const _di_MAPIFolder SaveSentMessageFolder) = 0 
		;
	virtual HRESULT __stdcall Get_SenderName(/* out */ WideString &SenderName) = 0 ;
	virtual HRESULT __stdcall Get_SentOn(/* out */ System::TDateTime &SentOn) = 0 ;
	virtual HRESULT __stdcall Get_SentOnBehalfOfName(/* out */ WideString &SentOnBehalfOfName) = 0 ;
	virtual HRESULT __stdcall Set_SentOnBehalfOfName(const WideString SentOnBehalfOfName) = 0 ;
	virtual HRESULT __stdcall Get_To_(/* out */ WideString &To_) = 0 ;
	virtual HRESULT __stdcall Set_To_(const WideString To_) = 0 ;
	virtual HRESULT __stdcall Get_VotingOptions(/* out */ WideString &VotingOptions) = 0 ;
	virtual HRESULT __stdcall Set_VotingOptions(const WideString VotingOptions) = 0 ;
	virtual HRESULT __stdcall Get_VotingResponse(/* out */ WideString &VotingResponse) = 0 ;
	virtual HRESULT __stdcall Set_VotingResponse(const WideString VotingResponse) = 0 ;
	virtual HRESULT __stdcall Close(Activex::TOleEnum SaveMode) = 0 ;
	virtual HRESULT __stdcall Copy(/* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Display(const OleVariant Modal) = 0 ;
	virtual HRESULT __stdcall Move(const _di_MAPIFolder DestFldr, /* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Save(void) = 0 ;
	virtual HRESULT __stdcall SaveAs(const WideString Path, const OleVariant Type_) = 0 ;
	virtual HRESULT __stdcall PrintOut(void) = 0 ;
	virtual HRESULT __stdcall ClearConversationIndex(void) = 0 ;
	virtual HRESULT __stdcall Forward(/* out */ _di__DMailItem &Item) = 0 ;
	virtual HRESULT __stdcall Reply(/* out */ _di__DMailItem &Item) = 0 ;
	virtual HRESULT __stdcall ReplyAll(/* out */ _di__DMailItem &Item) = 0 ;
	virtual HRESULT __stdcall Send(void) = 0 ;
};

__interface _IMAPIFolder;
typedef System::DelphiInterface<_IMAPIFolder> _di__IMAPIFolder;
__interface INTERFACE_UUID("{00063106-0000-0000-C000-000000000046}") _IMAPIFolder  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__DApplication &Application_) = 0 ;
	virtual HRESULT __stdcall Get_DefaultItemType(/* out */ Activex::TOleEnum &DefaultItemType) = 0 ;
	virtual HRESULT __stdcall Get_DefaultMessageClass(/* out */ WideString &DefaultMessageClass) = 0 ;
	virtual HRESULT __stdcall Get_Description(/* out */ WideString &Description) = 0 ;
	virtual HRESULT __stdcall Set_Description(const WideString Description) = 0 ;
	virtual HRESULT __stdcall Get_EntryID(/* out */ WideString &EntryID) = 0 ;
	virtual HRESULT __stdcall Get_Folders(/* out */ _di_Folders &Folders) = 0 ;
	virtual HRESULT __stdcall Get_Items(/* out */ _di_Items &Items) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &Name) = 0 ;
	virtual HRESULT __stdcall Set_Name(const WideString Name) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &Parent) = 0 ;
	virtual HRESULT __stdcall Get_StoreID(/* out */ WideString &StoreID) = 0 ;
	virtual HRESULT __stdcall Get_UnReadItemCount(/* out */ int &UnReadItemCount) = 0 ;
	virtual HRESULT __stdcall CopyTo(const _di_MAPIFolder DestinationFolder, /* out */ _di_MAPIFolder &
		Folder) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Display(void) = 0 ;
	virtual HRESULT __stdcall GetExplorer(const OleVariant DisplayMode, /* out */ _di_Explorer &Explorer
		) = 0 ;
	virtual HRESULT __stdcall MoveTo(const _di_MAPIFolder DestinationFolder) = 0 ;
};

__dispinterface INTERFACE_UUID("{00063006-0000-0000-C000-000000000046}") MAPIFolder  : public IDispatch 
	
{
	
};

__interface _IMeetingCanceledItem;
typedef System::DelphiInterface<_IMeetingCanceledItem> _di__IMeetingCanceledItem;
__interface INTERFACE_UUID("{00063128-0000-0000-C000-000000000046}") _IMeetingCanceledItem  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Actions(/* out */ _di_Actions &Actions) = 0 ;
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__DApplication &Application_) = 0 ;
	virtual HRESULT __stdcall Get_Attachments(/* out */ _di_Attachments &Attachments) = 0 ;
	virtual HRESULT __stdcall Get_BillingInformation(/* out */ WideString &BillingInformation) = 0 ;
	virtual HRESULT __stdcall Set_BillingInformation(const WideString BillingInformation) = 0 ;
	virtual HRESULT __stdcall Get_Body(/* out */ WideString &Body) = 0 ;
	virtual HRESULT __stdcall Set_Body(const WideString Body) = 0 ;
	virtual HRESULT __stdcall Get_Categories(/* out */ WideString &Categories) = 0 ;
	virtual HRESULT __stdcall Set_Categories(const WideString Categories) = 0 ;
	virtual HRESULT __stdcall Get_Companies(/* out */ WideString &Companies) = 0 ;
	virtual HRESULT __stdcall Set_Companies(const WideString Companies) = 0 ;
	virtual HRESULT __stdcall Get_CreationTime(/* out */ System::TDateTime &CreationTime) = 0 ;
	virtual HRESULT __stdcall Get_EntryID(/* out */ WideString &EntryID) = 0 ;
	virtual HRESULT __stdcall Get_FormDescription(/* out */ _di_FormDescription &FormDescription) = 0 ;
		
	virtual HRESULT __stdcall Get_GetInspector(/* out */ _di_Inspector &GetInspector) = 0 ;
	virtual HRESULT __stdcall Get_Importance(/* out */ Activex::TOleEnum &Importance) = 0 ;
	virtual HRESULT __stdcall Set_Importance(Activex::TOleEnum Importance) = 0 ;
	virtual HRESULT __stdcall Get_LastModificationTime(/* out */ System::TDateTime &LastModificationTime
		) = 0 ;
	virtual HRESULT __stdcall Get_MessageClass(/* out */ WideString &MessageClass) = 0 ;
	virtual HRESULT __stdcall Set_MessageClass(const WideString MessageClass) = 0 ;
	virtual HRESULT __stdcall Get_Mileage(/* out */ WideString &Mileage) = 0 ;
	virtual HRESULT __stdcall Set_Mileage(const WideString Mileage) = 0 ;
	virtual HRESULT __stdcall Get_NoAging(/* out */ Word &NoAging) = 0 ;
	virtual HRESULT __stdcall Set_NoAging(Word NoAging) = 0 ;
	virtual HRESULT __stdcall Get_OutlookInternalVersion(/* out */ WideString &OutlookInternalVersion) = 0 
		;
	virtual HRESULT __stdcall Get_OutlookVersion(/* out */ WideString &OutlookVersion) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &Parent) = 0 ;
	virtual HRESULT __stdcall Get_Saved(/* out */ Word &Saved) = 0 ;
	virtual HRESULT __stdcall Get_Sensitivity(/* out */ Activex::TOleEnum &Sensitivity) = 0 ;
	virtual HRESULT __stdcall Set_Sensitivity(Activex::TOleEnum Sensitivity) = 0 ;
	virtual HRESULT __stdcall Get_Size(/* out */ int &Size) = 0 ;
	virtual HRESULT __stdcall Get_Subject(/* out */ WideString &Subject) = 0 ;
	virtual HRESULT __stdcall Set_Subject(const WideString Subject) = 0 ;
	virtual HRESULT __stdcall Get_UnRead(/* out */ Word &UnRead) = 0 ;
	virtual HRESULT __stdcall Set_UnRead(Word UnRead) = 0 ;
	virtual HRESULT __stdcall Get_UserProperties(/* out */ _di_UserProperties &UserProperties) = 0 ;
	virtual HRESULT __stdcall Close(Activex::TOleEnum SaveMode) = 0 ;
	virtual HRESULT __stdcall Copy(/* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Display(const OleVariant Modal) = 0 ;
	virtual HRESULT __stdcall Move(const _di_MAPIFolder DestFldr, /* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Save(void) = 0 ;
	virtual HRESULT __stdcall SaveAs(const WideString Path, const OleVariant Type_) = 0 ;
	virtual HRESULT __stdcall PrintOut(void) = 0 ;
	virtual HRESULT __stdcall GetAssociatedAppointment(Word AddToCalendar, /* out */ _di__DAppointmentItem 
		&AppointmentItem) = 0 ;
	virtual HRESULT __stdcall Send(void) = 0 ;
};

__interface _IMeetingRequestAcceptedItem;
typedef System::DelphiInterface<_IMeetingRequestAcceptedItem> _di__IMeetingRequestAcceptedItem;
__interface INTERFACE_UUID("{00063130-0000-0000-C000-000000000046}") _IMeetingRequestAcceptedItem  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Actions(/* out */ _di_Actions &Actions) = 0 ;
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__DApplication &Application_) = 0 ;
	virtual HRESULT __stdcall Get_Attachments(/* out */ _di_Attachments &Attachments) = 0 ;
	virtual HRESULT __stdcall Get_BillingInformation(/* out */ WideString &BillingInformation) = 0 ;
	virtual HRESULT __stdcall Set_BillingInformation(const WideString BillingInformation) = 0 ;
	virtual HRESULT __stdcall Get_Body(/* out */ WideString &Body) = 0 ;
	virtual HRESULT __stdcall Set_Body(const WideString Body) = 0 ;
	virtual HRESULT __stdcall Get_Categories(/* out */ WideString &Categories) = 0 ;
	virtual HRESULT __stdcall Set_Categories(const WideString Categories) = 0 ;
	virtual HRESULT __stdcall Get_Companies(/* out */ WideString &Companies) = 0 ;
	virtual HRESULT __stdcall Set_Companies(const WideString Companies) = 0 ;
	virtual HRESULT __stdcall Get_CreationTime(/* out */ System::TDateTime &CreationTime) = 0 ;
	virtual HRESULT __stdcall Get_EntryID(/* out */ WideString &EntryID) = 0 ;
	virtual HRESULT __stdcall Get_FormDescription(/* out */ _di_FormDescription &FormDescription) = 0 ;
		
	virtual HRESULT __stdcall Get_GetInspector(/* out */ _di_Inspector &GetInspector) = 0 ;
	virtual HRESULT __stdcall Get_Importance(/* out */ Activex::TOleEnum &Importance) = 0 ;
	virtual HRESULT __stdcall Set_Importance(Activex::TOleEnum Importance) = 0 ;
	virtual HRESULT __stdcall Get_LastModificationTime(/* out */ System::TDateTime &LastModificationTime
		) = 0 ;
	virtual HRESULT __stdcall Get_MessageClass(/* out */ WideString &MessageClass) = 0 ;
	virtual HRESULT __stdcall Set_MessageClass(const WideString MessageClass) = 0 ;
	virtual HRESULT __stdcall Get_Mileage(/* out */ WideString &Mileage) = 0 ;
	virtual HRESULT __stdcall Set_Mileage(const WideString Mileage) = 0 ;
	virtual HRESULT __stdcall Get_NoAging(/* out */ Word &NoAging) = 0 ;
	virtual HRESULT __stdcall Set_NoAging(Word NoAging) = 0 ;
	virtual HRESULT __stdcall Get_OutlookInternalVersion(/* out */ WideString &OutlookInternalVersion) = 0 
		;
	virtual HRESULT __stdcall Get_OutlookVersion(/* out */ WideString &OutlookVersion) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &Parent) = 0 ;
	virtual HRESULT __stdcall Get_Saved(/* out */ Word &Saved) = 0 ;
	virtual HRESULT __stdcall Get_Sensitivity(/* out */ Activex::TOleEnum &Sensitivity) = 0 ;
	virtual HRESULT __stdcall Set_Sensitivity(Activex::TOleEnum Sensitivity) = 0 ;
	virtual HRESULT __stdcall Get_Size(/* out */ int &Size) = 0 ;
	virtual HRESULT __stdcall Get_Subject(/* out */ WideString &Subject) = 0 ;
	virtual HRESULT __stdcall Set_Subject(const WideString Subject) = 0 ;
	virtual HRESULT __stdcall Get_UnRead(/* out */ Word &UnRead) = 0 ;
	virtual HRESULT __stdcall Set_UnRead(Word UnRead) = 0 ;
	virtual HRESULT __stdcall Get_UserProperties(/* out */ _di_UserProperties &UserProperties) = 0 ;
	virtual HRESULT __stdcall Close(Activex::TOleEnum SaveMode) = 0 ;
	virtual HRESULT __stdcall Copy(/* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Display(const OleVariant Modal) = 0 ;
	virtual HRESULT __stdcall Move(const _di_MAPIFolder DestFldr, /* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Save(void) = 0 ;
	virtual HRESULT __stdcall SaveAs(const WideString Path, const OleVariant Type_) = 0 ;
	virtual HRESULT __stdcall PrintOut(void) = 0 ;
	virtual HRESULT __stdcall GetAssociatedAppointment(Word AddToCalendar, /* out */ _di__DAppointmentItem 
		&AppointmentItem) = 0 ;
	virtual HRESULT __stdcall Send(void) = 0 ;
};

__interface _IMeetingRequestDeclinedItem;
typedef System::DelphiInterface<_IMeetingRequestDeclinedItem> _di__IMeetingRequestDeclinedItem;
__interface INTERFACE_UUID("{00063131-0000-0000-C000-000000000046}") _IMeetingRequestDeclinedItem  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Actions(/* out */ _di_Actions &Actions) = 0 ;
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__DApplication &Application_) = 0 ;
	virtual HRESULT __stdcall Get_Attachments(/* out */ _di_Attachments &Attachments) = 0 ;
	virtual HRESULT __stdcall Get_BillingInformation(/* out */ WideString &BillingInformation) = 0 ;
	virtual HRESULT __stdcall Set_BillingInformation(const WideString BillingInformation) = 0 ;
	virtual HRESULT __stdcall Get_Body(/* out */ WideString &Body) = 0 ;
	virtual HRESULT __stdcall Set_Body(const WideString Body) = 0 ;
	virtual HRESULT __stdcall Get_Categories(/* out */ WideString &Categories) = 0 ;
	virtual HRESULT __stdcall Set_Categories(const WideString Categories) = 0 ;
	virtual HRESULT __stdcall Get_Companies(/* out */ WideString &Companies) = 0 ;
	virtual HRESULT __stdcall Set_Companies(const WideString Companies) = 0 ;
	virtual HRESULT __stdcall Get_CreationTime(/* out */ System::TDateTime &CreationTime) = 0 ;
	virtual HRESULT __stdcall Get_EntryID(/* out */ WideString &EntryID) = 0 ;
	virtual HRESULT __stdcall Get_FormDescription(/* out */ _di_FormDescription &FormDescription) = 0 ;
		
	virtual HRESULT __stdcall Get_GetInspector(/* out */ _di_Inspector &GetInspector) = 0 ;
	virtual HRESULT __stdcall Get_Importance(/* out */ Activex::TOleEnum &Importance) = 0 ;
	virtual HRESULT __stdcall Set_Importance(Activex::TOleEnum Importance) = 0 ;
	virtual HRESULT __stdcall Get_LastModificationTime(/* out */ System::TDateTime &LastModificationTime
		) = 0 ;
	virtual HRESULT __stdcall Get_MessageClass(/* out */ WideString &MessageClass) = 0 ;
	virtual HRESULT __stdcall Set_MessageClass(const WideString MessageClass) = 0 ;
	virtual HRESULT __stdcall Get_Mileage(/* out */ WideString &Mileage) = 0 ;
	virtual HRESULT __stdcall Set_Mileage(const WideString Mileage) = 0 ;
	virtual HRESULT __stdcall Get_NoAging(/* out */ Word &NoAging) = 0 ;
	virtual HRESULT __stdcall Set_NoAging(Word NoAging) = 0 ;
	virtual HRESULT __stdcall Get_OutlookInternalVersion(/* out */ WideString &OutlookInternalVersion) = 0 
		;
	virtual HRESULT __stdcall Get_OutlookVersion(/* out */ WideString &OutlookVersion) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &Parent) = 0 ;
	virtual HRESULT __stdcall Get_Saved(/* out */ Word &Saved) = 0 ;
	virtual HRESULT __stdcall Get_Sensitivity(/* out */ Activex::TOleEnum &Sensitivity) = 0 ;
	virtual HRESULT __stdcall Set_Sensitivity(Activex::TOleEnum Sensitivity) = 0 ;
	virtual HRESULT __stdcall Get_Size(/* out */ int &Size) = 0 ;
	virtual HRESULT __stdcall Get_Subject(/* out */ WideString &Subject) = 0 ;
	virtual HRESULT __stdcall Set_Subject(const WideString Subject) = 0 ;
	virtual HRESULT __stdcall Get_UnRead(/* out */ Word &UnRead) = 0 ;
	virtual HRESULT __stdcall Set_UnRead(Word UnRead) = 0 ;
	virtual HRESULT __stdcall Get_UserProperties(/* out */ _di_UserProperties &UserProperties) = 0 ;
	virtual HRESULT __stdcall Close(Activex::TOleEnum SaveMode) = 0 ;
	virtual HRESULT __stdcall Copy(/* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Display(const OleVariant Modal) = 0 ;
	virtual HRESULT __stdcall Move(const _di_MAPIFolder DestFldr, /* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Save(void) = 0 ;
	virtual HRESULT __stdcall SaveAs(const WideString Path, const OleVariant Type_) = 0 ;
	virtual HRESULT __stdcall PrintOut(void) = 0 ;
	virtual HRESULT __stdcall GetAssociatedAppointment(Word AddToCalendar, /* out */ _di__DAppointmentItem 
		&AppointmentItem) = 0 ;
	virtual HRESULT __stdcall Send(void) = 0 ;
};

__interface _IMeetingRequestItem;
typedef System::DelphiInterface<_IMeetingRequestItem> _di__IMeetingRequestItem;
__interface INTERFACE_UUID("{00063129-0000-0000-C000-000000000046}") _IMeetingRequestItem  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Actions(/* out */ _di_Actions &Actions) = 0 ;
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__DApplication &Application_) = 0 ;
	virtual HRESULT __stdcall Get_Attachments(/* out */ _di_Attachments &Attachments) = 0 ;
	virtual HRESULT __stdcall Get_BillingInformation(/* out */ WideString &BillingInformation) = 0 ;
	virtual HRESULT __stdcall Set_BillingInformation(const WideString BillingInformation) = 0 ;
	virtual HRESULT __stdcall Get_Body(/* out */ WideString &Body) = 0 ;
	virtual HRESULT __stdcall Set_Body(const WideString Body) = 0 ;
	virtual HRESULT __stdcall Get_Categories(/* out */ WideString &Categories) = 0 ;
	virtual HRESULT __stdcall Set_Categories(const WideString Categories) = 0 ;
	virtual HRESULT __stdcall Get_Companies(/* out */ WideString &Companies) = 0 ;
	virtual HRESULT __stdcall Set_Companies(const WideString Companies) = 0 ;
	virtual HRESULT __stdcall Get_CreationTime(/* out */ System::TDateTime &CreationTime) = 0 ;
	virtual HRESULT __stdcall Get_EntryID(/* out */ WideString &EntryID) = 0 ;
	virtual HRESULT __stdcall Get_FormDescription(/* out */ _di_FormDescription &FormDescription) = 0 ;
		
	virtual HRESULT __stdcall Get_GetInspector(/* out */ _di_Inspector &GetInspector) = 0 ;
	virtual HRESULT __stdcall Get_Importance(/* out */ Activex::TOleEnum &Importance) = 0 ;
	virtual HRESULT __stdcall Set_Importance(Activex::TOleEnum Importance) = 0 ;
	virtual HRESULT __stdcall Get_LastModificationTime(/* out */ System::TDateTime &LastModificationTime
		) = 0 ;
	virtual HRESULT __stdcall Get_MessageClass(/* out */ WideString &MessageClass) = 0 ;
	virtual HRESULT __stdcall Set_MessageClass(const WideString MessageClass) = 0 ;
	virtual HRESULT __stdcall Get_Mileage(/* out */ WideString &Mileage) = 0 ;
	virtual HRESULT __stdcall Set_Mileage(const WideString Mileage) = 0 ;
	virtual HRESULT __stdcall Get_NoAging(/* out */ Word &NoAging) = 0 ;
	virtual HRESULT __stdcall Set_NoAging(Word NoAging) = 0 ;
	virtual HRESULT __stdcall Get_OutlookInternalVersion(/* out */ WideString &OutlookInternalVersion) = 0 
		;
	virtual HRESULT __stdcall Get_OutlookVersion(/* out */ WideString &OutlookVersion) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &Parent) = 0 ;
	virtual HRESULT __stdcall Get_Saved(/* out */ Word &Saved) = 0 ;
	virtual HRESULT __stdcall Get_Sensitivity(/* out */ Activex::TOleEnum &Sensitivity) = 0 ;
	virtual HRESULT __stdcall Set_Sensitivity(Activex::TOleEnum Sensitivity) = 0 ;
	virtual HRESULT __stdcall Get_Size(/* out */ int &Size) = 0 ;
	virtual HRESULT __stdcall Get_Subject(/* out */ WideString &Subject) = 0 ;
	virtual HRESULT __stdcall Set_Subject(const WideString Subject) = 0 ;
	virtual HRESULT __stdcall Get_UnRead(/* out */ Word &UnRead) = 0 ;
	virtual HRESULT __stdcall Set_UnRead(Word UnRead) = 0 ;
	virtual HRESULT __stdcall Get_UserProperties(/* out */ _di_UserProperties &UserProperties) = 0 ;
	virtual HRESULT __stdcall Close(Activex::TOleEnum SaveMode) = 0 ;
	virtual HRESULT __stdcall Copy(/* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Display(const OleVariant Modal) = 0 ;
	virtual HRESULT __stdcall Move(const _di_MAPIFolder DestFldr, /* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Save(void) = 0 ;
	virtual HRESULT __stdcall SaveAs(const WideString Path, const OleVariant Type_) = 0 ;
	virtual HRESULT __stdcall PrintOut(void) = 0 ;
	virtual HRESULT __stdcall GetAssociatedAppointment(Word AddToCalendar, /* out */ _di__DAppointmentItem 
		&AppointmentItem) = 0 ;
};

__interface _IMeetingRequestTentativeItem;
typedef System::DelphiInterface<_IMeetingRequestTentativeItem> _di__IMeetingRequestTentativeItem;
__interface INTERFACE_UUID("{00063132-0000-0000-C000-000000000046}") _IMeetingRequestTentativeItem  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Actions(/* out */ _di_Actions &Actions) = 0 ;
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__DApplication &Application_) = 0 ;
	virtual HRESULT __stdcall Get_Attachments(/* out */ _di_Attachments &Attachments) = 0 ;
	virtual HRESULT __stdcall Get_BillingInformation(/* out */ WideString &BillingInformation) = 0 ;
	virtual HRESULT __stdcall Set_BillingInformation(const WideString BillingInformation) = 0 ;
	virtual HRESULT __stdcall Get_Body(/* out */ WideString &Body) = 0 ;
	virtual HRESULT __stdcall Set_Body(const WideString Body) = 0 ;
	virtual HRESULT __stdcall Get_Categories(/* out */ WideString &Categories) = 0 ;
	virtual HRESULT __stdcall Set_Categories(const WideString Categories) = 0 ;
	virtual HRESULT __stdcall Get_Companies(/* out */ WideString &Companies) = 0 ;
	virtual HRESULT __stdcall Set_Companies(const WideString Companies) = 0 ;
	virtual HRESULT __stdcall Get_CreationTime(/* out */ System::TDateTime &CreationTime) = 0 ;
	virtual HRESULT __stdcall Get_EntryID(/* out */ WideString &EntryID) = 0 ;
	virtual HRESULT __stdcall Get_FormDescription(/* out */ _di_FormDescription &FormDescription) = 0 ;
		
	virtual HRESULT __stdcall Get_GetInspector(/* out */ _di_Inspector &GetInspector) = 0 ;
	virtual HRESULT __stdcall Get_Importance(/* out */ Activex::TOleEnum &Importance) = 0 ;
	virtual HRESULT __stdcall Set_Importance(Activex::TOleEnum Importance) = 0 ;
	virtual HRESULT __stdcall Get_LastModificationTime(/* out */ System::TDateTime &LastModificationTime
		) = 0 ;
	virtual HRESULT __stdcall Get_MessageClass(/* out */ WideString &MessageClass) = 0 ;
	virtual HRESULT __stdcall Set_MessageClass(const WideString MessageClass) = 0 ;
	virtual HRESULT __stdcall Get_Mileage(/* out */ WideString &Mileage) = 0 ;
	virtual HRESULT __stdcall Set_Mileage(const WideString Mileage) = 0 ;
	virtual HRESULT __stdcall Get_NoAging(/* out */ Word &NoAging) = 0 ;
	virtual HRESULT __stdcall Set_NoAging(Word NoAging) = 0 ;
	virtual HRESULT __stdcall Get_OutlookInternalVersion(/* out */ WideString &OutlookInternalVersion) = 0 
		;
	virtual HRESULT __stdcall Get_OutlookVersion(/* out */ WideString &OutlookVersion) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &Parent) = 0 ;
	virtual HRESULT __stdcall Get_Saved(/* out */ Word &Saved) = 0 ;
	virtual HRESULT __stdcall Get_Sensitivity(/* out */ Activex::TOleEnum &Sensitivity) = 0 ;
	virtual HRESULT __stdcall Set_Sensitivity(Activex::TOleEnum Sensitivity) = 0 ;
	virtual HRESULT __stdcall Get_Size(/* out */ int &Size) = 0 ;
	virtual HRESULT __stdcall Get_Subject(/* out */ WideString &Subject) = 0 ;
	virtual HRESULT __stdcall Set_Subject(const WideString Subject) = 0 ;
	virtual HRESULT __stdcall Get_UnRead(/* out */ Word &UnRead) = 0 ;
	virtual HRESULT __stdcall Set_UnRead(Word UnRead) = 0 ;
	virtual HRESULT __stdcall Get_UserProperties(/* out */ _di_UserProperties &UserProperties) = 0 ;
	virtual HRESULT __stdcall Close(Activex::TOleEnum SaveMode) = 0 ;
	virtual HRESULT __stdcall Copy(/* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Display(const OleVariant Modal) = 0 ;
	virtual HRESULT __stdcall Move(const _di_MAPIFolder DestFldr, /* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Save(void) = 0 ;
	virtual HRESULT __stdcall SaveAs(const WideString Path, const OleVariant Type_) = 0 ;
	virtual HRESULT __stdcall PrintOut(void) = 0 ;
	virtual HRESULT __stdcall GetAssociatedAppointment(Word AddToCalendar, /* out */ _di__DAppointmentItem 
		&AppointmentItem) = 0 ;
	virtual HRESULT __stdcall Send(void) = 0 ;
};

__interface _INameSpace;
typedef System::DelphiInterface<_INameSpace> _di__INameSpace;
__interface INTERFACE_UUID("{00063102-0000-0000-C000-000000000046}") _INameSpace  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__DApplication &Application_) = 0 ;
	virtual HRESULT __stdcall Get_CurrentUser(/* out */ _di_Recipient &CurrentUser) = 0 ;
	virtual HRESULT __stdcall Get_Folders(/* out */ _di_Folders &Folders) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di__DApplication &Parent) = 0 ;
	virtual HRESULT __stdcall Get_Type_(/* out */ WideString &Type_) = 0 ;
	virtual HRESULT __stdcall CreateRecipient(const WideString RecipientName, /* out */ _di_Recipient &
		Recipient) = 0 ;
	virtual HRESULT __stdcall DoRemoteRefresh(void) = 0 ;
	virtual HRESULT __stdcall GetDefaultFolder(Activex::TOleEnum FolderType, /* out */ _di_MAPIFolder &
		Folder) = 0 ;
	virtual HRESULT __stdcall GetFolderFromID(const WideString EntryIDFolder, const OleVariant EntryIDStore
		, /* out */ _di_MAPIFolder &Folder) = 0 ;
	virtual HRESULT __stdcall GetItemFromID(const WideString EntryIDItem, const OleVariant EntryIDStore
		, /* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall GetRecipientFromID(const WideString EntryID, /* out */ _di_Recipient &Recipient
		) = 0 ;
	virtual HRESULT __stdcall GetSharedDefaultFolder(const _di_Recipient Recipient, Activex::TOleEnum FolderType
		, /* out */ _di_MAPIFolder &Folder) = 0 ;
	virtual HRESULT __stdcall Logoff(void) = 0 ;
	virtual HRESULT __stdcall Logon(const OleVariant Profile, const OleVariant Password, const OleVariant 
		ShowDialog, const OleVariant NewSession) = 0 ;
};

__dispinterface INTERFACE_UUID("{00063002-0000-0000-C000-000000000046}") NameSpace  : public IDispatch 
	
{
	
};

__interface _INoteItem;
typedef System::DelphiInterface<_INoteItem> _di__INoteItem;
__interface INTERFACE_UUID("{00063125-0000-0000-C000-000000000046}") _INoteItem  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__DApplication &Application_) = 0 ;
	virtual HRESULT __stdcall Get_Body(/* out */ WideString &Body) = 0 ;
	virtual HRESULT __stdcall Set_Body(const WideString Body) = 0 ;
	virtual HRESULT __stdcall Get_Categories(/* out */ WideString &Categories) = 0 ;
	virtual HRESULT __stdcall Set_Categories(const WideString Categories) = 0 ;
	virtual HRESULT __stdcall Get_Color(/* out */ Activex::TOleEnum &Color) = 0 ;
	virtual HRESULT __stdcall Set_Color(Activex::TOleEnum Color) = 0 ;
	virtual HRESULT __stdcall Get_CreationTime(/* out */ System::TDateTime &CreationTime) = 0 ;
	virtual HRESULT __stdcall Get_EntryID(/* out */ WideString &EntryID) = 0 ;
	virtual HRESULT __stdcall Get_GetInspector(/* out */ _di_Inspector &GetInspector) = 0 ;
	virtual HRESULT __stdcall Get_Height(/* out */ int &Height) = 0 ;
	virtual HRESULT __stdcall Set_Height(int Height) = 0 ;
	virtual HRESULT __stdcall Get_LastModificationTime(/* out */ System::TDateTime &LastModificationTime
		) = 0 ;
	virtual HRESULT __stdcall Get_Left(/* out */ int &Left) = 0 ;
	virtual HRESULT __stdcall Set_Left(int Left) = 0 ;
	virtual HRESULT __stdcall Get_MessageClass(/* out */ WideString &MessageClass) = 0 ;
	virtual HRESULT __stdcall Set_MessageClass(const WideString MessageClass) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_MAPIFolder &Parent) = 0 ;
	virtual HRESULT __stdcall Get_Saved(/* out */ Word &Saved) = 0 ;
	virtual HRESULT __stdcall Get_Size(/* out */ int &Size) = 0 ;
	virtual HRESULT __stdcall Get_Subject(/* out */ WideString &Subject) = 0 ;
	virtual HRESULT __stdcall Get_Top(/* out */ int &Top) = 0 ;
	virtual HRESULT __stdcall Set_Top(int Top) = 0 ;
	virtual HRESULT __stdcall Get_Width(/* out */ int &Width) = 0 ;
	virtual HRESULT __stdcall Set_Width(int Width) = 0 ;
	virtual HRESULT __stdcall Close(Activex::TOleEnum SaveMode) = 0 ;
	virtual HRESULT __stdcall Copy(/* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Display(const OleVariant Modal) = 0 ;
	virtual HRESULT __stdcall Move(const _di_MAPIFolder DestFldr, /* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Save(void) = 0 ;
	virtual HRESULT __stdcall SaveAs(const WideString Path, const OleVariant Type_) = 0 ;
	virtual HRESULT __stdcall PrintOut(void) = 0 ;
};

__interface _IOfficeDocumentItem;
typedef System::DelphiInterface<_IOfficeDocumentItem> _di__IOfficeDocumentItem;
__interface INTERFACE_UUID("{00063120-0000-0000-C000-000000000046}") _IOfficeDocumentItem  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Actions(/* out */ _di_Actions &Actions) = 0 ;
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__DApplication &Application_) = 0 ;
	virtual HRESULT __stdcall Get_Attachments(/* out */ _di_Attachments &Attachments) = 0 ;
	virtual HRESULT __stdcall Get_BillingInformation(/* out */ WideString &BillingInformation) = 0 ;
	virtual HRESULT __stdcall Set_BillingInformation(const WideString BillingInformation) = 0 ;
	virtual HRESULT __stdcall Get_Body(/* out */ WideString &Body) = 0 ;
	virtual HRESULT __stdcall Set_Body(const WideString Body) = 0 ;
	virtual HRESULT __stdcall Get_Categories(/* out */ WideString &Categories) = 0 ;
	virtual HRESULT __stdcall Set_Categories(const WideString Categories) = 0 ;
	virtual HRESULT __stdcall Get_Companies(/* out */ WideString &Companies) = 0 ;
	virtual HRESULT __stdcall Set_Companies(const WideString Companies) = 0 ;
	virtual HRESULT __stdcall Get_CreationTime(/* out */ System::TDateTime &CreationTime) = 0 ;
	virtual HRESULT __stdcall Get_EntryID(/* out */ WideString &EntryID) = 0 ;
	virtual HRESULT __stdcall Get_FormDescription(/* out */ _di_FormDescription &FormDescription) = 0 ;
		
	virtual HRESULT __stdcall Get_GetInspector(/* out */ _di_Inspector &GetInspector) = 0 ;
	virtual HRESULT __stdcall Get_Importance(/* out */ Activex::TOleEnum &Importance) = 0 ;
	virtual HRESULT __stdcall Set_Importance(Activex::TOleEnum Importance) = 0 ;
	virtual HRESULT __stdcall Get_LastModificationTime(/* out */ System::TDateTime &LastModificationTime
		) = 0 ;
	virtual HRESULT __stdcall Get_MessageClass(/* out */ WideString &MessageClass) = 0 ;
	virtual HRESULT __stdcall Set_MessageClass(const WideString MessageClass) = 0 ;
	virtual HRESULT __stdcall Get_Mileage(/* out */ WideString &Mileage) = 0 ;
	virtual HRESULT __stdcall Set_Mileage(const WideString Mileage) = 0 ;
	virtual HRESULT __stdcall Get_NoAging(/* out */ Word &NoAging) = 0 ;
	virtual HRESULT __stdcall Set_NoAging(Word NoAging) = 0 ;
	virtual HRESULT __stdcall Get_OutlookInternalVersion(/* out */ WideString &OutlookInternalVersion) = 0 
		;
	virtual HRESULT __stdcall Get_OutlookVersion(/* out */ WideString &OutlookVersion) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &Parent) = 0 ;
	virtual HRESULT __stdcall Get_Saved(/* out */ Word &Saved) = 0 ;
	virtual HRESULT __stdcall Get_Sensitivity(/* out */ Activex::TOleEnum &Sensitivity) = 0 ;
	virtual HRESULT __stdcall Set_Sensitivity(Activex::TOleEnum Sensitivity) = 0 ;
	virtual HRESULT __stdcall Get_Size(/* out */ int &Size) = 0 ;
	virtual HRESULT __stdcall Get_Subject(/* out */ WideString &Subject) = 0 ;
	virtual HRESULT __stdcall Set_Subject(const WideString Subject) = 0 ;
	virtual HRESULT __stdcall Get_UnRead(/* out */ Word &UnRead) = 0 ;
	virtual HRESULT __stdcall Set_UnRead(Word UnRead) = 0 ;
	virtual HRESULT __stdcall Get_UserProperties(/* out */ _di_UserProperties &UserProperties) = 0 ;
	virtual HRESULT __stdcall Close(Activex::TOleEnum SaveMode) = 0 ;
	virtual HRESULT __stdcall Copy(/* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Display(const OleVariant Modal) = 0 ;
	virtual HRESULT __stdcall Move(const _di_MAPIFolder DestFldr, /* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Save(void) = 0 ;
	virtual HRESULT __stdcall SaveAs(const WideString Path, const OleVariant Type_) = 0 ;
	virtual HRESULT __stdcall PrintOut(void) = 0 ;
};

__interface _IPages;
typedef System::DelphiInterface<_IPages> _di__IPages;
__interface INTERFACE_UUID("{0006313F-0000-0000-C000-000000000046}") _IPages  : public IDispatch 
{
	
public:
	virtual HRESULT __stdcall Get_Count(/* out */ int &Count) = 0 ;
	virtual HRESULT __stdcall Add(const OleVariant Name, /* out */ Opfrms97::_di_IPage &Page) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ Opfrms97::_di_IPage &Page) = 0 ;
	virtual HRESULT __stdcall Remove(int Index) = 0 ;
};

__dispinterface INTERFACE_UUID("{0006303F-0000-0000-C000-000000000046}") Pages  : public IDispatch 
{
	
};

__interface _IPostItem;
typedef System::DelphiInterface<_IPostItem> _di__IPostItem;
__interface INTERFACE_UUID("{00063124-0000-0000-C000-000000000046}") _IPostItem  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Actions(/* out */ _di_Actions &Actions) = 0 ;
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__DApplication &Application_) = 0 ;
	virtual HRESULT __stdcall Get_Attachments(/* out */ _di_Attachments &Attachments) = 0 ;
	virtual HRESULT __stdcall Get_BillingInformation(/* out */ WideString &BillingInformation) = 0 ;
	virtual HRESULT __stdcall Set_BillingInformation(const WideString BillingInformation) = 0 ;
	virtual HRESULT __stdcall Get_Body(/* out */ WideString &Body) = 0 ;
	virtual HRESULT __stdcall Set_Body(const WideString Body) = 0 ;
	virtual HRESULT __stdcall Get_Categories(/* out */ WideString &Categories) = 0 ;
	virtual HRESULT __stdcall Set_Categories(const WideString Categories) = 0 ;
	virtual HRESULT __stdcall Get_Companies(/* out */ WideString &Companies) = 0 ;
	virtual HRESULT __stdcall Set_Companies(const WideString Companies) = 0 ;
	virtual HRESULT __stdcall Get_CreationTime(/* out */ System::TDateTime &CreationTime) = 0 ;
	virtual HRESULT __stdcall Get_EntryID(/* out */ WideString &EntryID) = 0 ;
	virtual HRESULT __stdcall Get_FormDescription(/* out */ _di_FormDescription &FormDescription) = 0 ;
		
	virtual HRESULT __stdcall Get_GetInspector(/* out */ _di_Inspector &GetInspector) = 0 ;
	virtual HRESULT __stdcall Get_Importance(/* out */ Activex::TOleEnum &Importance) = 0 ;
	virtual HRESULT __stdcall Set_Importance(Activex::TOleEnum Importance) = 0 ;
	virtual HRESULT __stdcall Get_LastModificationTime(/* out */ System::TDateTime &LastModificationTime
		) = 0 ;
	virtual HRESULT __stdcall Get_MessageClass(/* out */ WideString &MessageClass) = 0 ;
	virtual HRESULT __stdcall Set_MessageClass(const WideString MessageClass) = 0 ;
	virtual HRESULT __stdcall Get_Mileage(/* out */ WideString &Mileage) = 0 ;
	virtual HRESULT __stdcall Set_Mileage(const WideString Mileage) = 0 ;
	virtual HRESULT __stdcall Get_NoAging(/* out */ Word &NoAging) = 0 ;
	virtual HRESULT __stdcall Set_NoAging(Word NoAging) = 0 ;
	virtual HRESULT __stdcall Get_OutlookInternalVersion(/* out */ WideString &OutlookInternalVersion) = 0 
		;
	virtual HRESULT __stdcall Get_OutlookVersion(/* out */ WideString &OutlookVersion) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &Parent) = 0 ;
	virtual HRESULT __stdcall Get_Saved(/* out */ Word &Saved) = 0 ;
	virtual HRESULT __stdcall Get_Sensitivity(/* out */ Activex::TOleEnum &Sensitivity) = 0 ;
	virtual HRESULT __stdcall Set_Sensitivity(Activex::TOleEnum Sensitivity) = 0 ;
	virtual HRESULT __stdcall Get_Size(/* out */ int &Size) = 0 ;
	virtual HRESULT __stdcall Get_Subject(/* out */ WideString &Subject) = 0 ;
	virtual HRESULT __stdcall Set_Subject(const WideString Subject) = 0 ;
	virtual HRESULT __stdcall Get_UnRead(/* out */ Word &UnRead) = 0 ;
	virtual HRESULT __stdcall Set_UnRead(Word UnRead) = 0 ;
	virtual HRESULT __stdcall Get_UserProperties(/* out */ _di_UserProperties &UserProperties) = 0 ;
	virtual HRESULT __stdcall Get_ConversationIndex(/* out */ WideString &ConversationIndex) = 0 ;
	virtual HRESULT __stdcall Get_ConversationTopic(/* out */ WideString &ConversationTopic) = 0 ;
	virtual HRESULT __stdcall Get_ExpiryTime(/* out */ System::TDateTime &ExpiryTime) = 0 ;
	virtual HRESULT __stdcall Set_ExpiryTime(System::TDateTime ExpiryTime) = 0 ;
	virtual HRESULT __stdcall Get_ReceivedTime(/* out */ System::TDateTime &ReceivedTime) = 0 ;
	virtual HRESULT __stdcall Get_SenderName(/* out */ WideString &SenderName) = 0 ;
	virtual HRESULT __stdcall Get_SentOn(/* out */ System::TDateTime &SentOn) = 0 ;
	virtual HRESULT __stdcall Close(Activex::TOleEnum SaveMode) = 0 ;
	virtual HRESULT __stdcall Copy(/* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Display(const OleVariant Modal) = 0 ;
	virtual HRESULT __stdcall Move(const _di_MAPIFolder DestFldr, /* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Save(void) = 0 ;
	virtual HRESULT __stdcall SaveAs(const WideString Path, const OleVariant Type_) = 0 ;
	virtual HRESULT __stdcall PrintOut(void) = 0 ;
	virtual HRESULT __stdcall ClearConversationIndex(void) = 0 ;
	virtual HRESULT __stdcall Forward(/* out */ _di__DMailItem &Item) = 0 ;
	virtual HRESULT __stdcall Post(void) = 0 ;
	virtual HRESULT __stdcall Reply(/* out */ _di__DMailItem &Item) = 0 ;
};

__interface _IRecipient;
typedef System::DelphiInterface<_IRecipient> _di__IRecipient;
__interface INTERFACE_UUID("{00063145-0000-0000-C000-000000000046}") _IRecipient  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Address(/* out */ WideString &Address) = 0 ;
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__DApplication &Application_) = 0 ;
	virtual HRESULT __stdcall Get_AutoResponse(/* out */ WideString &AutoResponse) = 0 ;
	virtual HRESULT __stdcall Set_AutoResponse(const WideString AutoResponse) = 0 ;
	virtual HRESULT __stdcall Get_EntryID(/* out */ WideString &EntryID) = 0 ;
	virtual HRESULT __stdcall Get_MeetingResponseStatus(/* out */ Activex::TOleEnum &MeetingResponseStatus
		) = 0 ;
	virtual HRESULT __stdcall Set_MeetingResponseStatus(Activex::TOleEnum MeetingResponseStatus) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &Name) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &Parent) = 0 ;
	virtual HRESULT __stdcall Get_Resolved(/* out */ Word &Resolved) = 0 ;
	virtual HRESULT __stdcall Get_TrackingStatus(/* out */ Activex::TOleEnum &TrackingStatus) = 0 ;
	virtual HRESULT __stdcall Set_TrackingStatus(Activex::TOleEnum TrackingStatus) = 0 ;
	virtual HRESULT __stdcall Get_TrackingStatusTime(/* out */ System::TDateTime &TrackingStatusTime) = 0 
		;
	virtual HRESULT __stdcall Set_TrackingStatusTime(System::TDateTime TrackingStatusTime) = 0 ;
	virtual HRESULT __stdcall Get_Type_(/* out */ int &Type_) = 0 ;
	virtual HRESULT __stdcall Set_Type_(int Type_) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall FreeBusy(System::TDateTime Start, int MinPerChar, const OleVariant CompleteFormat
		, /* out */ WideString &FreeBusyInfo) = 0 ;
	virtual HRESULT __stdcall Resolve(/* out */ Word &Success) = 0 ;
};

__dispinterface INTERFACE_UUID("{00063045-0000-0000-C000-000000000046}") Recipient  : public IDispatch 
	
{
	
};

__interface _IRecipients;
typedef System::DelphiInterface<_IRecipients> _di__IRecipients;
__interface INTERFACE_UUID("{0006313B-0000-0000-C000-000000000046}") _IRecipients  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Count(/* out */ int &Count) = 0 ;
	virtual HRESULT __stdcall Add(const WideString Name, /* out */ _di_Recipient &Recipient) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_Recipient &Recipient) = 0 ;
	virtual HRESULT __stdcall Remove(int Index) = 0 ;
	virtual HRESULT __stdcall ResolveAll(/* out */ Word &Success) = 0 ;
};

__interface _IRecurrencePattern;
typedef System::DelphiInterface<_IRecurrencePattern> _di__IRecurrencePattern;
__interface INTERFACE_UUID("{00063144-0000-0000-C000-000000000046}") _IRecurrencePattern  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_DayOfMonth(/* out */ int &DayOfMonth) = 0 ;
	virtual HRESULT __stdcall Set_DayOfMonth(int DayOfMonth) = 0 ;
	virtual HRESULT __stdcall Get_DayOfWeekMask(/* out */ Activex::TOleEnum &DayOfWeekMask) = 0 ;
	virtual HRESULT __stdcall Set_DayOfWeekMask(Activex::TOleEnum DayOfWeekMask) = 0 ;
	virtual HRESULT __stdcall Get_Duration(/* out */ int &Duration) = 0 ;
	virtual HRESULT __stdcall Set_Duration(int Duration) = 0 ;
	virtual HRESULT __stdcall Get_EndTime(/* out */ System::TDateTime &EndTime) = 0 ;
	virtual HRESULT __stdcall Set_EndTime(System::TDateTime EndTime) = 0 ;
	virtual HRESULT __stdcall Get_Instance(/* out */ int &Instance) = 0 ;
	virtual HRESULT __stdcall Set_Instance(int Instance) = 0 ;
	virtual HRESULT __stdcall Get_Interval(/* out */ int &Interval) = 0 ;
	virtual HRESULT __stdcall Set_Interval(int Interval) = 0 ;
	virtual HRESULT __stdcall Get_MonthOfYear(/* out */ int &MonthOfYear) = 0 ;
	virtual HRESULT __stdcall Set_MonthOfYear(int MonthOfYear) = 0 ;
	virtual HRESULT __stdcall Get_NoEndDate(/* out */ Word &NoEndDate) = 0 ;
	virtual HRESULT __stdcall Set_NoEndDate(Word NoEndDate) = 0 ;
	virtual HRESULT __stdcall Get_Occurrences(/* out */ int &Occurrences) = 0 ;
	virtual HRESULT __stdcall Set_Occurrences(int Occurrences) = 0 ;
	virtual HRESULT __stdcall Get_PatternEndDate(/* out */ System::TDateTime &PatternEndDate) = 0 ;
	virtual HRESULT __stdcall Set_PatternEndDate(System::TDateTime PatternEndDate) = 0 ;
	virtual HRESULT __stdcall Get_PatternStartDate(/* out */ System::TDateTime &PatternStartDate) = 0 ;
		
	virtual HRESULT __stdcall Set_PatternStartDate(System::TDateTime PatternStartDate) = 0 ;
	virtual HRESULT __stdcall Get_RecurrenceType(/* out */ Activex::TOleEnum &RecurrenceType) = 0 ;
	virtual HRESULT __stdcall Set_RecurrenceType(Activex::TOleEnum RecurrenceType) = 0 ;
	virtual HRESULT __stdcall Get_Regenerate(/* out */ Word &Regenerate) = 0 ;
	virtual HRESULT __stdcall Set_Regenerate(Word Regenerate) = 0 ;
	virtual HRESULT __stdcall Get_StartTime(/* out */ System::TDateTime &StartTime) = 0 ;
	virtual HRESULT __stdcall Set_StartTime(System::TDateTime StartTime) = 0 ;
};

__dispinterface INTERFACE_UUID("{00063044-0000-0000-C000-000000000046}") RecurrencePattern  : public IDispatch 
	
{
	
};

__interface _IRemoteItem;
typedef System::DelphiInterface<_IRemoteItem> _di__IRemoteItem;
__interface INTERFACE_UUID("{00063123-0000-0000-C000-000000000046}") _IRemoteItem  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Actions(/* out */ _di_Actions &Actions) = 0 ;
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__DApplication &Application_) = 0 ;
	virtual HRESULT __stdcall Get_Attachments(/* out */ _di_Attachments &Attachments) = 0 ;
	virtual HRESULT __stdcall Get_BillingInformation(/* out */ WideString &BillingInformation) = 0 ;
	virtual HRESULT __stdcall Set_BillingInformation(const WideString BillingInformation) = 0 ;
	virtual HRESULT __stdcall Get_Body(/* out */ WideString &Body) = 0 ;
	virtual HRESULT __stdcall Set_Body(const WideString Body) = 0 ;
	virtual HRESULT __stdcall Get_Categories(/* out */ WideString &Categories) = 0 ;
	virtual HRESULT __stdcall Set_Categories(const WideString Categories) = 0 ;
	virtual HRESULT __stdcall Get_Companies(/* out */ WideString &Companies) = 0 ;
	virtual HRESULT __stdcall Set_Companies(const WideString Companies) = 0 ;
	virtual HRESULT __stdcall Get_CreationTime(/* out */ System::TDateTime &CreationTime) = 0 ;
	virtual HRESULT __stdcall Get_EntryID(/* out */ WideString &EntryID) = 0 ;
	virtual HRESULT __stdcall Get_FormDescription(/* out */ _di_FormDescription &FormDescription) = 0 ;
		
	virtual HRESULT __stdcall Get_GetInspector(/* out */ _di_Inspector &GetInspector) = 0 ;
	virtual HRESULT __stdcall Get_Importance(/* out */ Activex::TOleEnum &Importance) = 0 ;
	virtual HRESULT __stdcall Set_Importance(Activex::TOleEnum Importance) = 0 ;
	virtual HRESULT __stdcall Get_LastModificationTime(/* out */ System::TDateTime &LastModificationTime
		) = 0 ;
	virtual HRESULT __stdcall Get_MessageClass(/* out */ WideString &MessageClass) = 0 ;
	virtual HRESULT __stdcall Set_MessageClass(const WideString MessageClass) = 0 ;
	virtual HRESULT __stdcall Get_Mileage(/* out */ WideString &Mileage) = 0 ;
	virtual HRESULT __stdcall Set_Mileage(const WideString Mileage) = 0 ;
	virtual HRESULT __stdcall Get_NoAging(/* out */ Word &NoAging) = 0 ;
	virtual HRESULT __stdcall Set_NoAging(Word NoAging) = 0 ;
	virtual HRESULT __stdcall Get_OutlookInternalVersion(/* out */ WideString &OutlookInternalVersion) = 0 
		;
	virtual HRESULT __stdcall Get_OutlookVersion(/* out */ WideString &OutlookVersion) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &Parent) = 0 ;
	virtual HRESULT __stdcall Get_Saved(/* out */ Word &Saved) = 0 ;
	virtual HRESULT __stdcall Get_Sensitivity(/* out */ Activex::TOleEnum &Sensitivity) = 0 ;
	virtual HRESULT __stdcall Set_Sensitivity(Activex::TOleEnum Sensitivity) = 0 ;
	virtual HRESULT __stdcall Get_Size(/* out */ int &Size) = 0 ;
	virtual HRESULT __stdcall Get_Subject(/* out */ WideString &Subject) = 0 ;
	virtual HRESULT __stdcall Set_Subject(const WideString Subject) = 0 ;
	virtual HRESULT __stdcall Get_UnRead(/* out */ Word &UnRead) = 0 ;
	virtual HRESULT __stdcall Set_UnRead(Word UnRead) = 0 ;
	virtual HRESULT __stdcall Get_UserProperties(/* out */ _di_UserProperties &UserProperties) = 0 ;
	virtual HRESULT __stdcall Get_HasAttachment(/* out */ Word &HasAttachment) = 0 ;
	virtual HRESULT __stdcall Get_RemoteMessageClass(/* out */ WideString &RemoteMessageClass) = 0 ;
	virtual HRESULT __stdcall Get_TransferSize(/* out */ int &TransferSize) = 0 ;
	virtual HRESULT __stdcall Get_TransferTime(/* out */ int &TransferTime) = 0 ;
	virtual HRESULT __stdcall Close(Activex::TOleEnum SaveMode) = 0 ;
	virtual HRESULT __stdcall Copy(/* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Display(const OleVariant Modal) = 0 ;
	virtual HRESULT __stdcall Move(const _di_MAPIFolder DestFldr, /* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Save(void) = 0 ;
	virtual HRESULT __stdcall SaveAs(const WideString Path, const OleVariant Type_) = 0 ;
	virtual HRESULT __stdcall PrintOut(void) = 0 ;
};

__interface _IReportItem;
typedef System::DelphiInterface<_IReportItem> _di__IReportItem;
__interface INTERFACE_UUID("{00063126-0000-0000-C000-000000000046}") _IReportItem  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Actions(/* out */ _di_Actions &Actions) = 0 ;
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__DApplication &Application_) = 0 ;
	virtual HRESULT __stdcall Get_Attachments(/* out */ _di_Attachments &Attachments) = 0 ;
	virtual HRESULT __stdcall Get_BillingInformation(/* out */ WideString &BillingInformation) = 0 ;
	virtual HRESULT __stdcall Set_BillingInformation(const WideString BillingInformation) = 0 ;
	virtual HRESULT __stdcall Get_Body(/* out */ WideString &Body) = 0 ;
	virtual HRESULT __stdcall Set_Body(const WideString Body) = 0 ;
	virtual HRESULT __stdcall Get_Categories(/* out */ WideString &Categories) = 0 ;
	virtual HRESULT __stdcall Set_Categories(const WideString Categories) = 0 ;
	virtual HRESULT __stdcall Get_Companies(/* out */ WideString &Companies) = 0 ;
	virtual HRESULT __stdcall Set_Companies(const WideString Companies) = 0 ;
	virtual HRESULT __stdcall Get_CreationTime(/* out */ System::TDateTime &CreationTime) = 0 ;
	virtual HRESULT __stdcall Get_EntryID(/* out */ WideString &EntryID) = 0 ;
	virtual HRESULT __stdcall Get_FormDescription(/* out */ _di_FormDescription &FormDescription) = 0 ;
		
	virtual HRESULT __stdcall Get_GetInspector(/* out */ _di_Inspector &GetInspector) = 0 ;
	virtual HRESULT __stdcall Get_Importance(/* out */ Activex::TOleEnum &Importance) = 0 ;
	virtual HRESULT __stdcall Set_Importance(Activex::TOleEnum Importance) = 0 ;
	virtual HRESULT __stdcall Get_LastModificationTime(/* out */ System::TDateTime &LastModificationTime
		) = 0 ;
	virtual HRESULT __stdcall Get_MessageClass(/* out */ WideString &MessageClass) = 0 ;
	virtual HRESULT __stdcall Set_MessageClass(const WideString MessageClass) = 0 ;
	virtual HRESULT __stdcall Get_Mileage(/* out */ WideString &Mileage) = 0 ;
	virtual HRESULT __stdcall Set_Mileage(const WideString Mileage) = 0 ;
	virtual HRESULT __stdcall Get_NoAging(/* out */ Word &NoAging) = 0 ;
	virtual HRESULT __stdcall Set_NoAging(Word NoAging) = 0 ;
	virtual HRESULT __stdcall Get_OutlookInternalVersion(/* out */ WideString &OutlookInternalVersion) = 0 
		;
	virtual HRESULT __stdcall Get_OutlookVersion(/* out */ WideString &OutlookVersion) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &Parent) = 0 ;
	virtual HRESULT __stdcall Get_Saved(/* out */ Word &Saved) = 0 ;
	virtual HRESULT __stdcall Get_Sensitivity(/* out */ Activex::TOleEnum &Sensitivity) = 0 ;
	virtual HRESULT __stdcall Set_Sensitivity(Activex::TOleEnum Sensitivity) = 0 ;
	virtual HRESULT __stdcall Get_Size(/* out */ int &Size) = 0 ;
	virtual HRESULT __stdcall Get_Subject(/* out */ WideString &Subject) = 0 ;
	virtual HRESULT __stdcall Set_Subject(const WideString Subject) = 0 ;
	virtual HRESULT __stdcall Get_UnRead(/* out */ Word &UnRead) = 0 ;
	virtual HRESULT __stdcall Set_UnRead(Word UnRead) = 0 ;
	virtual HRESULT __stdcall Get_UserProperties(/* out */ _di_UserProperties &UserProperties) = 0 ;
	virtual HRESULT __stdcall Close(Activex::TOleEnum SaveMode) = 0 ;
	virtual HRESULT __stdcall Copy(/* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Display(const OleVariant Modal) = 0 ;
	virtual HRESULT __stdcall Move(const _di_MAPIFolder DestFldr, /* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Save(void) = 0 ;
	virtual HRESULT __stdcall SaveAs(const WideString Path, const OleVariant Type_) = 0 ;
	virtual HRESULT __stdcall PrintOut(void) = 0 ;
};

__interface _ITaskItem;
typedef System::DelphiInterface<_ITaskItem> _di__ITaskItem;
__interface INTERFACE_UUID("{00063135-0000-0000-C000-000000000046}") _ITaskItem  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Actions(/* out */ _di_Actions &Actions) = 0 ;
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__DApplication &Application_) = 0 ;
	virtual HRESULT __stdcall Get_Attachments(/* out */ _di_Attachments &Attachments) = 0 ;
	virtual HRESULT __stdcall Get_BillingInformation(/* out */ WideString &BillingInformation) = 0 ;
	virtual HRESULT __stdcall Set_BillingInformation(const WideString BillingInformation) = 0 ;
	virtual HRESULT __stdcall Get_Body(/* out */ WideString &Body) = 0 ;
	virtual HRESULT __stdcall Set_Body(const WideString Body) = 0 ;
	virtual HRESULT __stdcall Get_Categories(/* out */ WideString &Categories) = 0 ;
	virtual HRESULT __stdcall Set_Categories(const WideString Categories) = 0 ;
	virtual HRESULT __stdcall Get_Companies(/* out */ WideString &Companies) = 0 ;
	virtual HRESULT __stdcall Set_Companies(const WideString Companies) = 0 ;
	virtual HRESULT __stdcall Get_CreationTime(/* out */ System::TDateTime &CreationTime) = 0 ;
	virtual HRESULT __stdcall Get_EntryID(/* out */ WideString &EntryID) = 0 ;
	virtual HRESULT __stdcall Get_FormDescription(/* out */ _di_FormDescription &FormDescription) = 0 ;
		
	virtual HRESULT __stdcall Get_GetInspector(/* out */ _di_Inspector &GetInspector) = 0 ;
	virtual HRESULT __stdcall Get_Importance(/* out */ Activex::TOleEnum &Importance) = 0 ;
	virtual HRESULT __stdcall Set_Importance(Activex::TOleEnum Importance) = 0 ;
	virtual HRESULT __stdcall Get_LastModificationTime(/* out */ System::TDateTime &LastModificationTime
		) = 0 ;
	virtual HRESULT __stdcall Get_MessageClass(/* out */ WideString &MessageClass) = 0 ;
	virtual HRESULT __stdcall Set_MessageClass(const WideString MessageClass) = 0 ;
	virtual HRESULT __stdcall Get_Mileage(/* out */ WideString &Mileage) = 0 ;
	virtual HRESULT __stdcall Set_Mileage(const WideString Mileage) = 0 ;
	virtual HRESULT __stdcall Get_NoAging(/* out */ Word &NoAging) = 0 ;
	virtual HRESULT __stdcall Set_NoAging(Word NoAging) = 0 ;
	virtual HRESULT __stdcall Get_OutlookInternalVersion(/* out */ WideString &OutlookInternalVersion) = 0 
		;
	virtual HRESULT __stdcall Get_OutlookVersion(/* out */ WideString &OutlookVersion) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &Parent) = 0 ;
	virtual HRESULT __stdcall Get_Saved(/* out */ Word &Saved) = 0 ;
	virtual HRESULT __stdcall Get_Sensitivity(/* out */ Activex::TOleEnum &Sensitivity) = 0 ;
	virtual HRESULT __stdcall Set_Sensitivity(Activex::TOleEnum Sensitivity) = 0 ;
	virtual HRESULT __stdcall Get_Size(/* out */ int &Size) = 0 ;
	virtual HRESULT __stdcall Get_Subject(/* out */ WideString &Subject) = 0 ;
	virtual HRESULT __stdcall Set_Subject(const WideString Subject) = 0 ;
	virtual HRESULT __stdcall Get_UnRead(/* out */ Word &UnRead) = 0 ;
	virtual HRESULT __stdcall Set_UnRead(Word UnRead) = 0 ;
	virtual HRESULT __stdcall Get_UserProperties(/* out */ _di_UserProperties &UserProperties) = 0 ;
	virtual HRESULT __stdcall Get_ActualWork(/* out */ int &ActualWork) = 0 ;
	virtual HRESULT __stdcall Set_ActualWork(int ActualWork) = 0 ;
	virtual HRESULT __stdcall Get_CardData(/* out */ WideString &CardData) = 0 ;
	virtual HRESULT __stdcall Set_CardData(const WideString CardData) = 0 ;
	virtual HRESULT __stdcall Get_Complete(/* out */ Word &Complete) = 0 ;
	virtual HRESULT __stdcall Set_Complete(Word Complete) = 0 ;
	virtual HRESULT __stdcall Get_Contacts(/* out */ WideString &Contacts) = 0 ;
	virtual HRESULT __stdcall Set_Contacts(const WideString Contacts) = 0 ;
	virtual HRESULT __stdcall Get_DateCompleted(/* out */ System::TDateTime &DateCompleted) = 0 ;
	virtual HRESULT __stdcall Set_DateCompleted(System::TDateTime DateCompleted) = 0 ;
	virtual HRESULT __stdcall Get_DelegationState(/* out */ Activex::TOleEnum &DelegationState) = 0 ;
	virtual HRESULT __stdcall Get_Delegator(/* out */ WideString &Delegator) = 0 ;
	virtual HRESULT __stdcall Get_DueDate(/* out */ System::TDateTime &DueDate) = 0 ;
	virtual HRESULT __stdcall Set_DueDate(System::TDateTime DueDate) = 0 ;
	virtual HRESULT __stdcall Get_IsRecurring(/* out */ Word &IsRecurring) = 0 ;
	virtual HRESULT __stdcall Get_Ordinal(/* out */ int &Ordinal) = 0 ;
	virtual HRESULT __stdcall Set_Ordinal(int Ordinal) = 0 ;
	virtual HRESULT __stdcall Get_Owner(/* out */ WideString &Owner) = 0 ;
	virtual HRESULT __stdcall Set_Owner(const WideString Owner) = 0 ;
	virtual HRESULT __stdcall Get_Ownership(/* out */ Activex::TOleEnum &Ownership) = 0 ;
	virtual HRESULT __stdcall Get_PercentComplete(/* out */ int &PercentComplete) = 0 ;
	virtual HRESULT __stdcall Set_PercentComplete(int PercentComplete) = 0 ;
	virtual HRESULT __stdcall Get_Recipients(/* out */ _di_Recipients &Recipients) = 0 ;
	virtual HRESULT __stdcall Get_ReminderOverrideDefault(/* out */ Word &ReminderOverrideDefault) = 0 
		;
	virtual HRESULT __stdcall Set_ReminderOverrideDefault(Word ReminderOverrideDefault) = 0 ;
	virtual HRESULT __stdcall Get_ReminderPlaySound(/* out */ Word &ReminderPlaySound) = 0 ;
	virtual HRESULT __stdcall Set_ReminderPlaySound(Word ReminderPlaySound) = 0 ;
	virtual HRESULT __stdcall Get_ReminderSet(/* out */ Word &ReminderSet) = 0 ;
	virtual HRESULT __stdcall Set_ReminderSet(Word ReminderSet) = 0 ;
	virtual HRESULT __stdcall Get_ReminderSoundFile(/* out */ WideString &ReminderSoundFile) = 0 ;
	virtual HRESULT __stdcall Set_ReminderSoundFile(const WideString ReminderSoundFile) = 0 ;
	virtual HRESULT __stdcall Get_ReminderTime(/* out */ System::TDateTime &ReminderTime) = 0 ;
	virtual HRESULT __stdcall Set_ReminderTime(System::TDateTime ReminderTime) = 0 ;
	virtual HRESULT __stdcall Get_ResponseState(/* out */ Activex::TOleEnum &ResponseState) = 0 ;
	virtual HRESULT __stdcall Get_Role(/* out */ WideString &Role) = 0 ;
	virtual HRESULT __stdcall Set_Role(const WideString Role) = 0 ;
	virtual HRESULT __stdcall Get_SchedulePlusPriority(/* out */ WideString &SchedulePlusPriority) = 0 
		;
	virtual HRESULT __stdcall Set_SchedulePlusPriority(const WideString SchedulePlusPriority) = 0 ;
	virtual HRESULT __stdcall Get_StartDate(/* out */ System::TDateTime &StartDate) = 0 ;
	virtual HRESULT __stdcall Set_StartDate(System::TDateTime StartDate) = 0 ;
	virtual HRESULT __stdcall Get_Status(/* out */ Activex::TOleEnum &Status) = 0 ;
	virtual HRESULT __stdcall Set_Status(Activex::TOleEnum Status) = 0 ;
	virtual HRESULT __stdcall Get_StatusOnCompletionRecipients(/* out */ WideString &StatusOnCompletionRecipients
		) = 0 ;
	virtual HRESULT __stdcall Set_StatusOnCompletionRecipients(const WideString StatusOnCompletionRecipients
		) = 0 ;
	virtual HRESULT __stdcall Get_StatusUpdateRecipients(/* out */ WideString &StatusUpdateRecipients) = 0 
		;
	virtual HRESULT __stdcall Set_StatusUpdateRecipients(const WideString StatusUpdateRecipients) = 0 ;
		
	virtual HRESULT __stdcall Get_TeamTask(/* out */ Word &TeamTask) = 0 ;
	virtual HRESULT __stdcall Set_TeamTask(Word TeamTask) = 0 ;
	virtual HRESULT __stdcall Get_TotalWork(/* out */ int &TotalWork) = 0 ;
	virtual HRESULT __stdcall Set_TotalWork(int TotalWork) = 0 ;
	virtual HRESULT __stdcall Close(Activex::TOleEnum SaveMode) = 0 ;
	virtual HRESULT __stdcall Copy(/* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Display(const OleVariant Modal) = 0 ;
	virtual HRESULT __stdcall Move(const _di_MAPIFolder DestFldr, /* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Save(void) = 0 ;
	virtual HRESULT __stdcall SaveAs(const WideString Path, const OleVariant Type_) = 0 ;
	virtual HRESULT __stdcall PrintOut(void) = 0 ;
	virtual HRESULT __stdcall Assign(/* out */ _di__DTaskItem &Item) = 0 ;
	virtual HRESULT __stdcall CancelResponseState(void) = 0 ;
	virtual HRESULT __stdcall ClearRecurrencePattern(void) = 0 ;
	virtual HRESULT __stdcall GetRecurrencePattern(void) = 0 ;
	virtual HRESULT __stdcall MarkComplete(void) = 0 ;
	virtual HRESULT __stdcall Respond(Activex::TOleEnum Response, const OleVariant fNoUI, const OleVariant 
		fAdditionalTextDialog, /* out */ _di__DTaskItem &Item) = 0 ;
	virtual HRESULT __stdcall Send(void) = 0 ;
	virtual Word __stdcall SkipRecurrence(void) = 0 ;
	virtual HRESULT __stdcall StatusReport(/* out */ _di_IDispatch &StatusReport) = 0 ;
};

__interface _ITaskRequestAcceptItem;
typedef System::DelphiInterface<_ITaskRequestAcceptItem> _di__ITaskRequestAcceptItem;
__interface INTERFACE_UUID("{00063138-0000-0000-C000-000000000046}") _ITaskRequestAcceptItem  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Actions(/* out */ _di_Actions &Actions) = 0 ;
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__DApplication &Application_) = 0 ;
	virtual HRESULT __stdcall Get_Attachments(/* out */ _di_Attachments &Attachments) = 0 ;
	virtual HRESULT __stdcall Get_BillingInformation(/* out */ WideString &BillingInformation) = 0 ;
	virtual HRESULT __stdcall Set_BillingInformation(const WideString BillingInformation) = 0 ;
	virtual HRESULT __stdcall Get_Body(/* out */ WideString &Body) = 0 ;
	virtual HRESULT __stdcall Set_Body(const WideString Body) = 0 ;
	virtual HRESULT __stdcall Get_Categories(/* out */ WideString &Categories) = 0 ;
	virtual HRESULT __stdcall Set_Categories(const WideString Categories) = 0 ;
	virtual HRESULT __stdcall Get_Companies(/* out */ WideString &Companies) = 0 ;
	virtual HRESULT __stdcall Set_Companies(const WideString Companies) = 0 ;
	virtual HRESULT __stdcall Get_CreationTime(/* out */ System::TDateTime &CreationTime) = 0 ;
	virtual HRESULT __stdcall Get_EntryID(/* out */ WideString &EntryID) = 0 ;
	virtual HRESULT __stdcall Get_FormDescription(/* out */ _di_FormDescription &FormDescription) = 0 ;
		
	virtual HRESULT __stdcall Get_GetInspector(/* out */ _di_Inspector &GetInspector) = 0 ;
	virtual HRESULT __stdcall Get_Importance(/* out */ Activex::TOleEnum &Importance) = 0 ;
	virtual HRESULT __stdcall Set_Importance(Activex::TOleEnum Importance) = 0 ;
	virtual HRESULT __stdcall Get_LastModificationTime(/* out */ System::TDateTime &LastModificationTime
		) = 0 ;
	virtual HRESULT __stdcall Get_MessageClass(/* out */ WideString &MessageClass) = 0 ;
	virtual HRESULT __stdcall Set_MessageClass(const WideString MessageClass) = 0 ;
	virtual HRESULT __stdcall Get_Mileage(/* out */ WideString &Mileage) = 0 ;
	virtual HRESULT __stdcall Set_Mileage(const WideString Mileage) = 0 ;
	virtual HRESULT __stdcall Get_NoAging(/* out */ Word &NoAging) = 0 ;
	virtual HRESULT __stdcall Set_NoAging(Word NoAging) = 0 ;
	virtual HRESULT __stdcall Get_OutlookInternalVersion(/* out */ WideString &OutlookInternalVersion) = 0 
		;
	virtual HRESULT __stdcall Get_OutlookVersion(/* out */ WideString &OutlookVersion) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &Parent) = 0 ;
	virtual HRESULT __stdcall Get_Saved(/* out */ Word &Saved) = 0 ;
	virtual HRESULT __stdcall Get_Sensitivity(/* out */ Activex::TOleEnum &Sensitivity) = 0 ;
	virtual HRESULT __stdcall Set_Sensitivity(Activex::TOleEnum Sensitivity) = 0 ;
	virtual HRESULT __stdcall Get_Size(/* out */ int &Size) = 0 ;
	virtual HRESULT __stdcall Get_Subject(/* out */ WideString &Subject) = 0 ;
	virtual HRESULT __stdcall Set_Subject(const WideString Subject) = 0 ;
	virtual HRESULT __stdcall Get_UnRead(/* out */ Word &UnRead) = 0 ;
	virtual HRESULT __stdcall Set_UnRead(Word UnRead) = 0 ;
	virtual HRESULT __stdcall Get_UserProperties(/* out */ _di_UserProperties &UserProperties) = 0 ;
	virtual HRESULT __stdcall Close(Activex::TOleEnum SaveMode) = 0 ;
	virtual HRESULT __stdcall Copy(/* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Display(const OleVariant Modal) = 0 ;
	virtual HRESULT __stdcall Move(const _di_MAPIFolder DestFldr, /* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Save(void) = 0 ;
	virtual HRESULT __stdcall SaveAs(const WideString Path, const OleVariant Type_) = 0 ;
	virtual HRESULT __stdcall PrintOut(void) = 0 ;
	virtual HRESULT __stdcall GetAssociatedTask(Word AddToTaskList, /* out */ _di__DTaskItem &Item) = 0 
		;
};

__interface _ITaskRequestDeclineItem;
typedef System::DelphiInterface<_ITaskRequestDeclineItem> _di__ITaskRequestDeclineItem;
__interface INTERFACE_UUID("{00063139-0000-0000-C000-000000000046}") _ITaskRequestDeclineItem  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Actions(/* out */ _di_Actions &Actions) = 0 ;
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__DApplication &Application_) = 0 ;
	virtual HRESULT __stdcall Get_Attachments(/* out */ _di_Attachments &Attachments) = 0 ;
	virtual HRESULT __stdcall Get_BillingInformation(/* out */ WideString &BillingInformation) = 0 ;
	virtual HRESULT __stdcall Set_BillingInformation(const WideString BillingInformation) = 0 ;
	virtual HRESULT __stdcall Get_Body(/* out */ WideString &Body) = 0 ;
	virtual HRESULT __stdcall Set_Body(const WideString Body) = 0 ;
	virtual HRESULT __stdcall Get_Categories(/* out */ WideString &Categories) = 0 ;
	virtual HRESULT __stdcall Set_Categories(const WideString Categories) = 0 ;
	virtual HRESULT __stdcall Get_Companies(/* out */ WideString &Companies) = 0 ;
	virtual HRESULT __stdcall Set_Companies(const WideString Companies) = 0 ;
	virtual HRESULT __stdcall Get_CreationTime(/* out */ System::TDateTime &CreationTime) = 0 ;
	virtual HRESULT __stdcall Get_EntryID(/* out */ WideString &EntryID) = 0 ;
	virtual HRESULT __stdcall Get_FormDescription(/* out */ _di_FormDescription &FormDescription) = 0 ;
		
	virtual HRESULT __stdcall Get_GetInspector(/* out */ _di_Inspector &GetInspector) = 0 ;
	virtual HRESULT __stdcall Get_Importance(/* out */ Activex::TOleEnum &Importance) = 0 ;
	virtual HRESULT __stdcall Set_Importance(Activex::TOleEnum Importance) = 0 ;
	virtual HRESULT __stdcall Get_LastModificationTime(/* out */ System::TDateTime &LastModificationTime
		) = 0 ;
	virtual HRESULT __stdcall Get_MessageClass(/* out */ WideString &MessageClass) = 0 ;
	virtual HRESULT __stdcall Set_MessageClass(const WideString MessageClass) = 0 ;
	virtual HRESULT __stdcall Get_Mileage(/* out */ WideString &Mileage) = 0 ;
	virtual HRESULT __stdcall Set_Mileage(const WideString Mileage) = 0 ;
	virtual HRESULT __stdcall Get_NoAging(/* out */ Word &NoAging) = 0 ;
	virtual HRESULT __stdcall Set_NoAging(Word NoAging) = 0 ;
	virtual HRESULT __stdcall Get_OutlookInternalVersion(/* out */ WideString &OutlookInternalVersion) = 0 
		;
	virtual HRESULT __stdcall Get_OutlookVersion(/* out */ WideString &OutlookVersion) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &Parent) = 0 ;
	virtual HRESULT __stdcall Get_Saved(/* out */ Word &Saved) = 0 ;
	virtual HRESULT __stdcall Get_Sensitivity(/* out */ Activex::TOleEnum &Sensitivity) = 0 ;
	virtual HRESULT __stdcall Set_Sensitivity(Activex::TOleEnum Sensitivity) = 0 ;
	virtual HRESULT __stdcall Get_Size(/* out */ int &Size) = 0 ;
	virtual HRESULT __stdcall Get_Subject(/* out */ WideString &Subject) = 0 ;
	virtual HRESULT __stdcall Set_Subject(const WideString Subject) = 0 ;
	virtual HRESULT __stdcall Get_UnRead(/* out */ Word &UnRead) = 0 ;
	virtual HRESULT __stdcall Set_UnRead(Word UnRead) = 0 ;
	virtual HRESULT __stdcall Get_UserProperties(/* out */ _di_UserProperties &UserProperties) = 0 ;
	virtual HRESULT __stdcall Close(Activex::TOleEnum SaveMode) = 0 ;
	virtual HRESULT __stdcall Copy(/* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Display(const OleVariant Modal) = 0 ;
	virtual HRESULT __stdcall Move(const _di_MAPIFolder DestFldr, /* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Save(void) = 0 ;
	virtual HRESULT __stdcall SaveAs(const WideString Path, const OleVariant Type_) = 0 ;
	virtual HRESULT __stdcall PrintOut(void) = 0 ;
	virtual HRESULT __stdcall GetAssociatedTask(Word AddToTaskList, /* out */ _di__DTaskItem &Item) = 0 
		;
};

__interface _ITaskRequestItem;
typedef System::DelphiInterface<_ITaskRequestItem> _di__ITaskRequestItem;
__interface INTERFACE_UUID("{00063136-0000-0000-C000-000000000046}") _ITaskRequestItem  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Actions(/* out */ _di_Actions &Actions) = 0 ;
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__DApplication &Application_) = 0 ;
	virtual HRESULT __stdcall Get_Attachments(/* out */ _di_Attachments &Attachments) = 0 ;
	virtual HRESULT __stdcall Get_BillingInformation(/* out */ WideString &BillingInformation) = 0 ;
	virtual HRESULT __stdcall Set_BillingInformation(const WideString BillingInformation) = 0 ;
	virtual HRESULT __stdcall Get_Body(/* out */ WideString &Body) = 0 ;
	virtual HRESULT __stdcall Set_Body(const WideString Body) = 0 ;
	virtual HRESULT __stdcall Get_Categories(/* out */ WideString &Categories) = 0 ;
	virtual HRESULT __stdcall Set_Categories(const WideString Categories) = 0 ;
	virtual HRESULT __stdcall Get_Companies(/* out */ WideString &Companies) = 0 ;
	virtual HRESULT __stdcall Set_Companies(const WideString Companies) = 0 ;
	virtual HRESULT __stdcall Get_CreationTime(/* out */ System::TDateTime &CreationTime) = 0 ;
	virtual HRESULT __stdcall Get_EntryID(/* out */ WideString &EntryID) = 0 ;
	virtual HRESULT __stdcall Get_FormDescription(/* out */ _di_FormDescription &FormDescription) = 0 ;
		
	virtual HRESULT __stdcall Get_GetInspector(/* out */ _di_Inspector &GetInspector) = 0 ;
	virtual HRESULT __stdcall Get_Importance(/* out */ Activex::TOleEnum &Importance) = 0 ;
	virtual HRESULT __stdcall Set_Importance(Activex::TOleEnum Importance) = 0 ;
	virtual HRESULT __stdcall Get_LastModificationTime(/* out */ System::TDateTime &LastModificationTime
		) = 0 ;
	virtual HRESULT __stdcall Get_MessageClass(/* out */ WideString &MessageClass) = 0 ;
	virtual HRESULT __stdcall Set_MessageClass(const WideString MessageClass) = 0 ;
	virtual HRESULT __stdcall Get_Mileage(/* out */ WideString &Mileage) = 0 ;
	virtual HRESULT __stdcall Set_Mileage(const WideString Mileage) = 0 ;
	virtual HRESULT __stdcall Get_NoAging(/* out */ Word &NoAging) = 0 ;
	virtual HRESULT __stdcall Set_NoAging(Word NoAging) = 0 ;
	virtual HRESULT __stdcall Get_OutlookInternalVersion(/* out */ WideString &OutlookInternalVersion) = 0 
		;
	virtual HRESULT __stdcall Get_OutlookVersion(/* out */ WideString &OutlookVersion) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &Parent) = 0 ;
	virtual HRESULT __stdcall Get_Saved(/* out */ Word &Saved) = 0 ;
	virtual HRESULT __stdcall Get_Sensitivity(/* out */ Activex::TOleEnum &Sensitivity) = 0 ;
	virtual HRESULT __stdcall Set_Sensitivity(Activex::TOleEnum Sensitivity) = 0 ;
	virtual HRESULT __stdcall Get_Size(/* out */ int &Size) = 0 ;
	virtual HRESULT __stdcall Get_Subject(/* out */ WideString &Subject) = 0 ;
	virtual HRESULT __stdcall Set_Subject(const WideString Subject) = 0 ;
	virtual HRESULT __stdcall Get_UnRead(/* out */ Word &UnRead) = 0 ;
	virtual HRESULT __stdcall Set_UnRead(Word UnRead) = 0 ;
	virtual HRESULT __stdcall Get_UserProperties(/* out */ _di_UserProperties &UserProperties) = 0 ;
	virtual HRESULT __stdcall Close(Activex::TOleEnum SaveMode) = 0 ;
	virtual HRESULT __stdcall Copy(/* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Display(const OleVariant Modal) = 0 ;
	virtual HRESULT __stdcall Move(const _di_MAPIFolder DestFldr, /* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Save(void) = 0 ;
	virtual HRESULT __stdcall SaveAs(const WideString Path, const OleVariant Type_) = 0 ;
	virtual HRESULT __stdcall PrintOut(void) = 0 ;
	virtual HRESULT __stdcall GetAssociatedTask(Word AddToTaskList, /* out */ _di__DTaskItem &Item) = 0 
		;
};

__interface _ITaskRequestUpdateItem;
typedef System::DelphiInterface<_ITaskRequestUpdateItem> _di__ITaskRequestUpdateItem;
__interface INTERFACE_UUID("{00063137-0000-0000-C000-000000000046}") _ITaskRequestUpdateItem  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Actions(/* out */ _di_Actions &Actions) = 0 ;
	virtual HRESULT __stdcall Get_Application_(/* out */ _di__DApplication &Application_) = 0 ;
	virtual HRESULT __stdcall Get_Attachments(/* out */ _di_Attachments &Attachments) = 0 ;
	virtual HRESULT __stdcall Get_BillingInformation(/* out */ WideString &BillingInformation) = 0 ;
	virtual HRESULT __stdcall Set_BillingInformation(const WideString BillingInformation) = 0 ;
	virtual HRESULT __stdcall Get_Body(/* out */ WideString &Body) = 0 ;
	virtual HRESULT __stdcall Set_Body(const WideString Body) = 0 ;
	virtual HRESULT __stdcall Get_Categories(/* out */ WideString &Categories) = 0 ;
	virtual HRESULT __stdcall Set_Categories(const WideString Categories) = 0 ;
	virtual HRESULT __stdcall Get_Companies(/* out */ WideString &Companies) = 0 ;
	virtual HRESULT __stdcall Set_Companies(const WideString Companies) = 0 ;
	virtual HRESULT __stdcall Get_CreationTime(/* out */ System::TDateTime &CreationTime) = 0 ;
	virtual HRESULT __stdcall Get_EntryID(/* out */ WideString &EntryID) = 0 ;
	virtual HRESULT __stdcall Get_FormDescription(/* out */ _di_FormDescription &FormDescription) = 0 ;
		
	virtual HRESULT __stdcall Get_GetInspector(/* out */ _di_Inspector &GetInspector) = 0 ;
	virtual HRESULT __stdcall Get_Importance(/* out */ Activex::TOleEnum &Importance) = 0 ;
	virtual HRESULT __stdcall Set_Importance(Activex::TOleEnum Importance) = 0 ;
	virtual HRESULT __stdcall Get_LastModificationTime(/* out */ System::TDateTime &LastModificationTime
		) = 0 ;
	virtual HRESULT __stdcall Get_MessageClass(/* out */ WideString &MessageClass) = 0 ;
	virtual HRESULT __stdcall Set_MessageClass(const WideString MessageClass) = 0 ;
	virtual HRESULT __stdcall Get_Mileage(/* out */ WideString &Mileage) = 0 ;
	virtual HRESULT __stdcall Set_Mileage(const WideString Mileage) = 0 ;
	virtual HRESULT __stdcall Get_NoAging(/* out */ Word &NoAging) = 0 ;
	virtual HRESULT __stdcall Set_NoAging(Word NoAging) = 0 ;
	virtual HRESULT __stdcall Get_OutlookInternalVersion(/* out */ WideString &OutlookInternalVersion) = 0 
		;
	virtual HRESULT __stdcall Get_OutlookVersion(/* out */ WideString &OutlookVersion) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &Parent) = 0 ;
	virtual HRESULT __stdcall Get_Saved(/* out */ Word &Saved) = 0 ;
	virtual HRESULT __stdcall Get_Sensitivity(/* out */ Activex::TOleEnum &Sensitivity) = 0 ;
	virtual HRESULT __stdcall Set_Sensitivity(Activex::TOleEnum Sensitivity) = 0 ;
	virtual HRESULT __stdcall Get_Size(/* out */ int &Size) = 0 ;
	virtual HRESULT __stdcall Get_Subject(/* out */ WideString &Subject) = 0 ;
	virtual HRESULT __stdcall Set_Subject(const WideString Subject) = 0 ;
	virtual HRESULT __stdcall Get_UnRead(/* out */ Word &UnRead) = 0 ;
	virtual HRESULT __stdcall Set_UnRead(Word UnRead) = 0 ;
	virtual HRESULT __stdcall Get_UserProperties(/* out */ _di_UserProperties &UserProperties) = 0 ;
	virtual HRESULT __stdcall Close(Activex::TOleEnum SaveMode) = 0 ;
	virtual HRESULT __stdcall Copy(/* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
	virtual HRESULT __stdcall Display(const OleVariant Modal) = 0 ;
	virtual HRESULT __stdcall Move(const _di_MAPIFolder DestFldr, /* out */ _di_IDispatch &Item) = 0 ;
	virtual HRESULT __stdcall Save(void) = 0 ;
	virtual HRESULT __stdcall SaveAs(const WideString Path, const OleVariant Type_) = 0 ;
	virtual HRESULT __stdcall PrintOut(void) = 0 ;
	virtual HRESULT __stdcall GetAssociatedTask(Word AddToTaskList, /* out */ _di__DTaskItem &Item) = 0 
		;
};

__interface _IUserProperties;
typedef System::DelphiInterface<_IUserProperties> _di__IUserProperties;
__interface INTERFACE_UUID("{0006313D-0000-0000-C000-000000000046}") _IUserProperties  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Count(/* out */ int &Count) = 0 ;
	virtual HRESULT __stdcall Add(const WideString Name, Activex::TOleEnum Type_, const OleVariant AddToFolderFields
		, const OleVariant DisplayFormat, /* out */ _di_UserProperty &UserProperty) = 0 ;
	virtual HRESULT __stdcall Find(const WideString Name, const OleVariant Custom) = 0 ;
	virtual HRESULT __stdcall Item(const OleVariant Index, /* out */ _di_UserProperty &UserProperty) = 0 
		;
	virtual HRESULT __stdcall Remove(int Index) = 0 ;
};

__interface _IUserProperty;
typedef System::DelphiInterface<_IUserProperty> _di__IUserProperty;
__interface INTERFACE_UUID("{00063142-0000-0000-C000-000000000046}") _IUserProperty  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Formula(/* out */ WideString &Formula) = 0 ;
	virtual HRESULT __stdcall Set_Formula(const WideString Formula) = 0 ;
	virtual HRESULT __stdcall Get_Name(/* out */ WideString &Name) = 0 ;
	virtual HRESULT __stdcall Get_Parent(/* out */ _di_IDispatch &Parent) = 0 ;
	virtual HRESULT __stdcall Get_Type_(/* out */ Activex::TOleEnum &Type_) = 0 ;
	virtual HRESULT __stdcall Get_ValidationFormula(/* out */ WideString &ValidationFormula) = 0 ;
	virtual HRESULT __stdcall Set_ValidationFormula(const WideString ValidationFormula) = 0 ;
	virtual HRESULT __stdcall Get_ValidationText(/* out */ WideString &ValidationText) = 0 ;
	virtual HRESULT __stdcall Set_ValidationText(const WideString ValidationText) = 0 ;
	virtual HRESULT __stdcall Get_Value(/* out */ OleVariant &Value) = 0 ;
	virtual HRESULT __stdcall Set_Value(const OleVariant Value) = 0 ;
	virtual HRESULT __stdcall Delete(void) = 0 ;
};

__dispinterface INTERFACE_UUID("{00063042-0000-0000-C000-000000000046}") UserProperty  : public IDispatch 
	
{
	
};

__interface _IRecipientControl;
typedef System::DelphiInterface<_IRecipientControl> _di__IRecipientControl;
__interface INTERFACE_UUID("{D87E7E16-6897-11CE-A6C0-00AA00608FAA}") _IRecipientControl  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_Enabled(/* out */ Word &Enabled) = 0 ;
	virtual HRESULT __stdcall Set_Enabled(Word Enabled) = 0 ;
	virtual HRESULT __stdcall Get_BackColor(/* out */ int &BackColor) = 0 ;
	virtual HRESULT __stdcall Set_BackColor(int BackColor) = 0 ;
	virtual HRESULT __stdcall Get_ForeColor(/* out */ int &ForeColor) = 0 ;
	virtual HRESULT __stdcall Set_ForeColor(int ForeColor) = 0 ;
	virtual HRESULT __stdcall Get_ReadOnly(/* out */ Word &ReadOnly) = 0 ;
	virtual HRESULT __stdcall Set_ReadOnly(Word ReadOnly) = 0 ;
	virtual HRESULT __stdcall Get_Font(/* out */ _di_IFontDisp &Font) = 0 ;
	virtual HRESULT __stdcall Set_Font(const _di_IFontDisp Font) = 0 ;
	virtual HRESULT __stdcall Get_SpecialEffect(/* out */ int &Effect) = 0 ;
	virtual HRESULT __stdcall Set_SpecialEffect(int Effect) = 0 ;
};

__dispinterface _DRecipientControlEvents;
typedef System::DelphiInterface<_DRecipientControlEvents> _di__DRecipientControlEvents;
__dispinterface INTERFACE_UUID("{D87E7E17-6897-11CE-A6C0-00AA00608FAA}") _DRecipientControlEvents  : public IDispatch 
	
{
	
};

__interface _IDocSiteControl;
typedef System::DelphiInterface<_IDocSiteControl> _di__IDocSiteControl;
__interface INTERFACE_UUID("{43507DD0-811D-11CE-B565-00AA00608FAA}") _IDocSiteControl  : public IDispatch 
	
{
	
public:
	virtual HRESULT __stdcall Get_ReadOnly(/* out */ Word &ReadOnly) = 0 ;
	virtual HRESULT __stdcall Set_ReadOnly(Word ReadOnly) = 0 ;
};

__dispinterface _DDocSiteControlEvents;
typedef System::DelphiInterface<_DDocSiteControlEvents> _di__DDocSiteControlEvents;
__dispinterface INTERFACE_UUID("{50BB9B50-811D-11CE-B565-00AA00608FAA}") _DDocSiteControlEvents  : public IDispatch 
	
{
	
};

class DELPHICLASS CoApplication_;
class PASCALIMPLEMENTATION CoApplication_ : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__DApplication __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__DApplication __fastcall CreateRemote(TMetaClass* vmt, const 
		AnsiString MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoApplication_(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoApplication_(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoAppointmentItem;
class PASCALIMPLEMENTATION CoAppointmentItem : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__DAppointmentItem __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__DAppointmentItem __fastcall CreateRemote(TMetaClass* vmt, const 
		AnsiString MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoAppointmentItem(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoAppointmentItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoContactItem;
class PASCALIMPLEMENTATION CoContactItem : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__DContactItem __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__DContactItem __fastcall CreateRemote(TMetaClass* vmt, const 
		AnsiString MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoContactItem(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoContactItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoJournalItem;
class PASCALIMPLEMENTATION CoJournalItem : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__DJournalItem __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__DJournalItem __fastcall CreateRemote(TMetaClass* vmt, const 
		AnsiString MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoJournalItem(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoJournalItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoMailItem;
class PASCALIMPLEMENTATION CoMailItem : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__DMailItem __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__DMailItem __fastcall CreateRemote(TMetaClass* vmt, const AnsiString 
		MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoMailItem(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoMailItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS Co_MeetingCanceledItem;
class PASCALIMPLEMENTATION Co_MeetingCanceledItem : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__DMeetingCanceledItem __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__DMeetingCanceledItem __fastcall CreateRemote(TMetaClass* vmt
		, const AnsiString MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall Co_MeetingCanceledItem(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~Co_MeetingCanceledItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS Co_MeetingRequestAcceptedItem;
class PASCALIMPLEMENTATION Co_MeetingRequestAcceptedItem : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__DMeetingRequestAcceptedItem __fastcall Create(TMetaClass* vmt
		);
	/*         class method */ static _di__DMeetingRequestAcceptedItem __fastcall CreateRemote(TMetaClass* vmt
		, const AnsiString MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall Co_MeetingRequestAcceptedItem(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~Co_MeetingRequestAcceptedItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS Co_MeetingRequestDeclinedItem;
class PASCALIMPLEMENTATION Co_MeetingRequestDeclinedItem : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__DMeetingRequestDeclinedItem __fastcall Create(TMetaClass* vmt
		);
	/*         class method */ static _di__DMeetingRequestDeclinedItem __fastcall CreateRemote(TMetaClass* vmt
		, const AnsiString MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall Co_MeetingRequestDeclinedItem(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~Co_MeetingRequestDeclinedItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoMeetingRequestItem;
class PASCALIMPLEMENTATION CoMeetingRequestItem : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__DMeetingRequestItem __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__DMeetingRequestItem __fastcall CreateRemote(TMetaClass* vmt, 
		const AnsiString MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoMeetingRequestItem(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoMeetingRequestItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS Co_MeetingRequestTentativeItem;
class PASCALIMPLEMENTATION Co_MeetingRequestTentativeItem : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__DMeetingRequestTentativeItem __fastcall Create(TMetaClass* vmt
		);
	/*         class method */ static _di__DMeetingRequestTentativeItem __fastcall CreateRemote(TMetaClass* vmt
		, const AnsiString MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall Co_MeetingRequestTentativeItem(void) : System::TObject() { }
		
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~Co_MeetingRequestTentativeItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoNoteItem;
class PASCALIMPLEMENTATION CoNoteItem : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__DNoteItem __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__DNoteItem __fastcall CreateRemote(TMetaClass* vmt, const AnsiString 
		MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoNoteItem(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoNoteItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS Co_OfficeDocumentItem;
class PASCALIMPLEMENTATION Co_OfficeDocumentItem : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__DOfficeDocumentItem __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__DOfficeDocumentItem __fastcall CreateRemote(TMetaClass* vmt, 
		const AnsiString MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall Co_OfficeDocumentItem(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~Co_OfficeDocumentItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoPostItem;
class PASCALIMPLEMENTATION CoPostItem : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__DPostItem __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__DPostItem __fastcall CreateRemote(TMetaClass* vmt, const AnsiString 
		MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoPostItem(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoPostItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoRemoteItem;
class PASCALIMPLEMENTATION CoRemoteItem : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__DRemoteItem __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__DRemoteItem __fastcall CreateRemote(TMetaClass* vmt, const AnsiString 
		MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoRemoteItem(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoRemoteItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoReportItem;
class PASCALIMPLEMENTATION CoReportItem : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__DReportItem __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__DReportItem __fastcall CreateRemote(TMetaClass* vmt, const AnsiString 
		MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoReportItem(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoReportItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoTaskItem;
class PASCALIMPLEMENTATION CoTaskItem : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__DTaskItem __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__DTaskItem __fastcall CreateRemote(TMetaClass* vmt, const AnsiString 
		MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoTaskItem(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoTaskItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS Co_TaskRequestAcceptItem;
class PASCALIMPLEMENTATION Co_TaskRequestAcceptItem : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__DTaskRequestAcceptItem __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__DTaskRequestAcceptItem __fastcall CreateRemote(TMetaClass* vmt
		, const AnsiString MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall Co_TaskRequestAcceptItem(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~Co_TaskRequestAcceptItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS Co_TaskRequestDeclineItem;
class PASCALIMPLEMENTATION Co_TaskRequestDeclineItem : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__DTaskRequestDeclineItem __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__DTaskRequestDeclineItem __fastcall CreateRemote(TMetaClass* vmt
		, const AnsiString MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall Co_TaskRequestDeclineItem(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~Co_TaskRequestDeclineItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS CoTaskRequestItem;
class PASCALIMPLEMENTATION CoTaskRequestItem : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__DTaskRequestItem __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__DTaskRequestItem __fastcall CreateRemote(TMetaClass* vmt, const 
		AnsiString MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall CoTaskRequestItem(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~CoTaskRequestItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS Co_TaskRequestUpdateItem;
class PASCALIMPLEMENTATION Co_TaskRequestUpdateItem : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	/*         class method */ static _di__DTaskRequestUpdateItem __fastcall Create(TMetaClass* vmt);
	/*         class method */ static _di__DTaskRequestUpdateItem __fastcall CreateRemote(TMetaClass* vmt
		, const AnsiString MachineName);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall Co_TaskRequestUpdateItem(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~Co_TaskRequestUpdateItem(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE GUID LIBID_Outlook;
extern PACKAGE GUID IID__IItemEvents;
extern PACKAGE GUID DIID__DItemEvents;
extern PACKAGE GUID IID__IAction;
extern PACKAGE GUID DIID_Action;
extern PACKAGE GUID IID__IActions;
extern PACKAGE GUID DIID_Actions;
extern PACKAGE GUID IID__IApplication;
extern PACKAGE GUID DIID__DApplication;
extern PACKAGE GUID CLASS_Application_;
extern PACKAGE GUID IID__IAppointmentItem;
extern PACKAGE GUID DIID__DAppointmentItem;
extern PACKAGE GUID CLASS_AppointmentItem;
extern PACKAGE GUID IID__IAttachment;
extern PACKAGE GUID DIID_Attachment;
extern PACKAGE GUID IID__IAttachments;
extern PACKAGE GUID DIID_Attachments;
extern PACKAGE GUID IID__IContactItem;
extern PACKAGE GUID DIID__DContactItem;
extern PACKAGE GUID CLASS_ContactItem;
extern PACKAGE GUID IID__IExplorer;
extern PACKAGE GUID DIID_Explorer;
extern PACKAGE GUID IID__IFolders;
extern PACKAGE GUID DIID_Folders;
extern PACKAGE GUID IID__IFormDescription;
extern PACKAGE GUID DIID_FormDescription;
extern PACKAGE GUID IID__IInspector;
extern PACKAGE GUID DIID_Inspector;
extern PACKAGE GUID IID__IItems;
extern PACKAGE GUID DIID_Items;
extern PACKAGE GUID IID__IJournalItem;
extern PACKAGE GUID DIID__DJournalItem;
extern PACKAGE GUID CLASS_JournalItem;
extern PACKAGE GUID IID__IMailItem;
extern PACKAGE GUID DIID__DMailItem;
extern PACKAGE GUID CLASS_MailItem;
extern PACKAGE GUID IID__IMAPIFolder;
extern PACKAGE GUID DIID_MAPIFolder;
extern PACKAGE GUID IID__IMeetingCanceledItem;
extern PACKAGE GUID DIID__DMeetingCanceledItem;
extern PACKAGE GUID CLASS__MeetingCanceledItem;
extern PACKAGE GUID IID__IMeetingRequestAcceptedItem;
extern PACKAGE GUID DIID__DMeetingRequestAcceptedItem;
extern PACKAGE GUID CLASS__MeetingRequestAcceptedItem;
extern PACKAGE GUID IID__IMeetingRequestDeclinedItem;
extern PACKAGE GUID DIID__DMeetingRequestDeclinedItem;
extern PACKAGE GUID CLASS__MeetingRequestDeclinedItem;
extern PACKAGE GUID IID__IMeetingRequestItem;
extern PACKAGE GUID DIID__DMeetingRequestItem;
extern PACKAGE GUID CLASS_MeetingRequestItem;
extern PACKAGE GUID IID__IMeetingRequestTentativeItem;
extern PACKAGE GUID DIID__DMeetingRequestTentativeItem;
extern PACKAGE GUID CLASS__MeetingRequestTentativeItem;
extern PACKAGE GUID IID__INameSpace;
extern PACKAGE GUID DIID_NameSpace;
extern PACKAGE GUID IID__INoteItem;
extern PACKAGE GUID DIID__DNoteItem;
extern PACKAGE GUID CLASS_NoteItem;
extern PACKAGE GUID IID__IOfficeDocumentItem;
extern PACKAGE GUID DIID__DOfficeDocumentItem;
extern PACKAGE GUID CLASS__OfficeDocumentItem;
extern PACKAGE GUID IID__IPages;
extern PACKAGE GUID DIID_Pages;
extern PACKAGE GUID IID__IPostItem;
extern PACKAGE GUID DIID__DPostItem;
extern PACKAGE GUID CLASS_PostItem;
extern PACKAGE GUID IID__IRecipient;
extern PACKAGE GUID DIID_Recipient;
extern PACKAGE GUID IID__IRecipients;
extern PACKAGE GUID DIID_Recipients;
extern PACKAGE GUID IID__IRecurrencePattern;
extern PACKAGE GUID DIID_RecurrencePattern;
extern PACKAGE GUID IID__IRemoteItem;
extern PACKAGE GUID DIID__DRemoteItem;
extern PACKAGE GUID CLASS_RemoteItem;
extern PACKAGE GUID IID__IReportItem;
extern PACKAGE GUID DIID__DReportItem;
extern PACKAGE GUID CLASS_ReportItem;
extern PACKAGE GUID IID__ITaskItem;
extern PACKAGE GUID DIID__DTaskItem;
extern PACKAGE GUID CLASS_TaskItem;
extern PACKAGE GUID IID__ITaskRequestAcceptItem;
extern PACKAGE GUID DIID__DTaskRequestAcceptItem;
extern PACKAGE GUID CLASS__TaskRequestAcceptItem;
extern PACKAGE GUID IID__ITaskRequestDeclineItem;
extern PACKAGE GUID DIID__DTaskRequestDeclineItem;
extern PACKAGE GUID CLASS__TaskRequestDeclineItem;
extern PACKAGE GUID IID__ITaskRequestItem;
extern PACKAGE GUID DIID__DTaskRequestItem;
extern PACKAGE GUID CLASS_TaskRequestItem;
extern PACKAGE GUID IID__ITaskRequestUpdateItem;
extern PACKAGE GUID DIID__DTaskRequestUpdateItem;
extern PACKAGE GUID CLASS__TaskRequestUpdateItem;
extern PACKAGE GUID IID__IUserProperties;
extern PACKAGE GUID DIID_UserProperties;
extern PACKAGE GUID IID__IUserProperty;
extern PACKAGE GUID DIID_UserProperty;
extern PACKAGE GUID IID__IRecipientControl;
extern PACKAGE GUID DIID__DRecipientControl;
extern PACKAGE GUID DIID__DRecipientControlEvents;
extern PACKAGE GUID CLASS__RecipientControl;
extern PACKAGE GUID IID__IDocSiteControl;
extern PACKAGE GUID DIID__DDocSiteControl;
extern PACKAGE GUID DIID__DDocSiteControlEvents;
extern PACKAGE GUID CLASS__DocSiteControl;
static const Shortint olByValue = 0x1;
static const Shortint olByReference = 0x4;
static const Shortint olEmbeddedItem = 0x5;
static const Shortint olOLE = 0x6;
static const Shortint olFree = 0x0;
static const Shortint olTentative = 0x1;
static const Shortint olBusy = 0x2;
static const Shortint olOutOfOffice = 0x3;
static const Shortint olSunday = 0x1;
static const Shortint olMonday = 0x2;
static const Shortint olTuesday = 0x4;
static const Shortint olWednesday = 0x8;
static const Shortint olThursday = 0x10;
static const Shortint olFriday = 0x20;
static const Shortint olSaturday = 0x40;
static const Shortint olFolderDeletedItems = 0x3;
static const Shortint olFolderOutbox = 0x4;
static const Shortint olFolderSentMail = 0x5;
static const Shortint olFolderInbox = 0x6;
static const Shortint olFolderCalendar = 0x9;
static const Shortint olFolderContacts = 0xa;
static const Shortint olFolderJournal = 0xb;
static const Shortint olFolderNotes = 0xc;
static const Shortint olFolderTasks = 0xd;
static const Shortint olFolderDisplayNormal = 0x0;
static const Shortint olFolderDisplayFolderOnly = 0x1;
static const Shortint olFolderDisplayNoNavigation = 0x2;
static const Shortint olDefaultRegistry = 0x0;
static const Shortint olOrganizationRegistry = 0x4;
static const Shortint olPersonalRegistry = 0x2;
static const Shortint olFolderRegistry = 0x3;
static const Shortint olUnspecified = 0x0;
static const Shortint olFemale = 0x1;
static const Shortint olMale = 0x2;
static const Shortint olImportanceLow = 0x0;
static const Shortint olImportanceNormal = 0x1;
static const Shortint olImportanceHigh = 0x2;
static const Shortint olSave = 0x0;
static const Shortint olDiscard = 0x1;
static const Shortint olPromptForSave = 0x2;
static const Shortint olMailItem = 0x0;
static const Shortint olAppointmentItem = 0x1;
static const Shortint olContactItem = 0x2;
static const Shortint olTaskItem = 0x3;
static const Shortint olJournalItem = 0x4;
static const Shortint olNoteItem = 0x5;
static const Shortint olPostItem = 0x6;
static const Shortint olAssociatedContact = 0x1;
static const Shortint olNone = 0x0;
static const Shortint olHome = 0x1;
static const Shortint olBusiness = 0x2;
static const Shortint olOther = 0x3;
static const Shortint olOriginator = 0x0;
static const Shortint olTo = 0x1;
static const Shortint olCC = 0x2;
static const Shortint olBCC = 0x3;
static const Shortint olOrganizer = 0x0;
static const Shortint olRequired = 0x1;
static const Shortint olOptional = 0x2;
static const Shortint olResource = 0x3;
static const Shortint olNonMeeting = 0x0;
static const Shortint olMeeting = 0x1;
static const Shortint olMeetingReceived = 0x3;
static const Shortint olMeetingCanceled = 0x5;
static const Shortint olBlue = 0x0;
static const Shortint olGreen = 0x1;
static const Shortint olPink = 0x2;
static const Shortint olYellow = 0x3;
static const Shortint olWhite = 0x4;
static const Shortint olRecursDaily = 0x0;
static const Shortint olRecursWeekly = 0x1;
static const Shortint olRecursMonthly = 0x2;
static const Shortint olRecursMonthNth = 0x3;
static const Shortint olRecursYearly = 0x5;
static const Shortint olRecursYearNth = 0x6;
static const Shortint olRemoteStatusNone = 0x0;
static const Shortint olUnMarked = 0x1;
static const Shortint olMarkedForDownload = 0x2;
static const Shortint olMarkedForCopy = 0x3;
static const Shortint olMarkedForDelete = 0x4;
static const Shortint olMeetingAccepted = 0x3;
static const Shortint olMeetingDeclined = 0x4;
static const Shortint olMeetingTentative = 0x2;
static const Shortint olResponseNone = 0x0;
static const Shortint olResponseOrganized = 0x1;
static const Shortint olResponseTentative = 0x2;
static const Shortint olResponseAccepted = 0x3;
static const Shortint olResponseDeclined = 0x4;
static const Shortint olResponseNotResponded = 0x5;
static const Shortint olTXT = 0x0;
static const Shortint olRTF = 0x1;
static const Shortint olTemplate = 0x2;
static const Shortint olMSG = 0x3;
static const Shortint olDoc = 0x4;
static const Shortint olNormal = 0x0;
static const Shortint olPersonal = 0x1;
static const Shortint olPrivate = 0x2;
static const Shortint olConfidential = 0x3;
static const Shortint olNoFlag = 0x0;
static const Shortint olFlagComplete = 0x1;
static const Shortint olFlagMarked = 0x2;
static const Shortint olTaskNotDelegated = 0x0;
static const Shortint olTaskDelegationUnknown = 0x1;
static const Shortint olTaskDelegationAccepted = 0x2;
static const Shortint olTaskDelegationDeclined = 0x3;
static const Shortint olNewTask = 0x0;
static const Shortint olDelegatedTask = 0x1;
static const Shortint olOwnTask = 0x2;
static const Shortint olUpdate = 0x1;
static const Shortint olFinalStatus = 0x2;
static const Shortint olTaskSimple = 0x0;
static const Shortint olTaskAssign = 0x1;
static const Shortint olTaskAccept = 0x2;
static const Shortint olTaskDecline = 0x3;
static const Shortint olTaskNotStarted = 0x0;
static const Shortint olTaskInProgress = 0x1;
static const Shortint olTaskComplete = 0x2;
static const Shortint olTaskWaiting = 0x3;
static const Shortint olTaskDeferred = 0x4;
static const Shortint olTrackingNone = 0x0;
static const Shortint olTrackingDelivered = 0x1;
static const Shortint olTrackingNotDelivered = 0x2;
static const Shortint olTrackingNotRead = 0x3;
static const Shortint olTrackingRecallFailure = 0x4;
static const Shortint olTrackingRecallSuccess = 0x5;
static const Shortint olTrackingRead = 0x6;
static const Shortint olTrackingReplied = 0x7;
static const Shortint olText = 0x1;
static const Shortint olNumber = 0x3;
static const Shortint olDateTime = 0x5;
static const Shortint olYesNo = 0x6;
static const Shortint olDuration = 0x7;
static const Shortint olKeywords = 0xb;
static const Shortint olPercent = 0xc;
static const Shortint olCurrency = 0xe;
static const Shortint olFormula = 0x12;
static const Shortint olCombination = 0x13;
static const Shortint olReply = 0x0;
static const Shortint olReplyAll = 0x1;
static const Shortint olForward = 0x2;
static const Shortint olReplyFolder = 0x3;
static const Shortint olRespond = 0x4;
static const Shortint olOmitOriginalText = 0x0;
static const Shortint olEmbedOriginalItem = 0x1;
static const Shortint olIncludeOriginalText = 0x2;
static const Shortint olIndentOriginalText = 0x3;
static const Shortint olLinkOriginalItem = 0x4;
static const Shortint olUserPreference = 0x5;
static const Shortint olOpen = 0x0;
static const Shortint olSend = 0x1;
static const Shortint olPrompt = 0x2;
static const Shortint olDontShow = 0x0;
static const Shortint olMenu = 0x1;
static const Shortint olMenuAndToolbar = 0x2;

}	/* namespace Opolk97 */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Opolk97;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// OpOlk97
