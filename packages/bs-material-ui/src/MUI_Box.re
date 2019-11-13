type value;

external str: string => value = "%identity";
external int: int => value = "%identity";
[@bs.obj]
external responsive: (
  ~xs: 'a=?,
  ~sm: 'b=?,
  ~md: 'c=?,
  ~lg: 'd=?,
  ~xl: 'e=?,
) => value = "";

type props = {.
  /* Box props */
  "children": option(React.element),
  "clone": option(bool),
  "component": option(string),
  // borders
  "border": option(value),
  "borderTop": option(value),
  "borderLeft": option(value),
  "borderRight": option(value),
  "borderBottom": option(value),
  "borderColor": option(value),
  "borderRadius": option(value),
  // display
  "displayPrint": option(value),
  "displayRaw": option(value),
  "overflow": option(value),
  "textOverflow": option(value),
  "visibility": option(value),
  "whiteSpace": option(value),
  // flexbox
  "flexDirection": option(value),
  "flexWrap": option(value),
  "justifyContent": option(value),
  "alignItems": option(value),
  "order": option(value),
  "flex": option(value),
  "flexGrow": option(value),
  "flexShrink": option(value),
  "alignSelf": option(value),
  // palette
  "color": option(value),
  "bgColor": option(value),
  // position
  "position": option(value),
  "zIndex": option(value),
  "top": option(value),
  "right": option(value),
  "bottom": option(value),
  "left": option(value),
  // shadows
  "boxShadow": option(value),
  // sizing
  "width": option(value),
  "maxWidth": option(value),
  "minWidth": option(value),
  "height": option(value),
  "maxHeight": option(value),
  "minHeight": option(value),
  // spacing
  "m": option(value),
  "margin": option(value),
  "mt": option(value),
  "marginTop": option(value),
  "mr": option(value),
  "marginRight": option(value),
  "mb": option(value),
  "marginBottom": option(value),
  "ml": option(value),
  "marginLeft": option(value),
  "mx": option(value),
  "marginX": option(value),
  "my": option(value),
  "marginY": option(value),
  "p": option(value),
  "padding": option(value),
  "pt": option(value),
  "paddingTop": option(value),
  "pr": option(value),
  "paddingRight": option(value),
  "pb": option(value),
  "paddingBottom": option(value),
  "pl": option(value),
  "paddingLeft": option(value),
  "px": option(value),
  "paddingX": option(value),
  "py": option(value),
  "paddingY": option(value),
  // typography
  "fontFamily": option(string),
  "fontSize": option(value),
  "fontStyle": option(string),
  "fontWeight": option(value),
  "letterSpacing": option(value),
  "lineHeight": option(value),
  "textAlign": option(value),
  /* Dom props */
  // react textarea/input
  "defaultChecked": option(bool),
  "defaultValue": option(string),
  // global html attributes
  "accessKey": option(string),
  "className": option(string), // substitute for "class"
  "contentEditable": option(bool),
  "contextMenu": option(string),
  "dir": option(string), // "ltr", "rtl" or "auto"
  "draggable": option(bool),
  "hidden": option(bool),
  "id": option(string),
  "lang": option(string),
  "role": option(string), // ARIA role
  "style": option(ReactDOMRe.style),
  "spellCheck": option(bool),
  "tabIndex": option(int),
  "title": option(string),
  // html5 microdata
  "itemID": option(string),
  "itemProp": option(string),
  "itemRef": option(string),
  "itemScope": option(bool),
  "itemType": option(string), // uri
  // tag-specific html attributes
  "accept": option(string),
  "acceptCharset": option(string),
  "action": option(string), // uri 
  "allowFullScreen": option(bool),
  "alt": option(string),
  "async": option(bool),
  "autoComplete": option(string), // has a fixed, but large-ish, set of possible values
  "autoFocus": option(bool),
  "autoPlay": option(bool),
  "challenge": option(string),
  "charSet": option(string),
  "checked": option(bool),
  "cite": option(string), // uri 
  "crossorigin": option(bool),
  "cols": option(int),
  "colSpan": option(int),
  "content": option(string),
  "controls": option(bool),
  "coords": option(string), // set of values specifying the coordinates of a region 
  "data": option(string), // uri 
  "dateTime": option(string), // "valid date string with optional time" 
  "default": option(bool),
  "defer": option(bool),
  "disabled": option(bool),
  "download": option(string), // should really be either a boolean, signifying presence, or a string 
  "encType": option(string), // "application/x-www-form-urlencoded", "multipart/form-data" or "text/plain" 
  "form": option(string),
  "formAction": option(string), // uri 
  "formTarget": option(string), // "_self", "_blank", "_parent" or "_top"
  "formMethod": option(string), // "post", "get" or "put"
  "headers": option(string),
  // "height": string, // in html5 this can only be a number, but in html4 it can ba a percentage as well
  "high": option(int),
  "href": option(string), // uri 
  "hrefLang": option(string),
  "htmlFor": option(string), // substitute for "for" 
  "httpEquiv": option(string),
  "icon": option(string), // uri? 
  "inputMode": option(string), // "none", "text", "decimal", "numeric", "tel", "search", "email" or "url"
  "integrity": option(string),
  "keyType": option(string),
  "kind": option(string), // has a fixed set of possible values 
  "label": option(string),
  "list": option(string),
  "loop": option(bool),
  "low": option(int),
  "manifest": option(string), // uri 
  "max": option(string), // should be int or Js.Date.t 
  "maxLength": option(int),
  "media": option(string), // a valid media query 
  "mediaGroup": option(string),
  "method": option(string), // "post" or "get"
  "min": option(int),
  "minLength": option(int),
  "multiple": option(bool),
  "muted": option(bool),
  "name": option(string),
  "nonce": option(string),
  "noValidate": option(bool),
  "open": option(bool), // use this one. Previous one is deprecated 
  "optimum": option(int),
  "pattern": option(string), // valid Js RegExp
  "placeholder": option(string),
  "poster": option(string), // uri
  "preload": option(string), // "none", "metadata", or "auto"
  "radioGroup": option(string),
  "readOnly": option(bool),
  "rel": option(string), // a space- or comma-separated (depending on the element) list of a fixed set of "link types"
  "required": option(bool),
  "reversed": option(bool),
  "rows": option(int),
  "rowSpan": option(int),
  "sandbox": option(string), // has a fixed set of possible values
  "scope": option(string), // has a fixed set of possible values
  "scoped": option(bool),
  "scrolling": option(string), // "auto", "yes", or "no". html4 only
  // seamless - supported by React, but removed from the html5 spec 
  "selected": option(bool),
  "shape": option(string),
  "size": option(int),
  "sizes": option(string),
  "span": option(int),
  "src": option(string), // uri
  "srcDoc": option(string),
  "srcLang": option(string),
  "srcSet": option(string),
  "start": option(int),
  "step": option(float),
  "summary": option(string), // deprecated 
  "target": option(string),
  "type": option(string), /* has a fixed but large-ish set of possible values */ /* use this one. Previous one is deprecated */
  "useMap": option(string),
  "value": option(string),
  // "width": string=?,
  "wrap": option(string), // "hard" or "soft"
  // Clipboard events
  "onCopy": option(ReactEvent.Clipboard.t => unit),
  "onCut": option(ReactEvent.Clipboard.t => unit),
  "onPaste": option(ReactEvent.Clipboard.t => unit),
  // Composition events 
  "onCompositionEnd": option(ReactEvent.Composition.t => unit),
  "onCompositionStart": option(ReactEvent.Composition.t => unit),
  "onCompositionUpdate": option(ReactEvent.Composition.t => unit),
  // Keyboard events 
  "onKeyDown": option(ReactEvent.Keyboard.t => unit),
  "onKeyPress": option(ReactEvent.Keyboard.t => unit),
  "onKeyUp": option(ReactEvent.Keyboard.t => unit),
  // Focus events 
  "onFocus": option(ReactEvent.Focus.t => unit),
  "onBlur": option(ReactEvent.Focus.t => unit),
  // Form events
  "onChange": option(ReactEvent.Form.t => unit),
  "onInput": option(ReactEvent.Form.t => unit),
  "onSubmit": option(ReactEvent.Form.t => unit),
  // Mouse events
  "onClick": option(ReactEvent.Mouse.t => unit),
  "onContextMenu": option(ReactEvent.Mouse.t => unit),
  "onDoubleClick": option(ReactEvent.Mouse.t => unit),
  "onDrag": option(ReactEvent.Mouse.t => unit),
  "onDragEnd": option(ReactEvent.Mouse.t => unit),
  "onDragEnter": option(ReactEvent.Mouse.t => unit),
  "onDragExit": option(ReactEvent.Mouse.t => unit),
  "onDragLeave": option(ReactEvent.Mouse.t => unit),
  "onDragOver": option(ReactEvent.Mouse.t => unit),
  "onDragStart": option(ReactEvent.Mouse.t => unit),
  "onDrop": option(ReactEvent.Mouse.t => unit),
  "onMouseDown": option(ReactEvent.Mouse.t => unit),
  "onMouseEnter": option(ReactEvent.Mouse.t => unit),
  "onMouseLeave": option(ReactEvent.Mouse.t => unit),
  "onMouseMove": option(ReactEvent.Mouse.t => unit),
  "onMouseOut": option(ReactEvent.Mouse.t => unit),
  "onMouseOver": option(ReactEvent.Mouse.t => unit),
  "onMouseUp": option(ReactEvent.Mouse.t => unit),
  // Selection events 
  "onSelect": option(ReactEvent.Selection.t => unit),
  // Touch events
  "onTouchCancel": option(ReactEvent.Touch.t => unit),
  "onTouchEnd": option(ReactEvent.Touch.t => unit),
  "onTouchMove": option(ReactEvent.Touch.t => unit),
  "onTouchStart": option(ReactEvent.Touch.t => unit),
  // UI events
  "onScroll": option(ReactEvent.UI.t => unit),
  // Wheel events
  "onWheel": option(ReactEvent.Wheel.t => unit),
  // Media events
  "onAbort": option(ReactEvent.Media.t => unit),
  "onCanPlay": option(ReactEvent.Media.t => unit),
  "onCanPlayThrough": option(ReactEvent.Media.t => unit),
  "onDurationChange": option(ReactEvent.Media.t => unit),
  "onEmptied": option(ReactEvent.Media.t => unit),
  "onEncrypetd": option(ReactEvent.Media.t => unit),
  "onEnded": option(ReactEvent.Media.t => unit),
  "onError": option(ReactEvent.Media.t => unit),
  "onLoadedData": option(ReactEvent.Media.t => unit),
  "onLoadedMetadata": option(ReactEvent.Media.t => unit),
  "onLoadStart": option(ReactEvent.Media.t => unit),
  "onPause": option(ReactEvent.Media.t => unit),
  "onPlay": option(ReactEvent.Media.t => unit),
  "onPlaying": option(ReactEvent.Media.t => unit),
  "onProgress": option(ReactEvent.Media.t => unit),
  "onRateChange": option(ReactEvent.Media.t => unit),
  "onSeeked": option(ReactEvent.Media.t => unit),
  "onSeeking": option(ReactEvent.Media.t => unit),
  "onStalled": option(ReactEvent.Media.t => unit),
  "onSuspend": option(ReactEvent.Media.t => unit),
  "onTimeUpdate": option(ReactEvent.Media.t => unit),
  "onVolumeChange": option(ReactEvent.Media.t => unit),
  "onWaiting": option(ReactEvent.Media.t => unit),
  // Image events
  "onLoad": option(ReactEvent.Image.t => unit),
  // Animation events
  "onAnimationStart": option(ReactEvent.Animation.t => unit),
  "onAnimationEnd": option(ReactEvent.Animation.t => unit),
  "onAnimationIteration": option(ReactEvent.Animation.t => unit),
  // Transition events
  "onTransitionEnd": option(ReactEvent.Transition.t => unit),
};

external objToProps: Js.t({..}) => props = "%identity";

[@bs.obj]
external makeProps: (
  /* Box props */
  ~children: React.element=?,
  ~clone: bool=?,
  ~component: string=?,
  // borders
  ~border: value=?,
  ~borderTop: value=?,
  ~borderLeft: value=?,
  ~borderRight: value=?,
  ~borderBottom: value=?,
  ~borderColor: value=?,
  ~borderRadius: value=?,
  // display
  ~displayPrint: value=?,
  ~displayRaw: value=?,
  ~overflow: value=?,
  ~textOverflow: value=?,
  ~visibility: value=?,
  ~whiteSpace: value=?,
  // flexbox
  ~flexDirection: value=?,
  ~flexWrap: value=?,
  ~justifyContent: value=?,
  ~alignItems: value=?,
  ~order: value=?,
  ~flex: value=?,
  ~flexGrow: value=?,
  ~flexShrink: value=?,
  ~alignSelf: value=?,
  // palette
  ~color: value=?,
  ~bgColor: value=?,
  // position
  ~position: value=?,
  ~zIndex: value=?,
  ~top: value=?,
  ~right: value=?,
  ~bottom: value=?,
  ~left: value=?,
  // shadows
  ~boxShadow: value=?,
  // sizing
  ~width: value=?,
  ~maxWidth: value=?,
  ~minWidth: value=?,
  ~height: value=?,
  ~maxHeight: value=?,
  ~minHeight: value=?,
  // spacing
  ~m: value=?,
  ~margin: value=?,
  ~mt: value=?,
  ~marginTop: value=?,
  ~mr: value=?,
  ~marginRight: value=?,
  ~mb: value=?,
  ~marginBottom: value=?,
  ~ml: value=?,
  ~marginLeft: value=?,
  ~mx: value=?,
  ~marginX: value=?,
  ~my: value=?,
  ~marginY: value=?,
  ~p: value=?,
  ~padding: value=?,
  ~pt: value=?,
  ~paddingTop: value=?,
  ~pr: value=?,
  ~paddingRight: value=?,
  ~pb: value=?,
  ~paddingBottom: value=?,
  ~pl: value=?,
  ~paddingLeft: value=?,
  ~px: value=?,
  ~paddingX: value=?,
  ~py: value=?,
  ~paddingY: value=?,
  // typography
  ~fontFamily: string=?,
  ~fontSize: value=?,
  ~fontStyle: string=?,
  ~fontWeight: value=?,
  ~letterSpacing: value=?,
  ~lineHeight: value=?,
  ~textAlign: value=?,
  /* Dom props */
  ~key: string=?,
  ~ref: ReactDOMRe.domRef=?,
  // react textarea/input
  ~defaultChecked: bool=?,
  ~defaultValue: string=?,
  // global html attributes
  ~accessKey: string=?,
  ~className: string=?, // substitute for "class" 
  ~contentEditable: bool=?,
  ~contextMenu: string=?,
  ~dir: [@bs.string] [ | `ltr | `rtl | `auto ]=?,
  ~draggable: bool=?,
  ~hidden: bool=?,
  ~id: string=?,
  ~lang: string=?,
  ~role: string=?, // ARIA role 
  ~style: ReactDOMRe.style=?,
  ~spellCheck: bool=?,
  ~tabIndex: int=?,
  ~title: string=?,
  // html5 microdata
  ~itemID: string=?,
  ~itemProp: string=?,
  ~itemRef: string=?,
  ~itemScope: bool=?,
  ~itemType: string=?, // uri 
  // tag-specific html attributes 
  ~accept: string=?,
  ~acceptCharset: string=?,
  ~action: string=?, // uri 
  ~allowFullScreen: bool=?,
  ~alt: string=?,
  ~async: bool=?,
  ~autoComplete: string=?, // has a fixed, but large-ish, set of possible values 
  ~autoFocus: bool=?,
  ~autoPlay: bool=?,
  ~challenge: string=?,
  ~charSet: string=?,
  ~checked: bool=?,
  ~cite: string=?, // uri 
  ~crossorigin: bool=?,
  ~cols: int=?,
  ~colSpan: int=?,
  ~content: string=?,
  ~controls: bool=?,
  ~coords: string=?, // set of values specifying the coordinates of a region 
  ~data: string=?, // uri 
  ~dateTime: string=?, // "valid date string with optional time" 
  ~default: bool=?,
  ~defer: bool=?,
  ~disabled: bool=?,
  ~download: string=?, // should really be either a boolean, signifying presence, or a string 
  ~encType: string=?, // "application/x-www-form-urlencoded", "multipart/form-data" or "text/plain" 
  ~form: string=?,
  ~formAction: string=?, // uri 
  ~formTarget: [@bs.string] [ | `_self | `_blank | `_parent | `_top ]=?,
  ~formMethod: [@bs.string] [ |`post | `get |`put ]=?,
  ~headers: string=?,
  ~high: int=?,
  ~href: string=?, // uri 
  ~hrefLang: string=?,
  ~htmlFor: string=?, // substitute for "for" 
  ~httpEquiv: string=?,
  ~icon: string=?, // uri? 
  ~inputMode: [@bs.string] [
    | `none
    | `text
    | `decimal
    | `numeric
    | `tel
    | `search
    | `email
    | `url
  ]=?,
  ~integrity: string=?,
  ~keyType: string=?,
  ~kind: string=?, // has a fixed set of possible values 
  ~label: string=?,
  ~list: string=?,
  ~loop: bool=?,
  ~low: int=?,
  ~manifest: string=?, // uri 
  ~max: string=?, // should be int or Js.Date.t 
  ~maxLength: int=?,
  ~media: string=?, // a valid media query 
  ~mediaGroup: string=?,
  ~method: [@bs.string] [ | `post | `get ]=?,
  ~min: int=?,
  ~minLength: int=?,
  ~multiple: bool=?,
  ~muted: bool=?,
  ~name: string=?,
  ~nonce: string=?,
  ~noValidate: bool=?,
  ~_open: bool=?, // use this one. Previous one is deprecated 
  ~optimum: int=?,
  ~pattern: string=?, // valid Js RegExp 
  ~placeholder: string=?,
  ~poster: string=?, // uri 
  ~preload: [@bs.string] [ | `none | `metadata | `auto ]=?,
  ~radioGroup: string=?,
  ~readOnly: bool=?,
  ~rel: string=?, // a space- or comma-separated (depending on the element) list of a fixed set of "link types" 
  ~required: bool=?,
  ~reversed: bool=?,
  ~rows: int=?,
  ~rowSpan: int=?,
  ~sandbox: string=?, // has a fixed set of possible values 
  ~scope: string=?, // has a fixed set of possible values 
  ~scoped: bool=?,
  ~scrolling: [@bs.string] [ | `auto | `yes | `no ]=?, // html4 only
  // seamless - supported by React, but removed from the html5 spec 
  ~selected: bool=?,
  ~shape: string=?,
  ~size: int=?,
  ~sizes: string=?,
  ~span: int=?,
  ~src: string=?, // uri 
  ~srcDoc: string=?,
  ~srcLang: string=?,
  ~srcSet: string=?,
  ~start: int=?,
  ~step: float=?,
  ~summary: string=?, // deprecated 
  ~target: string=?,
  ~_type: string=?, /* has a fixed but large-ish set of possible values */ /* use this one. Previous one is deprecated */
  ~useMap: string=?,
  ~value: string=?,
  ~wrap: [@bs.string] [ | `hard | `soft ]=?,
  // Clipboard events
  ~onCopy: ReactEvent.Clipboard.t => unit=?,
  ~onCut: ReactEvent.Clipboard.t => unit=?,
  ~onPaste: ReactEvent.Clipboard.t => unit=?,
  // Composition events 
  ~onCompositionEnd: ReactEvent.Composition.t => unit=?,
  ~onCompositionStart: ReactEvent.Composition.t => unit=?,
  ~onCompositionUpdate: ReactEvent.Composition.t => unit=?,
  // Keyboard events 
  ~onKeyDown: ReactEvent.Keyboard.t => unit=?,
  ~onKeyPress: ReactEvent.Keyboard.t => unit=?,
  ~onKeyUp: ReactEvent.Keyboard.t => unit=?,
  // Focus events 
  ~onFocus: ReactEvent.Focus.t => unit=?,
  ~onBlur: ReactEvent.Focus.t => unit=?,
  // Form events
  ~onChange: ReactEvent.Form.t => unit=?,
  ~onInput: ReactEvent.Form.t => unit=?,
  ~onSubmit: ReactEvent.Form.t => unit=?,
  // Mouse events
  ~onClick: ReactEvent.Mouse.t => unit=?,
  ~onContextMenu: ReactEvent.Mouse.t => unit=?,
  ~onDoubleClick: ReactEvent.Mouse.t => unit=?,
  ~onDrag: ReactEvent.Mouse.t => unit=?,
  ~onDragEnd: ReactEvent.Mouse.t => unit=?,
  ~onDragEnter: ReactEvent.Mouse.t => unit=?,
  ~onDragExit: ReactEvent.Mouse.t => unit=?,
  ~onDragLeave: ReactEvent.Mouse.t => unit=?,
  ~onDragOver: ReactEvent.Mouse.t => unit=?,
  ~onDragStart: ReactEvent.Mouse.t => unit=?,
  ~onDrop: ReactEvent.Mouse.t => unit=?,
  ~onMouseDown: ReactEvent.Mouse.t => unit=?,
  ~onMouseEnter: ReactEvent.Mouse.t => unit=?,
  ~onMouseLeave: ReactEvent.Mouse.t => unit=?,
  ~onMouseMove: ReactEvent.Mouse.t => unit=?,
  ~onMouseOut: ReactEvent.Mouse.t => unit=?,
  ~onMouseOver: ReactEvent.Mouse.t => unit=?,
  ~onMouseUp: ReactEvent.Mouse.t => unit=?,
  // Selection events 
  ~onSelect: ReactEvent.Selection.t => unit=?,
  // Touch events
  ~onTouchCancel: ReactEvent.Touch.t => unit=?,
  ~onTouchEnd: ReactEvent.Touch.t => unit=?,
  ~onTouchMove: ReactEvent.Touch.t => unit=?,
  ~onTouchStart: ReactEvent.Touch.t => unit=?,
  // UI events
  ~onScroll: ReactEvent.UI.t => unit=?,
  // Wheel events
  ~onWheel: ReactEvent.Wheel.t => unit=?,
  // Media events
  ~onAbort: ReactEvent.Media.t => unit=?,
  ~onCanPlay: ReactEvent.Media.t => unit=?,
  ~onCanPlayThrough: ReactEvent.Media.t => unit=?,
  ~onDurationChange: ReactEvent.Media.t => unit=?,
  ~onEmptied: ReactEvent.Media.t => unit=?,
  ~onEncrypetd: ReactEvent.Media.t => unit=?,
  ~onEnded: ReactEvent.Media.t => unit=?,
  ~onError: ReactEvent.Media.t => unit=?,
  ~onLoadedData: ReactEvent.Media.t => unit=?,
  ~onLoadedMetadata: ReactEvent.Media.t => unit=?,
  ~onLoadStart: ReactEvent.Media.t => unit=?,
  ~onPause: ReactEvent.Media.t => unit=?,
  ~onPlay: ReactEvent.Media.t => unit=?,
  ~onPlaying: ReactEvent.Media.t => unit=?,
  ~onProgress: ReactEvent.Media.t => unit=?,
  ~onRateChange: ReactEvent.Media.t => unit=?,
  ~onSeeked: ReactEvent.Media.t => unit=?,
  ~onSeeking: ReactEvent.Media.t => unit=?,
  ~onStalled: ReactEvent.Media.t => unit=?,
  ~onSuspend: ReactEvent.Media.t => unit=?,
  ~onTimeUpdate: ReactEvent.Media.t => unit=?,
  ~onVolumeChange: ReactEvent.Media.t => unit=?,
  ~onWaiting: ReactEvent.Media.t => unit=?,
  // Image events
  ~onLoad: ReactEvent.Image.t => unit=?,
  // Animation events
  ~onAnimationStart: ReactEvent.Animation.t => unit=?,
  ~onAnimationEnd: ReactEvent.Animation.t => unit=?,
  ~onAnimationIteration: ReactEvent.Animation.t => unit=?,
  // Transition events
  ~onTransitionEnd: ReactEvent.Transition.t => unit=?,
  unit
) => props = "";

[@bs.module "@material-ui/core/Box"]
external make: React.component(props) = "default";

/*
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
*/