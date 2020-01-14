type t;
external duration: int => t = "%identity";
let auto: t = [%raw "'auto'"];
[@bs.obj]
external obj: (
  ~enter: int=?,
  ~exit: int=?,
  unit
) => t = "";