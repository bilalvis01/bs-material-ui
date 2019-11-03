type t;
type options;

[@bs.module "@material-ui/core/styles"] [@bs.val]
external useTheme: unit => 'a = "useTheme";

// Palette
module Common = {
  type t;
  [@bs.get]
  external black: t => string = "black";
  [@bs.get]
  external white: t => string = "white";
};
module Background = {
  type t;
  [@bs.obj]
  external make: (
    ~default: string=?,
    ~paper: string=?,
    unit
  ) => t = "";

  [@bs.get]
  external default: t => string = "default";
  [@bs.get]
  external paper: t => string = "paper";
};
module Color = {
  type t;
  [@bs.obj]
  external make: (
    ~_50: string=?,
    ~_100: string=?,
    ~_200: string=?,
    ~_300: string=?,
    ~_400: string=?,
    ~_500: string=?,
    ~_600: string=?,
    ~_700: string=?,
    ~_900: string=?,
    ~_A100: string=?,
    ~_A200: string=?,
    ~_A400: string=?,
    ~_A700: string=?,
    unit
  ) => t = "";

  [@bs.get]
  external get50: t => string = "50";
  [@bs.get]
  external get100: t => string = "100";
  [@bs.get]
  external get200: t => string = "200";
  [@bs.get]
  external get300: t => string = "300";
  [@bs.get]
  external get400: t => string = "400";
  [@bs.get]
  external get500: t => string = "500";
  [@bs.get]
  external get600: t => string = "600";
  [@bs.get]
  external get700: t => string = "700";
  [@bs.get]
  external get800: t => string = "800";
  [@bs.get]
  external get900: t => string = "900";
  [@bs.get]
  external a100: t => string = "A100";
  [@bs.get]
  external a200: t => string = "A200";
  [@bs.get]
  external a400: t => string = "A400";
  [@bs.get]
  external a700: t => string = "A400";
};
module SimpleColor = {
  type t;
  [@bs.obj]
  external make: (
    ~light: string=?,
    ~main: string=?,
    ~dark: string=?,
    ~contrastText: string=?,
    unit
  ) => t = "";

  [@bs.get]
  external light: t => string = "light";
  [@bs.get]
  external main: t => string = "main";
  [@bs.get]
  external dark: t => string = "dark";
  [@bs.get]
  external contrastText: t => string = "contranstText";
};
module Text = {
  type t;
  [@bs.get]
  external primary: t => string = "primary";
  [@bs.get]
  external secondary: t => string = "secondary";
  [@bs.get]
  external disabled: t => string = "disabled";
  [@bs.get]
  external getHint: t => string = "hint";
};
module Action = {
  type t;
  [@bs.get]
  external active: t => string = "active";
  [@bs.get]
  external hover: t => string = "hover";
  [@bs.get]
  external hoverOpacity: t => int = "hoverOpacity";
  [@bs.get]
  external selected: t => string = "selected";
  [@bs.get]
  external disabled: t => string = "disabled";
  [@bs.get]
  external disabledBackground: t => string = "disabledBackground";
};
module Palette = {
  type t;
  type options;
  type paletteColorOptions;

  [@bs.module "@material-ui/core/styles/createPalette"]
  external make: options => t = "default";

  [@bs.obj]
  external makeOptions: (
    ~primary: paletteColorOptions=?,
    ~secondary: paletteColorOptions=?,
    ~error: paletteColorOptions=?,
    ~_type: [@bs.string] [`light | `dark]=?,
    ~tonalOffset: int=?,
    ~contrastThreshold: int=?,
    ~common: Common.t=?,
    ~grey: Color.t=?,
    ~text: Text.t=?,
    ~divider: string=?,
    ~action: Action.t=?,
    ~background: Background.t=?,
    ~getContrastText: string => string=?,
    unit
  ) => options = "";

  [@bs.obj]
  external makePaletteColorOptions: (
    ~_50: string=?,
    ~_100: string=?,
    ~_200: string=?,
    ~_300: string=?,
    ~_400: string=?,
    ~_500: string=?,
    ~_600: string=?,
    ~_700: string=?,
    ~_900: string=?,
    ~_A100: string=?,
    ~_A200: string=?,
    ~_A400: string=?,
    ~_A700: string=?,
    ~light: string=?,
    ~main: string=?,
    ~dark: string=?,
    ~contrastText: string=?,
    unit
  ) => paletteColorOptions = "";

  [@bs.get]
  external common: t => Common.t = "common";
  [@bs.get]
  external type_: t => string = "type";
  [@bs.get]
  external contrastThreshold: t => int = "contrastThreshold";
  [@bs.get]
  external tonalOffset: t => int = "tonalOffset";
  [@bs.get]
  external primary: t => SimpleColor.t = "primary";
  [@bs.get]
  external secondary: t => SimpleColor.t= "secondary";
  [@bs.get]
  external error: t => SimpleColor.t = "error";
  [@bs.get]
  external grey: t => Color.t = "grey";
  [@bs.get]
  external text: t => Text.t = "text";
  [@bs.get]
  external divider: t => string = "divider";
  [@bs.get]
  external action: t => Action.t = "action";
  [@bs.get]
  external background: t => Background.t = "background";
  [@bs.send]
  external getContrastText: (t, string) => string = "getContrastText"; 
};

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
  type optional;
  [@bs.obj]
  external makeOptions: (
    ~duration: string=?,
    ~easing: string=?,
    ~delay: string=?,
    unit
  ) => optional = "";
  [@bs.get]
  external easing: t => Easing.t = "easing"; 
  [@bs.get]
  external duration: t => Duration.t = "duration";
  [@bs.send]
  external create: (t, array(string)) => string = "create";
  [@bs.send]
  external createWithOptions: (t, array(string), optional) => string = "create";
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
external t: t => ZIndex.t = "zIndex";
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
external makeOptions: (
  ~palette: Palette.t=?,
  unit
) => options = "";
