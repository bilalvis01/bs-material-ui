type t;

[@bs.obj]
external make: (
  ~root: string=?,
  ~colorSecondary: string=?,
  ~focused: string=?,
  ~disabled: string=?,
  ~error: string=?,
  ~filled: string=?,
  ~required: string=?,
  ~asterisk: string=?,
  unit
) => 
t = 
"";