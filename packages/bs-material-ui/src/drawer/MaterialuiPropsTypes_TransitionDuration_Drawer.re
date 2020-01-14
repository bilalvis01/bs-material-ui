type t;

external duration: int => t = "%identity";
[@bs.obj]
external obj: (
  ~enter: int=?,
  ~exit: int=?,
  unit
) => t = "";