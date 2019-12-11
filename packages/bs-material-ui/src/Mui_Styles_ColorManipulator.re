type colorObject = {
  [@bs.as "type"]
  type_: string,
  values: array(int),
};

[@bs.module "@material-ui/core/styles/colorManipulator"]
external hexToRgb: string => string = "hexToRgb";
[@bs.module "@material-ui/core/styles/colorManipulator"]
external rgbToHex: string => string = "rgbToHex";
[@bs.module "@material-ui/core/styles/colorManipulator"]
external hslToRgb: string => string = "hslToRgb";
[@bs.module "@material-ui/core/styles/colorManipulator"]
external decomposeColor: string => colorObject = "decomposeColor";
[@bs.module "@material-ui/core/styles/colorManipulator"]
external recomposeColor: colorObject => string = "recomposeColor";
[@bs.module "@material-ui/core/styles/colorManipulator"]
external getContrastRatio: (string, string) => int = "getContrastRatio";
[@bs.module "@material-ui/core/styles/colorManipulator"]
external getLuminance: string => int = "getLuminance";
[@bs.module "@material-ui/core/styles/colorManipulator"]
external emphasize: string => string = "emphasize";
[@bs.module "@material-ui/core/styles/colorManipulator"]
external emphasizeWithCoefficient: (string, int) => string = "emphasize"; 
[@bs.module "@material-ui/core/styles/colorManipulator"]
external fade: (string, float) => string = "fade";
[@bs.module "@material-ui/core/styles/colorManipulator"]
external darken: string => string = "darken";
[@bs.module "@material-ui/core/styles/colorManipulator"]
external darkenWithCoefficient: (string, int) => string = "darken";
[@bs.module "@material-ui/core/styles/colorManipulator"]
external lighten: string => string = "lighten";
[@bs.module "@material-ui/core/styles/colorManipulator"]
external lightenWithCoefficient: (string, int) => string = "lighten";