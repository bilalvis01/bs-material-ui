type parameter = {
  from: int,
  [@bs.as "to"]
  to_: int,
  count: int,
};

type t = parameter => string;