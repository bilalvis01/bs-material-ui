[@bs.module "@material-ui/core/styles"]
external useTheme: unit => 'theme = "useTheme";

module type StylesType = {
  type theme;
  type styles('a);
  type props;
};

module Make = (Styles: StylesType) => {
  type options;
  type stylesHook('props) = 'props => Styles.styles(string);
  [@bs.module "@material-ui/core/styles"]
  external make: ( 
    [@bs.uncurry] 
    (Styles.theme => Styles.styles(Styles.props => MUI_Styles_Style.t))
  ) => stylesHook(Styles.props) = "makeStyles";
  [@bs.module "@material-ui/core/styles"]
  external makeWithOptions: (
    [@bs.uncurry] 
    (Styles.theme => Styles.styles(Styles.props => MUI_Styles_Style.t)), 
    options
  ) => stylesHook(Styles.props) = "makeStyles";
};

/**
 * 
 * Style helper
 * 
 */
module Style = MUI_Styles_Style;

/**
 * 
 * Color manipulator helper
 * 
 */
module ColorManipulator = MUI_Styles_ColorManipulator;

/**
 * 
 * Theme helper
 * 
 */
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
type shadows = array(string);
type transitions;
type transitionsOptions;
type typography;
type typographyOptions;
type zIndex;
type zIndexOptions;

include MUI_Styles_Theme.Make({
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
  type nonrec transitions = transitions;
  type nonrec transitionsOptions = transitionsOptions;
  type nonrec typography = typography;
  type nonrec typographyOptions = typographyOptions;
  type nonrec zIndex = zIndex;
  type nonrec zIndexOptions = zIndexOptions;
});

include MUI_Styles_Shape.Make({
  type t = shape;
  type options = shapeOptions;
});

include MUI_Styles_Breakpoints.Make({
  type t = breakpoints;
  type options = breakpointsOptions;
});

include MUI_Styles_Mixins.Make({
  type t = mixins;
  type options = mixinsOptions;
  type nonrec breakpoints = breakpoints;
});

include MUI_Styles_Overrides.Make({
  type t = overrides;
});

include MUI_Styles_Palette.Make({ 
  type t = palette; 
  type options = paletteOptions;
});

include MUI_Styles_Props.Make({
  type t = props;
});

include MUI_Styles_Shadows.Make({
  type t = shadows;
});

include MUI_Styles_Transitions.Make({ 
  type t = transitions; 
  type options = transitionsOptions;
});

include MUI_Styles_Typography.Make({
  type t = typography;
  type options = typographyOptions;
  type nonrec palette = palette;
});

include MUI_Styles_ZIndex.Make({
  type t = zIndex;
  type options = zIndexOptions;
});