type t;

[@bs.obj]
external make: (
  ~root: string=?,
  ~disabled: string=?,
  ~focusVisible: string=?,
  unit
) => 
t = 
"";