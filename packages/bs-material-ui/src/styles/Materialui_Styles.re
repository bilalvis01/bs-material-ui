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
    (Styles.theme => Styles.styles(Styles.props => Materialui_Styles_Style.t))
  ) => 
  stylesHook(Styles.props) = 
  "default";
  [@bs.module "@material-ui/core/styles/makeStyles"]
  external makeWithOptions: (
    [@bs.uncurry] 
    (Styles.theme => Styles.styles(Styles.props => Materialui_Styles_Style.t)), 
    options
  ) => 
  stylesHook(Styles.props) = 
  "default";
};

/**
 * 
 * Style helper
 * 
 */
module Style = Materialui_Styles_Style;

/**
 * 
 * Color manipulator helper
 * 
 */
module ColorManipulator = Materialui_Styles_ColorManipulator;

/**
 * 
 * Theme helper
 * 
 */
module Theme = Materialui_Styles_Theme;
module Shape = Materialui_Styles_Shape;
module Breakpoints = Materialui_Styles_Breakpoints;
module Mixins = Materialui_Styles_Mixins;
module Overrides = Materialui_Styles_Overrides;
module Palette = Materialui_Styles_Palette;
module PaletteColor = Materialui_Styles_PaletteColor;
module Action = Materialui_Styles_Action;
module Text = Materialui_Styles_Text;
module Color = Materialui_Styles_Color;
module Background = Materialui_Styles_Background;
module Common = Materialui_Styles_Common;
module Props = Materialui_Styles_Props;
module Shadows = Materialui_Styles_Shadows;
module Spacing = Materialui_Styles_Spacing;
module Transitions = Materialui_Styles_Transitions;
module TransitionDuration = Materialui_Styles_TransitionDuration;
module Easing = Materialui_Styles_Easing;
module Typography = Materialui_Styles_Typography;
module ZIndex = Materialui_Styles_ZIndex;

type theme = Theme.t;