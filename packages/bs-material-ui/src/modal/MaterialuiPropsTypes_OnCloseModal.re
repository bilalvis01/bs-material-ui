[@unboxed]
type t =
  | OnClose((ReactEvent.synthetic('a), string) => unit): t;