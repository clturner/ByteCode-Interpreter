#!/usr/bin/node

if (isNaN(Number(process.argv[2])) === true) {
  console.log('Not a number');
} else {
  process.stdout.write('My number: ');
  console.log(parseInt(process.argv[2]));
}
