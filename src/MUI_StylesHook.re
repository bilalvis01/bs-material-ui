type options;

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
  type stylesHook = props => classes;
  type callback = Styles.theme => Styles.styles(props => MUI_Style.t);

  [@bs.module "@material-ui/core/styles"]
  external make: callback => stylesHook = "makeStyles";
  [@bs.module "@material-ui/core/styles"]
  external makeWithOptions: (callback, options) => stylesHook = "makeStyles";

  let useStyles = switch Styles.options {
    | None => make(Styles.styles)
    | Some(options) => makeWithOptions(Styles.styles, options)
  };
};