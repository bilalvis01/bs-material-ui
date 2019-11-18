module Make = (Type: { type theme; }) => {
  type theme = Type.theme;
  module Impl = (Type: { 
    type styles('a);
    type props; 
  }) => {
    type options;
    type stylesHook('props) = 'props => Type.styles(string);
    [@bs.module "@material-ui/core/styles"]
    external make: 
      ([@bs.uncurry] (theme => Type.styles(Type.props => MUI_Style.t))) => 
      stylesHook(Type.props) = 
      "makeStyles";
    [@bs.module "@material-ui/core/styles"]
    external makeWithOptions: 
      ([@bs.uncurry] (theme => Type.styles(Type.props => MUI_Style.t)), options) =>
      stylesHook(Type.props) = 
      "makeStyles";
  };
  module ThemeProvider = {
    [@bs.module "@material-ui/core/styles"] [@react.component]
    external make: (
      ~children: React.element,
      ~theme: theme,
    ) => React.element = "ThemeProvider";
  };
};