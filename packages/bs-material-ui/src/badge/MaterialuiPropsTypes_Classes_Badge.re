type t;
[@bs.obj]
external make: (
  ~root: string=?,
  ~badge: string=?,
  ~colorPrimary: string=?,
  ~colorSecondary: string=?,
  ~colorError: string=?,
  ~dot: string=?,
  ~anchorOriginTopRightRectangle: string=?,
  ~anchorOriginBottomRightRectangle: string=?,
  ~anchorOriginTopLeftRectangle: string=?,
  ~anchorOriginBottomLeftRectangle: string=?,
  ~anchorOriginTopRightCircle: string=?,
  ~anchorOriginBottomRightCircle: string=?,
  ~anchorOriginTopLeftCircle: string=?,
  ~anchorOriginBottomLeftCircle: string=?,
  ~invisible: string=?,
  unit
) => 
t = 
"";