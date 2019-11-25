type classes = {.
  "root": Js.undefined(string),
  "spacing": Js.undefined(string),
};

[@bs.obj]
external classes: (
  ~root: string=?,
  ~spacing: string=?,
  unit
) => classes = "";

type props = {.
  "children": Js.undefined(React.element),
  "classes": Js.undefined(classes),
  "disableSpacing": Js.undefined(bool),
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
  "height": string, // in html5 this can only be a number, but in html4 it can ba a percentage as well
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
  "width": string,
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
  ~children: React.element=?,
  ~classes: classes=?,
  ~disableSpacing: bool=?,
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
  ~_type: string=?, // has a fixed but large-ish set of possible values // use this one. Previous one is deprecated
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

[@bs.module "@material-ui/core/CardActions"]
external make: React.component(props) = "default";

/*
[@bs.deriving abstract]
type makeClasses = {
  [@bs.optional]
  root: string,
  [@bs.optional]
  spacing: string,
};
type classes = makeClasses;

[@bs.deriving abstract]
type makeProps = {
  [@bs.optional]
  children: React.element,
  [@bs.optional]
  classes: classes,
  [@bs.optional]
  disableSpacing: bool,
  // domProps
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
  /* react textarea/input */
  [@bs.optional]
  defaultChecked: bool,
  [@bs.optional]
  defaultValue: string,
  /* global html attributes */
  [@bs.optional]
  accessKey: string,
  [@bs.optional]
  className: string, /* substitute for "class" */
  [@bs.optional]
  contentEditable: bool,
  [@bs.optional]
  contextMenu: string,
  [@bs.optional]
  dir: string, /* "ltr", "rtl" or "auto" */
  [@bs.optional]
  draggable: bool,
  [@bs.optional]
  hidden: bool,
  [@bs.optional]
  id: string,
  [@bs.optional]
  lang: string,
  [@bs.optional]
  role: string, /* ARIA role */
  [@bs.optional]
  style: ReactDOMRe.style,
  [@bs.optional]
  spellCheck: bool,
  [@bs.optional]
  tabIndex: int,
  [@bs.optional]
  title: string,
  /* html5 microdata */
  [@bs.optional]
  itemID: string,
  [@bs.optional]
  itemProp: string,
  [@bs.optional]
  itemRef: string,
  [@bs.optional]
  itemScope: bool,
  [@bs.optional]
  itemType: string, /* uri */
  /* tag-specific html attributes */
  [@bs.optional]
  accept: string,
  [@bs.optional]
  acceptCharset: string,
  [@bs.optional]
  action: string, /* uri */
  [@bs.optional]
  allowFullScreen: bool,
  [@bs.optional]
  alt: string,
  [@bs.optional]
  async: bool,
  [@bs.optional]
  autoComplete: string, /* has a fixed, but large-ish, set of possible values */
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
  cite: string, /* uri */
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
  coords: string, /* set of values specifying the coordinates of a region */
  [@bs.optional]
  data: string, /* uri */
  [@bs.optional]
  dateTime: string, /* "valid date string with optional time" */
  [@bs.optional]
  default: bool,
  [@bs.optional]
  defer: bool,
  [@bs.optional]
  disabled: bool,
  [@bs.optional]
  download: string, /* should really be either a boolean, signifying presence, or a string */
  [@bs.optional]
  encType: string, /* "application/x-www-form-urlencoded", "multipart/form-data" or "text/plain" */
  [@bs.optional]
  form: string,
  [@bs.optional]
  formAction: string, /* uri */
  [@bs.optional]
  formTarget: string, /* "_blank", "_self", etc. */
  [@bs.optional]
  formMethod: string, /* "post", "get", "put" */
  [@bs.optional]
  headers: string,
  [@bs.optional]
  height: string, /* in html5 this can only be a number, but in html4 it can ba a percentage as well */
  [@bs.optional]
  high: int,
  [@bs.optional]
  href: string, /* uri */
  [@bs.optional]
  hrefLang: string,
  [@bs.optional]
  htmlFor: string, /* substitute for "for" */
  [@bs.optional]
  httpEquiv: string, /* has a fixed set of possible values */
  [@bs.optional]
  icon: string, /* uri? */
  [@bs.optional]
  inputMode: string, /* "verbatim", "latin", "numeric", etc. */
  [@bs.optional]
  integrity: string,
  [@bs.optional]
  keyType: string,
  [@bs.optional]
  kind: string, /* has a fixed set of possible values */
  [@bs.optional]
  label: string,
  [@bs.optional]
  list: string,
  [@bs.optional]
  loop: bool,
  [@bs.optional]
  low: int,
  [@bs.optional]
  manifest: string, /* uri */
  [@bs.optional]
  max: string, /* should be int or Js.Date.t */
  [@bs.optional]
  maxLength: int,
  [@bs.optional]
  media: string, /* a valid media query */
  [@bs.optional]
  mediaGroup: string,
  [@bs.optional]
  method: string, /* "post" or "get" */
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
  open_: bool, /* use this one. Previous one is deprecated */
  [@bs.optional]
  optimum: int,
  [@bs.optional]
  pattern: string, /* valid Js RegExp */
  [@bs.optional]
  placeholder: string,
  [@bs.optional]
  poster: string, /* uri */
  [@bs.optional]
  preload: string, /* "none", "metadata" or "auto" (and "" as a synonym for "auto") */
  [@bs.optional]
  radioGroup: string,
  [@bs.optional]
  readOnly: bool,
  [@bs.optional]
  rel: string, /* a space- or comma-separated (depending on the element) list of a fixed set of "link types" */
  [@bs.optional]
  required: bool,
  [@bs.optional]
  reversed: bool,
  [@bs.optional]
  rows: int,
  [@bs.optional]
  rowSpan: int,
  [@bs.optional]
  sandbox: string, /* has a fixed set of possible values */
  [@bs.optional]
  scope: string, /* has a fixed set of possible values */
  [@bs.optional]
  scoped: bool,
  [@bs.optional]
  scrolling: string, /* html4 only, "auto", "yes" or "no" */
  /* seamless - supported by React, but removed from the html5 spec */
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
  src: string, /* uri */
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
  summary: string, /* deprecated */
  [@bs.optional]
  target: string,
  [@bs.optional] [@bs.as "type"]
  type_: string, /* has a fixed but large-ish set of possible values */ /* use this one. Previous one is deprecated */
  [@bs.optional]
  useMap: string,
  [@bs.optional]
  value: string,
  [@bs.optional]
  width: string, /* in html5 this can only be a number, but in html4 it can ba a percentage as well */
  [@bs.optional]
  wrap: string, /* "hard" or "soft" */
  /* Clipboard events */
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
  onChange: ReactEvent.Form.t => unit,
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
*/
