type horizontal;
type vertical;
type t = {
  .
  "horizontal": horizontal,
  "vertical": vertical,
};
[@bs.inline "left"]
let left: horizontal;
[@bs.inline "right"]
let right: horizontal;
[@bs.inline "bottom"]
let bottom: vertical;
[@bs.inline "top"]
let top: vertical;