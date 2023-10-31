const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split(" ");

Solution = (n, m) => {
    console.log(n / m);
    console.log(n % m);
};

Solution(input[0], input[1]);
