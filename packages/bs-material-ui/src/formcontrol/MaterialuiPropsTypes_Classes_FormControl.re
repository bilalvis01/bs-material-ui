type t;

[@bs.obj]
external make: (
  ~root: string=?,
  ~marginNormal: string=?,
  ~marginDense: string=?,
  ~fullWidth: string=?,
  unit
) => 
t = 
"";