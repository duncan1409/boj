const fs=require('fs');
let input = fs.readFileSync(".test/input.txt").toString().split(' ');

const A = Number(input[0]);
const B = Number(input[1]);

console.log(A+B);