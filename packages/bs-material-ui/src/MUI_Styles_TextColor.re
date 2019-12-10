type t;

[@bs.obj]
external make: (
  ~primary: string=?,
  ~secondary: string=?,
  ~disabled: string=?,
  ~hint: string=?,
  unit
) => t = "";
[@bs.get]
external primary: t => string = "primary";
[@bs.get]
external secondary: t => string = "secondary";
[@bs.get]
external disabled: t => string = "disabled";
[@bs.get]
external hint: t => string = "hint";