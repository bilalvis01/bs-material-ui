type props;
type style;

/**
 * 
 * Unit Helper
 * 
 */
// Relative length units
let ch = value => string_of_int(value) ++ "ch";
let em = value => Belt.Float.toString(value) ++ "em";
let ex = value => string_of_int(value) ++ "ex";
let rem = value => Belt.Float.toString(value) ++ "rem";
let vh = value => string_of_int(value) ++ "vh";
let vw = value => string_of_int(value) ++ "vw";
let vmin = value => string_of_int(value) ++ "vmin";
let vmax = value => string_of_int(value) ++ "vmax";
// Absolute length units
let px = value => string_of_int(value) ++ "px";
let cm = value => string_of_int(value) ++ "cm";
let mm = value => string_of_int(value) ++ "mm";
let inch = value => string_of_int(value) ++ "in";
let pc = value => string_of_int(value) ++ "pc";
let pt = value => string_of_int(value) ++ "pt";
// Length percentage
let percent = value => string_of_int(value) ++ "%";

[@bs.obj]
external style: (
  // borders
  ~border: string=?,
  ~borderTop: string=?,
  ~borderLeft: string=?,
  ~borderRight: string=?,
  ~borderBottom: string=?,
  ~borderColor: string=?,
  ~borderRadius: string=?,
  // display
  ~displayPrint: [@bs.string] [
    | `block
    | `inline
    | [@bs.as "flow-root"] `flowRoot
    | `table
    | `flex
    | `grid
    | [@bs.as "list-item"] `listItem
    | [@bs.as "table-row-group"] `tableRowGroup
    | [@bs.as "table-header-group"] `tableHeaderGroup
    | [@bs.as "table-footer-group"] `tableFooterGroup
    | [@bs.as "table-row"] `tableRow
    | [@bs.as "table-cell"] `tableCell
    | [@bs.as "table-column-group"] `tableColumnGroup
    | [@bs.as "table-column"] `tableColumn
    | [@bs.as "table-caption"] `tableCaption
    | `none
    | [@bs.as "inline-block"] `inlineBlock
    | [@bs.as "inline-table"] `inlineTable
    | [@bs.as "inline-flex"] `inlineFlex
    | [@bs.as "inline-grid"] `inlineGrid
    | [@bs.as "inherit"] `inherit_
    | `initial
    | `unset
  ]=?,
  ~displayRaw: [@bs.string] [
    | `block
    | `inline
    | [@bs.as "flow-root"] `flowRoot
    | `table
    | `flex
    | `grid
    | [@bs.as "list-item"] `listItem
    | [@bs.as "table-row-group"] `tableRowGroup
    | [@bs.as "table-header-group"] `tableHeaderGroup
    | [@bs.as "table-footer-group"] `tableFooterGroup
    | [@bs.as "table-row"] `tableRow
    | [@bs.as "table-cell"] `tableCell
    | [@bs.as "table-column-group"] `tableColumnGroup
    | [@bs.as "table-column"] `tableColumn
    | [@bs.as "table-caption"] `tableCaption
    | `none
    | [@bs.as "inline-block"] `inlineBlock
    | [@bs.as "inline-table"] `inlineTable
    | [@bs.as "inline-flex"] `inlineFlex
    | [@bs.as "inline-grid"] `inlineGrid
    | [@bs.as "inherit"] `inherit_
    | `initial
    | `unset
  ]=?,
  ~overflow: [@bs.string] [
    | `visible
    | `hidden
    | `clip
    | `scroll
    | `auto
    | [@bs.as "inherit"] `inherit_
    | `initial
    | `unset
  ]=?,
  ~textOverflow: [@bs.string] [
    | `clip
    | `ellipsis
    | [@bs.as "inherit"] `inherit_
    | `initial
    | `unset
  ]=?,
  ~visibility: [@bs.string] [
    | `visible
    | `hidden
    | `collapse
    | [@bs.as "inherit"] `inherit_
    | `initial
    | `unset
  ]=?,
  ~whiteSpace: [@bs.string] [
    | `normal
    | `nowrap
    | `pre
    | [@bs.as "pre-wrap"] `preWrap
    | [@bs.as "pre-line"] `preLine
    | [@bs.as "break-spaces"] `breakSpaces
    | [@bs.as "inherit"] `inherit_
    | `initial
    | `unset
  ]=?,
  // flexbox
  ~flexDirection: [@bs.string] [
    | `row
    | [@bs.as "row-reverse"] `rowReverse
    | `column
    | [@bs.as "column-reverse"] `columnReverse
    | [@bs.as "inherit"] `inherit_
    | `initial
    | `unset
  ]=?,
  ~flexWrap: [@bs.string] [
    | `nowrap
    | `wrap
    | [@bs.as "wrap-reverse"] `wrapReverse
    | [@bs.as "inherit"] `inherit_
    | `initial
    | `unset
  ]=?,
  ~justifyContent: [@bs.string] [
    | `start
    | `end_
    | [@bs.as "flex-start"] `flexStart
    | [@bs.as "flex-end"] `flexEnd
    | `center
    | `left
    | `right
    | `normal
    | `baseline
    | [@bs.as "first baseline"] `first_baseline
    | [@bs.as "last baseline"] `last_baseline
    | [@bs.as "space-between"] `spaceBetween
    | [@bs.as "space-around"] `spcaeAround
    | [@bs.as "spcae-evenly"] `spaceEvenly
    | `stretch
    | `safe
    | `unsafe
    | [@bs.as "inherit"] `inherit_
    | `initial
    | `unset
  ]=?,
  ~alignItems: [@bs.string] [
    | `normal
    | [@bs.as "flex-start"] `flexStart
    | [@bs.as "flex-end"] `flexEnd
    | `center
    | `start
    | `end_
    | [@bs.as "self-start"] `selfStart
    | [@bs.as "flex-end"] `flexEnd
    | `baseline
    | [@bs.as "first baseline"] `first_baseline
    | [@bs.as "lastBaseline"] `last_baseline
    | `stretch
    | `safe
    | `unsafe
    | [@bs.as "inherit"] `inherit_
    | `initial
    | `unset
  ]=?,
  ~order: string=?,
  ~flex: string=?,
  ~flexGrow: string=?,
  ~flexShrink: string=?,
  ~alignSelf: [@bs.string] [
    | `auto
    | `normal
    | [@bs.as "self-start"] `selfStart
    | [@bs.as "self-end"] `selfEnd
    | [@bs.as "flex-start"] `flexStart
    | [@bs.as "flex-end"] `flexEnd
    | `center
    | `baseline
    | [@bs.as "first baseline"] `first_baseline
    | [@bs.as "last baseline"] `last_baseline
    | `stretch
    | `safe
    | `unsafe
    | [@bs.as "inherit"] `inherit_
    | `initial
    | `unset
  ]=?,
  // palette
  ~color: string=?,
  ~bgColor: string=?,
  // position
  ~position: [@bs.string] [
    | `static
    | `relative
    | `absolute
    | `fixed
    | `sticky
    | [@bs.as "inherit"] `inherit_
    | `initial
    | `unset
  ]=?,
  ~zIndex: string=?,
  ~top: string=?,
  ~right: string=?,
  ~bottom: string=?,
  ~left: string=?,
  // shadows
  ~boxShadow: string=?,
  // sizing
  ~width: string=?,
  ~maxWidth: string=?,
  ~minWidth: string=?,
  ~height: string=?,
  ~maxHeight: string=?,
  ~minHeight: string=?,
  // spacing
  ~m: string=?,
  ~margin: string=?,
  ~mt: string=?,
  ~marginTop: string=?,
  ~mr: string=?,
  ~marginRight: string=?,
  ~mb: string=?,
  ~marginBottom: string=?,
  ~ml: string=?,
  ~marginLeft: string=?,
  ~mx: string=?,
  ~marginX: string=?,
  ~my: string=?,
  ~marginY: string=?,
  ~p: string=?,
  ~padding: string=?,
  ~pt: string=?,
  ~paddingTop: string=?,
  ~pr: string=?,
  ~paddingRight: string=?,
  ~pb: string=?,
  ~paddingBottom: string=?,
  ~pl: string=?,
  ~paddingLeft: string=?,
  ~px: string=?,
  ~paddingX: string=?,
  ~py: string=?,
  ~paddingY: string=?,
  // typography
  ~fontFamily: string=?,
  ~fontSize: string=?,
  ~fontStyle: string=?,
  ~fontWeight: string=?,
  ~letterSpacing: string=?,
  ~lineHeight: string=?,
  ~textAlign: [@bs.string] [
    | `left
    | `right
    | `center
    | `justify
    | [@bs.as "inherit"] `inherit_
    | `initial
    | `unset
  ]=?,
  unit
) => style = "";

external objToProps: Js.t({..}) => props = "%identity";

[@bs.obj]
external makeProps: (
  /* Box props */
  ~children: React.element=?,
  ~clone: bool=?,
  ~component: [@bs.string] [
    | `address
    | `article
    | `aside
    | `footer
    | `header
    | `h1
    | `h2
    | `h3
    | `h4
    | `h5
    | `h6
    | `hgroup
    | `main
    | `nav
    | `section
    | `blockquote
    | `dd
    | `dir
    | `div
    | `dl
    | `dt
    | `figcaption
    | `figure
    | `hr
    | `li
    | `ol
    | `p
    | `pre
    | `ul
    | `a
    | `abbr
    | `b
    | `bdi
    | `bdo
    | `br
    | `cite
    | `code
    | `data
    | `dfn
    | `em
    | `i
    | `kbd
    | `mark
    | `q
    | `rb
    | `rp
    | `rt
    | `rtc
    | `ruby
    | `s
    | `samp
    | `small
    | `span
    | `strong
    | `sub
    | `sup
    | `time
    | `tt
    | `u
    | `var
    | `wbr
    | `area
    | `audio
    | `img
    | `map
    | `track
    | `video
    | `applet
    | `embed
    | `iframe
    | [@bs.as "object"] `object_
    | `param
    | `picture
    | `source
    | `del
    | `ins
    | `caption
    | `col
    | `colgroup
    | `table
    | `tbody
    | `td
    | `tfoot
    | `th
    | `thead
    | `tr
    | `button
    | `datalist
    | `fieldset
    | `form
    | `input
    | `label
    | `legend
    | `meter
    | `optgroup
    | `option
    | `output
    | `progress
    | `select
    | `textarea
    | `details
    | `dialog
    | `menu
    | `menuitem
    | `summary
    | `element
    | `slot
    | `template
  ]=?,
  // collocation responsive
  ~xs: style=?,
  ~sm: style=?,
  ~md: style=?,
  ~lg: style=?,
  ~xl: style=?,
  // border
  ~border: string=?,
  ~borderTop: string=?,
  ~borderLeft: string=?,
  ~borderRight: string=?,
  ~borderBottom: string=?,
  ~borderColor: string=?,
  ~borderRadius: string=?,
  // display
  ~displayPrint: [@bs.string] [
    | `block
    | `inline
    | [@bs.as "flow-root"] `flowRoot
    | `table
    | `flex
    | `grid
    | [@bs.as "list-item"] `listItem
    | [@bs.as "table-row-group"] `tableRowGroup
    | [@bs.as "table-header-group"] `tableHeaderGroup
    | [@bs.as "table-footer-group"] `tableFooterGroup
    | [@bs.as "table-row"] `tableRow
    | [@bs.as "table-cell"] `tableCell
    | [@bs.as "table-column-group"] `tableColumnGroup
    | [@bs.as "table-column"] `tableColumn
    | [@bs.as "table-caption"] `tableCaption
    | `none
    | [@bs.as "inline-block"] `inlineBlock
    | [@bs.as "inline-table"] `inlineTable
    | [@bs.as "inline-flex"] `inlineFlex
    | [@bs.as "inline-grid"] `inlineGrid
    | [@bs.as "inherit"] `inherit_
    | `initial
    | `unset
  ]=?,
  ~displayRaw: [@bs.string] [
    | `block
    | `inline
    | [@bs.as "flow-root"] `flowRoot
    | `table
    | `flex
    | `grid
    | [@bs.as "list-item"] `listItem
    | [@bs.as "table-row-group"] `tableRowGroup
    | [@bs.as "table-header-group"] `tableHeaderGroup
    | [@bs.as "table-footer-group"] `tableFooterGroup
    | [@bs.as "table-row"] `tableRow
    | [@bs.as "table-cell"] `tableCell
    | [@bs.as "table-column-group"] `tableColumnGroup
    | [@bs.as "table-column"] `tableColumn
    | [@bs.as "table-caption"] `tableCaption
    | `none
    | [@bs.as "inline-block"] `inlineBlock
    | [@bs.as "inline-table"] `inlineTable
    | [@bs.as "inline-flex"] `inlineFlex
    | [@bs.as "inline-grid"] `inlineGrid
    | [@bs.as "inherit"] `inherit_
    | `initial
    | `unset
  ]=?,
  ~overflow: [@bs.string] [
    | `visible
    | `hidden
    | `clip
    | `scroll
    | `auto
    | [@bs.as "inherit"] `inherit_
    | `initial
    | `unset
  ]=?,
  ~textOverflow: [@bs.string] [
    | `clip
    | `ellipsis
    | [@bs.as "inherit"] `inherit_
    | `initial
    | `unset
  ]=?,
  ~visibility: [@bs.string] [
    | `visible
    | `hidden
    | `collapse
    | [@bs.as "inherit"] `inherit_
    | `initial
    | `unset
  ]=?,
  ~whiteSpace: [@bs.string] [
    | `normal
    | `nowrap
    | `pre
    | [@bs.as "pre-wrap"] `preWrap
    | [@bs.as "pre-line"] `preLine
    | [@bs.as "break-spaces"] `breakSpaces
    | [@bs.as "inherit"] `inherit_
    | `initial
    | `unset
  ]=?,
  // flexbox
  ~flexDirection: [@bs.string] [
    | `row
    | [@bs.as "row-reverse"] `rowReverse
    | `column
    | [@bs.as "column-reverse"] `columnReverse
    | [@bs.as "inherit"] `inherit_
    | `initial
    | `unset
  ]=?,
  ~flexWrap: [@bs.string] [
    | `nowrap
    | `wrap
    | [@bs.as "wrap-reverse"] `wrapReverse
    | [@bs.as "inherit"] `inherit_
    | `initial
    | `unset
  ]=?,
  ~justifyContent: [@bs.string] [
    | `start
    | `end_
    | [@bs.as "flex-start"] `flexStart
    | [@bs.as "flex-end"] `flexEnd
    | `center
    | `left
    | `right
    | `normal
    | `baseline
    | [@bs.as "first baseline"] `first_baseline
    | [@bs.as "last baseline"] `last_baseline
    | [@bs.as "space-between"] `spaceBetween
    | [@bs.as "space-around"] `spcaeAround
    | [@bs.as "spcae-evenly"] `spaceEvenly
    | `stretch
    | `safe
    | `unsafe
    | [@bs.as "inherit"] `inherit_
    | `initial
    | `unset
  ]=?,
  ~alignItems: [@bs.string] [
    | `normal
    | [@bs.as "flex-start"] `flexStart
    | [@bs.as "flex-end"] `flexEnd
    | `center
    | `start
    | `end_
    | [@bs.as "self-start"] `selfStart
    | [@bs.as "flex-end"] `flexEnd
    | `baseline
    | [@bs.as "first baseline"] `first_baseline
    | [@bs.as "lastBaseline"] `last_baseline
    | `stretch
    | `safe
    | `unsafe
    | [@bs.as "inherit"] `inherit_
    | `initial
    | `unset
  ]=?,
  ~order: string=?,
  ~flex: string=?,
  ~flexGrow: string=?,
  ~flexShrink: string=?,
  ~alignSelf: [@bs.string] [
    | `auto
    | `normal
    | [@bs.as "self-start"] `selfStart
    | [@bs.as "self-end"] `selfEnd
    | [@bs.as "flex-start"] `flexStart
    | [@bs.as "flex-end"] `flexEnd
    | `center
    | `baseline
    | [@bs.as "first baseline"] `first_baseline
    | [@bs.as "last baseline"] `last_baseline
    | `stretch
    | `safe
    | `unsafe
    | [@bs.as "inherit"] `inherit_
    | `initial
    | `unset
  ]=?,
  // palette
  ~color: string=?,
  ~bgColor: string=?,
  // position
  ~position: [@bs.string] [
    | `static
    | `relative
    | `absolute
    | `fixed
    | `sticky
    | [@bs.as "inherit"] `inherit_
    | `initial
    | `unset
  ]=?,
  ~zIndex: string=?,
  ~top: string=?,
  ~right: string=?,
  ~bottom: string=?,
  ~left: string=?,
  // shadows
  ~boxShadow: string=?,
  // sizing
  ~width: string=?,
  ~maxWidth: string=?,
  ~minWidth: string=?,
  ~height: string=?,
  ~maxHeight: string=?,
  ~minHeight: string=?,
  // spacing
  ~m: string=?,
  ~margin: string=?,
  ~mt: string=?,
  ~marginTop: string=?,
  ~mr: string=?,
  ~marginRight: string=?,
  ~mb: string=?,
  ~marginBottom: string=?,
  ~ml: string=?,
  ~marginLeft: string=?,
  ~mx: string=?,
  ~marginX: string=?,
  ~my: string=?,
  ~marginY: string=?,
  ~p: string=?,
  ~padding: string=?,
  ~pt: string=?,
  ~paddingTop: string=?,
  ~pr: string=?,
  ~paddingRight: string=?,
  ~pb: string=?,
  ~paddingBottom: string=?,
  ~pl: string=?,
  ~paddingLeft: string=?,
  ~px: string=?,
  ~paddingX: string=?,
  ~py: string=?,
  ~paddingY: string=?,
  // typography
  ~fontFamily: string=?,
  ~fontSize: string=?,
  ~fontStyle: string=?,
  ~fontWeight: string=?,
  ~letterSpacing: string=?,
  ~lineHeight: string=?,
  ~textAlign: [@bs.string] [
    | `left
    | `right
    | `center
    | `justify
    | [@bs.as "inherit"] `inherit_
    | `initial
    | `unset
  ]=?,
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
  // ~height: string=?, // in html5 this can only be a number, but in html4 it can ba a percentage as well 
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
  // ~width: string=?,
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
  // svg
  ~accentHeight: string=?,
  ~accumulate: string=?,
  ~additive: string=?,
  ~alignmentBaseline: string=?,
  ~allowReorder: string=?,
  ~alphabetic: string=?,
  ~amplitude: string=?,
  ~arabicForm: string=?,
  ~ascent: string=?,
  ~attributeName: string=?,
  ~attributeType: string=?,
  ~autoReverse: string=?,
  ~azimuth: string=?,
  ~baseFrequency: string=?,
  ~baseProfile: string=?,
  ~baselineShift: string=?,
  ~bbox: string=?,
  ~_begin: string=?,
  ~bias: string=?,
  ~by: string=?,
  ~calcMode: string=?,
  ~capHeight: string=?,
  ~clip: string=?,
  ~clipPath: string=?,
  ~clipPathUnits: string=?,
  ~clipRule: string=?,
  ~colorInterpolation: string=?,
  ~colorInterpolationFilters: string=?,
  ~colorProfile: string=?,
  ~colorRendering: string=?,
  ~contentScriptType: string=?,
  ~contentStyleType: string=?,
  ~cursor: string=?,
  ~cx: string=?,
  ~cy: string=?,
  ~d: string=?,
  ~decelerate: string=?,
  ~descent: string=?,
  ~diffuseConstant: string=?,
  ~direction: string=?,
  ~display: string=?,
  ~divisor: string=?,
  ~dominantBaseline: string=?,
  ~dur: string=?,
  ~dx: string=?,
  ~dy: string=?,
  ~edgeMode: string=?,
  ~elevation: string=?,
  ~enableBackground: string=?,
  ~_end: string=?,
  ~exponent: string=?,
  ~externalResourcesRequired: string=?,
  ~fill: string=?,
  ~fillOpacity: string=?,
  ~fillRule: string=?,
  ~filter: string=?,
  ~filterRes: string=?,
  ~filterUnits: string=?,
  ~floodColor: string=?,
  ~floodOpacity: string=?,
  ~focusable: string=?,
  ~fontFamily: string=?,
  ~fontSize: string=?,
  ~fontSizeAdjust: string=?,
  ~fontStretch: string=?,
  ~fontStyle: string=?,
  ~fontVariant: string=?,
  ~fontWeight: string=?,
  ~fomat: string=?,
  ~from: string=?,
  ~fx: string=?,
  ~fy: string=?,
  ~g1: string=?,
  ~g2: string=?,
  ~glyphName: string=?,
  ~glyphOrientationHorizontal: string=?,
  ~glyphOrientationVertical: string=?,
  ~glyphRef: string=?,
  ~gradientTransform: string=?,
  ~gradientUnits: string=?,
  ~hanging: string=?,
  ~horizAdvX: string=?,
  ~horizOriginX: string=?,
  ~ideographic: string=?,
  ~imageRendering: string=?,
  ~_in: string=?,
  ~in2: string=?,
  ~intercept: string=?,
  ~k: string=?,
  ~k1: string=?,
  ~k2: string=?,
  ~k3: string=?,
  ~k4: string=?,
  ~kernelMatrix: string=?,
  ~kernelUnitLength: string=?,
  ~kerning: string=?,
  ~keyPoints: string=?,
  ~keySplines: string=?,
  ~keyTimes: string=?,
  ~lengthAdjust: string=?,
  ~letterSpacing: string=?,
  ~lightingColor: string=?,
  ~limitingConeAngle: string=?,
  ~local: string=?,
  ~markerEnd: string=?,
  ~markerHeight: string=?,
  ~markerMid: string=?,
  ~markerStart: string=?,
  ~markerUnits: string=?,
  ~markerWidth: string=?,
  ~mask: string=?,
  ~maskContentUnits: string=?,
  ~maskUnits: string=?,
  ~mathematical: string=?,
  ~mode: string=?,
  ~numOctaves: string=?,
  ~offset: string=?,
  ~opacity: string=?,
  ~operator: string=?,
  ~order: string=?,
  ~orient: string=?,
  ~orientation: string=?,
  ~origin: string=?,
  ~overflow: string=?,
  ~overflowX: string=?,
  ~overflowY: string=?,
  ~overlinePosition: string=?,
  ~overlineThickness: string=?,
  ~paintOrder: string=?,
  ~panose1: string=?,
  ~pathLength: string=?,
  ~patternContentUnits: string=?,
  ~patternTransform: string=?,
  ~patternUnits: string=?,
  ~pointerEvents: string=?,
  ~points: string=?,
  ~pointsAtX: string=?,
  ~pointsAtY: string=?,
  ~pointsAtZ: string=?,
  ~preserveAlpha: string=?,
  ~preserveAspectRatio: string=?,
  ~primitiveUnits: string=?,
  ~r: string=?,
  ~radius: string=?,
  ~refX: string=?,
  ~refY: string=?,
  ~renderingIntent: string=?,
  ~repeatCount: string=?,
  ~repeatDur: string=?,
  ~requiredExtensions: string=?,
  ~requiredFeatures: string=?,
  ~restart: string=?,
  ~result: string=?,
  ~rotate: string=?,
  ~rx: string=?,
  ~ry: string=?,
  ~scale: string=?,
  ~seed: string=?,
  ~shapeRendering: string=?,
  ~slope: string=?,
  ~spacing: string=?,
  ~specularConstant: string=?,
  ~specularExponent: string=?,
  ~speed: string=?,
  ~spreadMethod: string=?,
  ~startOffset: string=?,
  ~stdDeviation: string=?,
  ~stemh: string=?,
  ~stemv: string=?,
  ~stitchTiles: string=?,
  ~stopColor: string=?,
  ~stopOpacity: string=?,
  ~strikethroughPosition: string=?,
  ~strikethroughThickness: string=?,
  ~string: string=?,
  ~stroke: string=?,
  ~strokeDasharray: string=?,
  ~strokeDashoffset: string=?,
  ~strokeLinecap: string=?,
  ~strokeLinejoin: string=?,
  ~strokeMiterlimit: string=?,
  ~strokeOpacity: string=?,
  ~strokeWidth: string=?,
  ~surfaceScale: string=?,
  ~systemLanguage: string=?,
  ~tableValues: string=?,
  ~targetX: string=?,
  ~targetY: string=?,
  ~textAnchor: string=?,
  ~textDecoration: string=?,
  ~textLength: string=?,
  ~textRendering: string=?,
  ~_to: string=?,
  ~transform: string=?,
  ~u1: string=?,
  ~u2: string=?,
  ~underlinePosition: string=?,
  ~underlineThickness: string=?,
  ~unicode: string=?,
  ~unicodeBidi: string=?,
  ~unicodeRange: string=?,
  ~unitsPerEm: string=?,
  ~vAlphabetic: string=?,
  ~vHanging: string=?,
  ~vIdeographic: string=?,
  ~vMathematical: string=?,
  ~values: string=?,
  ~vectorEffect: string=?,
  ~version: string=?,
  ~vertAdvX: string=?,
  ~vertAdvY: string=?,
  ~vertOriginX: string=?,
  ~vertOriginY: string=?,
  ~viewBox: string=?,
  ~viewTarget: string=?,
  ~visibility: string=?,
  ~widths: string=?,
  ~wordSpacing: string=?,
  ~writingMode: string=?,
  ~x: string=?,
  ~x1: string=?,
  ~x2: string=?,
  ~xChannelSelector: string=?,
  ~xHeight: string=?,
  ~xlinkActuate: string=?,
  ~xlinkArcrole: string=?,
  ~xlinkHref: string=?,
  ~xlinkRole: string=?,
  ~xlinkShow: string=?,
  ~xlinkTitle: string=?,
  ~xlinkType: string=?,
  ~xmlns: string=?,
  ~xmlnsXlink: string=?,
  ~xmlBase: string=?,
  ~xmlLang: string=?,
  ~xmlSpace: string=?,
  ~y: string=?,
  ~y1: string=?,
  ~y2: string=?,
  ~yChannelSelector: string=?,
  ~z: string=?,
  ~zoomAndPan: string=?,
  // RDFa
  ~about: string=?,
  ~datatype: string=?,
  ~inlist: string=?,
  ~prefix: string=?,
  ~property: string=?,
  ~resource: string=?,
  ~typeof: string=?,
  ~vocab: string=?,
  // react-specific
  ~dangerouslySetInnerHTML: {. "__html": string}=?,
  ~suppressContentEditableWarning: bool=?,
  unit
) => props = "";

[@bs.module "@material-ui/core/Box"]
external make: React.component(props) = "default";