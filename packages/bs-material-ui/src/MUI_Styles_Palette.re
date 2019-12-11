type t;
type options;

[@bs.obj]
external options: (
  ~primary: Mui_Styles_PaletteColor.options=?,
  ~secondary: Mui_Styles_PaletteColor.options=?,
  ~error: Mui_Styles_PaletteColor.options=?,
  ~_type: [@bs.string] [ | `light | `dark ]=?,
  ~tonalOffset: int=?,
  ~contrastThreshold: int=?,
  ~common: Mui_Styles_CommonColor.t=?,
  ~grey: Mui_Styles_Color.t=?,
  ~text: Mui_Styles_TextColor.t=?,
  ~divider: string=?,
  ~action: Mui_Styles_ActionColor.t=?,
  ~background: Mui_Styles_BackgroundColor.t=?,
  ~getContrastText: string => string=?,
  unit
) => options = "";
[@bs.module "@material-ui/core/styles/createPalette"]
external make: options => t = "default";
[@bs.get]
external common: t => Mui_Styles_CommonColor.t = "common";
[@bs.get]
external type_: t => string = "type";
[@bs.get]
external contrastThreshold: t => int = "contrastThreshold";
[@bs.get]
external tonalOffset: t => int = "tonalOffset";
[@bs.get]
external primary: t => Mui_Styles_PaletteColor.t = "primary";
[@bs.get]
external secondary: t => Mui_Styles_PaletteColor.t= "secondary";
[@bs.get]
external error: t => Mui_Styles_PaletteColor.t = "error";
[@bs.get]
external grey: t => Mui_Styles_Color.t = "grey";
[@bs.get]
external text: t => Mui_Styles_TextColor.t = "text";
[@bs.get]
external divider: t => string = "divider";
[@bs.get]
external action: t => Mui_Styles_ActionColor.t = "action";
[@bs.get]
external background: t => Mui_Styles_BackgroundColor.t = "background";
[@bs.send]
external getContrastText: (t, string) => string = "getContrastText";
[@bs.send]
external augmentColor: (t, Mui_Styles_Color.t) => Mui_Styles_PaletteColor.t = "augmentColor";
[@bs.send]
external augmentColor2: (
  t,
  ~color: Mui_Styles_Color.t,
  ~mainShade: [@bs.unwrap] [ | `Int(int) | `Str(string) ]=?,
  ~lightShade: [@bs.unwrap] [ | `Int(int) | `Str(string) ]=?,
  ~darkShade: [@bs.unwrap] [ | `Int(int) | `Str(string) ]=?,
  unit
) => Mui_Styles_PaletteColor.t = "augmentColor";