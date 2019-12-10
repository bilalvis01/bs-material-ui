type t;

[@bs.obj]
external make: (
  ~default: string=?,
  ~paper: string=?,
  unit
) => t = "";
[@bs.get]
external default: t => string = "default";
[@bs.get]
external paper: t => string = "paper";