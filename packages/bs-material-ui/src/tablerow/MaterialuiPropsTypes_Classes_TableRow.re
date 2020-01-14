type t;

[@bs.obj]
external make: (
  ~root: string=?,
  ~selected: string=?,
  ~hover: string=?,
  ~head: string=?,
  ~footer: string=?,
  unit
) => 
t = 
"";