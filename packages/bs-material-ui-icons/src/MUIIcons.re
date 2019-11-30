module Make = () => {
  type props;
  type classes;

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

  external objToProps: Js.t({..}) => props = "%identity";

  [@bs.obj]
  external makeProps: (
    /* SvgIcon props */
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