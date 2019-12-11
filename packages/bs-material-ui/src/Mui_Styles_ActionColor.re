type t;

[@bs.obj]
external make: (
  ~active: string=?,
  ~hover: string=?,
  ~hoverOpacity: int=?,
  ~selected: string=?,
  ~disabled: string=?,
  ~disabledBackground: string=?,
  unit
) => t = "";
[@bs.get]
external active: t => string = "active";
[@bs.get]
external hover: t => string = "hover";
[@bs.get]
external hoverOpacity: t => int = "hoverOpacity";
[@bs.get]
external selected: t => string = "selected";
[@bs.get]
external disabled: t => string = "disabled";
[@bs.get]
external disabledBackground: t => string = "disabledBackground";