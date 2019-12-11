type t;
type options;

[@bs.obj]
external options: (
  ~borderRadius: int=?,
  unit
) => options = "";
[@bs.get]
external borderRadius: t => string = "borderRadius";