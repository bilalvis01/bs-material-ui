type t;
type muiAppBar;

[@bs.obj]
external muiAppBar: (
  ~root: Materialui_Styles_Style.t=?,
  ~positionFixed: Materialui_Styles_Style.t=?,
  ~positionAbsolute: Materialui_Styles_Style.t=?,
  ~positionSticky: Materialui_Styles_Style.t=?,
  ~positionStatic: Materialui_Styles_Style.t=?,
  ~positionRelative: Materialui_Styles_Style.t=?,
  ~colorDefault: Materialui_Styles_Style.t=?,
  ~colorPrimary: Materialui_Styles_Style.t=?,
  ~colorSecondary: Materialui_Styles_Style.t=?,
  unit
) => 
muiAppBar = 
"";

[@bs.obj]
external make: (
  ~_MaterialuiAppBar: muiAppBar=?,
  unit
) => 
t = 
"";