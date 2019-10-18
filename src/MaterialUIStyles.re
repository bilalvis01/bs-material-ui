type options;
type ruleValue;
type rule = Js.Dict.t(ruleValue);
type ruleCb('props) = 'props => rule;

module type StylesType = {
  type theme;
  type props;
  type styles('a);
};

module Make = (Styles: StylesType) => {
  type stylesCb('props) = Styles.theme => Styles.styles(ruleCb('props));
  type stylesHook = Styles.props => Styles.styles(string);

  [@bs.module "@material-ui/core/styles"]
  external make: stylesCb(Styles.props) => stylesHook = "makeStyles";
  [@bs.module "@material-ui/core/styles"]
  external makeWithOptions: (stylesCb(Styles.props), options) => stylesHook = "makeStyles";

  [@bs.module "@material-ui/core/styles"]
  external fade: (string, float) => string = "fade";

  let rule: list((string, ruleValue)) => rule = 
    entries => Js.Dict.fromList(entries);

  external ruleToRuleValue: rule => ruleValue = "%identity";
  let nesteRule: (string, rule) => (string, ruleValue) = 
    (ruleName, rule) => (ruleName, ruleToRuleValue(rule));

  let mergeRule: (rule, rule) => rule = [%raw {|
    (rule1, rule2) => Object.assign({}, rule1, rule2)
  |}];

  external stringToRuleValue: string => ruleValue = "%identity";
  let ruleItem: (string, string) => (string, ruleValue) = 
    (property, value) => (property, stringToRuleValue(value));

  let display = value => ruleItem("display", value);
  let position = value => ruleItem("position", value);
  let borderRadius = value => ruleItem("borderRadius", value);
  let margin = value => ruleItem("margin", value);
  let marginRight = value => ruleItem("marginRight", value);
  let marginLeft = value => ruleItem("marginLeft", value);
  let marginBottom = value => ruleItem("marginBottom", value);
  let marginTop = value => ruleItem("marginTop", value);
  let padding = value => ruleItem("padding", value);
  let paddingRight = value => ruleItem("paddingRight", value);
  let paddingLeft = value => ruleItem("paddingLeft", value);
  let paddingBottom = value => ruleItem("paddingBottom", value);
  let paddingTop = value => ruleItem("paddingTop", value);
  let maxWidth = value => ruleItem("maxWidth", value);
  let width = value => ruleItem("width", value);
  let height = value => ruleItem("height", value);
  let pointerEvents = value => ruleItem("pointerEvents", value);
  let alignItems = value => ruleItem("alignItems", value);
  let justifyContent = value => ruleItem("justifyContent", value);
  let color = value => ruleItem("color", value);
  let backgroundColor = value => ruleItem("backgroundColor", value);
  let transition = value => ruleItem("transition", value);
  let textAlign = value => ruleItem("textAlign", value);
  let zIndex = value => ruleItem("zIndex", value);
  let flexShrink = value => ruleItem("flexShrink", value);
  let flexGrow = value => ruleItem("flexGrow", value);
  let whiteSpace = value => ruleItem("whiteSpace", value);
  let overflowX = value => ruleItem("overflowX", value);
  let overflow = value => ruleItem("overflow", value);
  let flex = value => ruleItem("flex", value);
  let flexDirection = value => ruleItem("flexDirection", value);
};
