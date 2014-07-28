{******************************************************************}
{*                 TurboPower OfficePartner 1.61                  *}
{*           Copyright (c) 2000 TurboPower Software Co.           *}
{*                      All Rights Reserved.                      *}
{******************************************************************}
{*     OPDEFINE.INC - Include file for compiler defines           *}
{******************************************************************}

{NOTE: OPDEFINE.INC is included in all OfficePartner units,
       so you can specify global compiler options here.
       OPDEFINE.INC is included *before* each unit's own required
       compiler options, so options specified here could be
       overridden by hardcoded options in the unit source file.}

{====Compiler options that can be changed====}
{$A+ Force alignment on word/dword boundaries}
{$S- No stack checking}

{====Global fixed compiler options (do NOT change)====}

{$B- Incomplete boolean evaluation}
{$H+ Long string support}
{$J+ Writeable typed constants}
{$P- No open string parameters}
{$Q- No arithmetic overflow checking}
{$R- No range checking}
{$T- No type-checked pointers}
{$V- No var string checking}
{$X+ Extended syntax}
{$Z1 Enumerations are byte sized}

{====General defines=================================================}


{-------- !! DO NOT CHANGE DEFINES BELOW THIS LINE !! --------}

{ Compiler stoppers for unsupported compilers }

{$IFDEF VER80}
  !!! OfficePartner does not support Delphi 1
{$ENDIF}

{$IFDEF VER90}
  !!! OfficePartner does not support Delphi 2
{$ENDIF}

{$IFDEF VER93}
  !!! OfficePartner does not support C++Builder 1
{$ENDIF}



{$IFDEF VER100}              { Delphi 3 }
  {$DEFINE VERSION3}
{$ENDIF}

{$IFDEF VER110}              { C++ Builder 3 }
  {$ObjExportAll On}
  {$DEFINE CBuilder}
  {$DEFINE VERSION3}
{$ENDIF}

{$IFDEF VER120}              { Delphi 4 }
  {$DEFINE VERSION4}
{$ENDIF}

{$IFDEF VER125}              { C++ Builder 4 }
  {$ObjExportAll On}
  {$DEFINE CBuilder}
  {$DEFINE VERSION4}
{$ENDIF}

{$IFDEF VER130}              { Delphi 5 & C++ Builder 5 }
  {$DEFINE VERSION5}
 {$IFDEF BCB}
  {$ObjExportAll On}
  {$DEFINE CBuilder}
 {$ENDIF}
{$ENDIF}


{$IFDEF VER140}
  {$IFNDEF LINUX}
    {$DEFINE VERSION6}
  {$ENDIF}
{$ENDIF}


