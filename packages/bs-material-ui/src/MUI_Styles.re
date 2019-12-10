[@bs.module "@material-ui/core/styles"]
external useTheme: unit => 'theme = "useTheme";

module type StylesType = {
  type theme;
  type styles('a);
  type props;
};

module Make = (Styles: StylesType) => {
  type options;
  type stylesHook('props) = 'props => Styles.styles(string);
  [@bs.module "@material-ui/core/styles"]
  external make: ( 
    [@bs.uncurry] 
    (Styles.theme => Styles.styles(Styles.props => MUI_Styles_Style.t))
  ) => stylesHook(Styles.props) = "makeStyles";
  [@bs.module "@material-ui/core/styles"]
  external makeWithOptions: (
    [@bs.uncurry] 
    (Styles.theme => Styles.styles(Styles.props => MUI_Styles_Style.t)), 
    options
  ) => stylesHook(Styles.props) = "makeStyles";
};

/**
 * 
 * Style helper
 * 
 */
module Style = MUI_Styles_Style;

/**
 * 
 * Color manipulator helper
 * 
 */
module ColorManipulator = MUI_Styles_ColorManipulator;

/**
 * 
 * Theme helper
 * 
 */
module Theme = MUI_Styles_Theme;
module Shape = MUI_Styles_Shape;
module Breakpoints = MUI_Styles_Breakpoints;
module BreakpointValues = MUI_Styles_BreakpointValues;
module Mixins = MUI_Styles_Mixins;
module Overrides = MUI_Styles_Overrides;
module AppBar = MUI_Styles_AppBar;
module Palette = MUI_Styles_Palette;
module PaletteColor = MUI_Styles_PaletteColor;
module ActionColor = MUI_Styles_ActionColor;
module TextColor = MUI_Styles_TextColor;
module Color = MUI_Styles_Color;
module BackgroundColor = MUI_Styles_BackgroundColor;
module CommonColor = MUI_Styles_CommonColor;
module Props = MUI_Styles_Props;
module Shadows = MUI_Styles_Shadows;
module Transitions = MUI_Styles_Transitions;
module TransitionDuration = MUI_Styles_TransitionDuration;
module Easing = MUI_Styles_Easing;
module Typography = MUI_Styles_Typography;
module ZIndex = MUI_Styles_ZIndex;