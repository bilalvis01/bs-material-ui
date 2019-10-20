[@bs.deriving abstract]
type makeClasses = {
  [@bs.optional] root: string,
  [@bs.optional] underlineNone: string,
  [@bs.optional] underlineHover: string,
  [@bs.optional] underlineAlways: string,
  [@bs.optional] button: string,
  [@bs.optional] focusVisible: string,

  // Typography classes
  [@bs.optional] body2: string,
  [@bs.optional] body1: string,
  [@bs.optional] caption: string,
  [@bs.optional] h1: string,
  [@bs.optional] h2: string,
  [@bs.optional] h3: string,
  [@bs.optional] h4: string,
  [@bs.optional] h5: string,
  [@bs.optional] h6: string,
  [@bs.optional] subtitle1: string,
  [@bs.optional] subtitle2: string,
  [@bs.optional] overline: string,
  [@bs.optional] srOnly: string,
  [@bs.optional] alignLeft: string,
  [@bs.optional] alignCenter: string,
  [@bs.optional] alignRight: string,
  [@bs.optional] alignJustify: string,
  [@bs.optional] noWrap: string,
  [@bs.optional] gutterBottom: string,
  [@bs.optional] paragraph: string,
  [@bs.optional] colorInherit: string,
  [@bs.optional] colorPrimary: string,
  [@bs.optional] colorSecondary: string,
  [@bs.optional] colorTextPrimary: string,
  [@bs.optional] colorTextSecondary: string,
  [@bs.optional] colorError: string,
  [@bs.optional] displayInline: string,
  [@bs.optional] displayBlock: string,
};
type classes = makeClasses;

type variantMapping = MaterialUI_Typography.variantMapping;
let variantMapping = MaterialUI_Typography.variantMapping;

[@bs.module "@material-ui/core/Link"] [@react.component]
external make: (
  ~children: React.element=?,

  ~classes: classes=?,
  ~color: string=?,
  ~component: string=?,
  // ~_TypographyClasses: MUI_Typography.classes=?,
  ~underline: string=?,
  ~variant: string=?,

  // Typography props
  ~align: string=?,
  ~display: string=?,
  ~gutterBottom: bool=?,
  ~noWrap: bool=?,
  ~paragraph: bool=?,
  ~variantMapping: variantMapping=?,

  ~ref: ReactDOMRe.domRef=?,
  ~href: string=?,
) => React.element = "default";