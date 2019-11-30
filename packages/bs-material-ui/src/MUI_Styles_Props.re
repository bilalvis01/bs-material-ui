module Make = (Type: {type t;}) => {
  module Props = {
    [@bs.obj]
    external make: (
      ~_MuiAppBar: MUI_AppBar.props=?,
      unit
    ) => Type.t = "";
  };
};