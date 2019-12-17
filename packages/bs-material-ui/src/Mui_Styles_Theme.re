type t;
type options;

[@bs.module "@material-ui/core/styles/createMuiTheme"]
external make: options => t = "default";
[@bs.obj]
external options: (
  ~shape: Mui_Styles_Shape.options=?,
  ~breakpoints: Mui_Styles_Breakpoints.options=?,
  ~direction: [@bs.string] [ | `ltr | `rtl ]=?,
  ~mixins: Mui_Styles_Mixins.options=?,
  ~overrides: Mui_Styles_Overrides.t=?,
  ~palette: Mui_Styles_Palette.options=?,
  ~props: Mui_Styles_Props.t=?,
  ~shadows: Mui_Styles_Shadows.t=?,
  ~spacing: int => 'spacingReturn=?,
  ~transitions: Mui_Styles_Transitions.options=?,
  ~typography: Mui_Styles_Palette.t => Mui_Styles_Typography.options=?,
  ~zIndexOptions: Mui_Styles_ZIndex.options=?,
  unit
) => options = "";
[@bs.get]
external shape: t => Mui_Styles_Shape.t = "shape";
[@bs.get]
external breakpoints: t => Mui_Styles_Breakpoints.t = "breakpoints";
[@bs.get]
external direction: t => string = "direction";
[@bs.get]
external mixins: t => Mui_Styles_Mixins.t = "mixins";
[@bs.get]
external overrides: t => Mui_Styles_Overrides.t = "overrides";
[@bs.get]
external palette: t => Mui_Styles_Palette.t = "palette";
[@bs.get]
external props: t => Mui_Styles_Props.t = "props";
[@bs.get]
external shadows: t => Mui_Styles_Shadows.t = "shadows";
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
external transitions: t => Mui_Styles_Transitions.t = "transitions";
[@bs.get]
external typography: t => Mui_Styles_Typography.t = "typography";
[@bs.get]
external zIndex: t => Mui_Styles_ZIndex.t = "zIndex";