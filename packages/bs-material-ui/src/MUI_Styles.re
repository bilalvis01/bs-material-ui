[@bs.module "@material-ui/core/styles"]
external fade: (string, float) => string = "fade";

module Style = MUI_Styles_Style;

type style = Style.t;

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
      (Styles.theme => Styles.styles(Styles.props => style))
    ) => 
    stylesHook(Styles.props) = 
    "makeStyles";
  [@bs.module "@material-ui/core/styles"]
  external makeWithOptions: 
    (
      [@bs.uncurry] 
      (Styles.theme => Styles.styles(Styles.props => style)), 
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
  type nonrec spacing = spacing;
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
  type nonrec style = style;
  type nonrec breakpoints = breakpoints;
  type nonrec spacing = spacing;
});

include MUI_Styles_Overrides.Make({
  type t = overrides;
  type nonrec style = style;
});

include MUI_Styles_Palette.Make({ 
  type t = palette; 
  type options = paletteOptions;
});

include MUI_Styles_Transitions.Make({ 
  type t = transitions; 
  type options = transitionsOptions;
});

include MUI_Styles_Typography.Make({
  type t = typography;
  type options = typographyOptions;
  type nonrec palette = palette;
  type nonrec style = style;
});

include MUI_Styles_ZIndex.Make({
  type t = zIndex;
  type options = zIndexOptions;
});