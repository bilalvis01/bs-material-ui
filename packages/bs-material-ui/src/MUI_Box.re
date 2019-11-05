type value;

external str: string => value = "%identity";
external int: int => value = "%identity";

module Responsive = {
  [@bs.obj]
  external objI: (
    ~xs: int=?,
    ~sm: int=?,
    ~md: int=?,
    ~lg: int=?,
    ~xl: int=?,
  ) => value = "";
  [@bs.obj]
  external objS: (
    ~xs: string=?,
    ~sm: string=?,
    ~md: string=?,
    ~lg: string=?,
    ~xl: string=?,
  ) => value = "";

  external arrI: array(int) => value = "%identity";
  external arrS: array(string) => value = "%identity";
};

[@bs.deriving abstract]
type style = {
  // borders
  [@bs.optional] 
  border: value,
  [@bs.optional] 
  borderTop: value,
  [@bs.optional] 
  borderLeft: value,
  [@bs.optional] 
  borderRight: value,
  [@bs.optional] 
  borderBottom: value,
  [@bs.optional] 
  borderColor: value,
  [@bs.optional] 
  borderRadius: value,
  // display
  [@bs.optional] 
  displayPrint: value,
  [@bs.optional]
  displayRaw: value,
  [@bs.optional]
  overflow: value,
  [@bs.optional]
  textOverflow: value,
  [@bs.optional]
  visibility: value,
  [@bs.optional]
  whiteSpace: value,
  // flexbox
  [@bs.optional] 
  flexDirection: value,
  [@bs.optional] 
  flexWrap: value,
  [@bs.optional] 
  justifyContent: value,
  [@bs.optional] 
  alignItems: value,
  [@bs.optional] 
  order: value,
  [@bs.optional] 
  flex: value,
  [@bs.optional] 
  flexGrow: value,
  [@bs.optional] 
  flexShrink: value,
  [@bs.optional]
  alignSelf: value,
  // palette
  [@bs.optional] 
  color: value,
  [@bs.optional] 
  bgColor: value,
  // position
  [@bs.optional]
  position: value,
  [@bs.optional] 
  zIndex: value,
  [@bs.optional] 
  top: value,
  [@bs.optional]
  right: value,
  [@bs.optional]
  bottom: value,
  [@bs.optional]
  left: value,
  // shadows
  [@bs.optional]
  boxShadow: value,
  // sizing
  [@bs.optional]
  width: value,
  [@bs.optional]
  maxWidth: value,
  [@bs.optional]
  minWidth: value,
  [@bs.optional]
  height: value,
  [@bs.optional]
  maxHeight: value,
  [@bs.optional]
  minHeight: value,
  // spacing
  [@bs.optional] 
  m: value,
  [@bs.optional]
  margin: value,
  [@bs.optional] 
  mt: value,
  [@bs.optional]
  marginTop: value,
  [@bs.optional] 
  mr: value,
  [@bs.optional]
  marginRight: value,
  [@bs.optional] 
  mb: value,
  [@bs.optional]
  marginBottom: value,
  [@bs.optional] 
  ml: value,
  [@bs.optional]
  marginLeft: value,
  [@bs.optional] 
  mx: value,
  [@bs.optional]
  marginX: value,
  [@bs.optional] 
  my: value,
  [@bs.optional]
  marginY: value,
  [@bs.optional] 
  p: value,
  [@bs.optional]
  padding: value,
  [@bs.optional] 
  pt: value,
  [@bs.optional]
  paddingTop: value,
  [@bs.optional] 
  pr: value,
  [@bs.optional]
  paddingRight: value,
  [@bs.optional] 
  pb: value,
  [@bs.optional]
  paddingBottom: value,
  [@bs.optional] 
  pl: value,
  [@bs.optional]
  paddingLeft: value,
  [@bs.optional] 
  px: value,
  [@bs.optional]
  paddingX: value,
  [@bs.optional] 
  py: value,
  [@bs.optional]
  paddingY: value,
  // typography
  [@bs.optional] 
  fontFamily: string,
  [@bs.optional] 
  fontSize: value,
  [@bs.optional] 
  fontStyle: string,
  [@bs.optional] 
  fontWeight: value,
  [@bs.optional] 
  letterSpacing: value,
  [@bs.optional] 
  lineHeight: value,
  [@bs.optional] 
  textAlign: value,
};

[@bs.deriving abstract]
type makeProps = {
  [@bs.optional] 
  children: React.element,
  [@bs.optional] 
  clone: bool,
  [@bs.optional] 
  component: string,
  // responsive 
  [@bs.optional]
  xs: style,
  [@bs.optional]
  sm: style,
  [@bs.optional]
  md: style,
  [@bs.optional]
  lg: style,
  [@bs.optional]
  xl: style,
  // borders
  [@bs.optional] 
  border: value,
  [@bs.optional] 
  borderTop: value,
  [@bs.optional] 
  borderLeft: value,
  [@bs.optional] 
  borderRight: value,
  [@bs.optional] 
  borderBottom: value,
  [@bs.optional] 
  borderColor: value,
  [@bs.optional] 
  borderRadius: value,
  // display
  [@bs.optional] 
  displayPrint: value,
  [@bs.optional]
  displayRaw: value,
  [@bs.optional]
  overflow: value,
  [@bs.optional]
  textOverflow: value,
  [@bs.optional]
  visibility: value,
  [@bs.optional]
  whiteSpace: value,
  // flexbox
  [@bs.optional] 
  flexDirection: value,
  [@bs.optional] 
  flexWrap: value,
  [@bs.optional] 
  justifyContent: value,
  [@bs.optional] 
  alignItems: value,
  [@bs.optional] 
  order: value,
  [@bs.optional] 
  flex: value,
  [@bs.optional] 
  flexGrow: value,
  [@bs.optional] 
  flexShrink: value,
  [@bs.optional]
  alignSelf: value,
  // palette
  [@bs.optional] 
  color: value,
  [@bs.optional] 
  bgColor: value,
  // position
  [@bs.optional]
  position: value,
  [@bs.optional] 
  zIndex: value,
  [@bs.optional] 
  top: value,
  [@bs.optional]
  right: value,
  [@bs.optional]
  bottom: value,
  [@bs.optional]
  left: value,
  // shadows
  [@bs.optional]
  boxShadow: value,
  // sizing
  [@bs.optional]
  width: value,
  [@bs.optional]
  maxWidth: value,
  [@bs.optional]
  minWidth: value,
  [@bs.optional]
  height: value,
  [@bs.optional]
  maxHeight: value,
  [@bs.optional]
  minHeight: value,
  // spacing
  [@bs.optional] 
  m: value,
  [@bs.optional]
  margin: value,
  [@bs.optional] 
  mt: value,
  [@bs.optional]
  marginTop: value,
  [@bs.optional] 
  mr: value,
  [@bs.optional]
  marginRight: value,
  [@bs.optional] 
  mb: value,
  [@bs.optional]
  marginBottom: value,
  [@bs.optional] 
  ml: value,
  [@bs.optional]
  marginLeft: value,
  [@bs.optional] 
  mx: value,
  [@bs.optional]
  marginX: value,
  [@bs.optional] 
  my: value,
  [@bs.optional]
  marginY: value,
  [@bs.optional] 
  p: value,
  [@bs.optional]
  padding: value,
  [@bs.optional] 
  pt: value,
  [@bs.optional]
  paddingTop: value,
  [@bs.optional] 
  pr: value,
  [@bs.optional]
  paddingRight: value,
  [@bs.optional] 
  pb: value,
  [@bs.optional]
  paddingBottom: value,
  [@bs.optional] 
  pl: value,
  [@bs.optional]
  paddingLeft: value,
  [@bs.optional] 
  px: value,
  [@bs.optional]
  paddingX: value,
  [@bs.optional] 
  py: value,
  [@bs.optional]
  paddingY: value,
  // typography
  [@bs.optional] 
  fontFamily: string,
  [@bs.optional] 
  fontSize: value,
  [@bs.optional] 
  fontStyle: string,
  [@bs.optional] 
  fontWeight: value,
  [@bs.optional] 
  letterSpacing: value,
  [@bs.optional] 
  lineHeight: value,
  [@bs.optional] 
  textAlign: value,
  // domProps
  [@bs.optional]
  key: string,
  [@bs.optional]
  ref: ReactDOMRe.domRef,
  [@bs.optional] [@bs.as "aria-details"]
  ariaDetails: string,
  [@bs.optional] [@bs.as "aria-disabled"]
  ariaDisabled: bool,
  [@bs.optional] [@bs.as "aria-hidden"]
  ariaHidden: bool,
  [@bs.optional] [@bs.as "aria-keyshortcuts"]
  ariaKeyshortcuts: string,
  [@bs.optional] [@bs.as "aria-label"]
  ariaLabel: string,
  [@bs.optional] [@bs.as "aria-roledescription"]
  ariaRoledescription: string,
  [@bs.optional] [@bs.as "aria-expanded"]
  ariaExpanded: bool,
  [@bs.optional] [@bs.as "aria-level"]
  ariaLevel: int,
  [@bs.optional] [@bs.as "aria-modal"]
  ariaModal: bool,
  [@bs.optional] [@bs.as "aria-multiline"]
  ariaMultiline: bool,
  [@bs.optional] [@bs.as "aria-multiselectable"]
  ariaMultiselectable: bool,
  [@bs.optional] [@bs.as "aria-placeholder"]
  ariaPlaceholder: string,
  [@bs.optional] [@bs.as "aria-readonly"]
  ariaReadonly: bool,
  [@bs.optional] [@bs.as "aria-required"]
  ariaRequired: bool,
  [@bs.optional] [@bs.as "aria-selected"]
  ariaSelected: bool,
  [@bs.optional] [@bs.as "aria-sort"]
  ariaSort: string,
  [@bs.optional] [@bs.as "aria-valuemax"]
  ariaValuemax: float,
  [@bs.optional] [@bs.as "aria-valuemin"]
  ariaValuemin: float,
  [@bs.optional] [@bs.as "aria-valuenow"]
  ariaValuenow: float,
  [@bs.optional] [@bs.as "aria-valuetext"]
  ariaValuetext: string,
  [@bs.optional] [@bs.as "aria-atomic"]
  ariaAtomic: bool,
  [@bs.optional] [@bs.as "aria-busy"]
  ariaBusy: bool,
  [@bs.optional] [@bs.as "aria-relevant"]
  ariaRelevant: string,
  [@bs.optional] [@bs.as "aria-grabbed"]
  ariaGrabbed: bool,
  [@bs.optional] [@bs.as "aria-activedescendant"]
  ariaActivedescendant: string,
  [@bs.optional] [@bs.as "aria-colcount"]
  ariaColcount: int,
  [@bs.optional] [@bs.as "aria-colindex"]
  ariaColindex: int,
  [@bs.optional] [@bs.as "aria-colspan"]
  ariaColspan: int,
  [@bs.optional] [@bs.as "aria-controls"]
  ariaControls: string,
  [@bs.optional] [@bs.as "aria-describedby"]
  ariaDescribedby: string,
  [@bs.optional] [@bs.as "aria-errormessage"]
  ariaErrormessage: string,
  [@bs.optional] [@bs.as "aria-flowto"]
  ariaFlowto: string,
  [@bs.optional] [@bs.as "aria-labelledby"]
  ariaLabelledby: string,
  [@bs.optional] [@bs.as "aria-owns"]
  ariaOwns: string,
  [@bs.optional] [@bs.as "aria-posinset"]
  ariaPosinset: int,
  [@bs.optional] [@bs.as "aria-rowcount"]
  ariaRowcount: int,
  [@bs.optional] [@bs.as "aria-rowindex"]
  ariaRowindex: int,
  [@bs.optional] [@bs.as "aria-rowspan"]
  ariaRowspan: int,
  [@bs.optional] [@bs.as "aria-setsize"]
  ariaSetsize: int,
  [@bs.optional]
  defaultChecked: bool,
  [@bs.optional]
  defaultValue: string,
  [@bs.optional]
  accessKey: string,
  [@bs.optional]
  className: string,
  [@bs.optional]
  contentEditable: bool,
  [@bs.optional]
  contextMenu: string,
  [@bs.optional]
  dir: string,
  [@bs.optional]
  draggable: bool,
  [@bs.optional]
  hidden: bool,
  [@bs.optional]
  id: string,
  [@bs.optional]
  lang: string,
  [@bs.optional]
  role: string,
  [@bs.optional]
  style: ReactDOMRe.style,
  [@bs.optional]
  spellCheck: bool,
  [@bs.optional]
  tabIndex: int,
  [@bs.optional]
  title: string,
  [@bs.optional]
  itemID: string,
  [@bs.optional]
  itemProp: string,
  [@bs.optional]
  itemRef: string,
  [@bs.optional]
  itemScope: bool,
  [@bs.optional]
  itemType: string,
  [@bs.optional]
  accept: string,
  [@bs.optional]
  acceptCharset: string,
  [@bs.optional]
  action: string,
  [@bs.optional]
  allowFullScreen: bool,
  [@bs.optional]
  alt: string,
  [@bs.optional]
  async: bool,
  [@bs.optional]
  autoComplete: string,
  [@bs.optional]
  autoFocus: bool,
  [@bs.optional]
  autoPlay: bool,
  [@bs.optional]
  challenge: string,
  [@bs.optional]
  charSet: string,
  [@bs.optional]
  checked: bool,
  [@bs.optional]
  cite: string,
  [@bs.optional]
  crossorigin: bool,
  [@bs.optional]
  cols: int,
  [@bs.optional]
  colSpan: int,
  [@bs.optional]
  content: string,
  [@bs.optional]
  controls: bool,
  [@bs.optional]
  coords: string, 
  [@bs.optional]
  data: string,
  [@bs.optional]
  dateTime: string,
  [@bs.optional]
  default: bool,
  [@bs.optional]
  defer: bool,
  [@bs.optional]
  disabled: bool,
  [@bs.optional]
  download: string, 
  [@bs.optional]
  encType: string, 
  [@bs.optional]
  form: string,
  [@bs.optional]
  formAction: string, 
  [@bs.optional]
  formTarget: string,
  [@bs.optional]
  formMethod: string,
  [@bs.optional]
  headers: string,
  [@bs.optional]
  high: int,
  [@bs.optional]
  href: string,
  [@bs.optional]
  hrefLang: string,
  [@bs.optional]
  htmlFor: string, 
  [@bs.optional]
  httpEquiv: string, 
  [@bs.optional]
  icon: string,
  [@bs.optional]
  inputMode: string, 
  [@bs.optional]
  integrity: string,
  [@bs.optional]
  keyType: string,
  [@bs.optional]
  kind: string, 
  [@bs.optional]
  label: string,
  [@bs.optional]
  list: string,
  [@bs.optional]
  loop: bool,
  [@bs.optional]
  low: int,
  [@bs.optional]
  manifest: string, 
  [@bs.optional]
  max: string, 
  [@bs.optional]
  maxLength: int,
  [@bs.optional]
  media: string, 
  [@bs.optional]
  mediaGroup: string,
  [@bs.optional]
  method: string, 
  [@bs.optional]
  min: int,
  [@bs.optional]
  minLength: int,
  [@bs.optional]
  multiple: bool,
  [@bs.optional]
  muted: bool,
  [@bs.optional]
  name: string,
  [@bs.optional]
  nonce: string,
  [@bs.optional]
  noValidate: bool,
  [@bs.optional] [@bs.as "open"]
  open_: bool, 
  [@bs.optional]
  optimum: int,
  [@bs.optional]
  pattern: string,
  [@bs.optional]
  placeholder: string,
  [@bs.optional]
  poster: string, 
  [@bs.optional]
  preload: string, 
  [@bs.optional]
  radioGroup: string,
  [@bs.optional]
  readOnly: bool,
  [@bs.optional]
  rel: string, 
  [@bs.optional]
  required: bool,
  [@bs.optional]
  reversed: bool,
  [@bs.optional]
  rows: int,
  [@bs.optional]
  rowSpan: int,
  [@bs.optional]
  sandbox: string, 
  [@bs.optional]
  scope: string, 
  [@bs.optional]
  scoped: bool,
  [@bs.optional]
  scrolling: string, 
  [@bs.optional]
  selected: bool,
  [@bs.optional]
  shape: string,
  [@bs.optional]
  size: int,
  [@bs.optional]
  sizes: string,
  [@bs.optional]
  span: int,
  [@bs.optional]
  src: string, 
  [@bs.optional]
  srcDoc: string,
  [@bs.optional]
  srcLang: string,
  [@bs.optional]
  srcSet: string,
  [@bs.optional]
  start: int,
  [@bs.optional]
  step: float,
  [@bs.optional]
  summary: string, 
  [@bs.optional]
  target: string,
  [@bs.optional] [@bs.as "type"]
  type_: string,
  [@bs.optional]
  useMap: string,
  [@bs.optional]
  value: string,
  [@bs.optional]
  wrap: string, 
  [@bs.optional]
  onCopy: ReactEvent.Clipboard.t => unit,
  [@bs.optional]
  onCut: ReactEvent.Clipboard.t => unit,
  [@bs.optional]
  onPaste: ReactEvent.Clipboard.t => unit,
  [@bs.optional]
  onCompositionEnd: ReactEvent.Composition.t => unit,
  [@bs.optional]
  onCompositionStart: ReactEvent.Composition.t => unit,
  [@bs.optional]
  onCompositionUpdate: ReactEvent.Composition.t => unit,
  [@bs.optional]
  onKeyDown: ReactEvent.Keyboard.t => unit,
  [@bs.optional]
  onKeyPress: ReactEvent.Keyboard.t => unit,
  [@bs.optional]
  onKeyUp: ReactEvent.Keyboard.t => unit,
  [@bs.optional]
  onFocus: ReactEvent.Focus.t => unit,
  [@bs.optional]
  onBlur: ReactEvent.Focus.t => unit,
  [@bs.optional]
  onChange: ReactEvent.Form.t => unit,
  [@bs.optional]
  onInput: ReactEvent.Form.t => unit,
  [@bs.optional]
  onSubmit: ReactEvent.Form.t => unit,
  [@bs.optional]
  onClick: ReactEvent.Mouse.t => unit,
  [@bs.optional]
  onContextMenu: ReactEvent.Mouse.t => unit,
  [@bs.optional]
  onDoubleClick: ReactEvent.Mouse.t => unit,
  [@bs.optional]
  onDrag: ReactEvent.Mouse.t => unit,
  [@bs.optional]
  onDragEnd: ReactEvent.Mouse.t => unit,
  [@bs.optional]
  onDragEnter: ReactEvent.Mouse.t => unit,
  [@bs.optional]
  onDragExit: ReactEvent.Mouse.t => unit,
  [@bs.optional]
  onDragLeave: ReactEvent.Mouse.t => unit,
  [@bs.optional]
  onDragOver: ReactEvent.Mouse.t => unit,
  [@bs.optional]
  onDragStart: ReactEvent.Mouse.t => unit,
  [@bs.optional]
  onDrop: ReactEvent.Mouse.t => unit,
  [@bs.optional]
  onMouseDown: ReactEvent.Mouse.t => unit,
  [@bs.optional]
  onMouseEnter: ReactEvent.Mouse.t => unit,
  [@bs.optional]
  onMouseLeave: ReactEvent.Mouse.t => unit,
  [@bs.optional]
  onMouseMove: ReactEvent.Mouse.t => unit,
  [@bs.optional]
  onMouseOut: ReactEvent.Mouse.t => unit,
  [@bs.optional]
  onMouseOver: ReactEvent.Mouse.t => unit,
  [@bs.optional]
  onMouseUp: ReactEvent.Mouse.t => unit,
  [@bs.optional]
  onSelect: ReactEvent.Selection.t => unit,
  [@bs.optional]
  onTouchCancel: ReactEvent.Touch.t => unit,
  [@bs.optional]
  onTouchEnd: ReactEvent.Touch.t => unit,
  [@bs.optional]
  onTouchMove: ReactEvent.Touch.t => unit,
  [@bs.optional]
  onTouchStart: ReactEvent.Touch.t => unit,
  [@bs.optional]
  onScroll: ReactEvent.UI.t => unit,
  [@bs.optional]
  onWheel: ReactEvent.Wheel.t => unit,
  [@bs.optional]
  onAbort: ReactEvent.Media.t => unit,
  [@bs.optional]
  onCanPlay: ReactEvent.Media.t => unit,
  [@bs.optional]
  onCanPlayThrough: ReactEvent.Media.t => unit,
  [@bs.optional]
  onDurationChange: ReactEvent.Media.t => unit,
  [@bs.optional]
  onEmptied: ReactEvent.Media.t => unit,
  [@bs.optional]
  onEncrypetd: ReactEvent.Media.t => unit,
  [@bs.optional]
  onEnded: ReactEvent.Media.t => unit,
  [@bs.optional]
  onError: ReactEvent.Media.t => unit,
  [@bs.optional]
  onLoadedData: ReactEvent.Media.t => unit,
  [@bs.optional]
  onLoadedMetadata: ReactEvent.Media.t => unit,
  [@bs.optional]
  onLoadStart: ReactEvent.Media.t => unit,
  [@bs.optional]
  onPause: ReactEvent.Media.t => unit,
  [@bs.optional]
  onPlay: ReactEvent.Media.t => unit,
  [@bs.optional]
  onPlaying: ReactEvent.Media.t => unit,
  [@bs.optional]
  onProgress: ReactEvent.Media.t => unit,
  [@bs.optional]
  onRateChange: ReactEvent.Media.t => unit,
  [@bs.optional]
  onSeeked: ReactEvent.Media.t => unit,
  [@bs.optional]
  onSeeking: ReactEvent.Media.t => unit,
  [@bs.optional]
  onStalled: ReactEvent.Media.t => unit,
  [@bs.optional]
  onSuspend: ReactEvent.Media.t => unit,
  [@bs.optional]
  onTimeUpdate: ReactEvent.Media.t => unit,
  [@bs.optional]
  onVolumeChange: ReactEvent.Media.t => unit,
  [@bs.optional]
  onWaiting: ReactEvent.Media.t => unit,
  [@bs.optional] onLoad: ReactEvent.Image.t => unit,
  [@bs.optional]
  onAnimationStart: ReactEvent.Animation.t => unit,
  [@bs.optional]
  onAnimationEnd: ReactEvent.Animation.t => unit,
  [@bs.optional]
  onAnimationIteration: ReactEvent.Animation.t => unit,
  [@bs.optional]
  onTransitionEnd: ReactEvent.Transition.t => unit,
  /* RDFa */
  [@bs.optional]
  about: string,
  [@bs.optional]
  datatype: string,
  [@bs.optional]
  inlist: string,
  [@bs.optional]
  prefix: string,
  [@bs.optional]
  property: string,
  [@bs.optional]
  resource: string,
  [@bs.optional]
  typeof: string,
  [@bs.optional]
  vocab: string,
};
type props = makeProps;

[@bs.module "@material-ui/core/Box"]
external make: React.component(props) = "default";