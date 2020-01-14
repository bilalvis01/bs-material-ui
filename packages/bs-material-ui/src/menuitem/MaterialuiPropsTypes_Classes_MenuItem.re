type t;

[@bs.obj]
external make: (
  ~root: string=?,
  ~gutters: string=?,
  ~selected: string=?,
  ~dense: string=?,
  unit
) => 
t = 
"";