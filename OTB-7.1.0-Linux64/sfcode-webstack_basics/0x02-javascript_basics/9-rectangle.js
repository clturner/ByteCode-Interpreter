#!/usr/bin/node

exports.Rectangle = function Rectangle (w, h) {
  if (w >= 1 && h >= 1) {
    this.width = w;
    this.height = h;
  }
  this.print = function () {
    let i;
    let j;
    for (i = 0; i < this.height; i++) {
      for (j = 0; j < this.width; j++) {
        if (j === this.width - 1) {
          console.log('X');
        } else {
          process.stdout.write('X');
        }
      }
    }
  };
};
