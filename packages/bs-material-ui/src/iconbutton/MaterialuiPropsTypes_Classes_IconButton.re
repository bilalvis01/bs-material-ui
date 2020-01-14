type t;

[@bs.obj]
external make: (
  ~root: string=?,
  ~edgeStart: string=?,
  ~edgeEnd: string=?,
  ~colorInherit: string=?,
  ~colorPrimary: string=?,
  ~colorSecondary: string=?,
  ~disabled: string=?,
  ~sizeSmall: string=?,
  ~label: string=?,
  unit
) => 
t = 
"";