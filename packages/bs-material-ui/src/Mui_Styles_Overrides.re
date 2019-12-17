type t;
type muiAppBar;

[@bs.obj]
external muiAppBar: (
  ~root: Mui_Styles_Style.t=?,
  ~positionFixed: Mui_Styles_Style.t=?,
  ~positionAbsolute: Mui_Styles_Style.t=?,
  ~positionSticky: Mui_Styles_Style.t=?,
  ~positionStatic: Mui_Styles_Style.t=?,
  ~positionRelative: Mui_Styles_Style.t=?,
  ~colorDefault: Mui_Styles_Style.t=?,
  ~colorPrimary: Mui_Styles_Style.t=?,
  ~colorSecondary: Mui_Styles_Style.t=?,
  unit
) => muiAppBar = "";

[@bs.obj]
external make: (
  ~_MuiAppBar: muiAppBar=?,
  unit
) => t = "";