#!/usr/bin/env node
const program = require('commander');
const buildIcons = require('./buildIcons');

program.option('-b, --build', 'build icons');

program.parse(process.argv);

if (program.build) buildIcons();