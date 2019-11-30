type classes = {.
  "root": Js.undefined(string),
  "docked": Js.undefined(string),
  "paper": Js.undefined(string),
  "paperAnchorLeft": Js.undefined(string),
  "paperAnchorRight": Js.undefined(string),
  "paperAnchorTop": Js.undefined(string),
  "paperAnchorBottom": Js.undefined(string),
  "paperAnchorDockedLeft": Js.undefined(string),
  "paperAnchorDockedTop": Js.undefined(string),
  "paperAnchorDockedRight": Js.undefined(string),
  "paperAnchorDockedBottom": Js.undefined(string),
  "modal": Js.undefined(string),
};

[@bs.obj]
external classes: (
  ~root: string=?,
  ~docked: string=?,
  ~paper: string=?,
  ~paperAnchorLeft: string=?,
  ~paperAnchorRight: string=?,
  ~paperAnchorTop: string=?,
  ~paperAnchorBottom: string=?,
  ~paperAnchorDockedLeft: string=?,
  ~paperAnchorDockedTop: string=?,
  ~paperAnchorDockedRight: string=?,
  ~paperAnchorDockedBottom: string=?,
  ~modal: string=?,
  unit
) => classes = "";

type transitionDuration;
external transitionDuration: int => transitionDuration = "%identity";
[@bs.obj]
external transitionDurationObj: (
  ~enter: int=?,
  ~exit: int=?,
  unit
) => transitionDuration = "";

type props = {.
  /* Drawer props */
  "children": Js.undefined(React.element),
  "anchor": Js.undefined(string),
  "classes": Js.undefined(classes),
  "elevation": Js.undefined(int),
  "_ModalProps": Js.undefined(MUI_Modal.props),
  "onClose": Js.undefined(ReactEvent.Synthetic.t => unit),
  "_open": Js.undefined(bool), 
  "_PaperProps": Js.undefined(MUI_Paper.props),
  // "_SlideProps": MUI_Slide.props,
  "transitionDuration": Js.undefined(transitionDuration),
  "variant": Js.undefined(string),
  /* Dom props */
  // react textarea/input
  "defaultChecked": Js.undefined(bool),
  "defaultValue": Js.undefined(string),
  // global html attributes
  "accessKey": Js.undefined(string),
  "className": Js.undefined(string), // substitute for "class"
  "contentEditable": Js.undefined(bool),
  "contextMenu": Js.undefined(string),
  "dir": Js.undefined(string), // "ltr", "rtl" or "auto"
  "draggable": Js.undefined(bool),
  "hidden": Js.undefined(bool),
  "id": Js.undefined(string),
  "lang": Js.undefined(string),
  "role": Js.undefined(string), // ARIA role
  "style": Js.undefined(ReactDOMRe.style),
  "spellCheck": Js.undefined(bool),
  "tabIndex": Js.undefined(int),
  "title": Js.undefined(string),
  // html5 microdata
  "itemID": Js.undefined(string),
  "itemProp": Js.undefined(string),
  "itemRef": Js.undefined(string),
  "itemScope": Js.undefined(bool),
  "itemType": Js.undefined(string), // uri
  // tag-specific html attributes
  "accept": Js.undefined(string),
  "acceptCharset": Js.undefined(string),
  "action": Js.undefined(string), // uri 
  "allowFullScreen": Js.undefined(bool),
  "alt": Js.undefined(string),
  "async": Js.undefined(bool),
  "autoComplete": Js.undefined(string), // has a fixed, but large-ish, set of possible values
  "autoFocus": Js.undefined(bool),
  "autoPlay": Js.undefined(bool),
  "challenge": Js.undefined(string),
  "charSet": Js.undefined(string),
  "checked": Js.undefined(bool),
  "cite": Js.undefined(string), // uri 
  "crossorigin": Js.undefined(bool),
  "cols": Js.undefined(int),
  "colSpan": Js.undefined(int),
  "content": Js.undefined(string),
  "controls": Js.undefined(bool),
  "coords": Js.undefined(string), // set of values specifying the coordinates of a region 
  "data": Js.undefined(string), // uri 
  "dateTime": Js.undefined(string), // "valid date string with optional time" 
  "default": Js.undefined(bool),
  "defer": Js.undefined(bool),
  "disabled": Js.undefined(bool),
  "download": Js.undefined(string), // should really be either a boolean, signifying presence, or a string 
  "encType": Js.undefined(string), // "application/x-www-form-urlencoded", "multipart/form-data" or "text/plain" 
  "form": Js.undefined(string),
  "formAction": Js.undefined(string), // uri 
  "formTarget": Js.undefined(string), // "_self", "_blank", "_parent" or "_top"
  "formMethod": Js.undefined(string), // "post", "get" or "put"
  "headers": Js.undefined(string),
  "height": Js.undefined(string), // in html5 this can only be a number, but in html4 it can ba a percentage as well
  "high": Js.undefined(int),
  "href": Js.undefined(string), // uri 
  "hrefLang": Js.undefined(string),
  "htmlFor": Js.undefined(string), // substitute for "for" 
  "httpEquiv": Js.undefined(string),
  "icon": Js.undefined(string), // uri? 
  "inputMode": Js.undefined(string), // "none", "text", "decimal", "numeric", "tel", "search", "email" or "url"
  "integrity": Js.undefined(string),
  "keyType": Js.undefined(string),
  "kind": Js.undefined(string), // has a fixed set of possible values 
  "label": Js.undefined(string),
  "list": Js.undefined(string),
  "loop": Js.undefined(bool),
  "low": Js.undefined(int),
  "manifest": Js.undefined(string), // uri 
  "max": Js.undefined(string), // should be int or Js.Date.t 
  "maxLength": Js.undefined(int),
  "media": Js.undefined(string), // a valid media query 
  "mediaGroup": Js.undefined(string),
  "method": Js.undefined(string), // "post" or "get"
  "min": Js.undefined(int),
  "minLength": Js.undefined(int),
  "multiple": Js.undefined(bool),
  "muted": Js.undefined(bool),
  "name": Js.undefined(string),
  "nonce": Js.undefined(string),
  "noValidate": Js.undefined(bool),
  // "_open": Js.undefined(bool), // use this one. Previous one is deprecated 
  "optimum": Js.undefined(int),
  "pattern": Js.undefined(string), // valid Js RegExp
  "placeholder": Js.undefined(string),
  "poster": Js.undefined(string), // uri
  "preload": Js.undefined(string), // "none", "metadata", or "auto"
  "radioGroup": Js.undefined(string),
  "readOnly": Js.undefined(bool),
  "rel": Js.undefined(string), // a space- or comma-separated (depending on the element) list of a fixed set of "link types"
  "required": Js.undefined(bool),
  "reversed": Js.undefined(bool),
  "rows": Js.undefined(int),
  "rowSpan": Js.undefined(int),
  "sandbox": Js.undefined(string), // has a fixed set of possible values
  "scope": Js.undefined(string), // has a fixed set of possible values
  "scoped": Js.undefined(bool),
  "scrolling": Js.undefined(string), // "auto", "yes", or "no". html4 only
  // seamless - supported by React, but removed from the html5 spec 
  "selected": Js.undefined(bool),
  "shape": Js.undefined(string),
  "size": Js.undefined(int),
  "sizes": Js.undefined(string),
  "span": Js.undefined(int),
  "src": Js.undefined(string), // uri
  "srcDoc": Js.undefined(string),
  "srcLang": Js.undefined(string),
  "srcSet": Js.undefined(string),
  "start": Js.undefined(int),
  "step": Js.undefined(float),
  "summary": Js.undefined(string), // deprecated 
  "target": Js.undefined(string),
  "_type": Js.undefined(string), // has a fixed but large-ish set of possible values // use this one. Previous one is deprecated 
  "useMap": Js.undefined(string),
  "value": Js.undefined(string),
  "width": Js.undefined(string),
  "wrap": Js.undefined(string), // "hard" or "soft"
  // Clipboard events
  "onCopy": Js.undefined(ReactEvent.Clipboard.t => unit),
  "onCut": Js.undefined(ReactEvent.Clipboard.t => unit),
  "onPaste": Js.undefined(ReactEvent.Clipboard.t => unit),
  // Composition events 
  "onCompositionEnd": Js.undefined(ReactEvent.Composition.t => unit),
  "onCompositionStart": Js.undefined(ReactEvent.Composition.t => unit),
  "onCompositionUpdate": Js.undefined(ReactEvent.Composition.t => unit),
  // Keyboard events 
  "onKeyDown": Js.undefined(ReactEvent.Keyboard.t => unit),
  "onKeyPress": Js.undefined(ReactEvent.Keyboard.t => unit),
  "onKeyUp": Js.undefined(ReactEvent.Keyboard.t => unit),
  // Focus events 
  "onFocus": Js.undefined(ReactEvent.Focus.t => unit),
  "onBlur": Js.undefined(ReactEvent.Focus.t => unit),
  // Form events
  "onChange": Js.undefined(ReactEvent.Form.t => unit),
  "onInput": Js.undefined(ReactEvent.Form.t => unit),
  "onSubmit": Js.undefined(ReactEvent.Form.t => unit),
  // Mouse events
  "onClick": Js.undefined(ReactEvent.Mouse.t => unit),
  "onContextMenu": Js.undefined(ReactEvent.Mouse.t => unit),
  "onDoubleClick": Js.undefined(ReactEvent.Mouse.t => unit),
  "onDrag": Js.undefined(ReactEvent.Mouse.t => unit),
  "onDragEnd": Js.undefined(ReactEvent.Mouse.t => unit),
  "onDragEnter": Js.undefined(ReactEvent.Mouse.t => unit),
  "onDragExit": Js.undefined(ReactEvent.Mouse.t => unit),
  "onDragLeave": Js.undefined(ReactEvent.Mouse.t => unit),
  "onDragOver": Js.undefined(ReactEvent.Mouse.t => unit),
  "onDragStart": Js.undefined(ReactEvent.Mouse.t => unit),
  "onDrop": Js.undefined(ReactEvent.Mouse.t => unit),
  "onMouseDown": Js.undefined(ReactEvent.Mouse.t => unit),
  "onMouseEnter": Js.undefined(ReactEvent.Mouse.t => unit),
  "onMouseLeave": Js.undefined(ReactEvent.Mouse.t => unit),
  "onMouseMove": Js.undefined(ReactEvent.Mouse.t => unit),
  "onMouseOut": Js.undefined(ReactEvent.Mouse.t => unit),
  "onMouseOver": Js.undefined(ReactEvent.Mouse.t => unit),
  "onMouseUp": Js.undefined(ReactEvent.Mouse.t => unit),
  // Selection events 
  "onSelect": Js.undefined(ReactEvent.Selection.t => unit),
  // Touch events
  "onTouchCancel": Js.undefined(ReactEvent.Touch.t => unit),
  "onTouchEnd": Js.undefined(ReactEvent.Touch.t => unit),
  "onTouchMove": Js.undefined(ReactEvent.Touch.t => unit),
  "onTouchStart": Js.undefined(ReactEvent.Touch.t => unit),
  // UI events
  "onScroll": Js.undefined(ReactEvent.UI.t => unit),
  // Wheel events
  "onWheel": Js.undefined(ReactEvent.Wheel.t => unit),
  // Media events
  "onAbort": Js.undefined(ReactEvent.Media.t => unit),
  "onCanPlay": Js.undefined(ReactEvent.Media.t => unit),
  "onCanPlayThrough": Js.undefined(ReactEvent.Media.t => unit),
  "onDurationChange": Js.undefined(ReactEvent.Media.t => unit),
  "onEmptied": Js.undefined(ReactEvent.Media.t => unit),
  "onEncrypetd": Js.undefined(ReactEvent.Media.t => unit),
  "onEnded": Js.undefined(ReactEvent.Media.t => unit),
  "onError": Js.undefined(ReactEvent.Media.t => unit),
  "onLoadedData": Js.undefined(ReactEvent.Media.t => unit),
  "onLoadedMetadata": Js.undefined(ReactEvent.Media.t => unit),
  "onLoadStart": Js.undefined(ReactEvent.Media.t => unit),
  "onPause": Js.undefined(ReactEvent.Media.t => unit),
  "onPlay": Js.undefined(ReactEvent.Media.t => unit),
  "onPlaying": Js.undefined(ReactEvent.Media.t => unit),
  "onProgress": Js.undefined(ReactEvent.Media.t => unit),
  "onRateChange": Js.undefined(ReactEvent.Media.t => unit),
  "onSeeked": Js.undefined(ReactEvent.Media.t => unit),
  "onSeeking": Js.undefined(ReactEvent.Media.t => unit),
  "onStalled": Js.undefined(ReactEvent.Media.t => unit),
  "onSuspend": Js.undefined(ReactEvent.Media.t => unit),
  "onTimeUpdate": Js.undefined(ReactEvent.Media.t => unit),
  "onVolumeChange": Js.undefined(ReactEvent.Media.t => unit),
  "onWaiting": Js.undefined(ReactEvent.Media.t => unit),
  // Image events
  "onLoad": Js.undefined(ReactEvent.Image.t => unit),
  // Animation events
  "onAnimationStart": Js.undefined(ReactEvent.Animation.t => unit),
  "onAnimationEnd": Js.undefined(ReactEvent.Animation.t => unit),
  "onAnimationIteration": Js.undefined(ReactEvent.Animation.t => unit),
  // Transition events
  "onTransitionEnd": Js.undefined(ReactEvent.Transition.t => unit),
};

[@bs.obj]
external makeProps: (
  /* Drawer props */
  ~children: React.element=?,
  ~anchor: [@bs.string] [ | `left | `top | `right | `bottom ]=?,
  ~classes: classes=?,
  ~elevation: [@bs.int] [
    | `_0
    | `_1
    | `_2
    | `_3
    | `_4
    | `_5
    | `_6
    | `_7
    | `_8
    | `_9
    | `_10
    | `_11
    | `_12
    | `_13
    | `_14
    | `_15
    | `_16
    | `_17
    | `_18
    | `_19
    | `_20
    | `_21
    | `_22
    | `_23
    | `_24
  ]=?,
  ~_ModalProps: MUI_Modal.props=?,
  ~onClose: ReactEvent.Synthetic.t => unit=?,
  ~_open: bool=?, 
  ~_PaperProps: MUI_Paper.props=?,
  // ~_SlideProps: MUI_Slide.props=?,
  ~transitionDuration: transitionDuration=?,
  ~variant: [@bs.string] [ | `permanent | `persistent | `temporary ]=?,
  unit
) => props = "";

[@bs.module "@material-ui/core/Drawer"]
external make: React.component(props) = "default";