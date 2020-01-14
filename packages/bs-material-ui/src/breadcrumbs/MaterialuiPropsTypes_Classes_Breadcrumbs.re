type t;

[@bs.obj]
external make: (
  ~root: string=?,
  ~ol: string=?,
  ~li: string=?,
  ~separator: string=?,
  unit
) => 
t = 
"";
