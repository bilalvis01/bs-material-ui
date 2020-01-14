type t;

[@bs.obj]
external make: (
  ~root: string=?,
  ~multiline: string=?,
  ~dense: string=?,
  ~inset: string=?,
  ~primary: string=?,
  ~secondary: string=?,
  unit
) => 
t = 
"";