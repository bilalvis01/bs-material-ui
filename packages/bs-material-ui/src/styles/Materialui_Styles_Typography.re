type t;
type options;
type style;

[@bs.module "@material-ui/core/styles/createTypography"]
external make: (
  ~palette: Materialui_Styles_Palette.t=?, 
  ~typography: Materialui_Styles_Palette.t => options=?,
  unit,
) => 
t = 
"default";
[@bs.obj]
external options: (
  ~h1: style=?,
  ~h2: style=?,
  ~h3: style=?,
  ~h4: style=?,
  ~h5: style=?,
  ~h6: style=?,
  ~subtitle1: style=?,
  ~subtitle2: style=?,
  ~body1: style=?,
  ~body2: style=?,
  ~caption: style=?,
  ~button: style=?,
  ~overline: style=?,
  ~fontFamily: string=?,
  ~fontSize: int=?,
  ~fontWeightLight: int=?,
  ~fontWeightRegular: int=?,
  ~fontWeightMedium: int=?,
  ~fontWeightBold: int=?,
  ~htmlFontSize: int=?,
  ~allVariants: Materialui_Styles_Style.t=?,
  unit
) => 
options = 
"";
[@bs.obj]
external style: (
  ~fontFamily: string=?,
  ~fontSize: string=?,
  ~fontWeight: string=?,
  ~fontStyle: string=?,
  ~color: string=?,
  ~letterSpacing: string=?,
  ~lineHeight: string=?,
  ~textTransform: string=?,
  unit
) => 
style = 
"";

[@bs.get]
external htmlFontSize: t => int = "htmlFontSize";
[@bs.send]
external pxToRem: (t, int) => string = "pxToRem";
[@bs.send]
external round: (t, int) => int = "round";
[@bs.get]
external fontFamily: t => string = "fontFamily";
[@bs.get]
external fontSize: t => int = "fontSize";
[@bs.get]
external fontWeightLight: t => int = "fontSize";
[@bs.get]
external fontWeightRegular: t => int = "fontSize";
[@bs.get]
external fontWeightMedium: t => int = "fontSize";
[@bs.get]
external fontWeightBold: t => int = "fontSize";
[@bs.get]
external h1: t => Materialui_Styles_Style.t = "h1";
[@bs.get]
external h2: t => Materialui_Styles_Style.t = "h2";
[@bs.get]
external h3: t => Materialui_Styles_Style.t = "h3";
[@bs.get]
external h4: t => Materialui_Styles_Style.t = "h4";
[@bs.get]
external h5: t => Materialui_Styles_Style.t = "h5";
[@bs.get]
external h6: t => Materialui_Styles_Style.t = "h6";
[@bs.get]
external subtitle1: t => Materialui_Styles_Style.t = "subtitle1";
[@bs.get]
external subtitle2: t => Materialui_Styles_Style.t = "subtitle2";
[@bs.get]
external body1: t => Materialui_Styles_Style.t = "body1";
[@bs.get]
external body2: t => Materialui_Styles_Style.t = "body2";
[@bs.get]
external button: t => Materialui_Styles_Style.t = "button";
[@bs.get]
external caption: t => Materialui_Styles_Style.t = "caption";
[@bs.get]
external overline: t => Materialui_Styles_Style.t = "overline";