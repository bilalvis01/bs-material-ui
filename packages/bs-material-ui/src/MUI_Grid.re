type props;
type gridSize;

[@bs.deriving abstract]
type classes = {
  [@bs.optional] 
  root: string,
  [@bs.optional] 
  container: string,
  [@bs.optional] 
  item: string,
  [@bs.optional] 
  zeroMinWidth: string,
  [@bs.optional] [@bs.as "direction-xs-column"] 
  directionXsColumn: string,
  [@bs.optional] [@bs.as "direction-xs-column-reverse"] 
  directionXsColumnReverse: string,
  [@bs.optional] [@bs.as "direction-xs-row-reverse"] 
  directionXsRowReverse: string,
  [@bs.optional] [@bs.as "wrap-xs-nowrap"] 
  wrapXsNowrap: string,
  [@bs.optional] [@bs.as "wrap-xs-wrap-reverse"] 
  wrapXsWrapReverse: string,
  [@bs.optional] [@bs.as "align-items-xs-center"]
  alignItemsXsCenter: string,
  [@bs.optional] [@bs.as "align-items-xs-flex-start"]
  alignItemsXsFlexStart: string,
  [@bs.optional] [@bs.as "align-items-xs-flex-end"]
  alignItemsXsFlexEnd: string,
  [@bs.optional] [@bs.as "align-items-xs-baseline"]
  alignItemXsBaseline: string,
  [@bs.optional] [@bs.as "align-content-xs-center"]
  alignContentXsCenter: string,
  [@bs.optional] [@bs.as "align-content-xs-flex-start"]
  alignContentXsFlexStart: string,
  [@bs.optional] [@bs.as "align-content-xs-flex-end"]
  alignContentXsFlexEnd: string,
  [@bs.optional] [@bs.as "align-content-xs-space-between"]
  alignContentXsSpaceBetween: string,
  [@bs.optional] [@bs.as "align-content-xs-space-around"]
  alignContentXsSpaceAround: string,
  [@bs.optional] [@bs.as "justify-xs-center"]
  justifyXsCenter: string,
  [@bs.optional] [@bs.as "justify-xs-flex-end"]
  justifyXsFlexEnd: string,
  [@bs.optional] [@bs.as "justify-xs-space-between"]
  justifyXsSpaceBetween: string,
  [@bs.optional] [@bs.as "justify-xs-space-around"]
  justifyXsSpaceAround: string,
  [@bs.optional] [@bs.as "justify-xs-space-evenly"]
  justifyXsSpaceEvenly: string,
  [@bs.optional] [@bs.as "spacing-xs-1"]
  spacingXs1: string,
  [@bs.optional] [@bs.as "spacing-xs-2"]
  spacingXs2: string,
  [@bs.optional] [@bs.as "spacing-xs-3"]
  spacingXs3: string,
  [@bs.optional] [@bs.as "spacing-xs-4"]
  spacingXs4: string,
  [@bs.optional] [@bs.as "spacing-xs-5"]
  spacingXs5: string,
  [@bs.optional] [@bs.as "spacing-xs-6"]
  spacingXs6: string,
  [@bs.optional] [@bs.as "spacing-xs-7"]
  spacingXs7: string,
  [@bs.optional] [@bs.as "spacing-xs-8"]
  spacingXs8: string,
  [@bs.optional] [@bs.as "spacing-xs-9"]
  spacingXs9: string,
  [@bs.optional] [@bs.as "spacing-xs-10"]
  spacingXs10: string,
  [@bs.optional] [@bs.as "grid-xs-auto"]
  gridXsAuto: string,
  [@bs.optional] [@bs.as "grid-xs-true"]
  gridXsTrue: string,
  [@bs.optional] [@bs.as "grid-xs-1"]
  gridXs1: string,
  [@bs.optional] [@bs.as "grid-xs-2"]
  gridXs2: string,
  [@bs.optional] [@bs.as "grid-xs-3"]
  gridXs3: string,
  [@bs.optional] [@bs.as "grid-xs-4"]
  gridXs4: string,
  [@bs.optional] [@bs.as "grid-xs-5"]
  gridXs5: string,
  [@bs.optional] [@bs.as "grid-xs-6"]
  gridXs6: string,
  [@bs.optional] [@bs.as "grid-xs-7"]
  gridXs7: string,
  [@bs.optional] [@bs.as "grid-xs-8"]
  gridXs8: string,
  [@bs.optional] [@bs.as "grid-xs-9"]
  gridXs9: string,
  [@bs.optional] [@bs.as "grid-xs-10"]
  gridXs10: string,
  [@bs.optional] [@bs.as "grid-xs-11"]
  gridXs11: string,
  [@bs.optional] [@bs.as "grid-xs-12"]
  gridXs12: string,
};

external size: int => gridSize = "%identity";
external sizeSwitch: bool => gridSize = "%identity";
let sizeAuto: gridSize = [%raw "'auto'"];

external objToProps: Js.t({..}) => props = "%identity";

[@bs.obj]
external makeProps: (
  /* Grid props */
  ~children: React.element=?,
  ~alignContent: [@bs.string] [
    | `stretch
    | `center
    | [@bs.as "flex-start"] `flexStart
    | [@bs.as "flex-end"] `flexEnd
    | [@bs.as "space-between"] `spaceBetween
    | [@bs.as "space-around"] `spaceAround
  ]=?,
  ~alignItems: [@bs.string] [
    | [@bs.as "flex-start"] `flexStart
    | `center
    | [@bs.as "flex-end"] `flexEnd
    | `stretch
    | `baseline
  ]=?,
  ~classes: classes=?,
  ~component: string=?,
  ~container: bool=?,
  ~direction: [@bs.string] [
    | `row
    | [@bs.as "row-reverse"] `rowReverse
    | `column
    | [@bs.as "column-reverse"] `columnReverse
  ]=?,
  ~item: bool=?,
  ~justify: [@bs.string] [
    | [@bs.as "flex-start"] `flexStart
    | `center
    | [@bs.as "flex-end"] `flexEnd
    | [@bs.as "space-between"] `spaceBetween
    | [@bs.as "space-around"] `spaceAround
    | [@bs.as "space-evenly"] `spaceEvenly
  ]=?,
  ~lg: gridSize=?,
  ~md: gridSize=?,
  ~sm: gridSize=?,
  ~spacing: int=?,
  ~wrap: [@bs.string] [
    | `nowrap
    | `wrap
    | [@bs.as "wrap-reverse"] `wrapReverse
  ]=?,
  ~xl: gridSize=?,
  ~xs: gridSize=?,
  ~zeroMinWidth: bool=?,
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
  // ~wrap: [@bs.string] [ | `hard | `soft ]=?,
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

[@bs.module "@material-ui/core/Grid"]
external make: React.component(props) = "default";