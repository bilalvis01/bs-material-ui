[@bs.module "@material-ui/core/styles/useTheme"]
external useTheme: unit => 'theme = "default";

module type StylesType = {
  type theme;
  type styles('a);
  type props;
};

module Make = (Styles: StylesType) => {
  type options;
  type stylesHook('props) = 'props => Styles.styles(string);
  [@bs.module "@material-ui/core/styles/makeStyles"]
  external make: ( 
    [@bs.uncurry] 
    (Styles.theme => Styles.styles(Styles.props => Mui_Styles_Style.t))
  ) => stylesHook(Styles.props) = "default";
  [@bs.module "@material-ui/core/styles/makeStyles"]
  external makeWithOptions: (
    [@bs.uncurry] 
    (Styles.theme => Styles.styles(Styles.props => Mui_Styles_Style.t)), 
    options
  ) => stylesHook(Styles.props) = "default";
};

/**
 * 
 * Style helper
 * 
 */
module Style = Mui_Styles_Style;

/**
 * 
 * Color manipulator helper
 * 
 */
module ColorManipulator = Mui_Styles_ColorManipulator;

/**
 * 
 * Theme helper
 * 
 */
module Theme = Mui_Styles_Theme;
module Shape = Mui_Styles_Shape;
module Breakpoints = Mui_Styles_Breakpoints;
module Mixins = Mui_Styles_Mixins;
module Overrides = Mui_Styles_Overrides;
module AppBarStyle = Mui_Styles_AppBarStyle;
module Palette = Mui_Styles_Palette;
module PaletteColor = Mui_Styles_PaletteColor;
module ActionColor = Mui_Styles_ActionColor;
module TextColor = Mui_Styles_TextColor;
module Color = Mui_Styles_Color;
module BackgroundColor = Mui_Styles_BackgroundColor;
module CommonColor = Mui_Styles_CommonColor;
module Props = Mui_Styles_Props;
module Shadows = Mui_Styles_Shadows;
module Spacing = Mui_Styles_Spacing;
module Transitions = Mui_Styles_Transitions;
module TransitionDuration = Mui_Styles_TransitionDuration;
module Easing = Mui_Styles_Easing;
module Typography = Mui_Styles_Typography;
module TypographyStyle = Mui_Styles_TypographyStyle;
module ZIndex = Mui_Styles_ZIndex;