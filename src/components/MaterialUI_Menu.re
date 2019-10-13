[@bs.deriving abstract]
type anchorOrigin = {
  horizontal: string,
  vertical: string,
};

[@bs.deriving abstract]
type transformOrigin = {
  horizontal: string,
  vertical: string,
};

[@bs.module "@material-ui/core/Menu"] [@react.component]
external make: (
  ~children: React.element=?,
  ~anchorEl: Js.nullable(Js.t({..}))=?,
  ~_open: bool=?,
  ~onClose: (ReactEvent.synthetic('a), string) => unit=?,
  // Popover props
  ~anchorOrigin: anchorOrigin=?,
  // Modal props
  ~keepMounted: bool=?,
  ~transformOrigin: transformOrigin=?,
  // Dom props
  ~id: string=?,
) => React.element = "default";