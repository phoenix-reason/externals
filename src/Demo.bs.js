// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';

var MathJs = require("./math.js");
var AnimalJs = require("./animal.js");

console.log(MathJs.add(1, 3));

console.log("Output:", MathJs.add(1, MathJs.CONSTANTS.two));

console.log(MathJs);

console.log(AnimalJs.max);

var max = {
  goodAnimal: false,
  name: "max"
};

console.log(max);

exports.max = max;
/*  Not a pure module */
