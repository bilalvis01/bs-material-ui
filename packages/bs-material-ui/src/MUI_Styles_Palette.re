type common;
type background;
type color;
type paletteColor;
type text;
type action;
type paletteColorOptions;

module type PaletteType = {
  type t;
  type options;
};

module Make = (Type: PaletteType) => {
  module Palette = {
    [@bs.obj]
    external options: (
      ~primary: paletteColorOptions=?,
      ~secondary: paletteColorOptions=?,
      ~error: paletteColorOptions=?,
      ~_type: [@bs.string] [ | `light | `dark ]=?,
      ~tonalOffset: int=?,
      ~contrastThreshold: int=?,
      ~common: common=?,
      ~grey: color=?,
      ~text: text=?,
      ~divider: string=?,
      ~action: action=?,
      ~background: background=?,
      ~getContrastText: string => string=?,
      unit
    ) => Type.options = "";
    [@bs.module "@material-ui/core/styles/createPalette"]
    external make: Type.options => Type.t = "default";
    [@bs.get]
    external common: Type.t => common = "common";
    [@bs.get]
    external type_: Type.t => string = "type";
    [@bs.get]
    external contrastThreshold: Type.t => int = "contrastThreshold";
    [@bs.get]
    external tonalOffset: Type.t => int = "tonalOffset";
    [@bs.get]
    external primary: Type.t => paletteColor = "primary";
    [@bs.get]
    external secondary: Type.t => paletteColor= "secondary";
    [@bs.get]
    external error: Type.t => paletteColor = "error";
    [@bs.get]
    external grey: Type.t => color = "grey";
    [@bs.get]
    external text: Type.t => text = "text";
    [@bs.get]
    external divider: Type.t => string = "divider";
    [@bs.get]
    external action: Type.t => action = "action";
    [@bs.get]
    external background: Type.t => background = "background";
    [@bs.send]
    external getContrastText: (Type.t, string) => string = "getContrastText";
    [@bs.send]
    external augmentColor: (Type.t, color) => paletteColor = "augmentColor";
    [@bs.send]
    external augmentColor2: (
      Type.t,
      ~color: color,
      ~mainShade: [@bs.unwrap] [ | `Int(int) | `Str(string) ]=?,
      ~lightShade: [@bs.unwrap] [ | `Int(int) | `Str(string) ]=?,
      ~darkShade: [@bs.unwrap] [ | `Int(int) | `Str(string) ]=?,
      unit
    ) => paletteColor = "augmentColor";
  };

  module Common = {
    [@bs.get]
    external black: common => string = "black";
    [@bs.get]
    external white: common => string = "white";
  };

  module Background = {
    [@bs.obj]
    external make: (
      ~default: string=?,
      ~paper: string=?,
      unit
    ) => background = "";
    [@bs.get]
    external default: background => string = "default";
    [@bs.get]
    external paper: background => string = "paper";
  };

  module Color = {
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
    ) => color = "";
    [@bs.get]
    external get50: color => string = "50";
    [@bs.get]
    external get100: color => string = "100";
    [@bs.get]
    external get200: color => string = "200";
    [@bs.get]
    external get300: color => string = "300";
    [@bs.get]
    external get400: color => string = "400";
    [@bs.get]
    external get500: color => string = "500";
    [@bs.get]
    external get600: color => string = "600";
    [@bs.get]
    external get700: color => string = "700";
    [@bs.get]
    external get800: color => string = "800";
    [@bs.get]
    external get900: color => string = "900";
    [@bs.get]
    external a100: color => string = "A100";
    [@bs.get]
    external a200: color => string = "A200";
    [@bs.get]
    external a400: color => string = "A400";
    [@bs.get]
    external a700: color => string = "A400";
  };

  module PaletteColor = {
    [@bs.get]
    external light: paletteColor => string = "light";
    [@bs.get]
    external main: paletteColor => string = "main";
    [@bs.get]
    external dark: paletteColor => string = "dark";
    [@bs.get]
    external contrastText: paletteColor => string = "contranstText";
  };

  module Text = {
    [@bs.get]
    external primary: text => string = "primary";
    [@bs.get]
    external secondary: text => string = "secondary";
    [@bs.get]
    external disabled: text => string = "disabled";
    [@bs.get]
    external hint: text => string = "hint";
  };

  module Action = {
    [@bs.get]
    external active: action => string = "active";
    [@bs.get]
    external hover: action => string = "hover";
    [@bs.get]
    external hoverOpacity: action => int = "hoverOpacity";
    [@bs.get]
    external selected: action => string = "selected";
    [@bs.get]
    external disabled: action => string = "disabled";
    [@bs.get]
    external disabledBackground: action => string = "disabledBackground";
  };
  
  module PaletteColorOptions = {
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
    ) => paletteColorOptions = "";
    [@bs.obj]
    external makeSimple: (
      ~light: string=?,
      ~main: string,
      ~dark: string=?,
      ~contrastText: string=?,
      unit
    ) => paletteColorOptions = "";
  };
};