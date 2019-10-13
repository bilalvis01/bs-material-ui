[@bs.deriving abstract]
type classes = {
  [@bs.optional] root: string,
  [@bs.optional] input: string,
};

let inputProps = MaterialUI_Input.makeProps;

[@bs.module "@material-ui/core/InputBase"] [@react.component]
external make: (
  ~children: React.element=?,
  ~placeholder: string=?,
  ~classes: classes=?,
  ~inputProps: MaterialUI_Input.makeProps=?,
) => React.element = "default";