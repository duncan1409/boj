const fs = require("fs");
const filepath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
let input = fs.readFileSync(filepath).toString();

function Hello() {
    console.log("Hello World!");
}

Hello();
