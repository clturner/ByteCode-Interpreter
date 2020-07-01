#!/usr/bin/node

const size = process.argv[2];
let i;
let j;
if (isNaN(Number(size)) === true) {
  console.log('Missing size');
}
for (i = 0; i < size; i++) {
  for (j = 0; j < size; j++) {
    if (j === size - 1) {
      console.log('X');
    } else {
      process.stdout.write('X');
    }
  }
}
