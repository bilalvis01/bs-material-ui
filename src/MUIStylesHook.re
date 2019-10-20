type options;

module type StylesType = {
  type theme;
  type props;
  type styles('a);
};

module Make = (Styles: StylesType) => {
  type t = Styles.props => Styles.styles(string);
  type cb = Styles.theme => Styles.styles(MUIStyle.cb(Styles.props));

  [@bs.module "@material-ui/core/styles"]
  external make: cb => t = "makeStyles";
  [@bs.module "@material-ui/core/styles"]
  external makeWithOptions: (cb, options) => t = "makeStyles";
};