type classes;

[@bs.module "@material-ui/core/Paper"] [@react.component]
external make: (
  ~children: React.element=?,
  ~classes: classes=?,
  ~component: string=?,
  ~elevation: int=?,
  ~square: bool=?,
  ~ref: ReactDOMRe.domRef=?,

  ~className: string=?,
) => React.element = "default";