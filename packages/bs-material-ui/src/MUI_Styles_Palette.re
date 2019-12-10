type t;
type options;

[@bs.obj]
external options: (
  ~primary: MUI_Styles_PaletteColor.options=?,
  ~secondary: MUI_Styles_PaletteColor.options=?,
  ~error: MUI_Styles_PaletteColor.options=?,
  ~_type: [@bs.string] [ | `light | `dark ]=?,
  ~tonalOffset: int=?,
  ~contrastThreshold: int=?,
  ~common: MUI_Styles_CommonColor.t=?,
  ~grey: MUI_Styles_Color.t=?,
  ~text: MUI_Styles_TextColor.t=?,
  ~divider: string=?,
  ~action: MUI_Styles_ActionColor.t=?,
  ~background: MUI_Styles_BackgroundColor.t=?,
  ~getContrastText: string => string=?,
  unit
) => options = "";
[@bs.module "@material-ui/core/styles/createPalette"]
external make: options => t = "default";
[@bs.get]
external common: t => MUI_Styles_CommonColor.t = "common";
[@bs.get]
external type_: t => string = "type";
[@bs.get]
external contrastThreshold: t => int = "contrastThreshold";
[@bs.get]
external tonalOffset: t => int = "tonalOffset";
[@bs.get]
external primary: t => MUI_Styles_PaletteColor.t = "primary";
[@bs.get]
external secondary: t => MUI_Styles_PaletteColor.t= "secondary";
[@bs.get]
external error: t => MUI_Styles_PaletteColor.t = "error";
[@bs.get]
external grey: t => MUI_Styles_Color.t = "grey";
[@bs.get]
external text: t => MUI_Styles_TextColor.t = "text";
[@bs.get]
external divider: t => string = "divider";
[@bs.get]
external action: t => MUI_Styles_ActionColor.t = "action";
[@bs.get]
external background: t => MUI_Styles_BackgroundColor.t = "background";
[@bs.send]
external getContrastText: (t, string) => string = "getContrastText";
[@bs.send]
external augmentColor: (t, MUI_Styles_Color.t) => MUI_Styles_PaletteColor.t = "augmentColor";
[@bs.send]
external augmentColor2: (
  t,
  ~color: MUI_Styles_Color.t,
  ~mainShade: [@bs.unwrap] [ | `Int(int) | `Str(string) ]=?,
  ~lightShade: [@bs.unwrap] [ | `Int(int) | `Str(string) ]=?,
  ~darkShade: [@bs.unwrap] [ | `Int(int) | `Str(string) ]=?,
  unit
) => MUI_Styles_PaletteColor.t = "augmentColor";