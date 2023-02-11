#include <iostream>
#include <string>
using namespace std;

int dp[15][15];
int Solution(int k, int n)
{
	for (int i = 1; i < 15; i++)
	{
		dp[0][i] = i;
		dp[i][1] = 1;
	}

	// Bottom-Up
	for (int i = 1; i < 15; i++)
	{
		for (int j = 1; j < 15; j++)
		{
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
		}
	}
	return dp[k][n];
}

int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, k, n;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> k >> n;
		cout << Solution(k, n) << endl;
	}

	return 0;
}