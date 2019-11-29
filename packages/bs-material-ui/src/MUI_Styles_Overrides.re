type muiAppBar;

module type OverridesType = {
  type t;
  type rule;
};

module Make = (Type: OverridesType) => {
  module Overrides = {
    type t = Type.t;
    [@bs.obj]
    external make: (
      ~_MuiAppBar: muiAppBar=?,
      unit
    ) => t = "";
    [@bs.get]
    external muiAppBar: t => muiAppBar = "MuiAppBar";
  };
  module MUIAppBar = {
    type t = muiAppBar;
    [@bs.obj]
    external make: (
      ~root: Type.rule=?,
      ~positionFixed: Type.rule=?,
      ~positionAbsolute: Type.rule=?,
      ~positionSticky: Type.rule=?,
      ~positionStatic: Type.rule=?,
      ~positionRelative: Type.rule=?,
      ~colorDefault: Type.rule=?,
      ~colorPrimary: Type.rule=?,
      ~colorSecondary: Type.rule=?,
      unit
    ) => t = "";
    [@bs.get]
    external root: t => Type.rule = "root";
    [@bs.get]
    external positionFixed: t => Type.rule = "positionFixed";
    [@bs.get]
    external positionAbsolute: t => Type.rule = "positionAbsolute";
    [@bs.get]
    external positionSticky: t => Type.rule = "positionSticky";
    [@bs.get]
    external positionStatic: t => Type.rule = "positionStatic";
    [@bs.get]
    external positionRelative: t => Type.rule = "positionRelative";
    [@bs.get]
    external colorDefault: t => Type.rule = "colorDefault";
    [@bs.get]
    external colorPrimary: t => Type.rule = "colorPrimary";
    [@bs.get]
    external colorSecondary: t => Type.rule = "colorSecondary";
  };
};