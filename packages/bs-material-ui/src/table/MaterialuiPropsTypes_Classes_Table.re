type t;

[@bs.obj]
external make: (
  ~root: string=?,
  ~stickyHeader: string=?,
  unit
) => 
t = 
"";