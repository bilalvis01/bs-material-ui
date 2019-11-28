type value;
type t = Js.Dict.t(value);

external nestedRule: t => value = "%identity";
external stringValue: string => value = "%identity";

let make: array((string, value)) => t = 
  entries => Js.Dict.fromArray(entries);

let nest: (string, array((string, value))) => (string, value) =
  (ruleName, entries) => (ruleName, nestedRule(make(entries)));

let merge: array(t) => t = rules => 
  Belt.Array.map(rules, rule => Js.Dict.entries(rule))
    ->Belt.Array.concatMany
    ->Js.Dict.fromArray;

let nestMerge: (string, array(t)) => (string, value) =
  (ruleName, rules) => (ruleName, nestedRule(merge(rules)));

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
let hangingPunctuation = value => ("hangingPunctuation");
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





let opacity = value => ("opacity", stringValue(value));
/* Dimension properties */

let maxHeight = value => ("maxHeight", stringValue(value));
let maxWidth = value => ("maxWidth", stringValue(value));
let minHeight = value => ("minHeight", stringValue(value));
let minWidth = value => ("minWidth", stringValue(value));
let width = value => ("width", stringValue(value));
/* Generated content properties */
let quotes = value => ("quotes", stringValue(value));

/* Flexible box layout */


let order = value => ("order", stringValue(value));
/* Font properties */

/* Grid properties */

/* List properties */
let listStyle = value => ("listStyle", stringValue(value));
let listStyleImage = value => ("listStyleImage", stringValue(value));
let listStylePosition = value => ("listStylePosition", stringValue(value));
let listStyleType = value => ("listStyleType", stringValue(value));
/* Margin properties */
let margin = value => ("margin", stringValue(value));
let marginBlock = value => ("marginBlock", stringValue(value));
let marginBlockEnd = value => ("marginBlockEnd", stringValue(value));
let marginBlockStart = value => ("marginBlockStart", stringValue(value));
let marginInline = value => ("marginInline", stringValue(value));
let marginInlineEnd = value => ("marginInlineEnd", stringValue(value));
let marginInlineStart = value => ("marginInlineStart", stringValue(value));
let marginRight = value => ("marginRight", stringValue(value));
let marginLeft = value => ("marginLeft", stringValue(value));
let marginBottom = value => ("marginBottom", stringValue(value));
let marginTop = value => ("marginTop", stringValue(value));
/* Mask properties */
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
/* Multi column layout properties */

/* Outline properties */
let outline = value => ("outline", stringValue(value));
let outlineColor = value => ("outlineColor", stringValue(value));
let outlineOffset = value => ("outlineOffset", stringValue(value));
let outlineStyle = value => ("outlineStyle", stringValue(value));
let outlineWidth = value => ("outlineWidth", stringValue(value));
/* Padding properties */
let padding = value => ("padding", stringValue(value));
let paddingBlock = value => ("paddingBlock", stringValue(value));
let paddingBlockEnd = value => ("paddingBlockEnd", stringValue(value));
let paddingBlockStart = value => ("paddingBlockStart", stringValue(value));
let paddingBottom = value => ("paddingBottom", stringValue(value));
let paddingInline = value => ("paddingInline", stringValue(value));
let paddingInlineEnd = value => ("paddingInlineEnd", stringValue(value));
let paddingInlineStart = value => ("paddingInlineStart", stringValue(value));
let paddingRight = value => ("paddingRight", stringValue(value));
let paddingLeft = value => ("paddingLeft", stringValue(value));
let paddingTop = value => ("paddingTop", stringValue(value));
/* Print properties */
let pageBreakAfter = value => ("pageBreakAfter", stringValue(value));
let pageBreakBefore = value => ("pageBreakBefore", stringValue(value));
let pageBreakInside = value => ("pageBreakInside", stringValue(value));
/* Scroll properties */
let scrollBehavior = value => ("scrollBehavior", stringValue(value));
let scrollMargin = value => ("scrollMargin", stringValue(value));
let scrollMarginBlock = value => ("scrollMarginBlock", stringValue(value));
let scrollMarginBlockEnd = value => ("scrollMarginBlockEnd", stringValue(value));
let scrollMarginBlockStart = value => ("scrollMarginBlockStart", stringValue(value));
let scrollMarginInline = value => ("scrollMarginInline", stringValue(value));
let scrollMarginInlineEnd = value => ("scrollMarginInlineEnd", stringValue(value));
let scrollMarginInlineStart = value => ("scrollMarginInlineStart", stringValue(value));
let scrollMarginRight = value => ("scrollMarginRight", stringValue(value));
let scrollMarginLeft = value => ("scrollMarginLeft", stringValue(value));
let scrollMarginBottom = value => ("scrollMarginBottom", stringValue(value));
let scrollMarginTop = value => ("scrollMarginTop", stringValue(value));
let scrollPadding = value => ("scrollPadding", stringValue(value));
let scrollPaddingBlock = value => ("scrollPaddingBlock", stringValue(value));
let scrollPaddingBlockEnd = value => ("scrollPaddingBlockEnd", stringValue(value));
let scrollPaddingBlockStart = value => ("scrollPaddingBlockStart", stringValue(value));
let scrollPaddingBottom = value => ("scrollPaddingBottom", stringValue(value));
let scrollPaddingInline = value => ("scrollPaddingInline", stringValue(value));
let scrollPaddingInlineEnd = value => ("scrollPaddingInlineEnd", stringValue(value));
let scrollPaddingInlineStart = value => ("scrollPaddingInlineStart", stringValue(value));
let scrollPaddingRight = value => ("scrollPaddingRight", stringValue(value));
let scrollPaddingLeft = value => ("scrollPaddingLeft", stringValue(value));
let scrollPaddingTop = value => ("scrollPaddingTop", stringValue(value));
let scrollSnapAlign = value => ("scrollSnapAlign", stringValue(value));
let scrollSnapStop = value => ("scrollSnapStop", stringValue(value));
let scrollSnapType = value => ("scrollSnapType", stringValue(value));
let scrollbarColor = value => ("scrollbarColor", stringValue(value));
let scrollbarWidth = value => ("scrollbarWidth", stringValue(value));
/* Table properties */


let tableLayout = value => ("tableLayout", stringValue(value));
/* Text properties */

let tabSize = value => ("tabSize", stringValue(value));
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

let verticalAlign = value => ("verticalAlign", stringValue(value));

let wordSpacing = value => ("wordSpacing", stringValue(value));
let whiteSpace = value => ("whiteSpace", stringValue(value));
let wordBreak = value => ("wordBreak", stringValue(value));
let wordWrap = value => ("wordWrap", stringValue(value));
/* Transform properties */

let perspective = value => ("perspective", stringValue(value));
let perspectiveOrigin = value => ("perspectiveOrigin", stringValue(value));
let transform = value => ("transform", stringValue(value));
let transformOrigin = value => ("transformOrigin", stringValue(value));
let transformStyle = value => ("transformStyle", stringValue(value));
/* Transitions properties */
let transition = value => ("transition", stringValue(value));
let transitionDelay = value => ("transitionDelay", stringValue(value));
let transitionDuration = value => ("transitionDuration", stringValue(value));
let transitionProperty = value => ("transitionProperty", stringValue(value));
let transitionTimingFunction = value => ("transitionTimingFunction", stringValue(value)); 
/* Visual formatting properties */
let display = value => ("display", stringValue(value));
let position = value => ("position", stringValue(value));
let top = value => ("top", stringValue(value));
let right = value => ("right", stringValue(value));




let zIndex = value => ("zIndex", stringValue(value));
let overflow = value => ("overflow", stringValue(value));
let overflowX = value => ("overflowX", stringValue(value));
let overflowY = value => ("overflowY", stringValue(value));
let resize = value => ("resize", stringValue(value));

let visibility = value => ("visibility", stringValue(value));



let pointerEvents = value => ("pointerEvents", stringValue(value));






