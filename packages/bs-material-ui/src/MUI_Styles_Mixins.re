module type MixinsType = {
  type t;
  type options;
  type rule;
  type breakpoints;
  type spacing; 
};

module Make = (Mixins: MixinsType) => {
  [@bs.module "@material-ui/core/styles/createMixins"]
  external make: (
    ~breakpoints: Mixins.breakpoints,
    ~spacing: Mixins.spacing,
    ~options: Mixins.options,
  ) => Mixins.t = "";
  [@bs.obj]
  external options: (
    ~gutters: Mixins.rule => Mixins.rule=?,
    ~toolbar: Mixins.rule=?,
    unit
  ) => Mixins.options = "";
  [@bs.send]
  external gutters: (Mixins.t, Mixins.rule) => Mixins.rule = "gutters";
  [@bs.get]
  external toolbar: Mixins.t => Mixins.rule = "toolbar";
};