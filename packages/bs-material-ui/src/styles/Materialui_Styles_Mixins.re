type t;
type options;

[@bs.module "@material-ui/core/styles/createMixins"]
external make: (
  ~breakpoints: Materialui_Styles_Breakpoints.t,
  ~spacing: 'spacing,
  ~mixins: options,
) => 
t = 
"default";
[@bs.obj]
external options: (
  ~gutters: Materialui_Styles_Style.t => Materialui_Styles_Style.t=?,
  ~toolbar: Materialui_Styles_Style.t=?,
  unit
) => 
options = 
"";

[@bs.send]
external gutters: (t, Materialui_Styles_Style.t) => Materialui_Styles_Style.t =
  "gutters";
[@bs.get]
external toolbar: t => Materialui_Styles_Style.t = 
  "toolbar";