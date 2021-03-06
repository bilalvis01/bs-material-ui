type value;
type t = Js.Dict.t(value);

external nestedStyle: t => value = "%identity";
external stringValue: string => value = "%identity";

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

/**
 * 
 * PseudoCall helper
 * 
 */
module PseudoClass = {
  let active = properties => nest(":active", properties);
  let activeMerge = styles => nestMerge(":active", styles);
  let checked = properties => nest(":checked", properties);
  let checkedMerge = styles => nestMerge(":checked", styles);
  let default = properties => nest(":default", properties);
  let defaultMerge = styles => nestMerge(":default", styles);
  let defined = properties => nest(":defined", properties);
  let definedMerge = styles => nestMerge(":defined", styles);
  let disabled = properties => nest(":disabled", properties);
  let disabledMerge = styles => nestMerge(":disabled", styles);
  let empty = properties => nest(":empty", properties);
  let emptyMerge = styles => nestMerge(":empty", styles);
  let enabled = properties => nest(":enabled", properties);
  let enabledMerge = styles => nestMerge(":enabled", styles);
  let first = properties => nest(":first", properties);
  let firstMerge = styles => nestMerge(":first", styles);
  let firstChild = properties => nest(":first-child", properties);
  let firstChildMerge = styles => nestMerge(":first-child", styles);
  let firstOfType = properties => nest(":first-of-type", properties);
  let firstOfTypeMerge = styles => nestMerge(":first-of-type", styles);
  let focus = properties => nest(":focus", properties);
  let focusMerge = styles => nestMerge(":focus", styles);
  let focusWithin = properties => nest(":focus-within", properties);
  let focusWithinMerge = styles => nestMerge(":focus-within", styles);
  let host = properties => nest(":host", properties);
  let hostMerge = styles => nestMerge(":host", styles);
  let hostFunction = (selector, properties) => nest(":host(" ++ selector ++ ")", properties);
  let hostFunctionMerge = (selector, styles) => nestMerge(":host(" ++ selector ++ ")", styles);
  let hover = properties => nest(":hover", properties);
  let hoverMerge = styles => nestMerge(":hover", styles);
  let indeterminate = properties => nest(":indeterminate", properties);
  let indeterminateMerge = styles => nestMerge(":indeterminate", styles);
  let inRange = properties => nest(":in-range", properties);
  let inRangeMerge = styles => nestMerge(":in-range", styles);
  let invalid = properties => nest(":invalid", properties);
  let invalidMerge = styles => nestMerge(":invalid", styles);
  let lang = (lang, properties) => nest(":lang(" ++ lang ++ ")", properties);
  let langMerge = (lang, styles) => nestMerge(":lang(" ++ lang ++ ")", styles);
  let lastChild = properties => nest(":last-child", properties);
  let lastChildMerge = styles => nestMerge(":last-child", styles);
  let lastOfType = properties => nest(":last-of-type", properties);
  let lastOfTypeMerge = styles => nestMerge(":last-of-type", styles);
  let left = properties => nest(":left", properties);
  let leftMerge = styles => nestMerge(":left", styles);
  let link = properties => nest(":link", properties);
  let linkMerge = styles => nestMerge(":link", styles);
  let not = (selector, properties) => nest(":not(" ++ selector ++ ")", properties);
  let notMerge = (selector, styles) => nestMerge(":not(" ++ selector ++ ")", styles);
  let nthChild = (selector, properties) => nest(":nth-child(" ++ selector ++ ")", properties);
  let nthChildMerge = (selector, styles) => nestMerge(":nth-child(" ++ selector ++ ")", styles);
  let nthLastChild = (selector, properties) => nest(":nth-last-child(" ++ selector ++ ")", properties);
  let nthLastChildMerge = (selector, styles) => nestMerge(":nth-last-child(" ++ selector ++ ")", styles);
  let nthLastOfType = (selector, properties) => nest(":nth-last-of-type(" ++ selector ++ ")", properties);
  let nthLastOfTypeMerge = (selector, styles) => nestMerge(":nth-last-of-type(" ++ selector ++ ")", styles);
  let nthOfType = (selector, properties) => nest(":nth-of-type(" ++ selector ++ ")", properties);
  let nthOfTypeMerge = (selector, styles) => nestMerge(":nth-of-type(" ++ selector ++ ")", styles);
  let onlyChild = properties => nest(":only-child", properties);
  let onlyChildMerge = styles => nestMerge(":only-child", styles);
  let onlyOfType = properties => nest(":only-of-type", properties);
  let onlyOfTypeMerge = styles => nestMerge(":only-of-type", styles);
  let optional = properties => nest(":optional", properties);
  let optionalMerge = styles => nestMerge(":optional", styles);
  let outOfRange = properties => nest(":out-of-range", properties);
  let outOfRangeMerge = styles => nestMerge(":out-of-range", styles);
  let readOnly = properties => nest(":read-only", properties);
  let readOnlyMerge = styles => nestMerge(":read-only", styles);
  let readWrite = properties => nest(":read-write", properties);
  let readWriteMerge = styles => nestMerge(":read-write", styles);
  let required = properties => nest(":required", properties);
  let requiredMerge = styles => nestMerge(":required", styles);
  let right = properties => nest(":right", properties);
  let rightMerge = styles => nestMerge(":right", styles);
  let root = properties => nest(":root", properties);
  let rootMerge = styles => nestMerge(":root", styles);
  let scope = properties => nest(":scope", properties);
  let scopeMerge = styles => nestMerge(":scope", styles);
  let target = properties => nest(":target", properties);
  let targetMerge = styles => nestMerge(":target", styles);
  let valid = properties => nest(":valid", properties);
  let validMerge = styles => nestMerge(":valid", styles);
  let visited = properties => nest(":visited", properties);
  let visitedMerge = styles => nestMerge(":visited", styles);
};

/**
 * 
 * Pseudo element helper
 * 
 */
module PseudoElement = {
  let after = properties => nest("::after", properties);
  let afterMerge = styles => nestMerge("::after", styles);
  let before = properties => nest("::before", properties);
  let beforeMerge = styles => nestMerge("::before", styles);
  let cue = properties => nest("::cue", properties);
  let cueMerge = styles => nestMerge("::cue", styles);
  let cueRegion = properties => nest("::cue-region", properties);
  let cueRegionMerge = styles => nestMerge("::cue-region", styles);
  let firstLetter = properties => nest("::first-letter", properties);
  let firstLetterMerge = styles => nestMerge("::first-letter", styles);
  let firstLine = properties => nest("::first-line", properties);
  let firstLineMerge = styles => nestMerge("::first-line", styles);
  let selection = properties => nest("::selection", properties);
  let selectionMerge = styles => nestMerge("::selection", styles);
  let slotted = (selector, properties) => nest("::slotted(" ++ selector ++ ")", properties);
  let slottedMerge = (selector, styles) => nestMerge("::slotted(" ++ selector ++ ")", styles);
};

/**
 * 
 * Properties helper
 * 
 */
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
let flexBasis = value => ("flexBasis", stringValue(value));
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