const fs = require("fs");
let input = fs.readFileSync("input.txt").toString().split(" "); //space로 구분한다

const A = Number(input[0]);
const B = Number(input[1]);

console.log(A - B);
