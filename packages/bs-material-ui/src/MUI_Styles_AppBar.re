type t;

[@bs.obj]
external make: (
  ~root: MUI_Styles_Style.t=?,
  ~positionFixed: MUI_Styles_Style.t=?,
  ~positionAbsolute: MUI_Styles_Style.t=?,
  ~positionSticky: MUI_Styles_Style.t=?,
  ~positionStatic: MUI_Styles_Style.t=?,
  ~positionRelative: MUI_Styles_Style.t=?,
  ~colorDefault: MUI_Styles_Style.t=?,
  ~colorPrimary: MUI_Styles_Style.t=?,
  ~colorSecondary: MUI_Styles_Style.t=?,
  unit
) => t = "";