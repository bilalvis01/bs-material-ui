type t;
type options;

[@bs.module "@material-ui/core/styles"] [@bs.val]
external useTheme: unit => 'a = "useTheme";

include MUI_Theme_Palette.Make();
include MUI_Theme_Transitions.Make();

// breakpoints
module Breakpoints = {
  type t;
  [@bs.send]
  external up: (t, string) => string = "up";
};

// shape
module Shape = {
  type t;
  [@bs.get]
  external borderRadius: t => string = "borderRadius";
};

// zIndex
module ZIndex = {
  type t;
  [@bs.get]
  external mobileStepper: t => int = "mobileStepper";
  [@bs.get]
  external appBar: t => int = "appBar";
  [@bs.get]
  external drawer: t => int = "drawer";
  [@bs.get]
  external modal: t => int = "modal";
  [@bs.get]
  external snackbar: t => int = "snackbar";
  [@bs.get]
  external tooltip: t => int = "tooltip";
};

module Mixins = {
  type t;
  [@bs.get]
  external toolbar: t => MUI_Style.t = "toolbar";
  [@bs.send]
  external gutters: (t, MUI_Style.t) => MUI_Style.t = "gutters";
};

module Typography = {
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
  external h1: t => MUI_Style.t = "h1";
  [@bs.get]
  external h2: t => MUI_Style.t = "h2";
  [@bs.get]
  external h3: t => MUI_Style.t = "h3";
  [@bs.get]
  external h4: t => MUI_Style.t = "h4";
  [@bs.get]
  external h5: t => MUI_Style.t = "h5";
  [@bs.get]
  external h6: t => MUI_Style.t = "h6";
  [@bs.get]
  external subtitle1: t => MUI_Style.t = "subtitle1";
  [@bs.get]
  external subtitle2: t => MUI_Style.t = "subtitle2";
  [@bs.get]
  external body1: t => MUI_Style.t = "body1";
  [@bs.get]
  external body2: t => MUI_Style.t = "body2";
  [@bs.get]
  external button: t => MUI_Style.t = "button";
  [@bs.get]
  external caption: t => MUI_Style.t = "caption";
  [@bs.get]
  external overline: t => MUI_Style.t = "overline";
};

[@bs.get]
external palette: t => Palette.t = "palette";
[@bs.get]
external breakpoints: t => Breakpoints.t = "breakpoints";
[@bs.get]
external shape: t => Shape.t = "shape";
[@bs.get]
external transitions: t => Transitions.t = "transitions";
[@bs.get]
external zIndex: t => ZIndex.t = "zIndex";
[@bs.get]
external mixins: t => Mixins.t = "mixins";
[@bs.get]
external typography: t => Typography.t = "typography";
[@bs.send]
external spacing0: t => int = "spacing";
[@bs.send]
external spacing1: (t, int) => int= "spacing";
[@bs.send]
external spacing2: (t, int, int) => string = "spacing";
[@bs.send]
external spacing3: (t, int, int, int) => string = "spacing";
[@bs.send]
external spacing4: (t, int, int, int, int) => string = "spacing";

[@bs.module "@material-ui/core/styles"]
external make: options => t = "createMuiTheme";

[@bs.obj]
external options: (
  ~palette: Palette.t=?,
  unit
) => options = "";
