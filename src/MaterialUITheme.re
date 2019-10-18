type t;
type options;
type palette;
type breakpoints;
type shape;
type transitions;
type zIndex;
type mixins;

[@bs.module "@material-ui/core/styles"]
external make: options => t = "createMuiTheme";

[@bs.obj]
external makeOptions: (
  ~palette: palette=?,
  unit
) => options = "";

[@bs.get]
external getPalette: t => palette = "palette";
[@bs.get]
external getBreakpoints: t => breakpoints = "breakpoints";
[@bs.get]
external getShape: t => shape = "shape";
[@bs.get]
external getTransitions: t => transitions = "transitions";
[@bs.get]
external getZIndex: t => zIndex = "zIndex";
[@bs.get]
external getMixins: t => mixins = "mixins";
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

module Breakpoints = {
  [@bs.send]
  external up: (breakpoints, string) => string = "up";
};

module Shape = {
  [@bs.get]
  external getBorderRadius: shape => string = "borderRadius";
};

type transitionEasing;
type transitionDuration;
module Transitions = {
  type optional;
  [@bs.obj]
  external makeOptions: (
    ~duration: string=?,
    ~easing: string=?,
    ~delay: string=?,
    unit
  ) => optional = "";
  [@bs.get]
  external getEasing: transitions => transitionEasing = "easing"; 
  [@bs.get]
  external getDuration: transitions => transitionDuration = "duration";
  [@bs.send]
  external create: (transitions, array(string)) => string = "create";
  [@bs.send]
  external createWithOptions: (transitions, array(string), optional) => string = "create";
};

module TransitionEasing = {
  [@bs.get]
  external getEaseInOut: transitionEasing => string = "easeInOut";
  [@bs.get]
  external getEaseOut: transitionEasing => string = "easeOut";
  [@bs.get]
  external getEaseIn: transitionEasing => string = "easeIn";
  [@bs.get]
  external getSharp: transitionEasing => string = "sharp";
};

module TransitionDuration = {
  [@bs.get]
  external getShortest: transitionDuration => int = "shortest";
  [@bs.get]
  external getShorter: transitionDuration => int = "shorter";
  [@bs.get]
  external getShort: transitionDuration => int = "short";
  [@bs.get]
  external getStandard: transitionDuration => int = "standard";
  [@bs.get]
  external getComplex: transitionDuration => int = "complex";
  [@bs.get]
  external getEnteringScreen: transitionDuration => int = "enteringScreen";
  [@bs.get]
  external getLeavingScreen: transitionDuration => int = "leavingScreen";
};

module ZIndex = {
  [@bs.get]
  external getMobileStepper: zIndex => int = "mobileStepper";
  [@bs.get]
  external getAppBar: zIndex => int = "appBar";
  [@bs.get]
  external getDrawer: zIndex => int = "drawer";
  [@bs.get]
  external getModal: zIndex => int = "modal";
  [@bs.get]
  external getSnackbar: zIndex => int = "snackbar";
  [@bs.get]
  external getTooltip: zIndex => int = "tooltip";
};

module Mixins = {
  [@bs.get]
  external getToolbar: mixins => MaterialUIStyles.rule = "toolbar";
  [@bs.send]
  external gutters: (mixins, MaterialUIStyles.rule) => MaterialUIStyles.rule = "gutters";
};

type paletteColorOptions;
type color;
type simpleColor;
type backgroundColor;
type commonColor;
type textColor;
module Palette = {
  [@bs.obj]
  external make: (
    ~primary: paletteColorOptions=?,
    ~secondary: paletteColorOptions=?,
    ~error: paletteColorOptions=?,
    ~background: backgroundColor=?,
    unit
  ) => palette = "";

  [@bs.get]
  external getPrimary: palette => simpleColor = "primary";
  [@bs.get]
  external getSecondary: palette => simpleColor = "secondary";
  [@bs.get]
  external getError: palette => simpleColor = "error";
  [@bs.get]
  external getBackground: palette => backgroundColor = "background";
  [@bs.get]
  external getCommon: palette => commonColor = "common";
  [@bs.get]
  external getText: palette => textColor = "text";

  [@bs.obj]
  external makeColor: (
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
  ) => paletteColorOptions = "";

  [@bs.obj]
  external makeSimpleColor: (
    ~light: string=?,
    ~main: string=?,
    ~dark: string=?,
    ~contrastText: string=?,
    unit
  ) => paletteColorOptions = "";

  [@bs.obj]
  external makeBackgroundColor: (
    ~default: string=?,
    ~paper: string=?,
    unit
  ) => backgroundColor = "";
};
module Color = {
  [@bs.get]
  external get50: color => string = "50";
  [@bs.get]
  external get100: color => string = "100";
  [@bs.get]
  external get200: color => string = "200";
  [@bs.get]
  external get300: color => string = "300";
  [@bs.get]
  external get400: color => string = "400";
  [@bs.get]
  external get500: color => string = "500";
  [@bs.get]
  external get600: color => string = "600";
  [@bs.get]
  external get700: color => string = "700";
  [@bs.get]
  external get800: color => string = "800";
  [@bs.get]
  external get900: color => string = "900";
  [@bs.get]
  external getA100: color => string = "A100";
  [@bs.get]
  external getA200: color => string = "A200";
  [@bs.get]
  external getA400: color => string = "A400";
  [@bs.get]
  external getA700: color => string = "A400";
};
module SimpleColor = {
  [@bs.get]
  external getLight: simpleColor => string = "light";
  [@bs.get]
  external getMain: simpleColor => string = "main";
  [@bs.get]
  external getDark: simpleColor => string = "dark";
  [@bs.get]
  external getContrastText: simpleColor => string = "contranstText";
};
module BackgroundColor = {
  [@bs.get]
  external getDefault: backgroundColor => string = "default";
  [@bs.get]
  external getPaper: backgroundColor => string = "paper";
};
module CommonColor = {
  [@bs.get]
  external getBlack: commonColor => string = "black";
  [@bs.get]
  external getWhite: commonColor => string = "white";
}
module TextColor = {
  [@bs.get]
  external getPrimary: textColor => string = "primary";
  [@bs.get]
  external getSecondary: textColor => string = "secondary";
  [@bs.get]
  external getDisabled: textColor => string = "disabled";
  [@bs.get]
  external getHint: textColor => string = "hint";
};
