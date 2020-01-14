type t;
[@bs.obj]
external make: (
  ~root: string=?,
  ~positionFixed: string=?,
  ~positionAbsolute: string=?,
  ~positionSticky: string=?,
  ~positionStatic: string=?,
  ~positionRelative: string=?,
  ~colorDefault: string=?,
  ~colorPrimary: string=?,
  ~colorSecondary: string=?,
  unit
) => 
t = 
"";