type t;

[@bs.obj]
external make: (
  ~root: string=?,
  ~toolbar: string=?,
  ~spacer: string=?,
  ~caption: string=?,
  ~selectRoot: string=?,
  ~select: string=?,
  ~selectIcon: string=?,
  ~input: string=?,
  ~menuItem: string=?,
  ~actions: string=?,
  unit
) => 
t = 
"";