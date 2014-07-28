{*******************************************************}
{                                                       }
{                       EhLib v1.53                     }
{     Conditional defines that affect compilation       }
{                                                       }
{   Copyright (c) 1998, 2000 by Dmitry V. Bolshakov     }
{                                                       }
{*******************************************************}

{$IFDEF VER110}         { C++Builder 3.0 }
   {$DEFINE EH_LIB_35}
{$ENDIF}
{$IFDEF VER120} {Borland Delphi 4.0 }
  {$DEFINE EH_LIB_35}
  {$DEFINE EH_LIB_4}
{$ENDIF}
{$IFDEF VER125} {CPP Builder 4.0 }
  {$DEFINE EH_LIB_35}
  {$DEFINE EH_LIB_4}
{$ENDIF}
{$IFDEF VER130} {Borland Delphi 5.0 }
  {$DEFINE EH_LIB_35}
  {$DEFINE EH_LIB_4}
  {$DEFINE EH_LIB_5}
{$ENDIF}

