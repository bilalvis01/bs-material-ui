module type ShapeType = {
  type t;
  type options;
};

module Make = (Shape: ShapeType) => {
  [@bs.obj]
  external options: (
    ~borderRadius: int=?,
    unit
  ) => Shape.options = "";
  [@bs.get]
  external borderRadius: Shape.t => string = "borderRadius";
};