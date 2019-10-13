[@bs.deriving abstract]
type makeProps = {
  [@bs.optional] [@bs.as "aria-label"] ariaLabel: string,
};

[@bs.module "@material-ui/core/Input"]
external make: React.component(makeProps) => React.element = "default";