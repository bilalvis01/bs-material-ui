[@unboxed]
type t =
  | SortDirection('a): t;

let asc = SortDirection("asc");
let desc = SortDirection("desc");
let disable = SortDirection(false);