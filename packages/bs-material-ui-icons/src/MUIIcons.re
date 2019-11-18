module Make = () => {
  type classes = {.
    "root": option(string),
    "colorPrimary": option(string),
    "colorSecondary": option(string),
    "colorAction": option(string),
    "colorError": option(string),
    "colorDisabled": option(string),
    "fontSizeInherit": option(string),
    "fontSizeSmall": option(string),
    "fontSizeLarge": option(string),
  };

  [@bs.obj]
  external classes: (
    ~root: string=?,
    ~colorPrimary: string=?,
    ~colorSecondary: string=?,
    ~colorAction: string=?,
    ~colorError: string=?,
    ~colorDisabled: string=?,
    ~fontSizeInherit: string=?,
    ~fontSizeSmall: string=?,
    ~fontSizeLarge: string=?,
    unit
  ) => classes = "";

  type props = {.
    /* SvgIcon props */
    "children": option(React.element),
    "classes": option(classes),
    "color": option(string),
    "component": option(string),
    "fontSize": option(string),
    "htmlColor": option(string),
    "shapeRendering": option(string),
    "titleAccess": option(string),
    "viewBox": option(string),
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
    "height": string, // in html5 this can only be a number, but in html4 it can ba a percentage as well
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
    "type": option(string), // has a fixed but large-ish set of possible values // use this one. Previous one is deprecated 
    "useMap": option(string),
    "value": option(string),
    "width": string,
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
    ~children: React.element=?,
    ~classes: classes=?,
    ~color: [@bs.string] [
      | `action
      | `disabled
      | `error
      | [@bs.as "inherit"] `inherit_
      | `primary
      | `secondary
    ]=?,
    ~component: string=?,
    ~fontSize: [@bs.string] [
      | `default
      | [@bs.as "inherit"] `inherit_
      | `large
      | `small
    ]=?,
    ~htmlColor: string=?,
    ~shapeRendering: string=?,
    ~titleAccess: string=?,
    ~viewBox: string=?,
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
};

module Menu = {
  include Make();
  [@bs.module "@material-ui/icons/Menu"]
  external make: React.component(props) = "default"; 
};
module Mail = {
  include Make();
  [@bs.module "@material-ui/icons/Mail"]
  external make: React.component(props) = "default";
};
module Notifications = {
  include Make();
  [@bs.module "@material-ui/icons/Notifications"]
  external make: React.component(props) = "default";
};
module AccountCircle = {
  include Make();
  [@bs.module "@material-ui/icons/AccountCircle"]
  external make: React.component(props) = "default";
};
module Search = {
  include Make();
  [@bs.module "@material-ui/icons/Search"]
  external make: React.component(props) = "default";
};
module MoreVert = {
  include Make();
  [@bs.module "@material-ui/icons/MoreVert"]
  external make: React.component(props) = "default";
};
module MoveToInbox = {
  include Make();
  [@bs.module "@material-ui/icons/MoveToInbox"]
  external make: React.component(props) = "default";
};
module ChevronLeft = {
  include Make();
  [@bs.module "@material-ui/icons/ChevronLeft"]
  external make: React.component(props) = "default";
};
module Dashboard = {
  include Make();
  [@bs.module "@material-ui/icons/Dashboard"]
  external make: React.component(props) = "default";
};
module ShoppingCart = {
  include Make();
  [@bs.module "@material-ui/icons/ShoppingCart"]
  external make: React.component(props) = "default";
};
module People = {
  include Make();
  [@bs.module "@material-ui/icons/People"]
  external make: React.component(props) = "default";
};
module BarChart = {
  include Make();
  [@bs.module "@material-ui/icons/BarChart"]
  external make: React.component(props) = "default";
};
module Layers = {
  include Make();
  [@bs.module "@material-ui/icons/Layers"]
  external make: React.component(props) = "default";
};
module Assignment = {
  include Make();
  [@bs.module "@material-ui/icons/Assignment"]
  external make: React.component(props) = "default";
}
module LockOutlined = {
  include Make();
  [@bs.module "@material-ui/icons/LockOutlined"]
  external make: React.component(props) = "default";
}