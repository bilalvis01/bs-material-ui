type t;

[@bs.obj]
external make: (
  ~root: string=?,
  ~error: string=?,
  ~disabled: string=?,
  ~marginDense: string=?,
  ~contained: string=?,
  ~focused: string=?,
  ~filled: string=?,
  ~required: string=?,
  unit
) => 
t = 
"";