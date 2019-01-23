function add(a, b) {
  return a + b;
}

function subtract(a, b) {
  return a - b;
}

function divide(a, b) {
  return a / b;
}

function multiply(a, b) {
  return a * b;
}

const two = 2;
const three = 3;
const four = 4;

const CONSTANTS = {
  two, three, four
};

module.exports = {
  two, three, four,
  CONSTANTS,
  add, subtract, multiply, divide
}
