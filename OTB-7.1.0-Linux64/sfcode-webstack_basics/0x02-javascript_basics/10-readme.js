#!/usr/bin/node

const fs = require('fs');
const myFile = process.argv[2];
fs.readFile(myFile, {encoding: 'utf8'}, function (err, data) {
  if (err) {
    console.log(err);
  } else {
    console.log(data);
  }
});
