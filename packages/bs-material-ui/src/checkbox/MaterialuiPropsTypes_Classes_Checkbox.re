type t;

[@bs.obj]
external make: (
  ~root: string=?,
  ~checked: string=?,
  ~disabled: string=?,
  ~indeterminate: string=?,
  ~colorPrimary: string=?,
  ~colorSecondary: string=?,
) => 
t = 
"";