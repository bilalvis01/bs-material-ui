type easing;
type duration;

module type TransitionsType = {
  type t;
};

module Make = (Type: TransitionsType) => {
  module Transitions = {
    type t = Type.t;
    type options;
    [@bs.obj]
    external options: (
      ~duration: string=?,
      ~easing: string=?,
      ~delay: string=?,
      unit
    ) => options = "";
    [@bs.get]
    external easing: t => easing = "easing"; 
    [@bs.get]
    external duration: t => duration = "duration";
    [@bs.send]
    external create: (t, array(string)) => string = "create";
    [@bs.send]
    external createWithOptions: (t, array(string), options) => string = "create";
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
};