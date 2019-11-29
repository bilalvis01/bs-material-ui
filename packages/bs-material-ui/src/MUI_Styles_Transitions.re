type easing;
type duration;
type createOptions;

module type TransitionsType = {
  type t;
  type options;
};

module Make = (Type: TransitionsType) => {
  module Transitions = {
    [@bs.obj]
    external options: (
      ~duration: string=?,
      ~easing: string=?,
      ~create: (array(string), ~options: createOptions=?, unit) => string=?,
      ~getAutoHeightDuration: int => int=?,
      unit
    ) => Type.options = "";
    [@bs.get]
    external easing: Type.t => easing = "easing"; 
    [@bs.get]
    external duration: Type.t => duration = "duration";
    [@bs.send]
    external create: (Type.t, array(string)) => string = "create";
    [@bs.send]
    external createWithOptions: (Type.t, array(string), createOptions) => string = "create";
    [@bs.send]
    external getAutoHeightDuration: (Type.t, int) => int = "getAutoHeightDuration";
  };

  module Easing = {
    type t = easing;
    [@bs.get]
    external easeInOut: t => string = "easeInOut";
    [@bs.get]
    external easeOut: t => string = "easeOut";
    [@bs.get]
    external easeIn: t => string = "easeIn";
    [@bs.get]
    external sharp: t => string = "sharp";
  };

  module Duration = {
    type t = duration;
    [@bs.get]
    external shortest: t => int = "shortest";
    [@bs.get]
    external shorter: t => int = "shorter";
    [@bs.get]
    external short: t => int = "short";
    [@bs.get]
    external standard: t => int = "standard";
    [@bs.get]
    external complex: t => int = "complex";
    [@bs.get]
    external enteringScreen: t => int = "enteringScreen";
    [@bs.get]
    external leavingScreen: t => int = "leavingScreen";
  };

  module TransitionsCreateOptions = {
    [@bs.obj]
    external make: (
      ~duration: int=?,
      ~easing: int=?,
      ~delay: int=?,
      unit
    ) => createOptions = "";
    [@bs.get]
    external duration: createOptions => int = "duration";
    [@bs.get]
    external easing: createOptions => int = "easing";
    [@bs.get]
    external delay: createOptions => int = "delay";
  };
};