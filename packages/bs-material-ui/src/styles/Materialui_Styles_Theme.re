type t;
type options;

[@bs.module "@material-ui/core/styles/createMuiTheme"]
external make: options => t = "default";
[@bs.obj]
external options: (
  ~shape: Materialui_Styles_Shape.options=?,
  ~breakpoints: Materialui_Styles_Breakpoints.options=?,
  ~direction: [@bs.string] [ | `ltr | `rtl ]=?,
  ~mixins: Materialui_Styles_Mixins.options=?,
  ~overrides: Materialui_Styles_Overrides.t=?,
  ~palette: Materialui_Styles_Palette.options=?,
  ~props: Materialui_Styles_Props.t=?,
  ~shadows: Materialui_Styles_Shadows.t=?,
  ~spacing: int => 'spacingReturn=?,
  ~transitions: Materialui_Styles_Transitions.options=?,
  ~typography: Materialui_Styles_Palette.t => Materialui_Styles_Typography.options=?,
  ~zIndexOptions: Materialui_Styles_ZIndex.options=?,
  unit
) => 
options = 
"";

[@bs.get]
external shape: t => Materialui_Styles_Shape.t = "shape";
[@bs.get]
external breakpoints: t => Materialui_Styles_Breakpoints.t = "breakpoints";
[@bs.get]
external direction: t => string = "direction";
[@bs.get]
external mixins: t => Materialui_Styles_Mixins.t = "mixins";
[@bs.get]
external overrides: t => Materialui_Styles_Overrides.t = "overrides";
[@bs.get]
external palette: t => Materialui_Styles_Palette.t = "palette";
[@bs.get]
external props: t => Materialui_Styles_Props.t = "props";
[@bs.get]
external shadows: t => Materialui_Styles_Shadows.t = "shadows";
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
[@bs.get]
external transitions: t => Materialui_Styles_Transitions.t = "transitions";
[@bs.get]
external typography: t => Materialui_Styles_Typography.t = "typography";
[@bs.get]
external zIndex: t => Materialui_Styles_ZIndex.t = "zIndex";