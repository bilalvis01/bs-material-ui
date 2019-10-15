type t;
type common;

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
external getA700: t => string = "A700";
[@bs.get]
external getCommon: t => common = "common";
[@bs.get]
external getBlack: common => string = "black";
[@bs.get]
external getWhite: common => string = "white";

[@bs.module "@material-ui/core/colors/amber"]
external amber: t = "default";

[@bs.module "@material-ui/core/colors/blue"]
external blue: t = "default";

[@bs.module "@material-ui/core/colors/blueGrey"]
external blueGrey: t = "default";

[@bs.module "@material-ui/core/colors/brown"]
external brown: t = "default";

[@bs.module "@material-ui/core/colors/cyan"]
external cyan: t = "default";

[@bs.module "@material-ui/core/colors/deepOrange"]
external deepOrange: t = "default";

[@bs.module "@material-ui/core/colors/deepPurple"]
external deepPurple: t = "default";

[@bs.module "@material-ui/core/colors/green"]
external green: t = "default";

[@bs.module "@material-ui/core/colors/grey"]
external grey: t = "default";

[@bs.module "@material-ui/core/colors/indigo"]
external indigo: t = "default";

[@bs.module "@material-ui/core/colors/lightBlue"]
external lightBlue: t = "default";

[@bs.module "@material-ui/core/colors/lightGreen"]
external lightGreen: t = "default";

[@bs.module "@material-ui/core/colors/lime"]
external lime: t = "default";

[@bs.module "@material-ui/core/colors/orange"]
external orange: t = "default";

[@bs.module "@material-ui/core/colors/pink"]
external pink: t = "default";

[@bs.module "@material-ui/core/colors/purple"]
external purple: t = "default";

[@bs.module "@material-ui/core/colors/red"]
external red: t = "default";

[@bs.module "@material-ui/core/colors/teal"]
external teal: t = "default";