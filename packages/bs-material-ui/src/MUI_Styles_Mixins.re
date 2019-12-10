type t;
type options;
type breakpoints;

[@bs.module "@material-ui/core/styles/createMixins"]
external make: (
  ~breakpoints: MUI_Styles_Breakpoints.t,
  ~spacing: 'spacing,
  ~mixins: options,
) => t = "default";
[@bs.obj]
external options: (
  ~gutters: MUI_Styles_Style.t => MUI_Styles_Style.t=?,
  ~toolbar: MUI_Styles_Style.t=?,
  unit
) => options = "";
[@bs.send]
external gutters: (t, MUI_Styles_Style.t) => MUI_Styles_Style.t = "gutters";
[@bs.get]
external toolbar: t => MUI_Styles_Style.t = "toolbar";