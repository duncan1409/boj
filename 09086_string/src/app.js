import { fs } from "fs";
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
let input = fs.readFileSync(filePath).toString().trim().split("\r\n");

for (i = 1; i <= input[0]; i++) {
    console.log(input[i].at(0) + input[i].at(-1));
}
