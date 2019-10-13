[@bs.deriving abstract]
type makeProps = {
  [@bs.optional] children: React.element,
  [@bs.optional] edge: string,
  [@bs.optional] className: string,
  [@bs.optional] color: string,
  [@bs.optional] onClick: ReactEvent.Mouse.t => unit,
  [@bs.optional] [@bs.as "aria-label"] ariaLabel: string,
  [@bs.optional] [@bs.as "aria-controls"] ariaControls: string,
  [@bs.optional] [@bs.as "aria-haspopup"] ariaHaspopup: bool, 
};
[@bs.module "@material-ui/core/IconButton"]
external make: React.component(makeProps) = "default";