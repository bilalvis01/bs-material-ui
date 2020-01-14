type horizontal = string;
type vertical = string;
type t = {
  .
  "horizontal": horizontal,
  "vertical": vertical
};

[@bs.inline]
let left = "left";
[@bs.inline]
let centerH = "center";
[@bs.inline]
let right = "right";
external intH: int => horizontal = "%identity";

[@bs.inline]
let bottom = "bottom";
[@bs.inline]
let centerV = "center";
[@bs.inline]
let top = "top";
external intV: int => vertical = "%identity";