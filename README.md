# bs-material-ui
Reason bindings for material ui.

## Status

This package is still under active development thus breaking changes and crashes should be expected.

## Installation

```
npm install @bilalvis01/bs-material-ui
```

Then add `@bilalvis01/bs-material-ui` to `bs-dependencies` to your bsconfig.json:

```
{
  "bs-dependencies": [
    "@bilalvis01/bs-material-ui",
  ],
  "reason": {
    "react-jsx": 3
  }
}
```

Please note that @material-ui/core >= 4.5.0 and reason-react >= 0.7.0 are peer depencencies.

## Usage

Here is a quick examples to get you started, it's all you need:

```
/* App.re */
[@react.component]
let make = () => {
  open MaterialuiPropsTypes;

  <Materialui.Button variant=Variant.Button.contained color=Color.Button.primary>
    {React.string("Hello World")}
  </Materialui.Button>;
}
```

in another file:

```
ReactDOMRe.renderToElementWithId(<App />, "root");
```

## Examples

WIP

## Documentation

WIP

## License

This project is licensed under the terms of the MIT license.
