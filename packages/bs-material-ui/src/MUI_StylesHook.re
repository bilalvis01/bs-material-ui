type options;

/*
module type StylesType = {
  type theme;
  type props;
  type styles('a);
  let options: option(options);
  let styles: theme => styles(props => MUI_Style.t);
};

module type S = {
  type props;
  type classes;
  let useStyles: props => classes;
};

module Make = (Styles: StylesType): 
  (S with type props = Styles.props and type classes = Styles.styles(string)) => {
  type props = Styles.props;
  type classes = Styles.styles(string);

  [@bs.module "@material-ui/core/styles"]
  external make: (Styles.theme => Styles.styles(props => MUI_Style.t)) => (props => classes) = "makeStyles";
  [@bs.module "@material-ui/core/styles"]
  external makeWithOptions: ((Styles.theme => Styles.styles(props => MUI_Style.t)), options) => (props => classes) = "makeStyles";

  let useStyles = switch Styles.options {
    | None => make(Styles.styles)
    | Some(options) => makeWithOptions(Styles.styles, options)
  };
};
*/

module Make = (Styles: { type styles('a); }) => {
  type stylesHook('props) = 'props => Styles.styles(string);
  [@bs.module "@material-ui/core/styles"]
  external make: 
    ([@bs.uncurry] ('theme => Styles.styles('props => MUI_Style.t))) => 
    stylesHook('props) = 
    "makeStyles";
  [@bs.module "@material-ui/core/styles"]
  external makeWithOptions: 
    ([@bs.uncurry] ('theme => Styles.styles('props => MUI_Style.t)), options) =>
    stylesHook('props) = 
    "makeStyles";
};