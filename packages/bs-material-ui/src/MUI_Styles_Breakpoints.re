type t;
type options;

[@bs.module "@material-ui/core/styles/createBreakpoints"]
external make: options => t = "default";
[@bs.obj]
external options: (
  ~unit: string=?,
  ~step: int=?,
  ~keys: array(string)=?,
  ~values: MUI_Styles_BreakpointValues.t=?,
  ~up: string => string=?,
  ~down: string => string=?,
  ~between: (string, string) => string=?,
  ~only: string => string=?,
  ~width: string => string=?,
  unit
) => options = "";
[@bs.get]
external keys: t => array(string) = "keys"; 
[@bs.send]
external values: t => MUI_Styles_BreakpointValues.t = "values";
[@bs.send]
external up: (
  t, 
  [@bs.string] [ | `xs | `sm | `md | `lg | `xl ]
) => string = "up";
[@bs.send]
external down: (
  t,
  [@bs.string] [ | `xs | `sm | `md | `lg | `xl ]
) => string = "down";
[@bs.send]
external between: (
  t,
  ~start: [@bs.string] [ | `xs | `sm | `md | `lg | `xl ],
  ~_end: [@bs.string] [ | `xs | `sm | `md | `lg | `xl ]
) => string = "between";
[@bs.send]
external only: (
  t,
  [@bs.string] [ | `xs | `sm | `md | `lg | `xl ]
) => string = "only";
[@bs.send]
external width: (
  t,
  [@bs.string] [ | `xs | `sm | `md | `lg | `xl ]
) => int = "width";