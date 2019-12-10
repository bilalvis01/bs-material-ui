type t;
type options;

[@bs.module "@material-ui/core/styles"]
external make: options => t = "createMuiTheme";
[@bs.obj]
external options: (
  ~shape: MUI_Styles_Shape.options=?,
  ~breakpoints: MUI_Styles_Breakpoints.options=?,
  ~direction: [@bs.string] [ | `ltr | `rtl ]=?,
  ~mixins: MUI_Styles_Mixins.options=?,
  ~overrides: MUI_Styles_Overrides.t=?,
  ~palette: MUI_Styles_Palette.options=?,
  ~props: MUI_Styles_Props.t=?,
  ~shadows: MUI_Styles_Shadows.t=?,
  ~spacing: int => 'spacingReturn=?,
  ~transitions: MUI_Styles_Transitions.options=?,
  ~typography: MUI_Styles_Palette.t => MUI_Styles_Typography.options=?,
  ~zIndexOptions: MUI_Styles_ZIndex.options=?,
  unit
) => options = "";
[@bs.get]
external shape: t => MUI_Styles_Shape.t = "shape";
[@bs.get]
external breakpoints: t => MUI_Styles_Breakpoints.t = "breakpoints";
[@bs.get]
external direction: t => string = "direction";
[@bs.get]
external mixins: t => MUI_Styles_Mixins.t = "mixins";
[@bs.get]
external overrides: t => MUI_Styles_Overrides.t = "overrides";
[@bs.get]
external palette: t => MUI_Styles_Palette.t = "palette";
[@bs.get]
external props: t => MUI_Styles_Props.t = "props";
[@bs.get]
external shadows: t => MUI_Styles_Shadows.t = "shadows";
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
external transitions: t => MUI_Styles_Transitions.t = "transitions";
[@bs.get]
external typography: t => MUI_Styles_Typography.t = "typography";
[@bs.get]
external zIndex: t => MUI_Styles_ZIndex.t = "zIndex";