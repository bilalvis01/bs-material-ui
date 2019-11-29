type value;
type t = Js.Dict.t(value);

external nestedRule: t => value = "%identity";
external stringValue: string => value = "%identity";

let make: array((string, value)) => t = 
  properties => Js.Dict.fromArray(properties);
let nest: (string, array((string, value))) => (string, value) =
  (ruleName, entries) => (ruleName, nestedRule(make(entries)));
let merge: array(t) => t = rules => 
  Belt.Array.map(rules, rule => Js.Dict.entries(rule))
    ->Belt.Array.concatMany
    ->Js.Dict.fromArray;
let nestMerge: (string, array(t)) => (string, value) =
  (ruleName, rules) => (ruleName, nestedRule(merge(rules)));

module PseudoClass = {
  let active: array((string, value)) => (string, value) = 
    properties => nest(":active", properties);
  let activeMerge: array(t) => (string, value) =
    rules => nestMerge(":active", rules);
  let checked: array((string, value)) => (string, value) = 
    properties => nest(":checked", properties);
  let checkedMerge: array(t) => (string, value) =
    rules => nestMerge(":checked", rules);
  let default: array((string, value)) => (string, value) = 
    properties => nest(":default", properties);
  let defaultMerge: array(t) => (string, value) =
    rules => nestMerge(":default", rules);
  let defined: array((string, value)) => (string, value) = 
    properties => nest(":defined", properties);
  let definedMerge: array(t) => (string, value) =
    rules => nestMerge(":defined", rules);
  let disabled: array((string, value)) => (string, value) = 
    properties => nest(":disabled", properties);
  let disabledMerge: array(t) => (string, value) =
    rules => nestMerge(":disabled", rules);
  let empty: array((string, value)) => (string, value) = 
    properties => nest(":empty", properties);
  let emptyMerge: array(t) => (string, value) =
    rules => nestMerge(":empty", rules);
  let enabled: array((string, value)) => (string, value) = 
    properties => nest(":enabled", properties);
  let enabledMerge: array(t) => (string, value) =
    rules => nestMerge(":enabled", rules);
  let first: array((string, value)) => (string, value) = 
    properties => nest(":first", properties);
  let firstMerge: array(t) => (string, value) =
    rules => nestMerge(":first", rules);
  let firstChild: array((string, value)) => (string, value) = 
    properties => nest(":first-child", properties);
  let firstChildMerge: array(t) => (string, value) =
    rules => nestMerge(":first-child", rules);
  let firstOfType: array((string, value)) => (string, value) = 
    properties => nest(":first-of-type", properties);
  let firstOfTypeMerge: array(t) => (string, value) =
    rules => nestMerge(":first-of-tye", rules);
  let focus: array((string, value)) => (string, value) = 
    properties => nest(":focus", properties);
  let focusMerge: array(t) => (string, value) =
    rules => nestMerge(":focus", rules);
  let focusWithin: array((string, value)) => (string, value) = 
    properties => nest(":focus-within", properties);
  let focusWithinMerge: array(t) => (string, value) =
    rules => nestMerge(":focus-within", rules);
  let host: array((string, value)) => (string, value) = 
    properties => nest(":host", properties);
  let hostMerge: array(t) => (string, value) =
    rules => nestMerge(":host", rules);
  let hostFunction: (string, array((string, value))) => (string, value) = 
    (selector, properties) => nest(":host(" ++ selector ++ ")", properties);
  let hostFunctionMerge: (string, array(t)) => (string, value) =
    (selector, rules) => nestMerge(":host(" ++ selector ++ ")", rules);
  let hover: array((string, value)) => (string, value) = 
    properties => nest(":hover", properties);
  let hoverMerge: array(t) => (string, value) =
    rules => nestMerge(":hover", rules);
  let indeterminate: array((string, value)) => (string, value) = 
    properties => nest(":indeterminate", properties);
  let indeterminateMerge: array(t) => (string, value) =
    rules => nestMerge(":indeterminate", rules);
  let inRange: array((string, value)) => (string, value) = 
    properties => nest(":in-range", properties);
  let inRangeMerge: array(t) => (string, value) =
    rules => nestMerge(":in-range", rules);
  let invalid: array((string, value)) => (string, value) = 
    properties => nest(":invalid", properties);
  let invalidMerge: array(t) => (string, value) =
    rules => nestMerge(":invalid", rules);
  let lang: (string, array((string, value))) => (string, value) = 
    (lang, properties) => nest(":lang(" ++ lang ++ ")", properties);
  let langMerge: (string, array(t)) => (string, value) =
    (lang, rules) => nestMerge(":lang(" ++ lang ++ ")", rules);
  let lastChild: array((string, value)) => (string, value) = 
    properties => nest(":last-child", properties);
  let lastChildMerge: array(t) => (string, value) =
    rules => nestMerge(":last-child", rules);
  let lastOfType: array((string, value)) => (string, value) = 
    properties => nest(":last-of-type", properties);
  let lastOfTypeMerge: array(t) => (string, value) =
    rules => nestMerge(":last-of-type", rules);
  let left: array((string, value)) => (string, value) = 
    properties => nest(":left", properties);
  let leftMerge: array(t) => (string, value) =
    rules => nestMerge(":left", rules);
  let link: array((string, value)) => (string, value) = 
    properties => nest(":link", properties);
  let linkMerge: array(t) => (string, value) =
    rules => nestMerge(":link", rules);
  let not: (string, array((string, value))) => (string, value) = 
    (selector, properties) => nest(":not(" ++ selector ++ ")", properties);
  let notMerge: (string, array(t)) => (string, value) =
    (selector, rules) => nestMerge(":not(" ++ selector ++ ")", rules);
  let nthChild: (string, array((string, value))) => (string, value) = 
    (selector, properties) => nest(":nth-child(" ++ selector ++ ")", properties);
  let nthChildMerge: (string, array(t)) => (string, value) =
    (selector, rules) => nestMerge(":nth-child(" ++ selector ++ ")", rules);
  let nthLastChild: (string, array((string, value))) => (string, value) = 
    (selector, properties) => nest(":nth-last-child(" ++ selector ++ ")", properties);
  let nthLastChildMerge: (string, array(t)) => (string, value) =
    (selector, rules) => nestMerge(":nth-last-child(" ++ selector ++ ")", rules);
  let nthLastOfType: (string, array((string, value))) => (string, value) = 
    (selector, properties) => nest(":nth-last-of-type(" ++ selector ++ ")", properties);
  let nthLastOfTypeMerge: (string, array(t)) => (string, value) =
    (selector, rules) => nestMerge(":nth-last-of-type(" ++ selector ++ ")", rules);
  let nthOfType: (string, array((string, value))) => (string, value) = 
    (selector, properties) => nest(":nth-of-type(" ++ selector ++ ")", properties);
  let nthOfTypeMerge: (string, array(t)) => (string, value) =
    (selector, rules) => nestMerge(":nth-of-type(" ++ selector ++ ")", rules);
  let onlyChild: array((string, value)) => (string, value) = 
    properties => nest(":only-child", properties);
  let onlyChildMerge: array(t) => (string, value) =
    rules => nestMerge(":only-child", rules);
  let onlyOfType: array((string, value)) => (string, value) = 
    properties => nest(":only-of-type", properties);
  let onlyOfTypeMerge: array(t) => (string, value) =
    rules => nestMerge(":only-of-type", rules);
  let optional: array((string, value)) => (string, value) = 
    properties => nest(":optional", properties);
  let optionalMerge: array(t) => (string, value) =
    rules => nestMerge(":optional", rules);
  let outOfRange: array((string, value)) => (string, value) = 
    properties => nest(":out-of-range", properties);
  let outOfRangeMerge: array(t) => (string, value) =
    rules => nestMerge(":out-of-range", rules);
  let readOnly: array((string, value)) => (string, value) = 
    properties => nest(":read-only", properties);
  let readOnlyMerge: array(t) => (string, value) =
    rules => nestMerge(":read-only", rules);
  let readWrite: array((string, value)) => (string, value) = 
    properties => nest(":read-write", properties);
  let readWriteMerge: array(t) => (string, value) =
    rules => nestMerge(":read-write", rules);
  let required: array((string, value)) => (string, value) = 
    properties => nest(":required", properties);
  let requiredMerge: array(t) => (string, value) =
    rules => nestMerge(":required", rules);
  let right: array((string, value)) => (string, value) = 
    properties => nest(":right", properties);
  let rightMerge: array(t) => (string, value) =
    rules => nestMerge(":right", rules);
  let root: array((string, value)) => (string, value) = 
    properties => nest(":root", properties);
  let rootMerge: array(t) => (string, value) =
    rules => nestMerge(":root", rules);
  let scope: array((string, value)) => (string, value) = 
    properties => nest(":scope", properties);
  let scopeMerge: array(t) => (string, value) =
    rules => nestMerge(":scope", rules);
  let target: array((string, value)) => (string, value) = 
    properties => nest(":target", properties);
  let targetMerge: array(t) => (string, value) =
    rules => nestMerge(":target", rules);
  let valid: array((string, value)) => (string, value) = 
    properties => nest(":valid", properties);
  let validMerge: array(t) => (string, value) =
    rules => nestMerge(":valid", rules);
  let visited: array((string, value)) => (string, value) = 
    properties => nest(":visited", properties);
  let visitedMerge: array(t) => (string, value) =
    rules => nestMerge(":visited", rules);
};

module PseudoElement = {
  let after: array((string, value)) => (string, value) = 
    properties => nest("::after", properties);
  let afterMerge: array(t) => (string, value) =
    rules => nestMerge("::after", rules);
  let before: array((string, value)) => (string, value) = 
    properties => nest("::before", properties);
  let beforeMerge: array(t) => (string, value) =
    rules => nestMerge("::before", rules);
  let cue: array((string, value)) => (string, value) = 
    properties => nest("::cue", properties);
  let cueMerge: array(t) => (string, value) =
    rules => nestMerge("::cue", rules);
  let cueRegion: array((string, value)) => (string, value) = 
    properties => nest("::cue-region", properties);
  let cueRegionMerge: array(t) => (string, value) =
    rules => nestMerge("::cue-region", rules);
  let firstLetter: array((string, value)) => (string, value) = 
    properties => nest("::first-letter", properties);
  let firstLetterMerge: array(t) => (string, value) =
    rules => nestMerge("::first-letter", rules);
  let firstLine: array((string, value)) => (string, value) = 
    properties => nest("::first-line", properties);
  let firstLineMerge: array(t) => (string, value) =
    rules => nestMerge("::first-line", rules);
  let selection: array((string, value)) => (string, value) = 
    properties => nest("::selection", properties);
  let selectionMerge: array(t) => (string, value) =
    rules => nestMerge("::selection", rules);
  let slotted: (string, array((string, value))) => (string, value) = 
    (selector, properties) => nest("::slotted(" ++ selector ++ ")", properties);
  let slottedMerge: (string, array(t)) => (string, value) =
    (selector, rules) => nestMerge("::slotted(" ++ selector ++ ")", rules);
};

/* properties */
let alignContent = value => ("alignContent", stringValue(value));
let alignItems = value => ("alignItems", stringValue(value));
let alignSelf = value => ("alignSelf", stringValue(value));
let animation = value => ("animation", stringValue(value));
let animationDelay = value => ("animationDelay", stringValue(value));
let animationDirection = value => ("animationDirection", stringValue(value));
let animationDuration = value => ("animationDuration", stringValue(value));
let animationFillMode = value => ("animationFillMode", stringValue(value));
let animationIterationCount = value => ("animationIterationCount", stringValue(value));
let animationName = value => ("animationName", stringValue(value));
let animationPlayState = value => ("animationPlayState", stringValue(value));
let animationTimingFunction = value => ("animationTimingFunction", stringValue(value));
let backfaceVisibility = value => ("backfaceVisibility", stringValue(value));
let background = value => ("background", stringValue(value));
let backgroundAttachment = value => ("backgroundAttachment", stringValue(value));
let backgroundBlendMode = value => ("backgroundBlendMode", stringValue(value));
let backgroundClip = value => ("backgroundClip", stringValue(value));
let backgroundColor = value => ("backgroundColor", stringValue(value));
let backgroundImage = value => ("backgroundImage", stringValue(value));
let backgroundOrigin = value => ("backgroundOrigin", stringValue(value));
let backgroundPosition = value => ("backgroundPosition", stringValue(value));
let backgroundRepeat = value => ("backgroundRepeat", stringValue(value));
let backgroundSize = value => ("backgroundSize", stringValue(value));
let blockSize = value => ("blockSize", stringValue(value));
let border = value => ("border", stringValue(value));
let borderBlock = value => ("borderBlock", stringValue(value));
let borderBlockColor = value => ("borderBlockColor", stringValue(value));
let borderBlockEnd = value => ("borderBlockEnd", stringValue(value));
let borderBlockEndColor = value => ("borderBlockEndColor", stringValue(value));
let borderBlockEndStyle = value => ("borderBlockEndStyle", stringValue(value));
let borderBlockEndWidth = value => ("borderBlockEndWidth", stringValue(value));
let borderBlockStart = value => ("borderBlockStart", stringValue(value));
let borderBlockStartColor = value => ("borderBlockStartColor", stringValue(value));
let borderBlockStartStyle = value => ("borderBlockStartStyle", stringValue(value));
let borderBlockStartWidth = value => ("borderBlockStartWidth", stringValue(value));
let borderBlockStyle = value => ("borderBlockStyle", stringValue(value));
let borderBlockWidth = value => ("borderBlockWidth", stringValue(value));
let borderBottom = value => ("borderBottom", stringValue(value));
let borderBottomColor = value => ("borderBottomColor", stringValue(value));
let borderBottomLeftRadius = value => ("borderBottomLeftRadius", stringValue(value));
let borderBottomRightRadius = value => ("borderBottomRightRadius", stringValue(value));
let borderBottomStyle = value => ("borderBottomStyle", stringValue(value));
let borderBottomWidth = value => ("borderBottomWidth", stringValue(value));
let borderCollapse = value => ("borderCollapse", stringValue(value));
let borderColor = value => ("borderColor", stringValue(value));
let borderEndEndRadius = value => ("borderEndEndRadius", stringValue(value));
let borderEndStartRadius = value => ("borderEndStartRadius", stringValue(value));
let borderImage = value => ("borderImage", stringValue(value));
let borderImageOutset = value => ("borderImageOutset", stringValue(value));
let borderImageRepeat = value => ("borderImageRepeat", stringValue(value));
let borderImageSlice = value => ("borderImageSlice", stringValue(value));
let borderImageSource = value => ("borderImageSource", stringValue(value));
let borderImageWidth = value => ("borderImageWidth", stringValue(value));
let borderInline = value => ("borderInline", stringValue(value));
let borderInlineColor = value => ("borderInlineColor", stringValue(value));
let borderInlineEnd = value => ("borderInlineEnd", stringValue(value));
let borderInlineEndColor = value => ("borderInlineEndColor", stringValue(value));
let borderInlineEndStyle = value => ("borderInlineEndStyle", stringValue(value));
let borderInlineEndWidth = value => ("borderInlineEndWidth", stringValue(value));
let borderInlineStart = value => ("borderInlineStart", stringValue(value));
let borderInlineStartColor = value => ("borderInlineStartColor", stringValue(value));
let borderInlineStartStyle = value => ("borderInlineStartStyle", stringValue(value));
let borderInlineStartWidth = value => ("borderInlineStartWidth", stringValue(value));
let borderInlineStyle = value => ("borderInlineStyle", stringValue(value));
let borderInlineWidth = value => ("borderInlineWidth", stringValue(value));
let borderLeft = value => ("borderLeft", stringValue(value));
let borderLeftColor = value => ("borderLeftColor", stringValue(value));
let borderLeftStyle = value => ("borderLeftStyle", stringValue(value));
let borderLeftWidth = value => ("borderLeftWidth", stringValue(value));
let borderRadius = value => ("borderRadius", stringValue(value));
let borderRight = value => ("borderRight", stringValue(value));
let borderRightColor = value => ("borderRightColor", stringValue(value));
let borderRightStyle = value => ("borderRightStyle", stringValue(value));
let borderRightWidth = value => ("borderRightWidth", stringValue(value));
let borderSpacing = value => ("borderSpacing", stringValue(value));
let borderStartEndRadius = value => ("borderStartEndRadius", stringValue(value));
let borderStartStartRadius = value => ("borderStartStartRadius", stringValue(value));
let borderStyle = value => ("borderStyle", stringValue(value));
let borderTop = value => ("borderTop", stringValue(value));
let borderTopColor = value => ("borderTopColor", stringValue(value));
let borderTopLeftRadius = value => ("borderTopLeftRadius", stringValue(value));
let borderTopRightRadius = value => ("borderTopRightRadius", stringValue(value));
let borderTopStyle = value => ("borderTopStyle", stringValue(value));
let borderTopWidth = value => ("borderTopWidth", stringValue(value));
let borderWidth = value => ("borderWidth", stringValue(value));
let bottom = value => ("bottom", stringValue(value));
let boxDecorationBreak = value => ("boxDecorationBreak", stringValue(value));
let boxShadow = value => ("boxShadow", stringValue(value));
let boxSizing = value => ("boxSizing", stringValue(value));
let breakAfter = value => ("breakAfter", stringValue(value));
let breakBefore = value => ("breakBefore", stringValue(value));
let breakInside = value => ("breakInside", stringValue(value));
let captionSide = value => ("captionSide", stringValue(value));
let caretColor = value => ("caretColor", stringValue(value));
let clear = value => ("clear", stringValue(value));
let clip = value => ("clip", stringValue(value));
let clipPath = value => ("clipPath", stringValue(value));
let color = value => ("color", stringValue(value));
let colorAdjust = value => ("colorAdjust", stringValue(value));
let columnCount = value => ("columnCount", stringValue(value));
let columnFill = value => ("columnFill", stringValue(value));
let columnGap = value => ("columnGap", stringValue(value));
let columnRule = value => ("columnRule", stringValue(value));
let columnRuleColor = value => ("columnRuleColor", stringValue(value));
let columnRuleStyle = value => ("columnRuleStyle", stringValue(value));
let columnRuleWidth = value => ("columnRuleWidth", stringValue(value));
let columnSpan = value => ("columnSpan", stringValue(value));
let columnWidth = value => ("columnWidth", stringValue(value));
let columns = value => ("columns", stringValue(value));
let content = value => ("content", stringValue(value));
let counterIncrement = value => ("counterIncrement", stringValue(value));
let counterReset = value => ("counterReset", stringValue(value));
let counterSet = value => ("counterSet", stringValue(value));
let cursor = value => ("cursor", stringValue(value));
let direction = value => ("direction", stringValue(value));
let display = value => ("display", stringValue(value));
let emptyCells = value => ("emptyCells", stringValue(value));
let fallback = value => ("fallback", stringValue(value));
let filter = value => ("filter", stringValue(value));
let flex = value => ("flex", stringValue(value));
let flexBasis = value => ("flexBases", stringValue(value));
let flexDirection = value => ("flexDirection", stringValue(value));
let flexFlow = value => ("flexFlow", stringValue(value));
let flexGrow = value => ("flexGrow", stringValue(value));
let flexShrink = value => ("flexShrink", stringValue(value));
let flexWrap = value => ("flexWrap", stringValue(value));
let float = value => ("float", stringValue(value));
let font = value => ("font", stringValue(value));
let fontFamily = value => ("fontFamily", stringValue(value));
let fontFeatureSettings = value => ("fontFeatureSettings", stringValue(value));
let fontKerning = value => ("fontKerning", stringValue(value));
let fontLanguageOverride = value => ("fontLanguageOverride", stringValue(value));
let fontOpticalSizing = value => ("fontOpticalSizing", stringValue(value));
let fontSize = value => ("fontSize", stringValue(value));
let fontSizeAdjust = value => ("fontSizeAdjust", stringValue(value));
let fontStretch = value => ("fontStretch", stringValue(value));
let fontStyle = value => ("fontStyle", stringValue(value));
let fontSynthesis = value => ("fontSynthesis", stringValue(value));
let fontVariant = value => ("fontVariant", stringValue(value));
let fontVariantAlternates = value => ("fontVariantAlternates", stringValue(value));
let fontVariantCaps = value => ("fontVariantCaps", stringValue(value));
let fontVariantEastAsian = value => ("fontVariantEastAsian", stringValue(value));
let fontVariantLigatures = value => ("fontVariantLigatures", stringValue(value));
let fontVariantNumeric = value => ("fontVariantNumeric", stringValue(value));
let fontVariantPosition = value => ("fontVariantPosition", stringValue(value));
let fontVariantSettings = value => ("fontVariantSettings", stringValue(value));
let fontWeight = value => ("fontWeight", stringValue(value));
let gap = value => ("gap", stringValue(value));
let grid = value => ("grid", stringValue(value));
let gridArea = value => ("gridArea", stringValue(value));
let gridAutoColumns = value => ("gridAutoColumns", stringValue(value));
let gridAutoFlow = value => ("gridAutoFlow", stringValue(value));
let gridAutoRows = value => ("gridAutoRows", stringValue(value));
let gridColumn = value => ("gridColumn", stringValue(value));
let gridColumnEnd = value => ("gridColumnEnd", stringValue(value));
let gridColumnStart = value => ("gridColumnStart", stringValue(value));
let gridRow = value => ("gridRow", stringValue(value));
let gridRowEnd = value => ("gridRowEnd", stringValue(value));
let gridRowStart = value => ("gridRowStart", stringValue(value));
let gridTemplate = value => ("gridTemplate", stringValue(value));
let gridTemplateAreas = value => ("gridTemplateAreas", stringValue(value));
let gridTemplateColumns = value => ("gridTemplateColumns", stringValue(value));
let gridTemplateRows = value => ("gridTemplateRows", stringValue(value));
let hangingPunctuation = value => ("hangingPunctuation", stringValue(value));
let height = value => ("height", stringValue(value));
let hyphens = value => ("hyphens", stringValue(value));
let imageOrientation = value => ("imageOrientation", stringValue(value));
let imageRendering = value => ("imageRendering", stringValue(value));
let inlineSize = value => ("inlineSize", stringValue(value));
let inset = value => ("inset", stringValue(value));
let insetBlock = value => ("insetBlock", stringValue(value));
let insetBlockEnd = value => ("insetBlockEnd", stringValue(value));
let insetBlockStart = value => ("insetBlockStart", stringValue(value));
let insetInline = value => ("insetInline", stringValue(value));
let insetInlineEnd = value => ("insetInlineEnd", stringValue(value));
let insetInlineStart = value => ("insetInlineStart", stringValue(value));
let isolation = value => ("isolation", stringValue(value));
let justifyContent = value => ("justifyContent", stringValue(value));
let justifyItems = value => ("justifyItems", stringValue(value));
let justifySelf = value => ("justifySelf", stringValue(value));
let left = value => ("left", stringValue(value));
let letterSpacing = value => ("letterSpacing", stringValue(value));
let lineBreak = value => ("lineBreak", stringValue(value));
let lineHeight = value => ("lineHeight", stringValue(value));
let listStyle = value => ("listStyle", stringValue(value));
let listStyleImage = value => ("listStyleImage", stringValue(value));
let listStylePosition = value => ("listStylePosition", stringValue(value));
let listStyleType = value => ("listStyleType", stringValue(value));
let margin = value => ("margin", stringValue(value));
let marginBlock = value => ("marginBlock", stringValue(value));
let marginBlockEnd = value => ("marginBlockEnd", stringValue(value));
let marginBlockStart = value => ("marginBlockStart", stringValue(value));
let marginBottom = value => ("marginBottom", stringValue(value));
let marginInline = value => ("marginInline", stringValue(value));
let marginInlineEnd = value => ("marginInlineEnd", stringValue(value));
let marginInlineStart = value => ("marginInlineStart", stringValue(value));
let marginLeft = value => ("marginLeft", stringValue(value));
let marginRight = value => ("marginRight", stringValue(value));
let marginTop = value => ("marginTop", stringValue(value));
let mask = value => ("mask", stringValue(value));
let maskClip = value => ("maskClip", stringValue(value));
let maskComposite = value => ("maskComposite", stringValue(value));
let maskImage = value => ("maskImage", stringValue(value));
let maskMode = value => ("maskMode", stringValue(value));
let maskOrigin = value => ("maskOrigin", stringValue(value));
let maskPosition = value => ("maskPosition", stringValue(value));
let maskRepeat = value => ("maskRepeat", stringValue(value));
let maskSize = value => ("maskSize", stringValue(value));
let maskType = value => ("maskType", stringValue(value));
let maxHeight = value => ("maxHeight", stringValue(value));
let maxWidth = value => ("maxWidth", stringValue(value));
let minBlockSize = value => ("minBlockSize", stringValue(value));
let minHeight = value => ("minHeight", stringValue(value));
let minInlineSize = value => ("minInlineSize", stringValue(value));
let minWidth = value => ("minWidth", stringValue(value));
let minZoom = value => ("minZoom", stringValue(value));
let mixBlendMode = value => ("mixBlendMode", stringValue(value));
let negative = value => ("negative", stringValue(value));
let objectFit = value => ("objectFit", stringValue(value));
let objectPosition = value => ("objectPosition", stringValue(value));
let opacity = value => ("opacity", stringValue(value));
let order = value => ("order", stringValue(value));
let orientation = value => ("orientation", stringValue(value));
let orphans = value => ("orphans", stringValue(value));
let outline = value => ("outline", stringValue(value));
let outlineColor = value => ("outlineColor", stringValue(value));
let outlineOffset = value => ("outlineOffset", stringValue(value));
let outlineStyle = value => ("outlineStyle", stringValue(value));
let outlineWidth = value => ("outlineWidth", stringValue(value));
let overflow = value => ("overflow", stringValue(value));
let overflowWrap = value => ("overflowWrap", stringValue(value));
let overflowX = value => ("overflowX", stringValue(value));
let overflowY = value => ("overflowY", stringValue(value));
let pad = value => ("pad", stringValue(value));
let padding = value => ("padding", stringValue(value));
let paddingBlock = value => ("paddingBlock", stringValue(value));
let paddingBlockEnd = value => ("paddingBlockEnd", stringValue(value));
let paddingBlockStart = value => ("paddingBlockStart", stringValue(value));
let paddingBottom = value => ("paddingBottom", stringValue(value));
let paddingInline = value => ("paddingInline", stringValue(value));
let paddingInlineEnd = value => ("paddingInlineEnd", stringValue(value));
let paddingInlineStart = value => ("paddingInlineStart", stringValue(value));
let paddingLeft = value => ("paddingLeft", stringValue(value));
let paddingRight = value => ("paddingRight", stringValue(value));
let paddingTop = value => ("paddingTop", stringValue(value));
let pageBreakAfter = value => ("pageBreakAfter", stringValue(value));
let pageBreakBefore = value => ("pageBreakBefore", stringValue(value));
let pageBreakInside = value => ("pageBreakInside", stringValue(value));
let perspective = value => ("perspective", stringValue(value));
let perspectiveOrigin = value => ("perspectiveOrigin", stringValue(value));
let placeContent = value => ("placeContent", stringValue(value));
let placeItems = value => ("placeItems", stringValue(value));
let placeSelf = value => ("placeSelf", stringValue(value));
let pointerEvents = value => ("pointerEvents", stringValue(value));
let position = value => ("position", stringValue(value));
let prefix = value => ("prefix", stringValue(value));
let quotes = value => ("quotes", stringValue(value));
let range = value => ("range", stringValue(value));
let resize = value => ("resize", stringValue(value));
let right = value => ("right", stringValue(value));
let rotate = value => ("rotate", stringValue(value));
let rowGap = value => ("rowGap", stringValue(value));
let scale = value => ("scale", stringValue(value));
let scrollBehavior = value => ("scrollBehavior", stringValue(value));
let scrollMargin = value => ("scrollMargin", stringValue(value));
let scrollMarginBlock = value => ("scrollMarginBlock", stringValue(value));
let scrollMarginBlockEnd = value => ("scrollMarginBlockEnd", stringValue(value));
let scrollMarginBlockStart = value => ("scrollMarginBlockStart", stringValue(value));
let scrollMarginBottom = value => ("scrollMarginBottom", stringValue(value));
let scrollMarginInline = value => ("scrollMarginInline", stringValue(value));
let scrollMarginInlineEnd = value => ("scrollMarginInlineEnd", stringValue(value));
let scrollMarginInlineStart = value => ("scrollMarginInlineStart", stringValue(value));
let scrollMarginLeft = value => ("scrollMarginLeft", stringValue(value));
let scrollMarginRight = value => ("scrollMarginRight", stringValue(value));
let scrollMarginTop = value => ("scrollMarginTop", stringValue(value));
let scrollPadding = value => ("scrollPadding", stringValue(value));
let scrollPaddingBlock = value => ("scrollPaddingBlock", stringValue(value));
let scrollPaddingBlockEnd = value => ("scrollPaddingBlockEnd", stringValue(value));
let scrollPaddingBlockStart = value => ("scrollPaddingBlockStart", stringValue(value));
let scrollPaddingBottom = value => ("scrollPaddingBottom", stringValue(value));
let scrollPaddingInline = value => ("scrollPaddingInline", stringValue(value));
let scrollPaddingInlineEnd = value => ("scrollPaddingInlineEnd", stringValue(value));
let scrollPaddingInlineStart = value => ("scrollPaddingInlineStart", stringValue(value));
let scrollPaddingLeft = value => ("scrollPaddingLeft", stringValue(value));
let scrollPaddingRight = value => ("scrollPaddingRight", stringValue(value));
let scrollPaddingTop = value => ("scrollPaddingTop", stringValue(value));
let scrollSnapAlign = value => ("scrollSnapAlign", stringValue(value));
let scrollSnapStop = value => ("scrollSnapStop", stringValue(value));
let scrollSnapType = value => ("scrollSnapType", stringValue(value));
let scrollbarColor = value => ("scrollbarColor", stringValue(value));
let scrollbarWidth = value => ("scrollbarWidth", stringValue(value));
let shapeImageThreshold = value => ("shapeImageThreshold", stringValue(value));
let shapeMargin = value => ("shapeMargin", stringValue(value));
let shapeOutside = value => ("shapeOutside", stringValue(value));
let speakAs = value => ("speakAs", stringValue(value));
let src = value => ("src", stringValue(value));
let suffix = value => ("suffix", stringValue(value));
let symbols = value => ("symbols", stringValue(value));
let system = value => ("system", stringValue(value));
let tabSize = value => ("tabSize", stringValue(value));
let tableLayout = value => ("tableLayout", stringValue(value));
let textAlign = value => ("textAlign", stringValue(value));
let textAlignLast = value => ("textAlignLast", stringValue(value));
let textCombineUpright = value => ("textCombineUpright", stringValue(value));
let textDecoration = value => ("textDecoration", stringValue(value));
let textDecorationColor = value => ("textDecorationColor", stringValue(value));
let textDecorationLine = value => ("textDecorationLine", stringValue(value));
let textDecorationStyle = value => ("textDecorationStyle", stringValue(value));
let textDecorationThickness = value => ("textDecorationThickness", stringValue(value));
let textEmphasis = value => ("textEmphasis", stringValue(value));
let textEmphasisColor = value => ("textEmphasisColor", stringValue(value));
let textEmphasisPosition = value => ("textEmphasisPosition", stringValue(value));
let textEmphasisStyle = value => ("textEmphasisStyle", stringValue(value));
let textIndent = value => ("textIndent", stringValue(value));
let textJustify = value => ("textJustify", stringValue(value));
let textOrientation = value => ("textOrientation", stringValue(value));
let textOverflow = value => ("textOverflow", stringValue(value));
let textRendering = value => ("textRendering", stringValue(value));
let textShadow = value => ("textShadow", stringValue(value));
let textTransform = value => ("textTransform", stringValue(value));
let textUnderlineOffset = value => ("textUnderlineOffset", stringValue(value));
let textUnderlinePosition = value => ("textUnderlinePosition", stringValue(value));
let top = value => ("top", stringValue(value));
let touchAction = value => ("touchAction", stringValue(value));
let transform = value => ("transform", stringValue(value));
let transformBox = value => ("transformBox", stringValue(value));
let transformOrigin = value => ("transformOrigin", stringValue(value));
let transformStyle = value => ("transformStyle", stringValue(value));
let transition = value => ("transition", stringValue(value));
let transitionDelay = value => ("transitionDelay", stringValue(value));
let transitionDuration = value => ("transitionDuration", stringValue(value));
let transitionProperty = value => ("transitionProperty", stringValue(value));
let transitionTimingFunction = value => ("transitionTimingFunction", stringValue(value)); 
let translate = value => ("translate", stringValue(value));
let unicodeBidi = value => ("unicodeBidi", stringValue(value));
let unicodeRange = value => ("unicodeRange", stringValue(value));
let userZoom = value => ("userZoom", stringValue(value));
let verticalAlign = value => ("verticalAlign", stringValue(value));
let visibility = value => ("visibility", stringValue(value));
let whiteSpace = value => ("whiteSpace", stringValue(value));
let widows = value => ("widows", stringValue(value));
let width = value => ("width", stringValue(value));
let willChange = value => ("willChange", stringValue(value));
let wordBreak = value => ("wordBreak", stringValue(value));
let wordSpacing = value => ("wordSpacing", stringValue(value));
let wordWrap = value => ("wordWrap", stringValue(value));
let writingMode = value => ("writingMode", stringValue(value));
let zIndex = value => ("zIndex", stringValue(value));
let zoom = value => ("zoom", stringValue(value));