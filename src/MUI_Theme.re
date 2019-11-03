type t;
type options;

[@bs.module "@material-ui/core/styles"] [@bs.val]
external useTheme: unit => 'a = "useTheme";

include MUI_Theme_Palette.Make();

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

// transitions
module Easing = {
  type t;
  [@bs.get]
  external easeInOut: t => string = "easeInOut";
  [@bs.get]
  external easeOut: t => string = "easeOut";
  [@bs.get]
  external easeIn: t => string = "easeIn";
  [@bs.get]
  external sharp: t => string = "sharp";
};
module Duration = {
  type t;
  [@bs.get]
  external shortest: t => int = "shortest";
  [@bs.get]
  external shorter: t => int = "shorter";
  [@bs.get]
  external short: t => int = "short";
  [@bs.get]
  external standard: t => int = "standard";
  [@bs.get]
  external complex: t => int = "complex";
  [@bs.get]
  external enteringScreen: t => int = "enteringScreen";
  [@bs.get]
  external leavingScreen: t => int = "leavingScreen";
};
module Transitions = {
  type t;
  [@bs.deriving abstract]
  type options = {
    [@bs.optional] duration: string,
    [@bs.optional] easing: string,
    [@bs.optional] delay: string,
  };
  [@bs.get]
  external easing: t => Easing.t = "easing"; 
  [@bs.get]
  external duration: t => Duration.t = "duration";
  [@bs.send]
  external create: (t, array(string)) => string = "create";
  [@bs.send]
  external createWithOptions: (t, array(string), options) => string = "create";
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
  external toolbar: t => MUI_StyleRule.t = "toolbar";
  [@bs.send]
  external gutters: (t, MUI_StyleRule.t) => MUI_StyleRule.t = "gutters";
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
