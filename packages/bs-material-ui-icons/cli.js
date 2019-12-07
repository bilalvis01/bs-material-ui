#!/usr/bin/env node
const program = require('commander');
const BuildIcons = require('./BuildIcons');

const buildIcons = new BuildIcons();

program.option('-b, --build', 'build bs-material-ui icons');

program.parse(process.argv);

if (program.build) buildIcons.cleanAndBuildMuiIcons();