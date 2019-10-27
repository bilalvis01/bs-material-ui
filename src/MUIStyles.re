module Theme = MUIStyles_Theme;
module Style = MUIStyles_Style;
module StylesHook = MUIStyles_StylesHook;

[@bs.module "@material-ui/core/styles"]
external fade: (string, float) => string = "fade";