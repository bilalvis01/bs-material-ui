type classes;

[@bs.module "@material-ui/core/Grid"] [@react.component]
external make: (
  ~children: React.element=?,
  ~alignContent: string=?,
  ~alignItems: string=?,
  ~classes: classes=?,
  ~component: string=?,
  ~container: bool=?,
  ~direction: string=?,
  ~item: bool=?,
  ~justify: string=?,
  ~lg: int=?,
  ~md: int=?,
  ~sm: int=?,
  ~spacing: int=?,
  ~wrap: string=?,
  ~xl: int=?,
  ~xs: int=?,
  ~zeroMinWidth: bool=?,
  ~ref: ReactDOMRe.domRef=?,
) => React.element = "default";