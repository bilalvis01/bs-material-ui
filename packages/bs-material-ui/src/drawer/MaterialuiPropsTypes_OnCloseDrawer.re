[@unboxed]
type t =
  | OnClose(ReactEvent.synthetic('a) => unit): t;