[@unboxed]
type t = 
  | Edge('a): t;

let start = Edge("start");
let end_ = Edge("end");
let disable = Edge(false); 