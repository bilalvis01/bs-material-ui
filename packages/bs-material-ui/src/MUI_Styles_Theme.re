type options;

module type ThemeType = {
  type t;
  type shape;
  type shapeOptions;
  type breakpoints;
  type breakpointsOptions;
  type mixins;
  type mixinsOptions;
  type overrides;
  type palette;
  type paletteOptions;
  type props;
  type shadows;
  type spacingOptions;
  type transitions;
  type transitionsOptions;
  type typography;
  type typographyOptions;
  type zIndex;
  type zIndexOptions;
};

module Make = (Type: ThemeType) => {
  module Theme = {
    [@bs.module "@material-ui/core/styles"]
    external make: options => Type.t = "createMuiTheme";
    [@bs.obj]
    external options: (
      ~shape: Type.shapeOptions=?,
      ~breakpoints: Type.breakpointsOptions=?,
      ~direction: [@bs.string] [ | `ltr | `rtl ]=?,
      ~mixins: Type.mixinsOptions=?,
      ~overrides: Type.overrides=?,
      ~palette: Type.paletteOptions=?,
      ~props: Type.props=?,
      ~shadows: Type.shadows=?,
      ~spacing: int => 'spacingReturn=?,
      ~transitions: Type.transitionsOptions=?,
      ~typography: Type.palette => Type.typographyOptions=?,
      ~zIndexOptions: Type.zIndexOptions=?,
      unit
    ) => options = "";
    [@bs.get]
    external shape: Type.t => Type.shape = "shape";
    [@bs.get]
    external breakpoints: Type.t => Type.breakpoints = "breakpoints";
    [@bs.get]
    external direction: Type.t => string = "direction";
    [@bs.get]
    external mixins: Type.t => Type.mixins = "mixins";
    [@bs.get]
    external overrides: Type.t => Type.overrides = "overrides";
    [@bs.get]
    external palette: Type.t => Type.palette = "palette";
    [@bs.get]
    external props: Type.t => Type.props = "props";
    [@bs.get]
    external shadows: Type.t => Type.shadows = "shadows";
    [@bs.send]
    external spacing0: Type.t => int = "spacing";
    [@bs.send]
    external spacing1: (Type.t, int) => int= "spacing";
    [@bs.send]
    external spacing2: (Type.t, int, int) => string = "spacing";
    [@bs.send]
    external spacing3: (Type.t, int, int, int) => string = "spacing";
    [@bs.send]
    external spacing4: (Type.t, int, int, int, int) => string = "spacing";
    [@bs.get]
    external transitions: Type.t => Type.transitions = "transitions";
    [@bs.get]
    external typography: Type.t => Type.typography = "typography";
    [@bs.get]
    external zIndex: Type.t => Type.zIndex = "zIndex";
  };
}; 