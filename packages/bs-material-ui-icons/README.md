# bs-material-ui-icons
Reason bindings for material ui icons.

## Status

This package is still under active development.

## Installation

```
npm install --save-dev @bilalvis01/bs-material-ui-icons
```

Add a script to your package.json.

```
{
  "scripts" {
    "build-icons": "bs-mui-icons --build"
  }
}
```

note: @material-ui/core >= 4.5.0, @material-ui/icons >= 4.5.0 and reason-react >= 0.7.0 are peer depencencies.

## Usage

Create bsmuiicons.config.js in your project directory.

```
// bsmuiicons.config.js
module.exports = {
  icons = [
    'Menu',
    'Search',
  ]
}
```

Run the command below in your project directory.

```
$ npm run build-icons
```

If everything went right, the icons (with all theme: Filled, Outlined, Rounded, TwoTone, Sharp) will be generated in mui-icons folder in your project directory.

Finally, don't forget to update your bsconfig.json if necessary.

## Configuration

| Fields | Description | Type | Default |
| --- | --- | --- | --- |
| icons | List of generated icons. | 'all' \| array(materialIcons) | 'all' |
| outputDir | The location of the generated icons. | string | './mui-icons' |


note: set icons value to 'all' is discouraged because the number of the generated icons are more than 5000 and it may affect to your build performance.

## Options

`--build`

Pass this flag when you want to build your icons.

## Documentation

WIP
