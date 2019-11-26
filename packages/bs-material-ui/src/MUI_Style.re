type value;
type t = Js.Dict.t(value);

external ruleToValue: t => value = "%identity";
external stringToValue: string => value = "%identity";

let make: list((string, value)) => t = 
  entries => Js.Dict.fromList(entries);

let nest: (string, list((string, value))) => (string, value) =
  (ruleName, entries) => (ruleName, ruleToValue(make(entries)));

let ruleAssign: array(t) => t = [%raw {|
  sources => Object.assign({}, ...sources)
|}];

let merge: list(t) => t = sources => 
  Belt.List.toArray(sources)
    ->ruleAssign;

let alignItems = value => ("alignItems", stringToValue(value));
let borderRadius = value => ("borderRadius", stringToValue(value));
let borderBottom = value => ("borderBottom", stringToValue(value));
let backgroundImage = value => ("backgroundImage", stringToValue(value));
let backgroundSize = value => ("backgroundSize", stringToValue(value));
let backgroundRepeat = value => ("backgroundRepeat", stringToValue(value));
let backgroundPosition = value => ("backgroundPosition", stringToValue(value));
let backgroundColor = value => ("backgroundColor", stringToValue(value));
let bottom = value => ("bottom", stringToValue(value));
let color = value => ("color", stringToValue(value));
let display = value => ("display", stringToValue(value));
let flex = value => ("flex", stringToValue(value));
let flexDirection = value => ("flexDirection", stringToValue(value));
let flexShrink = value => ("flexShrink", stringToValue(value));
let flexGrow = value => ("flexGrow", stringToValue(value));
let height = value => ("height", stringToValue(value));
let justifyContent = value => ("justifyContent", stringToValue(value));
let left = value => ("left", stringToValue(value));
let margin = value => ("margin", stringToValue(value));
let marginRight = value => ("marginRight", stringToValue(value));
let marginLeft = value => ("marginLeft", stringToValue(value));
let marginBottom = value => ("marginBottom", stringToValue(value));
let marginTop = value => ("marginTop", stringToValue(value));
let maxWidth = value => ("maxWidth", stringToValue(value));
let overflowX = value => ("overflowX", stringToValue(value));
let overflow = value => ("overflow", stringToValue(value));
let padding = value => ("padding", stringToValue(value));
let position = value => ("position", stringToValue(value));
let paddingRight = value => ("paddingRight", stringToValue(value));
let paddingLeft = value => ("paddingLeft", stringToValue(value));
let paddingBottom = value => ("paddingBottom", stringToValue(value));
let paddingTop = value => ("paddingTop", stringToValue(value));
let pointerEvents = value => ("pointerEvents", stringToValue(value));
let right = value => ("right", stringToValue(value));
let transition = value => ("transition", stringToValue(value));
let textAlign = value => ("textAlign", stringToValue(value));
let top = value => ("top", stringToValue(value));
let whiteSpace = value => ("whiteSpace", stringToValue(value));
let width = value => ("width", stringToValue(value));
let zIndex = value => ("zIndex", stringToValue(value));
