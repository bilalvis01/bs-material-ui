type t;
type options;
type breakpoints;

[@bs.module "@material-ui/core/styles/createMixins"]
external make: (
  ~breakpoints: Mui_Styles_Breakpoints.t,
  ~spacing: 'spacing,
  ~mixins: options,
) => t = "default";
[@bs.obj]
external options: (
  ~gutters: Mui_Styles_Style.t => Mui_Styles_Style.t=?,
  ~toolbar: Mui_Styles_Style.t=?,
  unit
) => options = "";
[@bs.send]
external gutters: (t, Mui_Styles_Style.t) => Mui_Styles_Style.t = "gutters";
[@bs.get]
external toolbar: t => Mui_Styles_Style.t = "toolbar";