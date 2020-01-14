type t;

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
) => 
t = 
"";

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