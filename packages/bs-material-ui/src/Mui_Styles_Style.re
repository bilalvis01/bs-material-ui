type value;
type t = Js.Dict.t(value);

external nestedStyle: t => value = "%identity";
external valueOfString: string => value = "%identity";

let make: list((string, value)) => t = 
  properties => Js.Dict.fromList(properties);
let nest: (string, list((string, value))) => (string, value) =
  (styleName, entries) => (styleName, nestedStyle(make(entries)));
let merge: list(t) => t = styles => 
  Belt.List.toArray(styles) 
    ->Belt.Array.map(style => Js.Dict.entries(style))
    ->Belt.Array.concatMany
    ->Js.Dict.fromArray;
let nestMerge: (string, list(t)) => (string, value) =
  (styleName, styles) => (styleName, nestedStyle(merge(styles)));

/**
 * 
 * Unit Helper
 * 
 */
// Relative length units
let ch = value => Belt.Int.toString(value) ++ "ch";
let em = value => Belt.Float.toString(value) ++ "em";
let ex = value => Belt.Int.toString(value) ++ "ex";
let rem = value => Belt.Float.toString(value) ++ "rem";
let vh = value => Belt.Int.toString(value) ++ "vh";
let vw = value => Belt.Int.toString(value) ++ "vw";
let vmin = value => Belt.Int.toString(value) ++ "vmin";
let vmax = value => Belt.Int.toString(value) ++ "vmax";
// Absolute length units
let px = value => Belt.Int.toString(value) ++ "px";
let cm = value => Belt.Int.toString(value) ++ "cm";
let mm = value => Belt.Int.toString(value) ++ "mm";
let inch = value => Belt.Int.toString(value) ++ "in";
let pc = value => Belt.Int.toString(value) ++ "pc";
let pt = value => Belt.Int.toString(value) ++ "pt";
// Length percentage
let percent = value => Belt.Int.toString(value) ++ "%";

/**
 * 
 * PseudoClass helper
 * 
 */
let active = properties => nest("&:active", properties);
let activeMerge = styles => nestMerge("&:active", styles);
let checked = properties => nest("&:checked", properties);
let checkedMerge = styles => nestMerge("&:checked", styles);
let default = properties => nest("&:default", properties);
let defaultMerge = styles => nestMerge("&:default", styles);
let defined = properties => nest("&:defined", properties);
let definedMerge = styles => nestMerge("&:defined", styles);
let disabled = properties => nest("&:disabled", properties);
let disabledMerge = styles => nestMerge("&:disabled", styles);
let empty = properties => nest("&:empty", properties);
let emptyMerge = styles => nestMerge("&:empty", styles);
let enabled = properties => nest("&:enabled", properties);
let enabledMerge = styles => nestMerge("&:enabled", styles);
let first = properties => nest("&:first", properties);
let firstMerge = styles => nestMerge("&:first", styles);
let firstChild = properties => nest("&:first-child", properties);
let firstChildMerge = styles => nestMerge("&:first-child", styles);
let firstOfType = properties => nest("&:first-of-type", properties);
let firstOfTypeMerge = styles => nestMerge("&:first-of-type", styles);
let focus = properties => nest("&:focus", properties);
let focusMerge = styles => nestMerge("&:focus", styles);
let focusWithin = properties => nest("&:focus-within", properties);
let focusWithinMerge = styles => nestMerge("&:focus-within", styles);
let host = properties => nest("&:host", properties);
let hostMerge = styles => nestMerge("&:host", styles);
let hostFunction = (selector, properties) => nest("&:host(" ++ selector ++ ")", properties);
let hostFunctionMerge = (selector, styles) => nestMerge("&:host(" ++ selector ++ ")", styles);
let hover = properties => nest("&:hover", properties);
let hoverMerge = styles => nestMerge("&:hover", styles);
let indeterminate = properties => nest("&:indeterminate", properties);
let indeterminateMerge = styles => nestMerge("&:indeterminate", styles);
let inRange = properties => nest("&:in-range", properties);
let inRangeMerge = styles => nestMerge("&:in-range", styles);
let invalid = properties => nest("&:invalid", properties);
let invalidMerge = styles => nestMerge("&:invalid", styles);
let lang = (lang, properties) => nest("&:lang(" ++ lang ++ ")", properties);
let langMerge = (lang, styles) => nestMerge("&:lang(" ++ lang ++ ")", styles);
let lastChild = properties => nest("&:last-child", properties);
let lastChildMerge = styles => nestMerge("&:last-child", styles);
let lastOfType = properties => nest("&:last-of-type", properties);
let lastOfTypeMerge = styles => nestMerge("&:last-of-type", styles);
let leftPseudoClass = properties => nest("&:left", properties);
let leftMerge = styles => nestMerge("&:left", styles);
let link = properties => nest("&:link", properties);
let linkMerge = styles => nestMerge("&:link", styles);
let not = (selector, properties) => nest("&:not(" ++ selector ++ ")", properties);
let notMerge = (selector, styles) => nestMerge("&:not(" ++ selector ++ ")", styles);
let nthChild = (selector, properties) => nest("&:nth-child(" ++ selector ++ ")", properties);
let nthChildMerge = (selector, styles) => nestMerge("&:nth-child(" ++ selector ++ ")", styles);
let nthLastChild = (selector, properties) => nest("&:nth-last-child(" ++ selector ++ ")", properties);
let nthLastChildMerge = (selector, styles) => nestMerge("&:nth-last-child(" ++ selector ++ ")", styles);
let nthLastOfType = (selector, properties) => nest("&:nth-last-of-type(" ++ selector ++ ")", properties);
let nthLastOfTypeMerge = (selector, styles) => nestMerge("&:nth-last-of-type(" ++ selector ++ ")", styles);
let nthOfType = (selector, properties) => nest("&:nth-of-type(" ++ selector ++ ")", properties);
let nthOfTypeMerge = (selector, styles) => nestMerge("&:nth-of-type(" ++ selector ++ ")", styles);
let onlyChild = properties => nest("&:only-child", properties);
let onlyChildMerge = styles => nestMerge("&:only-child", styles);
let onlyOfType = properties => nest("&:only-of-type", properties);
let onlyOfTypeMerge = styles => nestMerge("&:only-of-type", styles);
let optional = properties => nest("&:optional", properties);
let optionalMerge = styles => nestMerge("&:optional", styles);
let outOfRange = properties => nest("&:out-of-range", properties);
let outOfRangeMerge = styles => nestMerge("&:out-of-range", styles);
let readOnly = properties => nest("&:read-only", properties);
let readOnlyMerge = styles => nestMerge("&:read-only", styles);
let readWrite = properties => nest("&:read-write", properties);
let readWriteMerge = styles => nestMerge("&:read-write", styles);
let required = properties => nest("&:required", properties);
let requiredMerge = styles => nestMerge("&:required", styles);
let rightPseudoClass = properties => nest("&:right", properties);
let rightMerge = styles => nestMerge("&:right", styles);
let root = properties => nest("&:root", properties);
let rootMerge = styles => nestMerge("&:root", styles);
let scope = properties => nest("&:scope", properties);
let scopeMerge = styles => nestMerge("&:scope", styles);
let target = properties => nest("&:target", properties);
let targetMerge = styles => nestMerge("&:target", styles);
let valid = properties => nest("&:valid", properties);
let validMerge = styles => nestMerge("&:valid", styles);
let visited = properties => nest("&:visited", properties);
let visitedMerge = styles => nestMerge("&:visited", styles);

/**
 * 
 * Pseudo element helper
 * 
 */
let after = properties => nest("&::after", properties);
let afterMerge = styles => nestMerge("&::after", styles);
let before = properties => nest("&::before", properties);
let beforeMerge = styles => nestMerge("&::before", styles);
let cue = properties => nest("&::cue", properties);
let cueMerge = styles => nestMerge("&::cue", styles);
let cueRegion = properties => nest("&::cue-region", properties);
let cueRegionMerge = styles => nestMerge("&::cue-region", styles);
let firstLetter = properties => nest("&::first-letter", properties);
let firstLetterMerge = styles => nestMerge("&::first-letter", styles);
let firstLine = properties => nest("&::first-line", properties);
let firstLineMerge = styles => nestMerge("&::first-line", styles);
let selection = properties => nest("&::selection", properties);
let selectionMerge = styles => nestMerge("&::selection", styles);
let slotted = (selector, properties) => nest("&::slotted(" ++ selector ++ ")", properties);
let slottedMerge = (selector, styles) => nestMerge("&::slotted(" ++ selector ++ ")", styles);

/**
 * 
 * Properties helper
 * 
 */
[@bs.deriving jsConverter]
type display = [
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
];

[@bs.deriving jsConverter]
type overflow = [
  | `visible
  | `hidden
  | `clip
  | `scroll
  | `auto
  | [@bs.as "inherit"] `inherit_
  | `initial
  | `unset
];
[@bs.deriving jsConverter]
type textOverflow = [
  | `clip
  | `ellipsis
  | [@bs.as "inherit"] `inherit_
  | `initial
  | `unset
];
[@bs.deriving jsConverter]
type visibility = [
  | `visible
  | `hidden
  | `collapse
  | [@bs.as "inherit"] `inherit_
  | `initial
  | `unset
];
[@bs.deriving jsConverter]
type whiteSpace = [
  | `normal
  | `nowrap
  | `pre
  | [@bs.as "pre-wrap"] `preWrap
  | [@bs.as "pre-line"] `preLine
  | [@bs.as "break-spaces"] `breakSpaces
  | [@bs.as "inherit"] `inherit_
  | `initial
  | `unset
];
[@bs.deriving jsConverter]
type flexDirection = [
  | `row
  | [@bs.as "row-reverse"] `rowReverse
  | `column
  | [@bs.as "column-reverse"] `columnReverse
  | [@bs.as "inherit"] `inherit_
  | `initial
  | `unset
];
[@bs.deriving jsConverter]
type flexWrap = [
  | `nowrap
  | `wrap
  | [@bs.as "wrap-reverse"] `wrapReverse
  | [@bs.as "inherit"] `inherit_
  | `initial
  | `unset
];
[@bs.deriving jsConverter]
type justifyContent = [
  | `start
  | [@bs.as "end"] `end_
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
  | [@bs.as "space-around"] `spaceAround
  | [@bs.as "space-evenly"] `spaceEvenly
  | `stretch
  | `safe
  | `unsafe
  | [@bs.as "inherit"] `inherit_
  | `initial
  | `unset
];
[@bs.deriving jsConverter]
type position = [
  | `static
  | `relative
  | `absolute
  | `fixed
  | `sticky
  | [@bs.as "inherit"] `inherit_
  | `initial
  | `unset
];
[@bs.deriving jsConverter]
type textAlign = [
  | `left
  | `right
  | `center
  | `justify
  | [@bs.as "inherit"] `inherit_
  | `initial
  | `unset
];

[@bs.deriving jsConverter]
type alignContent = [
  | `start
  | [@bs.as "end"] `end_
  | [@bs.as "flex-start"] `flexStart
  | [@bs.as "flex-end"] `flexEnd
  | `center
  | `normal
  | `baseline
  | [@bs.as "first baseline"] `first_baseline
  | [@bs.as "last baseline"] `last_baseline
  | [@bs.as "space-between"] `spaceBetween
  | [@bs.as "space-around"] `spaceAround
  | [@bs.as "space-evenly"] `spaceEvenly
  | `stretch
  | `safe
  | `unsafe
  | [@bs.as "inherit"] `inherit_
  | `initial
  | `unset
];
[@bs.deriving jsConverter]
type alignItems = [
  | `normal
  | [@bs.as "flex-start"] `flexStart
  | [@bs.as "flex-end"] `flexEnd
  | `center
  | `start
  | [@bs.as "end"] `end_
  | [@bs.as "self-start"] `selfStart
  | [@bs.as "flex-end"] `flexEnd
  | `baseline
  | [@bs.as "first baseline"] `first_baseline
  | [@bs.as "last baseline"] `last_baseline
  | `stretch
  | `safe
  | `unsafe
  | [@bs.as "inherit"] `inherit_
  | `initial
  | `unset
];
[@bs.deriving jsConverter]
type alignSelf = [
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
];
[@bs.deriving jsConverter]
type all = [
  | `initial
  | [@bs.as "inherit"] `inherit_
  | `unset
  | `revert
];
[@bs.deriving jsConverter]
type animationDirection = [
  | `normal
  | `reverse
  | `alternate
  | [@bs.as "alternate-reverse"] `alternateReverse
  | [@bs.as "inherit"] `inherit_
  | `initial
  | `unset
];
[@bs.deriving jsConverter]
type animationFillMode = [
  | `none
  | `forwards
  | `backwards
  | `both
];
type animationPlayStateValues = [
  | `running
  | `paused
  | `inherit_
  | `initial
  | `unset
];
type animationPlayStateMulti = [ 
  | `Multi2(animationPlayStateValues, animationPlayStateValues) 
  | `Multi3(animationPlayStateValues, animationPlayStateValues, animationPlayStateValues)
  | `Multi4(animationPlayStateValues, animationPlayStateValues, animationPlayStateValues, animationPlayStateValues)
  | `Multi5(animationPlayStateValues, animationPlayStateValues, animationPlayStateValues, animationPlayStateValues, animationPlayStateValues)
  | `Multi6(animationPlayStateValues, animationPlayStateValues, animationPlayStateValues, animationPlayStateValues, animationPlayStateValues, animationPlayStateValues)
];
type animationPlayState = [ 
  | animationPlayStateValues 
  | animationPlayStateMulti 
];
[@bs.deriving jsConverter]
type backgroundAttachment = [
  | `fixed
  | `local
  | `scroll
  | [@bs.as "inherit"] `inherit_
  | `initial
  | `unset
];
[@bs.deriving jsConverter]
type backgroundClip = [
  | [@bs.as "border-box"] `borderBox
  | [@bs.as "padding-box"] `paddingBox
  | [@bs.as "content-box"] `contentBox
  | [@bs.as "inherit"] `inherit_
  | `initial
  | `unset
];
[@bs.deriving jsConverter]
type backgroundOrigin = [
  | [@bs.as "border-box"] `borderBox
  | [@bs.as "padding-box"] `paddingBox
  | [@bs.as "content-box"] `contentBox
  | [@bs.as "inherit"] `inherit_
  | `initial
  | `unset
];
[@bs.deriving jsConverter]
type backgroundRepeat = [
  | [@bs.as "repeat-x"] `repeatX
  | [@bs.as "repeat-y"] `repeatY
  | `repeat
  | `space
  | `round
  | [@bs.as "no-repeat"] `noRepeat
  | [@bs.as "inherit"] `inherit_
  | `initial
  | `unset
];
[@bs.deriving jsConverter]
type borderStyle = [
  | `none
  | `hidden
  | `dotted
  | `dashed
  | `double
  | `groove
  | `ridge
  | `inset
  | `outset
  | [@bs.as "inherit"] `inherit_
  | `initial
  | `unset
];
[@bs.deriving jsConverter]
type borderCollapse = [
  | `collapse
  | `separate
  | [@bs.as "inherit"] `inherit_
  | `initial
  | `unset
];
[@bs.deriving jsConverter]
type boxDecorationBreak = [
  | `slice
  | `clone
  | [@bs.as "inherit"] `inherit_
  | `initial
  | `unset
];
[@bs.deriving jsConverter]
type break = [
  | `auto
  | `avoid
  | `always // This is experimental API that should not be used in production code
  | `all // This is experimental API that should not be used in production code
  | [@bs.as "avoid-page"] `avoidPage
  | `page
  | `left
  | `right
  | `recto // This is experimental API that should not be used in production code
  | `verso // This is experimental API that should not be used in production code
  | [@bs.as "avoid-column"] `avoidColumn
  | `column
  | [@bs.as "avoid-region"] `avoidRegion // This is experimental API that should not be used in production code
  | `region // This is experimental API that should not be used in production code
  | [@bs.as "inherit"] `inherit_
  | `initial
  | `unset
];
[@bs.deriving jsConverter]
type breakInside = [
  | `auto
  | `avoid
  | [@bs.as "avoid-page"] `avoidPage
  | [@bs.as "avoid-column"] `avoidColumn
  | [@bs.as "avoid-region"] `avoidRegion // This is experimental API that should not be used in production code
  | [@bs.as "inherit"] `inherit_
  | `initial
  | `unset
];

/**
 * 
 * additiveSymbols
 * 
 * !!! This is experimental API that should not be used in production code !!!
 * 
 */
let additiveSymbols = value => ("additiveSymbols", valueOfString(value));
/**
 * 
 * additiveSymbols
 * 
 */
let alignContent = value => ("alignContent", alignContentToJs(value)->valueOfString);
let alignItems = value => ("alignItems", alignItemsToJs(value)->valueOfString);
let alignSelf = value => ("alignSelf", alignSelfToJs(value)->valueOfString);
let all = value => ("all", allToJs(value)->valueOfString);
let animation = value => ("animation", valueOfString(value));
let animationDelay = value => ("animationDelay", valueOfString(value));
let animationDirection = value => ("animationDirection", animationDirectionToJs(value)->valueOfString);
let animationDuration = value => ("animationDuration", valueOfString(value));
let animationFillMode = value => ("animationFillMode", animationFillModeToJs(value)->valueOfString);
let animationIterationCount = value => ("animationIterationCount", valueOfString(value));
let animationName = value => ("animationName", valueOfString(value));
let animationPlayState = (value: animationPlayState) => {
  let valuesToJs = value => 
    switch value {
    | `running => "running"
    | `paused => "paused"
    | `inherit_ => "inherit"
    | `initial => "initial"
    | `unset => "unset"
    };
  let value = switch value {
  | `running => "running"
  | `paused => "paused"
  | `inherit_ => "inherit"
  | `initial => "initial"
  | `unset => "unset"
  | `Multi2(value, value2) => {
    let value = valuesToJs(value);
    let value2 = valuesToJs(value2);
    Js.String2.concatMany(", ", [|value, value2|])
  }
  | `Multi3(value, value2, value3) => {
    let value = valuesToJs(value);
    let value2 = valuesToJs(value2);
    let value3 = valuesToJs(value3);
    Js.String2.concatMany(", ", [|value, value2, value3|])
  }
  | `Multi4(value, value2, value3, value4) => {
    let value = valuesToJs(value);
    let value2 = valuesToJs(value2);
    let value3 = valuesToJs(value3);
    let value4 = valuesToJs(value4);
    Js.String2.concatMany(", ", [|value, value2, value3, value4|])
  }
  | `Multi5(value, value2, value3, value4, value5) => {
    let value = valuesToJs(value);
    let value2 = valuesToJs(value2);
    let value3 = valuesToJs(value3);
    let value4 = valuesToJs(value4);
    let value5 = valuesToJs(value5);
    Js.String2.concatMany(", ", [|value, value2, value3, value4, value5|])
  }
  | `Multi6(value, value2, value3, value4, value5, value6) => {
    let value = valuesToJs(value);
    let value2 = valuesToJs(value2);
    let value3 = valuesToJs(value3);
    let value4 = valuesToJs(value4);
    let value5 = valuesToJs(value5);
    let value6 = valuesToJs(value6);
    Js.String2.concatMany(", ", [|value, value2, value3, value4, value5, value6|])
  }
  };

  ("animationPlayState", valueOfString(value))
};
let animationTimingFunction = value => ("animationTimingFunction", valueOfString(value));
let backfaceVisibility = value => ("backfaceVisibility", valueOfString(value));
let background = value => ("background", valueOfString(value));
let backgroundAttachment = value => ("backgroundAttachment", backgroundAttachmentToJs(value)->valueOfString);
let backgroundBlendMode = value => ("backgroundBlendMode", valueOfString(value));
let backgroundClip = value => ("backgroundClip", backgroundClipToJs(value)->valueOfString);
let backgroundColor = value => ("backgroundColor", valueOfString(value));
let backgroundImage = value => ("backgroundImage", valueOfString(value));
let backgroundOrigin = value => ("backgroundOrigin", backgroundOriginToJs(value)->valueOfString);
let backgroundPosition = value => ("backgroundPosition", valueOfString(value));
let backgroundRepeat = value => ("backgroundRepeat", backgroundRepeatToJs(value)->valueOfString);
let backgroundSize = value => ("backgroundSize", valueOfString(value));
let blockSize = value => ("blockSize", valueOfString(value));
let border = value => ("border", valueOfString(value));
/**
 * 
 * borderBlock
 * 
 * !!! This is experimental API that should not be used in production code !!!
 * 
 */
let borderBlock = value => ("borderBlock", valueOfString(value));
let borderBlockColor = value => ("borderBlockColor", valueOfString(value));
let borderBlockEnd = value => ("borderBlockEnd", valueOfString(value));
let borderBlockEndColor = value => ("borderBlockEndColor", valueOfString(value));
let borderBlockEndStyle = value => ("borderBlockEndStyle", borderStyleToJs(value)->valueOfString);
let borderBlockEndWidth = value => ("borderBlockEndWidth", valueOfString(value));
let borderBlockStart = value => ("borderBlockStart", valueOfString(value));
let borderBlockStartColor = value => ("borderBlockStartColor", valueOfString(value));
let borderBlockStartStyle = value => ("borderBlockStartStyle", borderStyleToJs(value)->valueOfString);
let borderBlockStartWidth = value => ("borderBlockStartWidth", valueOfString(value));
let borderBlockStyle = value => ("borderBlockStyle", borderStyleToJs(value)->valueOfString);
let borderBlockWidth = value => ("borderBlockWidth", valueOfString(value));
/**
 * 
 * borderBlock
 * 
 */
let borderBottom = value => ("borderBottom", valueOfString(value));
let borderBottomColor = value => ("borderBottomColor", valueOfString(value));
let borderBottomLeftRadius = value => ("borderBottomLeftRadius", valueOfString(value));
let borderBottomRightRadius = value => ("borderBottomRightRadius", valueOfString(value));
let borderBottomStyle = value => ("borderBottomStyle", borderStyleToJs(value)->valueOfString);
let borderBottomWidth = value => ("borderBottomWidth", valueOfString(value));
let borderCollapse = value => ("borderCollapse", borderCollapseToJs(value)->valueOfString);
let borderColor = value => ("borderColor", valueOfString(value));
/**
 * 
 * borderEnd
 * 
 * !!! This is experimental API that should not be used in production code !!!
 * 
 */
let borderEndEndRadius = value => ("borderEndEndRadius", valueOfString(value));
let borderEndStartRadius = value => ("borderEndStartRadius", valueOfString(value));
/**
 * 
 * borderEnd
 * 
 */
let borderImage = value => ("borderImage", valueOfString(value));
let borderImageOutset = value => ("borderImageOutset", valueOfString(value));
let borderImageRepeat = value => ("borderImageRepeat", valueOfString(value));
let borderImageSlice = value => ("borderImageSlice", valueOfString(value));
let borderImageSource = value => ("borderImageSource", valueOfString(value));
let borderImageWidth = value => ("borderImageWidth", valueOfString(value));
/**
 * 
 * borderInline
 * 
 * !!! This is experimental API that should not be used in production code !!!
 * 
 */
let borderInline = value => ("borderInline", valueOfString(value));
let borderInlineColor = value => ("borderInlineColor", valueOfString(value));
let borderInlineEnd = value => ("borderInlineEnd", valueOfString(value));
let borderInlineEndColor = value => ("borderInlineEndColor", valueOfString(value));
let borderInlineEndStyle = value => ("borderInlineEndStyle", borderStyleToJs(value)->valueOfString);
let borderInlineEndWidth = value => ("borderInlineEndWidth", valueOfString(value));
let borderInlineStart = value => ("borderInlineStart", valueOfString(value));
let borderInlineStartColor = value => ("borderInlineStartColor", valueOfString(value));
let borderInlineStartStyle = value => ("borderInlineStartStyle", borderStyleToJs(value)->valueOfString);
let borderInlineStartWidth = value => ("borderInlineStartWidth", valueOfString(value));
let borderInlineStyle = value => ("borderInlineStyle", borderStyleToJs(value)->valueOfString);
let borderInlineWidth = value => ("borderInlineWidth", valueOfString(value));
/**
 * 
 * borderInline
 * 
 */
let borderLeft = value => ("borderLeft", valueOfString(value));
let borderLeftColor = value => ("borderLeftColor", valueOfString(value));
let borderLeftStyle = value => ("borderLeftStyle", borderStyleToJs(value)->valueOfString);
let borderLeftWidth = value => ("borderLeftWidth", valueOfString(value));
let borderRadius = value => ("borderRadius", valueOfString(value));
let borderRight = value => ("borderRight", valueOfString(value));
let borderRightColor = value => ("borderRightColor", valueOfString(value));
let borderRightStyle = value => ("borderRightStyle", borderStyleToJs(value)->valueOfString);
let borderRightWidth = value => ("borderRightWidth", valueOfString(value));
let borderSpacing = value => ("borderSpacing", valueOfString(value));
let borderStartEndRadius = value => ("borderStartEndRadius", valueOfString(value));
let borderStartStartRadius = value => ("borderStartStartRadius", valueOfString(value));
let borderStyle = value => ("borderStyle", borderStyleToJs(value)->valueOfString);
let borderTop = value => ("borderTop", valueOfString(value));
let borderTopColor = value => ("borderTopColor", valueOfString(value));
let borderTopLeftRadius = value => ("borderTopLeftRadius", valueOfString(value));
let borderTopRightRadius = value => ("borderTopRightRadius", valueOfString(value));
let borderTopStyle = value => ("borderTopStyle", borderStyleToJs(value)->valueOfString);
let borderTopWidth = value => ("borderTopWidth", valueOfString(value));
let borderWidth = value => ("borderWidth", valueOfString(value));
let bottom = value => ("bottom", valueOfString(value));
let boxDecorationBreak = value => ("boxDecorationBreak", boxDecorationBreakToJs(value)->valueOfString);
let boxShadow = value => ("boxShadow", valueOfString(value));
let boxSizing = value => ("boxSizing", valueOfString(value));
let breakAfter = value => ("breakAfter", breakToJs(value)->valueOfString);
let breakBefore = value => ("breakBefore", breakToJs(value)->valueOfString);
let breakInside = value => ("breakInside", breakInsideToJs(value)->valueOfString);
let captionSide = value => ("captionSide", valueOfString(value));
let caretColor = value => ("caretColor", valueOfString(value));
let clear = value => ("clear", valueOfString(value));
let clip = value => ("clip", valueOfString(value));
let clipPath = value => ("clipPath", valueOfString(value));
let color = value => ("color", valueOfString(value));
let colorAdjust = value => ("colorAdjust", valueOfString(value));
let columnCount = value => ("columnCount", valueOfString(value));
let columnFill = value => ("columnFill", valueOfString(value));
let columnGap = value => ("columnGap", valueOfString(value));
let columnRule = value => ("columnRule", valueOfString(value));
let columnRuleColor = value => ("columnRuleColor", valueOfString(value));
let columnRuleStyle = value => ("columnRuleStyle", valueOfString(value));
let columnRuleWidth = value => ("columnRuleWidth", valueOfString(value));
let columnSpan = value => ("columnSpan", valueOfString(value));
let columnWidth = value => ("columnWidth", valueOfString(value));
let columns = value => ("columns", valueOfString(value));
let content = value => ("content", valueOfString(value));
let counterIncrement = value => ("counterIncrement", valueOfString(value));
let counterReset = value => ("counterReset", valueOfString(value));
let counterSet = value => ("counterSet", valueOfString(value));
let cursor = value => ("cursor", valueOfString(value));
let direction = value => ("direction", valueOfString(value));
let display = value => ("display", displayToJs(value)->valueOfString);
let emptyCells = value => ("emptyCells", valueOfString(value));
let fallback = value => ("fallback", valueOfString(value));
let filter = value => ("filter", valueOfString(value));
let flex = value => ("flex", valueOfString(value));
let flexBasis = value => ("flexBasis", valueOfString(value));
let flexDirection = value => ("flexDirection", flexDirectionToJs(value)->valueOfString);
let flexFlow = value => ("flexFlow", valueOfString(value));
let flexGrow = value => ("flexGrow", valueOfString(value));
let flexShrink = value => ("flexShrink", valueOfString(value));
let flexWrap = value => ("flexWrap", flexWrapToJs(value)->valueOfString);
let float = value => ("float", valueOfString(value));
let font = value => ("font", valueOfString(value));
let fontFamily = value => ("fontFamily", valueOfString(value));
let fontFeatureSettings = value => ("fontFeatureSettings", valueOfString(value));
let fontKerning = value => ("fontKerning", valueOfString(value));
let fontLanguageOverride = value => ("fontLanguageOverride", valueOfString(value));
let fontOpticalSizing = value => ("fontOpticalSizing", valueOfString(value));
let fontSize = value => ("fontSize", valueOfString(value));
let fontSizeAdjust = value => ("fontSizeAdjust", valueOfString(value));
let fontStretch = value => ("fontStretch", valueOfString(value));
let fontStyle = value => ("fontStyle", valueOfString(value));
let fontSynthesis = value => ("fontSynthesis", valueOfString(value));
let fontVariant = value => ("fontVariant", valueOfString(value));
let fontVariantAlternates = value => ("fontVariantAlternates", valueOfString(value));
let fontVariantCaps = value => ("fontVariantCaps", valueOfString(value));
let fontVariantEastAsian = value => ("fontVariantEastAsian", valueOfString(value));
let fontVariantLigatures = value => ("fontVariantLigatures", valueOfString(value));
let fontVariantNumeric = value => ("fontVariantNumeric", valueOfString(value));
let fontVariantPosition = value => ("fontVariantPosition", valueOfString(value));
let fontVariantSettings = value => ("fontVariantSettings", valueOfString(value));
let fontWeight = value => ("fontWeight", valueOfString(value));
let gap = value => ("gap", valueOfString(value));
let grid = value => ("grid", valueOfString(value));
let gridArea = value => ("gridArea", valueOfString(value));
let gridAutoColumns = value => ("gridAutoColumns", valueOfString(value));
let gridAutoFlow = value => ("gridAutoFlow", valueOfString(value));
let gridAutoRows = value => ("gridAutoRows", valueOfString(value));
let gridColumn = value => ("gridColumn", valueOfString(value));
let gridColumnEnd = value => ("gridColumnEnd", valueOfString(value));
let gridColumnStart = value => ("gridColumnStart", valueOfString(value));
let gridRow = value => ("gridRow", valueOfString(value));
let gridRowEnd = value => ("gridRowEnd", valueOfString(value));
let gridRowStart = value => ("gridRowStart", valueOfString(value));
let gridTemplate = value => ("gridTemplate", valueOfString(value));
let gridTemplateAreas = value => ("gridTemplateAreas", valueOfString(value));
let gridTemplateColumns = value => ("gridTemplateColumns", valueOfString(value));
let gridTemplateRows = value => ("gridTemplateRows", valueOfString(value));
let hangingPunctuation = value => ("hangingPunctuation", valueOfString(value));
let height = value => ("height", valueOfString(value));
let hyphens = value => ("hyphens", valueOfString(value));
let imageOrientation = value => ("imageOrientation", valueOfString(value));
let imageRendering = value => ("imageRendering", valueOfString(value));
let inlineSize = value => ("inlineSize", valueOfString(value));
let inset = value => ("inset", valueOfString(value));
let insetBlock = value => ("insetBlock", valueOfString(value));
let insetBlockEnd = value => ("insetBlockEnd", valueOfString(value));
let insetBlockStart = value => ("insetBlockStart", valueOfString(value));
let insetInline = value => ("insetInline", valueOfString(value));
let insetInlineEnd = value => ("insetInlineEnd", valueOfString(value));
let insetInlineStart = value => ("insetInlineStart", valueOfString(value));
let isolation = value => ("isolation", valueOfString(value));
let justifyContent = value => ("justifyContent", justifyContentToJs(value)->valueOfString);
let justifyItems = value => ("justifyItems", valueOfString(value));
let justifySelf = value => ("justifySelf", valueOfString(value));
let left = value => ("left", valueOfString(value));
let letterSpacing = value => ("letterSpacing", valueOfString(value));
let lineBreak = value => ("lineBreak", valueOfString(value));
let lineHeight = value => ("lineHeight", valueOfString(value));
let listStyle = value => ("listStyle", valueOfString(value));
let listStyleImage = value => ("listStyleImage", valueOfString(value));
let listStylePosition = value => ("listStylePosition", valueOfString(value));
let listStyleType = value => ("listStyleType", valueOfString(value));
let margin = value => ("margin", valueOfString(value));
let marginBlock = value => ("marginBlock", valueOfString(value));
let marginBlockEnd = value => ("marginBlockEnd", valueOfString(value));
let marginBlockStart = value => ("marginBlockStart", valueOfString(value));
let marginBottom = value => ("marginBottom", valueOfString(value));
let marginInline = value => ("marginInline", valueOfString(value));
let marginInlineEnd = value => ("marginInlineEnd", valueOfString(value));
let marginInlineStart = value => ("marginInlineStart", valueOfString(value));
let marginLeft = value => ("marginLeft", valueOfString(value));
let marginRight = value => ("marginRight", valueOfString(value));
let marginTop = value => ("marginTop", valueOfString(value));
let mask = value => ("mask", valueOfString(value));
let maskClip = value => ("maskClip", valueOfString(value));
let maskComposite = value => ("maskComposite", valueOfString(value));
let maskImage = value => ("maskImage", valueOfString(value));
let maskMode = value => ("maskMode", valueOfString(value));
let maskOrigin = value => ("maskOrigin", valueOfString(value));
let maskPosition = value => ("maskPosition", valueOfString(value));
let maskRepeat = value => ("maskRepeat", valueOfString(value));
let maskSize = value => ("maskSize", valueOfString(value));
let maskType = value => ("maskType", valueOfString(value));
let maxHeight = value => ("maxHeight", valueOfString(value));
let maxWidth = value => ("maxWidth", valueOfString(value));
let minBlockSize = value => ("minBlockSize", valueOfString(value));
let minHeight = value => ("minHeight", valueOfString(value));
let minInlineSize = value => ("minInlineSize", valueOfString(value));
let minWidth = value => ("minWidth", valueOfString(value));
let minZoom = value => ("minZoom", valueOfString(value));
let mixBlendMode = value => ("mixBlendMode", valueOfString(value));
let negative = value => ("negative", valueOfString(value));
let objectFit = value => ("objectFit", valueOfString(value));
let objectPosition = value => ("objectPosition", valueOfString(value));
let opacity = value => ("opacity", valueOfString(value));
let order = value => ("order", valueOfString(value));
let orientation = value => ("orientation", valueOfString(value));
let orphans = value => ("orphans", valueOfString(value));
let outline = value => ("outline", valueOfString(value));
let outlineColor = value => ("outlineColor", valueOfString(value));
let outlineOffset = value => ("outlineOffset", valueOfString(value));
let outlineStyle = value => ("outlineStyle", valueOfString(value));
let outlineWidth = value => ("outlineWidth", valueOfString(value));
let overflow = value => ("overflow", overflowToJs(value)->valueOfString);
let overflowWrap = value => ("overflowWrap", valueOfString(value));
let overflowX = value => ("overflowX", valueOfString(value));
let overflowY = value => ("overflowY", valueOfString(value));
let pad = value => ("pad", valueOfString(value));
let padding = value => ("padding", valueOfString(value));
let paddingBlock = value => ("paddingBlock", valueOfString(value));
let paddingBlockEnd = value => ("paddingBlockEnd", valueOfString(value));
let paddingBlockStart = value => ("paddingBlockStart", valueOfString(value));
let paddingBottom = value => ("paddingBottom", valueOfString(value));
let paddingInline = value => ("paddingInline", valueOfString(value));
let paddingInlineEnd = value => ("paddingInlineEnd", valueOfString(value));
let paddingInlineStart = value => ("paddingInlineStart", valueOfString(value));
let paddingLeft = value => ("paddingLeft", valueOfString(value));
let paddingRight = value => ("paddingRight", valueOfString(value));
let paddingTop = value => ("paddingTop", valueOfString(value));
let pageBreakAfter = value => ("pageBreakAfter", valueOfString(value));
let pageBreakBefore = value => ("pageBreakBefore", valueOfString(value));
let pageBreakInside = value => ("pageBreakInside", valueOfString(value));
let perspective = value => ("perspective", valueOfString(value));
let perspectiveOrigin = value => ("perspectiveOrigin", valueOfString(value));
let placeContent = value => ("placeContent", valueOfString(value));
let placeItems = value => ("placeItems", valueOfString(value));
let placeSelf = value => ("placeSelf", valueOfString(value));
let pointerEvents = value => ("pointerEvents", valueOfString(value));
let position = value => ("position", positionToJs(value)->valueOfString);
let prefix = value => ("prefix", valueOfString(value));
let quotes = value => ("quotes", valueOfString(value));
let range = value => ("range", valueOfString(value));
let resize = value => ("resize", valueOfString(value));
let right = value => ("right", valueOfString(value));
let rotate = value => ("rotate", valueOfString(value));
let rowGap = value => ("rowGap", valueOfString(value));
let scale = value => ("scale", valueOfString(value));
let scrollBehavior = value => ("scrollBehavior", valueOfString(value));
let scrollMargin = value => ("scrollMargin", valueOfString(value));
let scrollMarginBlock = value => ("scrollMarginBlock", valueOfString(value));
let scrollMarginBlockEnd = value => ("scrollMarginBlockEnd", valueOfString(value));
let scrollMarginBlockStart = value => ("scrollMarginBlockStart", valueOfString(value));
let scrollMarginBottom = value => ("scrollMarginBottom", valueOfString(value));
let scrollMarginInline = value => ("scrollMarginInline", valueOfString(value));
let scrollMarginInlineEnd = value => ("scrollMarginInlineEnd", valueOfString(value));
let scrollMarginInlineStart = value => ("scrollMarginInlineStart", valueOfString(value));
let scrollMarginLeft = value => ("scrollMarginLeft", valueOfString(value));
let scrollMarginRight = value => ("scrollMarginRight", valueOfString(value));
let scrollMarginTop = value => ("scrollMarginTop", valueOfString(value));
let scrollPadding = value => ("scrollPadding", valueOfString(value));
let scrollPaddingBlock = value => ("scrollPaddingBlock", valueOfString(value));
let scrollPaddingBlockEnd = value => ("scrollPaddingBlockEnd", valueOfString(value));
let scrollPaddingBlockStart = value => ("scrollPaddingBlockStart", valueOfString(value));
let scrollPaddingBottom = value => ("scrollPaddingBottom", valueOfString(value));
let scrollPaddingInline = value => ("scrollPaddingInline", valueOfString(value));
let scrollPaddingInlineEnd = value => ("scrollPaddingInlineEnd", valueOfString(value));
let scrollPaddingInlineStart = value => ("scrollPaddingInlineStart", valueOfString(value));
let scrollPaddingLeft = value => ("scrollPaddingLeft", valueOfString(value));
let scrollPaddingRight = value => ("scrollPaddingRight", valueOfString(value));
let scrollPaddingTop = value => ("scrollPaddingTop", valueOfString(value));
let scrollSnapAlign = value => ("scrollSnapAlign", valueOfString(value));
let scrollSnapStop = value => ("scrollSnapStop", valueOfString(value));
let scrollSnapType = value => ("scrollSnapType", valueOfString(value));
let scrollbarColor = value => ("scrollbarColor", valueOfString(value));
let scrollbarWidth = value => ("scrollbarWidth", valueOfString(value));
let shapeImageThreshold = value => ("shapeImageThreshold", valueOfString(value));
let shapeMargin = value => ("shapeMargin", valueOfString(value));
let shapeOutside = value => ("shapeOutside", valueOfString(value));
let speakAs = value => ("speakAs", valueOfString(value));
let src = value => ("src", valueOfString(value));
let suffix = value => ("suffix", valueOfString(value));
let symbols = value => ("symbols", valueOfString(value));
let system = value => ("system", valueOfString(value));
let tabSize = value => ("tabSize", valueOfString(value));
let tableLayout = value => ("tableLayout", valueOfString(value));
let textAlign = value => ("textAlign", textAlignToJs(value)->valueOfString);
let textAlignLast = value => ("textAlignLast", valueOfString(value));
let textCombineUpright = value => ("textCombineUpright", valueOfString(value));
let textDecoration = value => ("textDecoration", valueOfString(value));
let textDecorationColor = value => ("textDecorationColor", valueOfString(value));
let textDecorationLine = value => ("textDecorationLine", valueOfString(value));
let textDecorationStyle = value => ("textDecorationStyle", valueOfString(value));
let textDecorationThickness = value => ("textDecorationThickness", valueOfString(value));
let textEmphasis = value => ("textEmphasis", valueOfString(value));
let textEmphasisColor = value => ("textEmphasisColor", valueOfString(value));
let textEmphasisPosition = value => ("textEmphasisPosition", valueOfString(value));
let textEmphasisStyle = value => ("textEmphasisStyle", valueOfString(value));
let textIndent = value => ("textIndent", valueOfString(value));
let textJustify = value => ("textJustify", valueOfString(value));
let textOrientation = value => ("textOrientation", valueOfString(value));
let textOverflow = value => ("textOverflow", textOverflowToJs(value)->valueOfString);
let textRendering = value => ("textRendering", valueOfString(value));
let textShadow = value => ("textShadow", valueOfString(value));
let textTransform = value => ("textTransform", valueOfString(value));
let textUnderlineOffset = value => ("textUnderlineOffset", valueOfString(value));
let textUnderlinePosition = value => ("textUnderlinePosition", valueOfString(value));
let top = value => ("top", valueOfString(value));
let touchAction = value => ("touchAction", valueOfString(value));
let transform = value => ("transform", valueOfString(value));
let transformBox = value => ("transformBox", valueOfString(value));
let transformOrigin = value => ("transformOrigin", valueOfString(value));
let transformStyle = value => ("transformStyle", valueOfString(value));
let transition = value => ("transition", valueOfString(value));
let transitionDelay = value => ("transitionDelay", valueOfString(value));
let transitionDuration = value => ("transitionDuration", valueOfString(value));
let transitionProperty = value => ("transitionProperty", valueOfString(value));
let transitionTimingFunction = value => ("transitionTimingFunction", valueOfString(value)); 
let translate = value => ("translate", valueOfString(value));
let unicodeBidi = value => ("unicodeBidi", valueOfString(value));
let unicodeRange = value => ("unicodeRange", valueOfString(value));
let userZoom = value => ("userZoom", valueOfString(value));
let verticalAlign = value => ("verticalAlign", valueOfString(value));
let visibility = value => ("visibility", visibilityToJs(value)->valueOfString);
let whiteSpace = value => ("whiteSpace", whiteSpaceToJs(value)->valueOfString);
let widows = value => ("widows", valueOfString(value));
let width = value => ("width", valueOfString(value));
let willChange = value => ("willChange", valueOfString(value));
let wordBreak = value => ("wordBreak", valueOfString(value));
let wordSpacing = value => ("wordSpacing", valueOfString(value));
let wordWrap = value => ("wordWrap", valueOfString(value));
let writingMode = value => ("writingMode", valueOfString(value));
let zIndex = value => ("zIndex", valueOfString(value));
let zoom = value => ("zoom", valueOfString(value));