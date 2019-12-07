# bs-material-ui
Reason bindings for material ui.

## Status

This package is still under active development.

## Installation

```
npm install @bilalvis01/bs-material-ui-icons
```

Please note that @material-ui/core >= 4.5.0, @material-ui/icons >= 4.5.0 and reason-react >= 0.7.0 are peer depencencies.

## Usage

create bsmuiicons.config.js in your project directory

```
// bsmuiicons.config.js
module.exports = {
  iconNames = [
    'Menu',
    'Search',
  ]
}
```

run the bsmuiicons command in your project directory

```
$ bsmuiicons --build
```

If everything went right, the icons will be generated in mui-icons folder in your project directory.

Finally, don't forget to update your bsconfig.json if necessary.

## Configuration

| Options | Description | type | default |
| --- | --- | --- | --- |
| iconNames | List of generated icons. | 'all' \| array(materialIcons) | \[\] |
| outputDir | The location of generated icons. | string | './mui-icons' |

## Documentation

WIP
