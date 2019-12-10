type t;
type options;

[@bs.module "@material-ui/core/styles/createTypography"]
external make: (
  ~palette: MUI_Styles_Palette.t=?, 
  ~typography: MUI_Styles_Palette.t => options=?,
  unit,
) => t = "default";
[@bs.obj]
external options: (
  ~h1: MUI_Styles_TypographyStyle.options=?,
  ~h2: MUI_Styles_TypographyStyle.options=?,
  ~h3: MUI_Styles_TypographyStyle.options=?,
  ~h4: MUI_Styles_TypographyStyle.options=?,
  ~h5: MUI_Styles_TypographyStyle.options=?,
  ~h6: MUI_Styles_TypographyStyle.options=?,
  ~subtitle1: MUI_Styles_TypographyStyle.options=?,
  ~subtitle2: MUI_Styles_TypographyStyle.options=?,
  ~body1: MUI_Styles_TypographyStyle.options=?,
  ~body2: MUI_Styles_TypographyStyle.options=?,
  ~caption: MUI_Styles_TypographyStyle.options=?,
  ~button: MUI_Styles_TypographyStyle.options=?,
  ~overline: MUI_Styles_TypographyStyle.options=?,
  ~fontFamily: string=?,
  ~fontSize: int=?,
  ~fontWeightLight: int=?,
  ~fontWeightRegular: int=?,
  ~fontWeightMedium: int=?,
  ~fontWeightBold: int=?,
  ~htmlFontSize: int=?,
  ~allVariants: MUI_Styles_Style.t=?,
  unit
) => options = "";
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
external h1: t => MUI_Styles_Style.t = "h1";
[@bs.get]
external h2: t => MUI_Styles_Style.t = "h2";
[@bs.get]
external h3: t => MUI_Styles_Style.t = "h3";
[@bs.get]
external h4: t => MUI_Styles_Style.t = "h4";
[@bs.get]
external h5: t => MUI_Styles_Style.t = "h5";
[@bs.get]
external h6: t => MUI_Styles_Style.t = "h6";
[@bs.get]
external subtitle1: t => MUI_Styles_Style.t = "subtitle1";
[@bs.get]
external subtitle2: t => MUI_Styles_Style.t = "subtitle2";
[@bs.get]
external body1: t => MUI_Styles_Style.t = "body1";
[@bs.get]
external body2: t => MUI_Styles_Style.t = "body2";
[@bs.get]
external button: t => MUI_Styles_Style.t = "button";
[@bs.get]
external caption: t => MUI_Styles_Style.t = "caption";
[@bs.get]
external overline: t => MUI_Styles_Style.t = "overline";