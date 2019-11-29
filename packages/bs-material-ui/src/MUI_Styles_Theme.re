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
  type spacing;
  type transitions;
  type typography;
  type typographyOptions;
  type zIndex;
};

module Make = (Theme: ThemeType) => {
  [@bs.module "@material-ui/core/styles"]
  external make: options => Theme.t = "createMuiTheme";
  [@bs.obj]
  external options: (
    ~shape: Theme.shapeOptions=?,
    ~breakpoints: Theme.breakpointsOptions=?,
    ~direction: [@bs.string] [ | `ltr | `rtl ]=?,
    ~mixins: Theme.mixinsOptions=?,
    ~overrides: Theme.overrides=?,
    ~palette: Theme.paletteOptions=?,
    ~typography: Theme.palette => Theme.typographyOptions=?,
    unit
  ) => options = "";
  [@bs.get]
  external shape: Theme.t => Theme.shape = "shape";
  [@bs.get]
  external breakpoints: Theme.t => Theme.breakpoints = "breakpoints";
  [@bs.get]
  external direction: Theme.t => string = "direction";
  [@bs.get]
  external mixins: Theme.t => Theme.mixins = "mixins";
  [@bs.get]
  external overrides: Theme.t => Theme.overrides = "overrides";
  [@bs.get]
  external palette: Theme.t => Theme.palette = "palette";
  [@bs.get]
  external transitions: Theme.t => Theme.transitions = "transitions";
  [@bs.get]
  external zIndex: Theme.t => Theme.zIndex = "zIndex";
  [@bs.get]
  external typography: Theme.t => Theme.typography = "typography";
  [@bs.send]
  external spacing0: Theme.t => int = "spacing";
  [@bs.send]
  external spacing1: (Theme.t, int) => int= "spacing";
  [@bs.send]
  external spacing2: (Theme.t, int, int) => string = "spacing";
  [@bs.send]
  external spacing3: (Theme.t, int, int, int) => string = "spacing";
  [@bs.send]
  external spacing4: (Theme.t, int, int, int, int) => string = "spacing";
}; 