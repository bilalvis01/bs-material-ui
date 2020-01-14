type t;

[@bs.obj]
external make: (
  ~root: string=?,
  ~fixed: string=?,
  ~maxWidthXs: string=?,
  ~maxWidthSm: string=?,
  ~maxWidthMd: string=?,
  ~maxWidthLg: string=?,
  ~maxWidthXl: string=?,
  unit
) => 
t = 
"";