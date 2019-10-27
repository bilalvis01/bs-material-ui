type options;

/*
module type StylesType = {
  type theme;
  type props;
  type styles('a);
};

module Make = (Styles: StylesType) => {
  type t = Styles.props => Styles.styles(string);
  type cb = Styles.theme => Styles.styles(MUIStyles_Style.cb(Styles.props));

  [@bs.module "@material-ui/core/styles"]
  external make: cb => t = "makeStyles";
  [@bs.module "@material-ui/core/styles"]
  external makeWithOptions: (cb, options) => t = "makeStyles";
};
*/

module type StylesType = {
  type theme;
  type props;
  type styles('a);
  let options: option(options);
  let styles: theme => styles(props => MUIStyles_Style.t);
};

module type S = {
  type props;
  type classes('a);
  let useStyles: props => classes(string);
};

module Make = (Styles: StylesType): 
  (S with type props = Styles.props and type classes('a) = Styles.styles('a)) => {
  type props = Styles.props;
  type classes('a) = Styles.styles('a);
  type stylesHook = props => classes(string);
  type callback = Styles.theme => Styles.styles(props => MUIStyles_Style.t);

  [@bs.module "@material-ui/core/styles"]
  external make: callback => stylesHook = "makeStyles";
  [@bs.module "@material-ui/core/styles"]
  external makeWithOptions: (callback, options) => stylesHook = "makeStyles";

  let useStyles = switch Styles.options {
    | None => make(Styles.styles)
    | Some(options) => makeWithOptions(Styles.styles, options)
  }
};