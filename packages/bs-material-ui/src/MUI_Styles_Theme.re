module type ThemeType = {
  type t;
  type palette;
  type breakpoints;
  type shape;
  type transitions;
  type zIndex;
  type mixins;
  type typography;
};

module Make = (Theme: ThemeType) => {
  type options;

  [@bs.module "@material-ui/core/styles"]
  external make: options => Theme.t = "createMuiTheme";

  [@bs.obj]
  external options: (
    ~palette: Theme.palette=?,
    unit
  ) => options = "";

  [@bs.get]
  external palette: Theme.t => Theme.palette = "palette";
  [@bs.get]
  external breakpoints: Theme.t => Theme.breakpoints = "breakpoints";
  [@bs.get]
  external shape: Theme.t => Theme.shape = "shape";
  [@bs.get]
  external transitions: Theme.t => Theme.transitions = "transitions";
  [@bs.get]
  external zIndex: Theme.t => Theme.zIndex = "zIndex";
  [@bs.get]
  external mixins: Theme.t => Theme.mixins = "mixins";
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
} 