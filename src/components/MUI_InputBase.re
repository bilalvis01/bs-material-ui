[@bs.deriving abstract]
type makeClasses = {
  [@bs.optional] 
  root: string,
  [@bs.optional]
  formControl: string,
  [@bs.optional]
  focused: string,
  [@bs.optional]
  disabled: string,
  [@bs.optional]
  adornedStart: string,
  [@bs.optional]
  adornedEnd: string,
  [@bs.optional]
  error: string,
  [@bs.optional]
  marginDense: string,
  [@bs.optional]
  multiline: string,
  [@bs.optional]
  fullWidth: string,
  [@bs.optional] 
  input: string,
  [@bs.optional]
  inputMarginDense: string,
  [@bs.optional]
  inputSelect: string,
  [@bs.optional]
  inputMultiline: string,
  [@bs.optional]
  inputTypeSearch: string,
  [@bs.optional]
  inputAdornedStart: string,
  [@bs.optional]
  inputAdornedEnd: string,
  [@bs.optional]
  inputHiddenLabel: string,
};
type classes = makeClasses;

let makeInputProps = MUI_Input.makeProps;

[@bs.deriving abstract]
type makeProps = {
  [@bs.optional]
  autoComplete: string,
  [@bs.optional]
  autoFocus: bool,
  [@bs.optional]
  classes: classes,
  [@bs.optional]
  defaultValue: string,
  [@bs.optional]
  disabled: bool,
  [@bs.optional]
  endAdornment: React.element,
  [@bs.optional]
  error: bool,
  [@bs.optional]
  fullWidth: bool,
  [@bs.optional]
  id: string,
  [@bs.optional]
  inputComponent: string,
  [@bs.optional]
  inputProps: ReactDOMRe.domProps,
  [@bs.optional]
  inputRef: ReactDOMRe.domRef,
  [@bs.optional]
  margin: string,
  [@bs.optional]
  multiline: bool,
  [@bs.optional]
  name: string,
  [@bs.optional]
  onChange: ReactEvent.Form.t => unit,
  [@bs.optional]
  placeHolder: string,
  [@bs.optional]
  readOnly: bool,
  [@bs.optional]
  required: bool,
  [@bs.optional]
  rows: int, // string|number
  [@bs.optional]
  rowsMax: int, // string|number
  [@bs.optional]
  select: bool,
  [@bs.optional]
  startAdornment: React.element,
  [@bs.optional] [@bs.as "type"]
  type_: string,
  [@bs.optional]
  value: string,
  // domProps
  [@bs.optional]
  accept: string,
  [@bs.optional]
  alt: string,
  [@bs.optional]
  checked: bool,
  [@bs.optional]
  form: string,
  [@bs.optional]
  formAction: string, /* uri */
  [@bs.optional]
  formTarget: string, /* "_blank", "_self", etc. */
  [@bs.optional]
  formMethod: string, /* "post", "get", "put" */
  [@bs.optional]
  height: string, /* in html5 this can only be a number, but in html4 it can ba a percentage as well */
  [@bs.optional]
  inputMode: string, /* "verbatim", "latin", "numeric", etc. */
  [@bs.optional]
  list: string,
  [@bs.optional]
  max: string, /* should be int or Js.Date.t */
  [@bs.optional]
  maxLength: int,
  [@bs.optional]
  min: int,
  [@bs.optional]
  minLength: int,
  [@bs.optional]
  multiple: bool,
  [@bs.optional]
  pattern: string, /* valid Js RegExp */
  [@bs.optional]
  size: int,
  [@bs.optional]
  src: string, /* uri */
  [@bs.optional]
  step: float,
  [@bs.optional]
  tabIndex: int,
  [@bs.optional]
  title: string,
  [@bs.optional]
  width: string, /* in html5 this can only be a number, but in html4 it can ba a percentage as well */
  [@bs.optional]
  key: string,
  [@bs.optional]
  ref: ReactDOMRe.domRef,
  /* accessibility */
  /* https://www.w3.org/TR/wai-aria-1.1/ */
  /* https://accessibilityresources.org/<aria-tag> is a great resource for these */
  /* [@bs.optional] [@bs.as "aria-current"] ariaCurrent: page|step|location|date|time|true|false, */
  [@bs.optional] [@bs.as "aria-details"]
  ariaDetails: string,
  [@bs.optional] [@bs.as "aria-disabled"]
  ariaDisabled: bool,
  [@bs.optional] [@bs.as "aria-hidden"]
  ariaHidden: bool,
  /* [@bs.optional] [@bs.as "aria-invalid"] ariaInvalid: grammar|false|spelling|true, */
  [@bs.optional] [@bs.as "aria-keyshortcuts"]
  ariaKeyshortcuts: string,
  [@bs.optional] [@bs.as "aria-label"]
  ariaLabel: string,
  [@bs.optional] [@bs.as "aria-roledescription"]
  ariaRoledescription: string,
  /* Widget Attributes */
  /* [@bs.optional] [@bs.as "aria-autocomplete"] ariaAutocomplete: inline|list|both|none, */
  /* [@bs.optional] [@bs.as "aria-checked"] ariaChecked: true|false|mixed, /* https://www.w3.org/TR/wai-aria-1.1/#valuetype_tristate */ */
  [@bs.optional] [@bs.as "aria-expanded"]
  ariaExpanded: bool,
  /* [@bs.optional] [@bs.as "aria-haspopup"] ariaHaspopup: false|true|menu|listbox|tree|grid|dialog, */
  [@bs.optional] [@bs.as "aria-level"]
  ariaLevel: int,
  [@bs.optional] [@bs.as "aria-modal"]
  ariaModal: bool,
  [@bs.optional] [@bs.as "aria-multiline"]
  ariaMultiline: bool,
  [@bs.optional] [@bs.as "aria-multiselectable"]
  ariaMultiselectable: bool,
  /* [@bs.optional] [@bs.as "aria-orientation"] ariaOrientation: horizontal|vertical|undefined, */
  [@bs.optional] [@bs.as "aria-placeholder"]
  ariaPlaceholder: string,
  /* [@bs.optional] [@bs.as "aria-pressed"] ariaPressed: true|false|mixed, /* https://www.w3.org/TR/wai-aria-1.1/#valuetype_tristate */ */
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
  /* Live Region Attributes */
  [@bs.optional] [@bs.as "aria-atomic"]
  ariaAtomic: bool,
  [@bs.optional] [@bs.as "aria-busy"]
  ariaBusy: bool,
  /* [@bs.optional] [@bs.as "aria-live"] ariaLive: off|polite|assertive|rude, */
  [@bs.optional] [@bs.as "aria-relevant"]
  ariaRelevant: string,
  /* Drag-and-Drop Attributes */
  /* [@bs.optional] [@bs.as "aria-dropeffect"] ariaDropeffect: copy|move|link|execute|popup|none, */
  [@bs.optional] [@bs.as "aria-grabbed"]
  ariaGrabbed: bool,
  /* Relationship Attributes */
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
  onCopy: ReactEvent.Clipboard.t => unit,
  [@bs.optional]
  onCut: ReactEvent.Clipboard.t => unit,
  [@bs.optional]
  onPaste: ReactEvent.Clipboard.t => unit,
  /* Composition events */
  [@bs.optional]
  onCompositionEnd: ReactEvent.Composition.t => unit,
  [@bs.optional]
  onCompositionStart: ReactEvent.Composition.t => unit,
  [@bs.optional]
  onCompositionUpdate: ReactEvent.Composition.t => unit,
  /* Keyboard events */
  [@bs.optional]
  onKeyDown: ReactEvent.Keyboard.t => unit,
  [@bs.optional]
  onKeyPress: ReactEvent.Keyboard.t => unit,
  [@bs.optional]
  onKeyUp: ReactEvent.Keyboard.t => unit,
  /* Focus events */
  [@bs.optional]
  onFocus: ReactEvent.Focus.t => unit,
  [@bs.optional]
  onBlur: ReactEvent.Focus.t => unit,
  /* Form events */
  [@bs.optional]
  onInput: ReactEvent.Form.t => unit,
  [@bs.optional]
  onSubmit: ReactEvent.Form.t => unit,
  /* Mouse events */
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
  /* Selection events */
  [@bs.optional]
  onSelect: ReactEvent.Selection.t => unit,
  /* Touch events */
  [@bs.optional]
  onTouchCancel: ReactEvent.Touch.t => unit,
  [@bs.optional]
  onTouchEnd: ReactEvent.Touch.t => unit,
  [@bs.optional]
  onTouchMove: ReactEvent.Touch.t => unit,
  [@bs.optional]
  onTouchStart: ReactEvent.Touch.t => unit,
  /* UI events */
  [@bs.optional]
  onScroll: ReactEvent.UI.t => unit,
  /* Wheel events */
  [@bs.optional]
  onWheel: ReactEvent.Wheel.t => unit,
  /* Media events */
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
  /* Image events */
  [@bs.optional]onLoad: ReactEvent.Image.t => unit /* duplicate */, /*~onError: ReactEvent.Image.t => unit=?,*/
  /* Animation events */
  [@bs.optional]
  onAnimationStart: ReactEvent.Animation.t => unit,
  [@bs.optional]
  onAnimationEnd: ReactEvent.Animation.t => unit,
  [@bs.optional]
  onAnimationIteration: ReactEvent.Animation.t => unit,
  /* Transition events */
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

[@bs.module "@material-ui/core/InputBase"]
external make: React.component(props) = "default";