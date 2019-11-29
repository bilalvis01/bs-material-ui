type muiAppBar;

module type OverridesType = {
  type t;
  type style;
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
      ~root: Type.style=?,
      ~positionFixed: Type.style=?,
      ~positionAbsolute: Type.style=?,
      ~positionSticky: Type.style=?,
      ~positionStatic: Type.style=?,
      ~positionRelative: Type.style=?,
      ~colorDefault: Type.style=?,
      ~colorPrimary: Type.style=?,
      ~colorSecondary: Type.style=?,
      unit
    ) => t = "";
    [@bs.get]
    external root: t => Type.style = "root";
    [@bs.get]
    external positionFixed: t => Type.style = "positionFixed";
    [@bs.get]
    external positionAbsolute: t => Type.style = "positionAbsolute";
    [@bs.get]
    external positionSticky: t => Type.style = "positionSticky";
    [@bs.get]
    external positionStatic: t => Type.style = "positionStatic";
    [@bs.get]
    external positionRelative: t => Type.style = "positionRelative";
    [@bs.get]
    external colorDefault: t => Type.style = "colorDefault";
    [@bs.get]
    external colorPrimary: t => Type.style = "colorPrimary";
    [@bs.get]
    external colorSecondary: t => Type.style = "colorSecondary";
  };
};