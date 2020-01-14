type t;

[@bs.obj]
external make: (
  ~easeInOut: string=?,
  ~easeOut: string=?,
  ~easeIn: string=?,
  ~sharp: string=?,
  unit
) => 
t = 
"";

[@bs.get]
external easeInOut: t => string = "easeInOut";
[@bs.get]
external easeOut: t => string = "easeOut";
[@bs.get]
external easeIn: t => string = "easeIn";
[@bs.get]
external sharp: t => string = "sharp";