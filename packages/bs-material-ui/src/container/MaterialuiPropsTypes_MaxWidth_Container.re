[@unboxed]
type t =
  | MaxWidth('a): t;

let xs = MaxWidth("xs");
let sm = MaxWidth("sm");
let md = MaxWidth("md");
let lg = MaxWidth("lg");
let xl = MaxWidth("xl");
let disable = MaxWidth(false);