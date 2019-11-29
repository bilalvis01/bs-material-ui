type breakpointValues;

module type BreakpointsType = {
  type t;
  type options;
};

module Make = (Type: BreakpointsType) => {
  module Breakpoints = {
    [@bs.module "@material-ui/core/styles/createBreakpoints"]
    external make: Type.options => Type.t = "default";
    [@bs.obj]
    external options: (
      ~unit: string=?,
      ~step: int=?,
      ~keys: array(string)=?,
      ~values: breakpointValues=?,
      ~up: string => string=?,
      ~down: string => string=?,
      ~between: (string, string) => string=?,
      ~only: string => string=?,
      ~width: string => string=?,
      unit
    ) => Type.options = "";
    [@bs.get]
    external keys: Type.t => array(string) = "keys"; 
    [@bs.send]
    external values: Type.t => breakpointValues = "values";
    [@bs.send]
    external up: (
      Type.t, 
      [@bs.string] [ | `xs | `sm | `md | `lg | `xl ]
    ) => string = "up";
    [@bs.send]
    external down: (
      Type.t,
      [@bs.string] [ | `xs | `sm | `md | `lg | `xl ]
    ) => string = "down";
    [@bs.send]
    external between: (
      Type.t,
      ~start: [@bs.string] [ | `xs | `sm | `md | `lg | `xl ],
      ~_end: [@bs.string] [ | `xs | `sm | `md | `lg | `xl ]
    ) => string = "between";
    [@bs.send]
    external only: (
      Type.t,
      [@bs.string] [ | `xs | `sm | `md | `lg | `xl ]
    ) => string = "only";
    [@bs.send]
    external width: (
      Type.t,
      [@bs.string] [ | `xs | `sm | `md | `lg | `xl ]
    ) => int = "width";
  };

  module BreakpointValues = {
    type t = breakpointValues;
    [@bs.obj]
    external make: (
      ~xs: int,
      ~sm: int,
      ~md: int,
      ~lg: int,
      ~xl: int,
    ) => t = "";
    [@bs.get]
    external xs: t => int = "xs";
    [@bs.get]
    external sm: t => int = "sm";
    [@bs.get]
    external md: t => int = "md";
    [@bs.get]
    external lg: t => int = "lg";
    [@bs.get]
    external xl: t => int = "xl";
  };
};