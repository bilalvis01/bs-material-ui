type t;

[@bs.obj]
external make: (
  ~xs: int,
  ~sm: int,
  ~md: int,
  ~lg: int,
  ~xl: int,
) => t = "";
[@bs.get]
external xs: t => int = "xs";
[@bs.get]
external sm: t => int = "sm";
[@bs.get]
external md: t => int = "md";
[@bs.get]
external lg: t => int = "lg";
[@bs.get]
external xl: t => int = "xl";