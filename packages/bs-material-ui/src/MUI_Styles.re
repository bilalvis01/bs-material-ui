[@bs.module "@material-ui/core/styles"]
external fade: (string, float) => string = "fade";

module type StylesType = {
  type theme;
  type styles('a);
  type props;
};

module Make = (Styles: StylesType) => {
  type options;
  type stylesHook('props) = 'props => Styles.styles(string);
  [@bs.module "@material-ui/core/styles"]
  external make: 
    ( 
      [@bs.uncurry] 
      (Styles.theme => Styles.styles(Styles.props => Style.t))
    ) => 
    stylesHook(Styles.props) = 
    "makeStyles";
  [@bs.module "@material-ui/core/styles"]
  external makeWithOptions: 
    (
      [@bs.uncurry] 
      (Styles.theme => Styles.styles(Styles.props => Style.t)), 
      options
    ) =>
    stylesHook(Styles.props) = 
    "makeStyles";
  [@bs.module "@material-ui/core/styles"] [@bs.val]
  external useTheme: unit => Styles.theme = "useTheme";
};

type theme;
type palette;
type breakpoints;
type shape;
type transitions;
type zIndex;
type mixins;
type typography;

module Theme = MUI_Styles_Theme.Make({
  type t = theme;
  type nonrec palette = palette;
  type nonrec breakpoints = breakpoints;
  type nonrec shape = shape;
  type nonrec transitions = transitions;
  type nonrec zIndex = zIndex;
  type nonrec mixins = mixins;
  type nonrec typography = typography;
});

include MUI_Styles_Palette.Make({ type t = palette; });
include MUI_Styles_Transitions.Make({ type t = transitions; });

// breakpoints
module Breakpoints = {
  type t = breakpoints;
  [@bs.send]
  external up: (t, string) => string = "up";
};

// shape
module Shape = {
  type t = shape;
  [@bs.get]
  external borderRadius: t => string = "borderRadius";
};

// zIndex
module ZIndex = {
  type t = zIndex;
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
  type t = mixins;
  [@bs.get]
  external toolbar: t => Style.t = "toolbar";
  [@bs.send]
  external gutters: (t, Style.t) => Style.t = "gutters";
};

module Typography = {
  type t = typography;
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
  external h1: t => Style.t = "h1";
  [@bs.get]
  external h2: t => Style.t = "h2";
  [@bs.get]
  external h3: t => Style.t = "h3";
  [@bs.get]
  external h4: t => Style.t = "h4";
  [@bs.get]
  external h5: t => Style.t = "h5";
  [@bs.get]
  external h6: t => Style.t = "h6";
  [@bs.get]
  external subtitle1: t => Style.t = "subtitle1";
  [@bs.get]
  external subtitle2: t => Style.t = "subtitle2";
  [@bs.get]
  external body1: t => Style.t = "body1";
  [@bs.get]
  external body2: t => Style.t = "body2";
  [@bs.get]
  external button: t => Style.t = "button";
  [@bs.get]
  external caption: t => Style.t = "caption";
  [@bs.get]
  external overline: t => Style.t = "overline";
};