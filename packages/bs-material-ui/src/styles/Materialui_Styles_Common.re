type t;

[@bs.obj]
external make: (
  ~black: string=?,
  ~white: string=?,
  unit
) => 
t = 
"";

[@bs.get]
external black: t => string = "black";
[@bs.get]
external white: t => string = "white";