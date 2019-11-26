module type StylesHookType = {
  type theme;
  type styles('a);
  type props;
};

module Make = (StylesHookType: StylesHookType) => {
  type options;
  type stylesHook('props) = 'props => StylesHookType.styles(string);
  [@bs.module "@material-ui/core/styles"]
  external make: 
    ( 
      [@bs.uncurry] 
      (StylesHookType.theme => StylesHookType.styles(StylesHookType.props => MUI_Style.t))
    ) => 
    stylesHook(StylesHookType.props) = 
    "makeStyles";
  [@bs.module "@material-ui/core/styles"]
  external makeWithOptions: 
    (
      [@bs.uncurry] 
      (StylesHookType.theme => StylesHookType.styles(StylesHookType.props => MUI_Style.t)), 
      options
    ) =>
    stylesHook(StylesHookType.props) = 
    "makeStyles";
};