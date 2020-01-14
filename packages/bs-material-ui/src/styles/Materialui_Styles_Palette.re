type t;
type options;

[@bs.obj]
external options: (
  ~primary: Materialui_Styles_PaletteColor.options=?,
  ~secondary: Materialui_Styles_PaletteColor.options=?,
  ~error: Materialui_Styles_PaletteColor.options=?,
  ~_type: [@bs.string] [ | `light | `dark ]=?,
  ~tonalOffset: int=?,
  ~contrastThreshold: int=?,
  ~common: Materialui_Styles_Common.t=?,
  ~grey: Materialui_Styles_Color.t=?,
  ~text: Materialui_Styles_Text.t=?,
  ~divider: string=?,
  ~action: Materialui_Styles_Action.t=?,
  ~background: Materialui_Styles_Background.t=?,
  ~getContrastText: string => string=?,
  unit
) => 
options = 
"";
[@bs.module "@material-ui/core/styles/createPalette"]
external make: options => t = "default";

[@bs.get]
external common: t => Materialui_Styles_Common.t = "common";
[@bs.get]
external type_: t => string = "type";
[@bs.get]
external contrastThreshold: t => int = "contrastThreshold";
[@bs.get]
external tonalOffset: t => int = "tonalOffset";
[@bs.get]
external primary: t => Materialui_Styles_PaletteColor.t = "primary";
[@bs.get]
external secondary: t => Materialui_Styles_PaletteColor.t= "secondary";
[@bs.get]
external error: t => Materialui_Styles_PaletteColor.t = "error";
[@bs.get]
external grey: t => Materialui_Styles_Color.t = "grey";
[@bs.get]
external text: t => Materialui_Styles_Text.t = "text";
[@bs.get]
external divider: t => string = "divider";
[@bs.get]
external action: t => Materialui_Styles_Action.t = "action";
[@bs.get]
external background: t => Materialui_Styles_Background.t = "background";
[@bs.send]
external getContrastText: (t, string) => string = "getContrastText";
[@bs.send]
external augmentColor: (t, Materialui_Styles_Color.t) => Materialui_Styles_PaletteColor.t = "augmentColor";
[@bs.send]
external augmentColor2: (
  t,
  ~color: Materialui_Styles_Color.t,
  ~mainShade: [@bs.unwrap] [ | `Int(int) | `Str(string) ]=?,
  ~lightShade: [@bs.unwrap] [ | `Int(int) | `Str(string) ]=?,
  ~darkShade: [@bs.unwrap] [ | `Int(int) | `Str(string) ]=?,
  unit
) => 
Materialui_Styles_PaletteColor.t = 
"augmentColor";