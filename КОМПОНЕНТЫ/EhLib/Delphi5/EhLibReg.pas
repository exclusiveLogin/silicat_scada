{*******************************************************}
{                                                       }
{                       EhLib v1.53                     }
{                    Registration unit                  }
{                                                       }
{   Copyright (c) 1998, 2000 by Dmitry V. Bolshakov     }
{                                                       }
{*******************************************************}

unit EhLibReg;

{$I EhLib.Inc}

interface

procedure Register;

implementation

uses Classes, TypInfo, DsgnIntf, DBGridEh, GridEhEd, DBSumLst, PrViewEh,
     PrnDbgEh {$IFNDEF EH_LIB_35} ,ColnEdit{$ENDIF};

procedure Register;
begin
  RegisterComponents('Data Controls', [TDBGridEh]);
  RegisterComponentEditor(TDBGridEh, TDBGridEhEditor);
  RegisterPropertyEditor(TypeInfo(TCollection), TDBGridEh, 'Columns', TDBGridEhColumnsProperty);

{$IFNDEF EH_LIB_35}
  RegisterPropertyEditor(TypeInfo(TCollection), TColumnEh, 'Footers', TColumnsEhFootersProperty);
{$ENDIF}

  RegisterPropertyEditor(TypeInfo(string), TColumnEh, 'FieldName', TDBGridEhFieldProperty);
  RegisterPropertyEditor(TypeInfo(string), TColumnFooterEh, 'FieldName', TDBGridEhFieldProperty);

  RegisterPropertyEditor(TypeInfo(string), TPrintDBGridEh, 'PrintFontName', TFontNameProperty);

  RegisterComponents('Data Controls', [TDBSumList]);
  RegisterComponents('Data Controls', [TPrintDBGridEh]);
  RegisterComponents('System', [TPreviewBox]);

{$IFDEF EH_LIB_5}
  { Property Category registration }
  RegisterPropertiesInCategory(TDatabaseCategory,[TypeInfo(TDBGridColumnsEh)]);
  RegisterPropertyInCategory(TDatabaseCategory, TColumnEh, 'FieldName');
  RegisterPropertiesInCategory(TLocalizableCategory, TColumnEh, ['Picklist','KeyList']); { Do not localize }
  RegisterPropertiesInCategory(TLocalizableCategory, [TypeInfo(TColumnTitleEh)]);
  RegisterPropertiesInCategory(TVisualCategory, TColumnEh,['AlwaysShowEditButton',
    'AutoFitColWidth','WordWrap','EndEllipsis','Checkboxes']);
{$ENDIF}

end;

end.
