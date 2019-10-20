type classes;

[@bs.module "@material-ui/core/Container"] [@react.component]
external make: (
  ~children: React.element=?,

  ~classes: classes=?,
  ~maxWidth: string=?,
  ~component: string=?,
  ~className: string=?,
) => React.element = "default";