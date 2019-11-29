module type MixinsType = {
  type t;
  type options;
  type style;
  type breakpoints;
  type spacing; 
};

module Make = (Type: MixinsType) => {
  module Mixins = {
    [@bs.module "@material-ui/core/styles/createMixins"]
    external make: (
      ~breakpoints: Type.breakpoints,
      ~spacing: Type.spacing,
      ~mixins: Type.options,
    ) => Type.t = "default";
    [@bs.obj]
    external options: (
      ~gutters: Type.style => Type.style=?,
      ~toolbar: Type.style=?,
      unit
    ) => Type.options = "";
    [@bs.send]
    external gutters: (Type.t, Type.style) => Type.style = "gutters";
    [@bs.get]
    external toolbar: Type.t => Type.style = "toolbar";
  };
};