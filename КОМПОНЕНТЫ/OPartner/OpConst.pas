{*********************************************************}
{*               OpConst.PAS 1.61                        *}
{*       Copyright (c) TurboPower Software 2000          *}
{*                 All rights reserved.                  *}
{*********************************************************}

{$I OPDEFINE.INC}

unit OpConst;

interface

resourcestring
  SCantSetWhileConnected = 'This property cannot be set while the server is connected.';
  SNeedDCOM = 'You must install DCOM in order to run objects remotely.';
  SFailCreateOutlook = 'Failed to create Outlook instance.';
  SFailFindMapiNamespace = 'Failed to find MAPI namespace.';
  SMethodNeedsConnection = 'You must be connected in order to call this method.';
  SPropNeedsConnection = 'You must be connected in order to access this property.';
  SFailedToResolveRecipients = 'Failed to resolve the address of one or more recipients.';
  SOl97NotSupported = 'Outlook 97 is not supported.  Please update to a newer version of Outlook.';
  SDSNeedsOutlook = 'The "Outlook" property must be set before opening the dataset.';
  SCantSetFieldData = 'Failed to set field data.';
  SFailFetch = 'Failed to fetch contact record.';
  SFailConnectItems = 'Failed to connect to address list.';
  SListNameEmpty = 'You must specify a ListName in order to connect to a folder.';
  SProductEquals = 'Product=';
  SVersionEquals = 'Version=';
  SNestedItem = 'Nested Item';
  SProdName = 'OfficePartner';
  SCompanyName = 'TurboPower';
  SVersion = '1.60';
  SRangeFail = 'Range Item Not Found.';
  SInvalidRangeSelection = 'A Range must be selected in the current Worksheet.';
  SInvalidRangeAddress = 'Invalid Range Address.';
  // File masks
  SAllFiles = 'All Files|*.*';
  SPPFilter = 'PowerPoint Presentations *.ppt|*.ppt|All Files *.*|*.*';
  Sppt = '*.ppt';
  SWordFilter = 'Word Documents *.doc|*.doc|Rich Text Format *.rtf|*.rtf|HTML Documents *.htm|*.htm|All Files *.*|*.*';
  SWordDef = '*.doc';
  SExcelFilter = 'Excel Workbooks *.xls|*.xls|Excel Templates *.xlt|*.xlt|All Files *.*|*.*';
  SExcelDef = '*.xls';
  SAssistantFilter = 'Assistant 97 *.act|*.act|Assistant 2000 *.acs|*acs|All Files *.*|*.*';
  SAssistantDef = '*.acs';
  SModelDatasetMissing = 'Model Dataset must be assigned first.';
  SModelDatasetInactive = 'Model Dataset must first be opened.';
  SModelNotAssigned = 'A Model must be assigned in order to populate';
  SHyperlinkError = 'Error creating Hyperlink, Check Cell and Address';
  SCircularModelLink = 'Circular Model link not allowed.';
  SHyperlinkLinkAddress = 'Address is a read only property in Word 97';
  STextMustBeSelected = 'Text in the Document must be selected to add this item';
  SDSNOP = 'DSN=OfficePartnerTempDS';
  SDescODBC = 'Description=This is an OfficePartner Temp DataSource';
  SDefODBCDir = 'DEFAULTDIR=';
  SODBCFileType = 'FileType=Text';
  SMaxODBCRows = 'MaxScanRows=25';
  SMSODBCTextDrv = 'Microsoft Text Driver (*.txt; *.csv)';
implementation

end.
