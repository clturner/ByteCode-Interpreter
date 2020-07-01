#!/usr/bin/node

const fs = require('fs');
const myFile = process.argv[2];
const content = process.argv[3];
fs.appendFile(myFile, content, {encoding: 'utf8'}, function (err, data) {
  if (err) {
    console.log(err);
  }
});
