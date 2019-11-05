# bs-material-ui
Reason bindings for material ui.

## Status

Please note that this package still in very early stage of development. However the folowing bindings with the check marks are available:

### components
- [x] AppBar
- [x] Avatar
- [x] Badge
- [x] Box
- [x] Button
- [x] ButtonBase
- [x] Card
- [x] CardActionArea
- [x] CardActions
- [x] CardContent
- [x] CardMedia
- [x] Checkbox
- [x] Container
- [x] CssBaseline
- [x] Divider
- [x] Drawer
- [x] FormControlLabel
- [x] Grid
- [x] Hidden
- [x] IconButton
- [x] Input
- [x] InputBase
- [x] Link
- [x] List
- [x] ListItem
- [x] ListItemIcon
- [x] ListItemText
- [x] ListSubheader
- [x] Menu
- [x] MenuItem
- [x] Modal
- [x] Paper
- [x] Popover
- [x] Table
- [x] TableBody
- [x] TableCell
- [x] TableHead
- [x] TableRow
- [x] TextField
- [x] ThemeProvider
- [x] Toolbar
- [x] Typography

### Styles
- [x] stylesHook

## Installation
```
npm install @bilalvis01/bs-material-ui
```

Then add `@bilalvis01/bs-material-ui` to `bs-dependencies` to your bsconfig.json:

```
{
  ...
  "bs-dependencies": [
    ...
    "@bilalvis01/bs-material-ui",
  ],
  "reason": {
    "react-jsx": 3
  }
}
```

Please note that @material-ui/core >= 4.5.0, reason-react >= 0.7.0 are peer depencencies.

## Usage

Here is a quick examples to get you started, it's all you need:

```
module App = {
  [@react.component]
  let make = () => 
    <MUI.Button variant="contained" color="primary">
      {React.string("Hello World")}
    </MUI.Button>;
};

ReactDOMRe.renderToElementWithId(<App />, "root");
```

## Examples

WIP

## Documentation

WIP
