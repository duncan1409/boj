#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std;

int dp[41];
int cnt_norm = 0;
int cnt_dp = 0;

int fib(int n)
{
	if (n == 1 || n == 2)
	{
		cnt_norm++;
		return 1;
	}
	else
	{
		return (fib(n - 1) + fib(n - 2));
	};
}

void fibonacci(int n)
{
	dp[1] = 0;
	dp[2] = 1;
	for (int i = 3; i <= n; i++)
	{
		dp[n] = dp[n - 1] + dp[n - 2];
		cnt_dp++;
	}
}

void Solution(int input)
{
}
int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	fib(n);
	fibonacci(n);
	cout << cnt_norm << " " << cnt_dp;
	return 0;
}