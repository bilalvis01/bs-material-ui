type t;

[@bs.obj]
external make: (
  ~root: string=?,
  ~padding: string=?,
  ~dense: string=?,
  ~subheader: string=?,
  unit
) => 
t = 
"";