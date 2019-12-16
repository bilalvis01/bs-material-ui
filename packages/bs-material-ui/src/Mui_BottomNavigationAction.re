type props;
type classes;

[@bs.obj]
external classes: (
  ~root: string=?,
  ~selected: string=?,
  ~iconOnly: string=?,
  ~wrapper: string=?,
  ~label: string=?,
  unit
) => classes = "";

external objToProps: Js.t({..}) => props = "%identity";

[@bs.obj]
external makeProps: (
  ~classes: classes=?,
  ~icon: React.element=?,
  ~label: React.element=?,
  ~showLabel: bool=?,
  ~value: 'value=?,
  /* ButtonBase props */
  ~action: ReactDOMRe.domRef=?,
  ~centerRipple: bool=?,
  ~classes: classes=?,
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
  ~disabled: bool=?,
  ~disableRipple: bool=?,
  ~disableTouchRipple: bool=?,
  ~focusRipple: bool=?,
  ~focusVisibleClassName: string=?,
  ~onFocusVisible: ReactEvent.Form.t => unit=?,
  /*
  ~_TouchRippleProps: Mui_TouchRipple.props=?,
  */
  ~_type: [@bs.string] [ | `submit | `reset | `button ]=?,
  unit
) => props = "";

[@bs.module "@material-ui/core/BottomNavigationAction"]
external make: React.component(props) = "default";