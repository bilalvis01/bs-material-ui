type t;
external duration: int => t = "%identity";
[@bs.obj]
external obj: (
  ~appear: int=?,
  ~enter: int=?,
  ~exit: int=?,
  unit
) => 
t = 
"";