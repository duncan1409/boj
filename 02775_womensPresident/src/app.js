const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().split("\n");

const T = Number(input.shift());

function Solution(k, n) {
    const dp = Array.from(Array(k + 1), () => Array(n + 1).fill(0));
    for (let i = 1; i <= n; i++) {
        dp[0][i] = i;
    }
    for (let i = 1; i <= k; i++) {
        for (let j = 1; j <= n; j++) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }

    return dp[k][n];
}

for (let i = 0; i < T; i++) {
    const k = +input.shift();
    const n = +input.shift();
    console.log(Solution(k, n));
}
