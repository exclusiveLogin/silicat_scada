�
 TACAUTOUPGRADEREDITOR 0?  TPF0TacAutoUpgraderEditoracAutoUpgraderEditorLeftMTopwBorderIconsbiSystemMenubiHelp BorderStylebsDialogCaption$Current Version: Upgrade informationClientHeight`ClientWidtho
Font.ColorclWindowTextFont.Height�	Font.NameMS Sans Serif
Font.Style PositionpoScreenCenterOnClose	FormCloseOnShowFormShowPixelsPerInch`
TextHeight 	TGroupBox	GroupBox1LeftTop WidthkHeightACaption Version info TabOrder  TLabelLabel1LeftTopWidthHeightHint|Version Date
Date ofCaptionDate:   TLabelLabel2LeftTop*Width+HeightHint|[B]Version Number[]
dfdCaptionNumber:   TLabelLabel3Left� Top
WidthIHeightHinte  |[BU]Version Control
[]Specify here the type of version control that AutoUpgrader will use. Version can be controlled [U]by Date[] or [U]by Version Number[].

If you'd like to perform a version control [U]by Date[] then AutoUpgrader will ensures that new version is available if the [GREEN]#date[DEF] parameter in the Info-file is higher than [B][NAVY]VersionDate[DEF] property of AutoUpgrader component.

If version control performs [U]by Version Number,[] AutoUpgrader will upgrade the application only if [GREEN]#version[DEF] parameter in the Info-file is higher than [B][NAVY]VersionNumber[DEF] property.CaptionVersion control:  TEditDateEditLeft6TopWidth� HeightHintK  |[BU]Version Date
[]The release date of current program version. This date will be present in [B][NAVY]VersionDate[DEF] property and [GREEN]#date[DEF] parameter of the Info-file.

When you releasing the new version and uploading new Information file to the Web (to location specified by [B][NAVY]InfoFileURL[DEF] property), the AutoUpgrader will check the Info-file in the Web. If the [GREEN]#date[DEF] parameter is higher than [B][NAVY]VersionDate[DEF] property, AutoUpgrader will upgrade the application.

[B]Note
 []Date should be specified in [B][MAROON]MM/DD/YYYY[DEF] format.TabOrder OnExitDateEditExit  TEdit
NumberEditLeft6Top&Width� HeightHint	  |[BU]Version Number
[]The release date of current program version. This date will be present in [B][NAVY]VersionNumber[DEF] property and [GREEN]#version[DEF] parameter of the Info-file.

When you releasing the new version and uploading new Information file to the Web (to location specified by [B][NAVY]InfoFileURL[DEF] property), the AutoUpgrader will check the Info-file in the Web. If the [GREEN]#version[DEF] parameter is higher than [B][NAVY]VersionNumber[DEF] property, AutoUpgrader will upgrade the application.TabOrder  TRadioButtonByDateRadioLeft� TopWidth[HeightHinte  |[BU]Version Control
[]Specify here the type of version control that AutoUpgrader will use. Version can be controlled [U]by Date[] or [U]by Version Number[].

If you'd like to perform a version control [U]by Date[] then AutoUpgrader will ensures that new version is available if the [GREEN]#date[DEF] parameter in the Info-file is higher than [B][NAVY]VersionDate[DEF] property of AutoUpgrader component.

If version control performs [U]by Version Number,[] AutoUpgrader will upgrade the application only if [GREEN]#version[DEF] parameter in the Info-file is higher than [B][NAVY]VersionNumber[DEF] property.CaptionBy DateChecked	TabOrderTabStop	OnClickByDateRadioClick  TRadioButtonByNumberRadioLeft� Top*Width[HeightHinte  |[BU]Version Control
[]Specify here the type of version control that AutoUpgrader will use. Version can be controlled [U]by Date[] or [U]by Version Number[].

If you'd like to perform a version control [U]by Date[] then AutoUpgrader will ensures that new version is available if the [GREEN]#date[DEF] parameter in the Info-file is higher than [B][NAVY]VersionDate[DEF] property of AutoUpgrader component.

If version control performs [U]by Version Number,[] AutoUpgrader will upgrade the application only if [GREEN]#version[DEF] parameter in the Info-file is higher than [B][NAVY]VersionNumber[DEF] property.Caption	By NumberTabOrderOnClickByDateRadioClick   	TGroupBox	GroupBox2LeftTopBWidthkHeight}Caption' URLs to files which should be updated TabOrder TButtonAddBtnLeftTopWidthIHeightCaption&Add...TabOrder OnClickAddBtnClick  TButton	DeleteBtnLeftTop)WidthIHeightCaption&DeleteEnabledTabOrderOnClickDeleteBtnClick  TButtonCheckURLBtnLeftTopOWidthIHeightHintn|[B]Check URL
[]Click to check out whether the file specified in the list are really exists in that location.Caption
&Check URLEnabledTabOrderOnClickCheckURLBtnClick  TPanelPanel1LeftTophWidthgHeightAlignalBottom
BevelOuterbvNoneTabOrder TLabelLabel6LeftTopWidthRHeightCaptionUpgrade method:  TRadioButtonReplaceRadioLeftVTopWidthSHeightHint  |[B]Self-upgrade
[]Check this box if you want to automatically upgrade your software using just AutoUpgrader without any external programs. When this option is turned on, the AutoUpgrader will download all required files from the Web and replace the old ones with newer.CaptionSelf-upgradeTabOrder   TRadioButtonRedirectRadioLeft TopWidtheHeightHint�|[B]Redirect to URL
[]Check this box if you do NOT want to perform automatic upgrade and just redirect user to the first URL listed here.CaptionRedirect to URLTabOrder  TRadioButton
SetupRadioLeft� TopWidthIHeightHint�|[B]Use Setup
[]Check this box if you would like to use AutoUpgrader for downlading the "external"  setup-file which will locally extract all requrired files.Caption	Use SetupTabOrder   TacListViewListViewLeftTopWidthHeightYHint�  |[B]URLs list
[]This list used to specify locations of files which should be updated on application update. You can point URLs to one or more files which must be downloaded and used in current version of your application.

[B]Note
[]You can point URLs to HTTP servers only. [U]FTP is not supported[] [GRAY](however we plan to add this feature in future releases of AutoUpgrader [I]AK[].AlignalLeftHideSelectionMultiSelect		PopupMenu	PopupMenuShowColumnHeadersTabOrderOnChangeListViewChange
OnDblClickListViewDblClick
OnKeyPressListViewKeyPressRegistrySaver.EnabledRegistrySaver.RegKey*\Software\CompanyName\ProgramName\ListView	GridLinesHotTrack	RowSelectFlatScrollBars	HoverTime�ColumnsCaptionFiles  SmallImages	ImageList   	TGroupBox	GroupBox3LeftTop� WidthkHeightCaption Release Notes Message TabOrder TPanelPanel2LeftTopWidthgHeightAlignalTop
BevelOuterbvNoneTabOrder  TSpeedButtonBoldBtnLeftTop WidthHeightHint�Bold|[B]Bold
[]Makes selected text and numbers bold.  If the selection is already bold, clicking it will remove the formatting.
AllowAllUp	
GroupIndex
Glyph.Data
�   �   BM�       v   (               �   �  �               �  �   �� �   � � ��  ��� ���   �  �   �� �   � � ��  ��� wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwp   wwww p wwww p wwww p wwww   wwww p wwww p wwww p wwwp   wwwwwwwwwwwwwwwwwwwwwwwwwwOnClickBoldBtnClick  TSpeedButton	ItalicBtnLeftTop WidthHeightHint�Italic|[BI]Italic
[]Makes selected text and numbers italic. If the selection is already italic, clicking it will remove the formatting.
AllowAllUp	
GroupIndex
Glyph.Data
�   �   BM�       v   (               �   �  �               �  �   �� �   � � ��  ��� ���   �  �   �� �   � � ��  ��� wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwp  wwwwwpwwwwwwx wwwwwww �wwwwww�wwwwwwpwwwwwwx wwwwwww �wwwwwp  wwwwwwwwwwwwwwwwwwwwwwwwwwOnClickItalicBtnClick  TSpeedButtonUnderlineBtnLeft/Top WidthHeightHint�Underline|[BU]Underline[]
Applies the underline text character style to the selected text. If the selection is already underlined, clicking it will remove the formatting.
AllowAllUp	
GroupIndex
Glyph.Data
�   �   BM�       v   (               �   �  �               �  �   �� �   � � ��  ��� ���   �  �   �� �   � � ��  ��� wwwwwwwwwwwwwwwwwwwwwwwwwp    wwwwwwwwwwwwp  wwwww ��wwww wpwwww wpwwww wpwwww wpwwww wpwwww wpwwwp   wwwwwwwwwwwwwwwwwwOnClickUnderlineBtnClick  TSpeedButton	StrikeBtnLeftFTop WidthHeightHint�Strike out|[BS]Strike out
[]Applies the striked out text character style to the selected text. If the selection is already striked, clicking it will remove the formatting.
AllowAllUp	
GroupIndex
Glyph.Data
�   �   BM�       v   (               �   �  �               �  �   �� �   � � ��  ��� ���   �  �   �� �   � � ��  ��� wwwwwwwwwwwwwwwwwwwwwwwwwwp� �wwwwpxwwwwp�w wwwwpwx wwwwwx�wwwp     wwwx �wwwwwpwpwwwwpw�wwwwxx wwwww��wwwwwwwwwwwwwwwwwwOnClickStrikeBtnClick  TSpeedButtonRichUndoBtnLeft� Top WidthHeightHintNUndo|[B]Undo
[]Reverses the last command or deletes the last entry you typed.Enabled
Glyph.Data
z  v  BMv      v   (                                        �  �   �� �   � � ��  ��� ���   �  �   �� �   � � ��  ��� wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwxGww��ww�wwDDGwwHww���ww��wDDwwwtww��wwwx�wDGwwwtww���wwx�wDtwwwtww�x�wxwwGwHwwHww�w���wwwwxDD�wwwww��wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww	NumGlyphsOnClickRichUndoBtnClick  TSpeedButton
RichCutBtnLeft� Top WidthHeightHint�Cut|[B]Cut
[]Removes selected items from the page and moves them to the Clipboard, replacing the Clipboard's current contents. If you paste cutted text into context sensitive help editor, only plain text will pasted.Enabled
Glyph.Data
z  v  BMv      v   (                                        �  �   �� �   � � ��  ��� ���   �  �   �� �   � � ��  ��� wwwwwwwwww�wwwwwwDwwwwwww�w�wwwtwGtGwwwx��x��wwtwGGtwwwx���x�wwtwGGtwwwx��x�wwwDGGtwwww����wwwwwGDGwwwww���wwwww@Gwwwwww��wwwwwwpwwwwwwwx�wwwwww wwwwww��wwwwwwwwwwww���wwwwp wwwwwx���wwwwpwpwwwwwx�x�wwwwpwpwwwwwx�x�wwwwpwpwwwwwxwxwwwwwwwwwwwwwwwwwww	NumGlyphsOnClickRichCutBtnClick  TSpeedButtonRichCopyBtnLeft� Top WidthHeightHint�  Copy|[B]Copy
[]Copies selected items from the page and moves them to the Clipboard, replacing the Clipboard's current contents. If you paste cutted text into context sensitive help editor, only plain text will pasted.

If you would like to copy the text for context-sensitive help to paste it to another control - switch to [B]Tag Editor[] mode to remain tags and formatting untouched.Enabled
Glyph.Data
z  v  BMv      v   (                                        �  �   �� �   � � ��  ��� ���   �  �   �� �   � � ��  ��� wwwwwwwwwwwwwwwwwwwwwwwwwww����wwwDDDDGwww�����wwwO���Gwww����wwwO  G�������   O���G���������O  G�������  O���G���������O �DG����x��  O���w����wx�w��O��Gw������w �DDDww��x���ww���wwww�wx�wwww��wwww����wwww   wwwww���wwwwwwwwwwwwwwwwwwwww	NumGlyphsOnClickRichCopyBtnClick  TSpeedButtonRichPasteBtnLeft� Top WidthHeightHint+  Paste|[B]Paste
[]Inserts the contents of the Clipboard at the insertion point. If there are currently selected text, they are overwritten. When you paste text, some of its character attributes may be overridden. Please note that only plain text could be pasted to the context sensitive help editor.Enabled
Glyph.Data
z  v  BMv      v   (                                        �  �   �� �   � � ��  ��� ���   �  �   �� �   � � ��  ��� """""""""""/����"""DDDDD"�������   O����(������88ODDD􈈈����x��O���􈈈���88ODODD����������O��OB����ww��88O��D"����������DDD@"��������888880"���������   �"���������www0"��������� ���"�������"   �  "(������"""  """""(��"""""""""""""""""""	NumGlyphsOnClickRichPasteBtnClick  	TComboBoxColorComboBoxLeftbTop WidthOHeightHint�Select color|[B]Font Color
[]Formats selected text with the color you click. You can choose from a set of standard colors that match the theme.TabStopStylecsOwnerDrawFixed
ItemHeightItems.StringsBlackMaroonGreenOliveNavyPurpleTealGraySilverRedLimeYellowBlueFuchsiaAquaWhite TabOrder OnChangeColorComboBoxChange
OnDrawItemColorComboBoxDrawItem   TBitBtnTestBtnLeftTopWidthIHeightHint�|[B]Test upgrade dialog
[]Click this button to see the dialog box which will displayed at once the AutoUpgrader found the newest versions of this software.Caption&TestTabOrderOnClickTestBtnClick
Glyph.Data
�   �   BM�       v   (               p                        �  �   �� �   � � ��  ��� ���   �  �   �� �   � � ��  ��� wwxwwww wwpwww wwp�www wwp�ww wx �ww ww�www wwp�ww wwp��ww w� � �w wp��ww ww��ww ww��w wwp  w wwwwwww   	TRichEditRichMessageLeftTop'WidthgHeightVHint  |[B]Upgrade message
[]This is the message that will displayed after detecting that the newest version of your software is available.

Text of this message may contain rich-text formatting.
Use "Test" button to test how this message appears in dialog box.AlignalClient	PopupMenuRichPopupMenuTabOrder
OnKeyPressRichMessageKeyPressOnSelectionChangeRichMessageSelectionChange  TMemotmpMemoLeft TopfWidthHeight!TabStopTabOrderVisible   TButtonOKBtnLeft� TopEWidthKHeightHint;|Closes the dialog box and saves any changes you have made.CaptionOKDefault	ModalResultTabOrderOnClick
OKBtnClick  TButton	CancelBtnLeft TopEWidthKHeightHint@|Closes the dialog box without saving any changes you have made.Cancel	CaptionCancelModalResultTabOrderOnClickCancelBtnClick  TButton	ExportBtnLeftTopEWidth� HeightHint�  |[BU]Export to Info-File
[]Exports the information specified in this property editor to a special file, compatible with any version of AutoUpgrader component.
Information which will be stored to this file will contains complete information, required to automate upgrade all previous versions of this program via Internet.

[B][MAROON]IMPORTANT:[DEF] To let AutoUpgrader check out for newest updates [U]you must upload this file to the web[], to location specified in the [B]InfoFileURL[] property.Caption&Export to Info-File...
Font.ColorclWindowTextFont.Height�	Font.NameMS Sans Serif
Font.StylefsBold 
ParentFontTabOrderOnClickExportBtnClick  TSaveDialog
SaveDialog
DefaultExtinfFileEditStylefsEditFilterHInfo files (*.inf, *.info, *.nfo)|*.inf;*.info;*.nfo|All files (*.*)|*.*OptionsofOverwritePromptofCreatePromptofNoReadOnlyReturn Left*Top~  TacFormHelpacFormHelp1CaptionButton.BtnOrder CaptionButton.CursorDowncrHelpCaptionButton.HintHelpCaptionButton.VisibleSystemMenu.ApplyToMenu	SystemMenu.CaptionWhat's This?SystemMenu.PositionSystemMenu.SeparatorsseBefore DelayInterval Cursor	crDefault
CursorHelpcrHelp
Font.ColorclWindowTextFont.Height�	Font.NameMS Sans Serif
Font.Style 
ParentFont	WhatsThis.Caption&What's This?LeftTop~  TacExtAssociationacExtAssociation
AccessMode
amReadOnly	IconIndex LeftTopb  
TImageList	ImageListLeft*Topb  
TPopupMenu	PopupMenuLeftFTopb 	TMenuItemAddItemCaption&Add...ShortCut OnClickAddBtnClick  	TMenuItem
RenameItemCaption&RenameShortCut OnClickRenameItemClick  	TMenuItem
DeleteItemCaption&DeleteShortCut OnClickDeleteBtnClick  	TMenuItemN2Caption-ShortCut   	TMenuItemCheckURLItemCaption
&Check URLShortCut OnClickCheckURLBtnClick   
TPopupMenuRichPopupMenuLeftFTop~ 	TMenuItemRichCutItemCaptionCu&tEnabledShortCut OnClickRichCutBtnClick  	TMenuItemRichCopyItemCaption&CopyEnabledShortCut OnClickRichCopyBtnClick  	TMenuItemRichPasteItemCaption&PasteEnabledShortCut OnClickRichPasteBtnClick  	TMenuItemRichDeleteItemCaption&DeleteEnabledShortCut OnClickRichDeleteItemClick  	TMenuItem	MenuItem1Caption-ShortCut   	TMenuItemRichSelectAllItemCaptionSelect &AllShortCut OnClickRichSelectAllItemClick   TTimerTimerInterval2OnTimer
TimerTimerLeftbTopb   