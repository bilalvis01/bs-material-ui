module type MixinsType = {
  type t;
  type options;
  type breakpoints;
};

module Make = (Type: MixinsType) => {
  module Mixins = {
    [@bs.module "@material-ui/core/styles/createMixins"]
    external make: (
      ~breakpoints: Type.breakpoints,
      ~spacing: 'spacing,
      ~mixins: Type.options,
    ) => Type.t = "default";
    [@bs.obj]
    external options: (
      ~gutters: MUI_Styles_Style.t => MUI_Styles_Style.t=?,
      ~toolbar: MUI_Styles_Style.t=?,
      unit
    ) => Type.options = "";
    [@bs.send]
    external gutters: (Type.t, MUI_Styles_Style.t) => MUI_Styles_Style.t = "gutters";
    [@bs.get]
    external toolbar: Type.t => MUI_Styles_Style.t = "toolbar";
  };
};