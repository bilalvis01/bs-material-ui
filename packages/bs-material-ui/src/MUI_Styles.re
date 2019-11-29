[@bs.module "@material-ui/core/styles"]
external fade: (string, float) => string = "fade";

module Rule = MUI_Styles_Rule;

type rule = Rule.t;

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
      (Styles.theme => Styles.styles(Styles.props => rule))
    ) => 
    stylesHook(Styles.props) = 
    "makeStyles";
  [@bs.module "@material-ui/core/styles"]
  external makeWithOptions: 
    (
      [@bs.uncurry] 
      (Styles.theme => Styles.styles(Styles.props => rule)), 
      options
    ) =>
    stylesHook(Styles.props) = 
    "makeStyles";
  [@bs.module "@material-ui/core/styles"] [@bs.val]
  external useTheme: unit => Styles.theme = "useTheme";
};

type theme;
type shape;
type shapeOptions;
type breakpoints;
type breakpointsOptions
type mixins;
type mixinsOptions;
type overrides;
type palette;
type paletteOptions;
type props;
type shadows;
type spacing;
type transitions;
type typography;
type typographyOptions;
type zIndex;

module Theme = MUI_Styles_Theme.Make({
  type t = theme;
  type nonrec shape = shape;
  type nonrec shapeOptions = shapeOptions;
  type nonrec breakpoints = breakpoints;
  type nonrec breakpointsOptions = breakpointsOptions;
  type nonrec mixins = mixins;
  type nonrec mixinsOptions = mixinsOptions;
  type nonrec overrides = overrides;
  type nonrec palette = palette;
  type nonrec paletteOptions = paletteOptions;
  type nonrec props = props;
  type nonrec shadows = shadows;
  type nonrec spacing = shadows;
  type nonrec transitions = transitions;
  type nonrec typography = typography;
  type nonrec typographyOptions = typographyOptions;
  type nonrec zIndex = typography;
});

module Shape = MUI_Styles_Shape.Make({
  type t = shape;
  type options = shapeOptions;
});

include MUI_Styles_Breakpoints.Make({
  type t = breakpoints;
  type options = breakpointsOptions;
});

module Mixins = MUI_Styles_Mixins.Make({
  type t = mixins;
  type options = mixinsOptions;
  type nonrec rule = rule;
  type nonrec breakpoints = breakpoints;
  type nonrec spacing = spacing;
});

include MUI_Styles_Overrides.Make({
  type t = overrides;
  type nonrec rule = rule;
});

include MUI_Styles_Palette.Make({ 
  type t = palette; 
  type options = paletteOptions;
});

include MUI_Styles_Transitions.Make({ 
  type t = transitions; 
});

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

module Typography = MUI_Styles_Typography.Make();