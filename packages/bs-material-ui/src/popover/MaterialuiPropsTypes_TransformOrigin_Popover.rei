type horizontal;
type vertical;
type t = {
  .
  "horizontal": horizontal,
  "vertical": vertical
};

[@bs.inline "left"]
let left: horizontal;
[@bs.inline "center"]
let centerH: horizontal;
[@bs.inline "right"]
let right: horizontal;
external intH: int => horizontal = "%identity";

[@bs.inline "bottom"]
let bottom: vertical;
[@bs.inline "center"]
let centerV: vertical;
[@bs.inline "top"]
let top: vertical;
external intV: int => vertical = "%identity";