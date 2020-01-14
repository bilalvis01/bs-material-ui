type t;

[@bs.obj]
external make: (
  ~root: string=?,
  ~labelPlacementStart: string=?,
  ~labelPlacementTop: string=?,
  ~labelPlacementBottom: string=?,
  ~disabled: string=?,
  ~label: string=?,
  unit
) => 
t = 
"";