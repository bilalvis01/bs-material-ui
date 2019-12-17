type t;
type options;

external optionOfInt: int => options = "%identity";
external optionFunction: (int => 'return) => options = "%identity";

[@bs.module "@material-ui/core/styles/createSpacing"]
external make: options => options = "default";