module type ZIndexType = {
  type t;
  type options;
};

module Make = (Type: ZIndexType) => {
  [@bs.obj]
  external options: (
    ~mobileStepper: int=?,
    ~speedDial: int=?,
    ~appBar: int=?,
    ~drawer: int=?,
    ~modal: int=?,
    ~snackbar: int=?,
    ~tooltip: int=?,
    unit
  ) => Type.options = "";
  [@bs.get]
  external mobileStepper: Type.t => int = "mobileStepper";
  [@bs.get]
  external speedDial: Type.t => int = "speedDial";
  [@bs.get]
  external appBar: Type.t => int = "appBar";
  [@bs.get]
  external drawer: Type.t => int = "drawer";
  [@bs.get]
  external modal: Type.t => int = "modal";
  [@bs.get]
  external snackbar: Type.t => int = "snackbar";
  [@bs.get]
  external tooltip: Type.t => int = "tooltip";
};