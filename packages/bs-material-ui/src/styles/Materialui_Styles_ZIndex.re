type t;
type options;

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
) => 
options = 
"";

[@bs.get]
external mobileStepper: t => int = "mobileStepper";
[@bs.get]
external speedDial: t => int = "speedDial";
[@bs.get]
external appBar: t => int = "appBar";
[@bs.get]
external drawer: t => int = "drawer";
[@bs.get]
external modal: t => int = "modal";
[@bs.get]
external snackbar: t => int = "snackbar";
[@bs.get]
external tooltip: t => int = "tooltip";