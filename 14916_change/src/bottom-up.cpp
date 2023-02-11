#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std;

void Solution(int N)
{
	int dp[100001];
	memset(dp, -1, sizeof(dp));
	dp[2] = 1;
	dp[4] = 2;
	dp[5] = 1;

	// Bottom-Up 방식
	for (int i = 6; i < N + 1; i++)
	{
		if (dp[i - 5] == -1)
		{
			dp[i] = dp[i - 2] + 1;
		}
		else
		{
			dp[i] = min(dp[i - 2], dp[i - 5]) + 1;
		}
	}

	cout << dp[N];
}
int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	Solution(N);

	return 0;
}