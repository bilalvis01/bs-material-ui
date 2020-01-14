type t;

[@bs.obj]
external make: (
  ~root: string=?,
  ~selected: string=?,
  ~iconOnly: string=?,
  ~wrapper: string=?,
  ~label: string=?,
  unit
) => 
t = 
"";