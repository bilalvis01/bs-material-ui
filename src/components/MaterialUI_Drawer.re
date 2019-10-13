[@bs.module "@material-ui/core/Drawer"] [@react.component]
external make: (
  ~children: React.element=?,
  ~anchor: string=?,
  ~onClose: ReactEvent.synthetic('a) => unit=?,
  ~_open: bool=?,
) => React.element = "default";