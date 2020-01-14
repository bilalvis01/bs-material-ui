type t;

[@bs.obj]
external make: (
  ~root: string=?,
  ~underlineNone: string=?,
  ~underlineHover: string=?,
  ~underlineAlways: string=?,
  ~button: string=?,
  ~focusVisible: string=?,
  unit
) => 
t = 
"";