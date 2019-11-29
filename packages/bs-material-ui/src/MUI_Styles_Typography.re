type typographyStyle;
type typographyStyleOptions;

module type TypographyType = {
  type t;
  type options;
  type palette;
  type style;
};

module Make = (Type: TypographyType) => {
  module Typography = {
    [@bs.module "@material-ui/core/styles/createTypography"]
    external make: (
      ~palette: Type.palette=?, 
      ~typography: Type.palette => Type.options=?,
      unit,
    ) => Type.t = "default";
    [@bs.obj]
    external options: (
      ~h1: typographyStyleOptions=?,
      ~h2: typographyStyleOptions=?,
      ~h3: typographyStyleOptions=?,
      ~h4: typographyStyleOptions=?,
      ~h5: typographyStyleOptions=?,
      ~h6: typographyStyleOptions=?,
      ~subtitle1: typographyStyleOptions=?,
      ~subtitle2: typographyStyleOptions=?,
      ~body1: typographyStyleOptions=?,
      ~body2: typographyStyleOptions=?,
      ~caption: typographyStyleOptions=?,
      ~button: typographyStyleOptions=?,
      ~overline: typographyStyleOptions=?,
      ~fontFamily: string=?,
      ~fontSize: int=?,
      ~fontWeightLight: int=?,
      ~fontWeightRegular: int=?,
      ~fontWeightMedium: int=?,
      ~fontWeightBold: int=?,
      ~htmlFontSize: int=?,
      ~allVariants: Type.style=?,
      unit
    ) => Type.options = "";
    [@bs.get]
    external htmlFontSize: Type.t => int = "htmlFontSize";
    [@bs.send]
    external pxToRem: (Type.t, int) => string = "pxToRem";
    [@bs.send]
    external round: (Type.t, int) => int = "round";
    [@bs.get]
    external fontFamily: Type.t => string = "fontFamily";
    [@bs.get]
    external fontSize: Type.t => int = "fontSize";
    [@bs.get]
    external fontWeightLight: Type.t => int = "fontSize";
    [@bs.get]
    external fontWeightRegular: Type.t => int = "fontSize";
    [@bs.get]
    external fontWeightMedium: Type.t => int = "fontSize";
    [@bs.get]
    external fontWeightBold: Type.t => int = "fontSize";
    [@bs.get]
    external h1: Type.t => Type.style = "h1";
    [@bs.get]
    external h2: Type.t => Type.style = "h2";
    [@bs.get]
    external h3: Type.t => Type.style = "h3";
    [@bs.get]
    external h4: Type.t => Type.style = "h4";
    [@bs.get]
    external h5: Type.t => Type.style = "h5";
    [@bs.get]
    external h6: Type.t => Type.style = "h6";
    [@bs.get]
    external subtitle1: Type.t => Type.style = "subtitle1";
    [@bs.get]
    external subtitle2: Type.t => Type.style = "subtitle2";
    [@bs.get]
    external body1: Type.t => Type.style = "body1";
    [@bs.get]
    external body2: Type.t => Type.style = "body2";
    [@bs.get]
    external button: Type.t => Type.style = "button";
    [@bs.get]
    external caption: Type.t => Type.style = "caption";
    [@bs.get]
    external overline: Type.t => Type.style = "overline";
  };
  module TypographyStyle = {
    [@bs.obj]
    external options: (
      ~fontFamily: string=?,
      ~fontSize: string=?,
      ~fontWeight: string=?,
      ~fontStyle: string=?,
      ~color: string=?,
      ~letterSpacing: string=?,
      ~lineHeight: string=?,
      ~textTransform: string=?,
      unit
    ) => typographyStyleOptions = "";
  };
};