[@bs.deriving abstract]
type makeClasses = {
  [@bs.optional]
  root: string,
  [@bs.optional]
  spacing: string,
};
type classes = makeClasses;

[@bs.deriving abstract]
type makeProps = {
  [@bs.optional]
  children: React.element,
  [@bs.optional]
  classes: classes,
  [@bs.optional]
  disableSpacing: bool,
};
type props = makeProps;

[@bs.module "@material-ui/core/CardActions"]
external make: React.component(props) = "default";