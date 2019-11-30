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
      ~duration: duration=?,
      ~easing: easing=?,
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
    [@bs.obj]
    external make: (
      ~easeInOut: string=?,
      ~easeOut: string=?,
      ~easeIn: string=?,
      ~sharp: string=?,
      unit
    ) => easing = "";
    [@bs.get]
    external easeInOut: easing => string = "easeInOut";
    [@bs.get]
    external easeOut: easing => string = "easeOut";
    [@bs.get]
    external easeIn: easing => string = "easeIn";
    [@bs.get]
    external sharp: easing => string = "sharp";
  };

  module Duration = {
    [@bs.obj]
    external make: (
      ~shortest: int=?,
      ~shorter: int=?,
      ~short: int=?,
      ~standard: int=?,
      ~complex: int=?,
      ~enteringScreen: int=?,
      ~leavingScreen: int=?,
      unit
    ) => duration = "";
    [@bs.get]
    external shortest: duration => int = "shortest";
    [@bs.get]
    external shorter: duration => int = "shorter";
    [@bs.get]
    external short: duration => int = "short";
    [@bs.get]
    external standard: duration => int = "standard";
    [@bs.get]
    external complex: duration => int = "complex";
    [@bs.get]
    external enteringScreen: duration => int = "enteringScreen";
    [@bs.get]
    external leavingScreen: duration => int = "leavingScreen";
  };

  module TransitionsCreateOptions = {
    [@bs.obj]
    external make: (
      ~duration: int=?,
      ~easing: string=?,
      ~delay: int=?,
      unit
    ) => createOptions = "";
    [@bs.get]
    external duration: createOptions => int = "duration";
    [@bs.get]
    external easing: createOptions => string = "easing";
    [@bs.get]
    external delay: createOptions => int = "delay";
  };
};