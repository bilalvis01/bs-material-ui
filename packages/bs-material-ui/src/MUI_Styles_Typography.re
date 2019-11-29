module Make = () => {
  type t;
  type options;
  [@bs.module "@material-ui/core/styles/createTypography"]
  external make: (
    ~palette: Palette.t=?, 
    ~typography: Palette.t => options=?,
    unit,
  ) => t = "default";
  [@bs.get]
  external htmlFontSize: t => int = "htmlFontSize";
  [@bs.send]
  external pxToRem: (t, int) => string = "pxToRem";
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
  external h1: t => rule = "h1";
  [@bs.get]
  external h2: t => rule = "h2";
  [@bs.get]
  external h3: t => rule = "h3";
  [@bs.get]
  external h4: t => rule = "h4";
  [@bs.get]
  external h5: t => rule = "h5";
  [@bs.get]
  external h6: t => rule = "h6";
  [@bs.get]
  external subtitle1: t => rule = "subtitle1";
  [@bs.get]
  external subtitle2: t => rule = "subtitle2";
  [@bs.get]
  external body1: t => rule = "body1";
  [@bs.get]
  external body2: t => rule = "body2";
  [@bs.get]
  external button: t => rule = "button";
  [@bs.get]
  external caption: t => rule = "caption";
  [@bs.get]
  external overline: t => rule = "overline";
};