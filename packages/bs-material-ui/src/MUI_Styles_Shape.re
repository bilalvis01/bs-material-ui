module type ShapeType = {
  type t;
  type options;
};

module Make = (Type: ShapeType) => {
  [@bs.obj]
  external options: (
    ~borderRadius: int=?,
    unit
  ) => Type.options = "";
  [@bs.get]
  external borderRadius: Type.t => string = "borderRadius";
};