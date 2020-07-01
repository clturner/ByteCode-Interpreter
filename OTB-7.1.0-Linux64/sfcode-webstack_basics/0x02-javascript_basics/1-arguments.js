#!/usr/bin/node

let message = '';
if (process.argv.length < 3) {
  message = 'No argument';
} else if (process.argv.length === 3) {
  message = 'Argument found';
} else {
  message = 'Arguments found';
}
console.log(message);
