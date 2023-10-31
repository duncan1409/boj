import sys

input_file = "input.txt"

with open(input_file, 'r') as file:
    string_a = ' ' + file.readline().rstrip()
    string_b = ' ' + file.readline().rstrip()
    string_c = ' ' + file.readline().rstrip()

dp = [[[0] * len(string_c) for _ in range(len(string_b))]
      for _ in range(len(string_a))]

for i in range(1, len(string_a)):
    for j in range(1, len(string_b)):
        for k in range(1, len(string_c)):
            if string_a[i] == string_b[j] == string_c[k]:
                dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1
            else:
                dp[i][j][k] = max(dp[i - 1][j][k], dp[i]
                                  [j - 1][k], dp[i][j][k - 1])

print(dp[-1][-1][-1])
