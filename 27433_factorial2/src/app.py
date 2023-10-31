import sys
sys.stdin = open("input.txt")

dp = [0 for i in range(21)]


def Solution(N):
    dp[1] = 1
    for i in range(2, N+1):
        dp[i] = dp[i-1]*i
    return dp[N]


# input
N = int(input())

print(Solution(N))
