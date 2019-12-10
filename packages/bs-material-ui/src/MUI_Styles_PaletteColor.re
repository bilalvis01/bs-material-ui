type t;
type options;

[@bs.obj]
external options: (
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
) => options = "";
[@bs.obj]
external optionsSimple: (
  ~light: string=?,
  ~main: string,
  ~dark: string=?,
  ~contrastText: string=?,
  unit
) => options = "";
[@bs.get]
external light: t => string = "light";
[@bs.get]
external main: t => string = "main";
[@bs.get]
external dark: t => string = "dark";
[@bs.get]
external contrastText: t => string = "contranstText";