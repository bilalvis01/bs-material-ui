#!/usr/bin/env node
const program = require('commander');
const IconsBuilder = require('./IconsBuilder');

const iconsBuilder = new IconsBuilder();

program.option('-b, --build', 'build bs-material-ui icons');

program.parse(process.argv);

if (program.build) iconsBuilder.cleanAndBuildIcons();