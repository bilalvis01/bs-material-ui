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

  /*
  let createStyles:
    list((string, ruleGenerator('props))) => Js.Dict.t(ruleGenerator('props)) =
    entries => Js.Dict.fromList(entries);
  let styleItem:
    (string, ruleGenerator('props)) => (string, ruleGenerator('props)) =
    (ruleName, ruleGenerator) => (ruleName, ruleGenerator);
  */

  let rule: list((string, ruleValue)) => rule = entries => Js.Dict.fromList(entries);

  external ruleToRuleValue: rule => ruleValue = "%identity";
  let nestedRule: (string, rule) => (string, ruleValue) = (ruleName, rule) => (ruleName, ruleToRuleValue(rule));

  external stringToRuleValue: string => ruleValue = "%identity";

  let ruleItem: (string, string) => (string, ruleValue) = (property, value) => (property, stringToRuleValue(value));

  let display = value => ruleItem("display", value);
  let position = value => ruleItem("position", value);
  let borderRadius = value => ruleItem("borderRadius", value);
  let marginRight = value => ruleItem("marginRight", value);
  let marginLeft = value => ruleItem("marginLeft", value);
  let maxWidth = value => ruleItem("maxWidth", value);
  let width = value => ruleItem("width", value);
  let height = value => ruleItem("height", value);
  let pointerEvents = value => ruleItem("pointerEvents", value);
  let alignItems = value => ruleItem("alignItems", value);
  let justifyContent = value => ruleItem("justifyContent", value);
  let color = value => ruleItem("color", value);
  let backgroundColor = value => ruleItem("backgroundColor", value);
  let padding = value => ruleItem("padding", value);
  let transition = value => ruleItem("transition", value);
  let textAlign = value => ruleItem("textAlign", value);
  let zIndex = value => ruleItem("zIndex", value);
  let flexShrink = value => ruleItem("flexShrink", value);
  let flexGrow = value => ruleItem("flexGrow", value);
};
