module Make = () => {
  module Common = {
    type t;
    [@bs.get]
    external black: t => string = "black";
    [@bs.get]
    external white: t => string = "white";
  };
  module Background = {
    type t;
    [@bs.obj]
    external make: (
      ~default: string=?,
      ~paper: string=?,
      unit
    ) => t = "";

    [@bs.get]
    external default: t => string = "default";
    [@bs.get]
    external paper: t => string = "paper";
  };
  module Color = {
    type t;

    module Make = (T: { type t; }) => {
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
      ) => T.t = "";
    };

    include Make({ type nonrec t = t; });
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
    external a100: t => string = "A100";
    [@bs.get]
    external a200: t => string = "A200";
    [@bs.get]
    external a400: t => string = "A400";
    [@bs.get]
    external a700: t => string = "A400";
  };
  module SimpleColor = {
    type t;

    module Make = (T: { type t; }) => {
      [@bs.obj]
      external make: (
        ~light: string=?,
        ~main: string=?,
        ~dark: string=?,
        ~contrastText: string=?,
        unit
      ) => T.t = "";
    };

    include Make({ type nonrec t = t; });
    [@bs.get]
    external light: t => string = "light";
    [@bs.get]
    external main: t => string = "main";
    [@bs.get]
    external dark: t => string = "dark";
    [@bs.get]
    external contrastText: t => string = "contranstText";
  };
  module Text = {
    type t;
    [@bs.get]
    external primary: t => string = "primary";
    [@bs.get]
    external secondary: t => string = "secondary";
    [@bs.get]
    external disabled: t => string = "disabled";
    [@bs.get]
    external getHint: t => string = "hint";
  };
  module Action = {
    type t;
    [@bs.get]
    external active: t => string = "active";
    [@bs.get]
    external hover: t => string = "hover";
    [@bs.get]
    external hoverOpacity: t => int = "hoverOpacity";
    [@bs.get]
    external selected: t => string = "selected";
    [@bs.get]
    external disabled: t => string = "disabled";
    [@bs.get]
    external disabledBackground: t => string = "disabledBackground";
  };
  module PaletteColorOptions = {
    type t;
    
    module Color = Color.Make({ type nonrec t = t; });
    module SimpleColor = SimpleColor.Make({ type nonrec t = t; });

    let color = Color.make;
    let simpleColor = SimpleColor.make;
  };
  module Palette = {
    type t;
    [@bs.deriving abstract]
    type options = {
      [@bs.optional] 
      primary: PaletteColorOptions.t,
      [@bs.optional] 
      secondary: PaletteColorOptions.t,
      [@bs.optional] 
      error: PaletteColorOptions.t,
      [@bs.optional] [@bs.as "type"]
      type_: string,
      [@bs.optional] 
      tonalOffset: int,
      [@bs.optional] 
      contrastThreshold: int,
      [@bs.optional] 
      common: Common.t,
      [@bs.optional] 
      grey: Color.t,
      [@bs.optional] 
      text: Text.t,
      [@bs.optional] 
      divider: string,
      [@bs.optional] 
      action: Action.t,
      [@bs.optional] 
      background: Background.t,
      [@bs.optional] 
      getContrastText: string => string,
    };

    [@bs.module "@material-ui/core/styles/createPalette"]
    external make: options => t = "default";

    [@bs.get]
    external common: t => Common.t = "common";
    [@bs.get]
    external type_: t => string = "type";
    [@bs.get]
    external contrastThreshold: t => int = "contrastThreshold";
    [@bs.get]
    external tonalOffset: t => int = "tonalOffset";
    [@bs.get]
    external primary: t => SimpleColor.t = "primary";
    [@bs.get]
    external secondary: t => SimpleColor.t= "secondary";
    [@bs.get]
    external error: t => SimpleColor.t = "error";
    [@bs.get]
    external grey: t => Color.t = "grey";
    [@bs.get]
    external text: t => Text.t = "text";
    [@bs.get]
    external divider: t => string = "divider";
    [@bs.get]
    external action: t => Action.t = "action";
    [@bs.get]
    external background: t => Background.t = "background";
    [@bs.send]
    external getContrastText: (t, string) => string = "getContrastText"; 
  };
};