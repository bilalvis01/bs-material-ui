[@bs.deriving abstract]
type makeProps = {
  [@bs.optional] [@bs.as "aria-label"] ariaLabel: string,
};
type props = makeProps;

[@bs.module "@material-ui/core/Input"]
external make: React.component(makeProps) => React.element = "default";