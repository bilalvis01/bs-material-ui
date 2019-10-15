[@bs.deriving abstract]
type classes = {
  [@bs.optional] root: string,
  [@bs.optional] docked: string,
  [@bs.optional] paper: string,
  [@bs.optional] paperAnchorLeft: string,
  [@bs.optional] paperAnchorRight: string,
};

[@bs.module "@material-ui/core/Drawer"] [@react.component]
external make: (
  ~children: React.element=?,
  ~className: string=?,
  ~anchor: string=?,
  ~variant: string=?,
  ~classes: classes=?,
  ~onClose: ReactEvent.synthetic('a) => unit=?,
  ~_open: bool=?,
) => React.element = "default";
