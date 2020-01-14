type t;

[@bs.obj]
external make: (
  ~root: string=?,
  ~avatar: string=?,
  ~action: string=?,
  ~content: string=?,
  ~title: string=?,
  ~subheader: string=?,
  unit
) => 
t = 
"";