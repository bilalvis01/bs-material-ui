type t;

[@bs.obj]
external make: (
  ~_50: string=?,
  ~_100: string=?,
  ~_200: string=?,
  ~_300: string=?,
  ~_400: string=?,
  ~_500: string=?,
  ~_600: string=?,
  ~_700: string=?,
  ~_900: string=?,
  ~_A100: string=?,
  ~_A200: string=?,
  ~_A400: string=?,
  ~_A700: string=?,
  unit
) => 
t = 
"";

[@bs.get]
external get50: t => string = "50";
[@bs.get]
external get100: t => string = "100";
[@bs.get]
external get200: t => string = "200";
[@bs.get]
external get300: t => string = "300";
[@bs.get]
external get400: t => string = "400";
[@bs.get]
external get500: t => string = "500";
[@bs.get]
external get600: t => string = "600";
[@bs.get]
external get700: t => string = "700";
[@bs.get]
external get800: t => string = "800";
[@bs.get]
external get900: t => string = "900";
[@bs.get]
external getA100: t => string = "A100";
[@bs.get]
external getA200: t => string = "A200";
[@bs.get]
external getA400: t => string = "A400";
[@bs.get]
external getA700: t => string = "A400";