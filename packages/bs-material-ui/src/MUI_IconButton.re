type edge;

external edge: string => edge = "%identity";
[@bs.val]
external edgeDisable: edge = "false";

type classes = {
  .
  "root": Js.undefined(string),
  "edgeStart": Js.undefined(string),
  "edgeEnd": Js.undefined(string),
  "colorInherit": Js.undefined(string),
  "colorPrimary": Js.undefined(string),
  "colorSecondary": Js.undefined(string),
  "disabled": Js.undefined(string),
  "sizeSmall": Js.undefined(string),
  "label": Js.undefined(string),
};

[@bs.obj]
external classes: (
  ~root: string=?,
  ~edgeStart: string=?,
  ~edgeEnd: string=?,
  ~colorInherit: string=?,
  ~colorPrimary: string=?,
  ~colorSecondary: string=?,
  ~disabled: string=?,
  ~sizeSmall: string=?,
  ~label: string=?,
  unit
) => classes = "";

type props = {
  .
  /* IconButton props */
  "children": Js.undefined(React.element),
  "classes": Js.undefined(classes),
  "color": Js.undefined(string),
  "disabled": Js.undefined(bool),
  "disableFocusRipple": Js.undefined(bool),
  "disableRipple": Js.undefined(bool),
  "edge": Js.undefined(string),
  "size": Js.undefined(string),
  /* ButtonBase props */
  "action": Js.undefined(ReactDOMRe.domRef),
  "centerRipple": Js.undefined(bool),
  // "children": Js.undefined(React.element),
  // "classes": Js.undefined(classes),
  "component": Js.undefined(string),
  // "disabled": Js.undefined(bool),
  // "disableRipple": Js.undefined(bool),
  "disableTouchRipple": Js.undefined(bool),
  "focusRipple": Js.undefined(bool),
  "focusVisibleClassName": Js.undefined(string),
  "onFocusVisible": Js.undefined(ReactEvent.Form.t => unit),
  // "_TouchRippleProps": Js.undefined(MUI_TouchRipple.props),
  "_type": Js.undefined(string),
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
  // "action": Js.undefined(string), // uri 
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
  // "disabled": Js.undefined(bool),
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
  "_open": Js.undefined(bool), // use this one. Previous one is deprecated 
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
  // "size": Js.undefined(int),
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
  // "_type": Js.undefined(string), // has a fixed but large-ish set of possible values // use this one. Previous one is deprecated 
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

external objToProps: Js.t({..}) => props = "%identity";

[@bs.obj]
external makeProps: (
  /* IconButton props */
  ~children: React.element=?,
  ~classes: classes=?,
  ~color: [@bs.string] [
    | `default
    | [@bs.as "inherit"] `inherit_
    | `primary
    | `secondary
  ]=?,
  ~disabled: bool=?,
  ~disableFocusRipple: bool=?,
  ~disableRipple: bool=?,
  ~edge: edge=?,
  ~size: string=?,
  /* ButtonBase props */
  ~action: ReactDOMRe.domRef=?,
  ~centerRipple: bool=?,
  // ~children: React.element=?,
  // ~classes: classes=?,
  ~component: string=?,
  // ~disabled: bool=?,
  // ~disableRipple: bool=?,
  ~disableTouchRipple: bool=?,
  ~focusRipple: bool=?,
  ~focusVisibleClassName: string=?,
  ~onFocusVisible: ReactEvent.Form.t => unit=?,
  // ~_TouchRippleProps: MUI_TouchRipple.props=?,
  ~_type: [@bs.string] [ | `submit | `reset | `button ]=?,
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
  // ~action: string=?, // uri 
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
  // ~disabled: bool=?,
  ~download: string=?, // should really be either a boolean, signifying presence, or a string 
  ~encType: string=?, // "application/x-www-form-urlencoded", "multipart/form-data" or "text/plain" 
  ~form: string=?,
  ~formAction: string=?, // uri 
  ~formTarget: [@bs.string] [ | `_self | `_blank | `_parent | `_top ]=?,
  ~formMethod: [@bs.string] [ |`post | `get |`put ]=?,
  ~headers: string=?,
  ~height: string=?, // in html5 this can only be a number, but in html4 it can ba a percentage as well 
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
  // ~size: int=?,
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
  // ~_type: string=?, // has a fixed but large-ish set of possible values // use this one. Previous one is deprecated
  ~useMap: string=?,
  ~value: string=?,
  ~width: string=?,
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

[@bs.module "@material-ui/core/IconButton"]
external make: React.component(props) = "default";