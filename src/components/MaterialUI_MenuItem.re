[@bs.module "@material-ui/core/MenuItem"] [@react.component]
external make: (
  ~children: React.element=?,
  ~onClick: ReactEvent.Mouse.t => unit=?,
) => React.element = "default";