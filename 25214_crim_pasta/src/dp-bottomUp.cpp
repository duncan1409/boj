#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std;

void Solution(int N)
{
	int dp[200001];
	int min;
	memset(dp, 0, sizeof(dp));
	for (int i = 1; i <= N; i++)
	{
		int input;
		if (i == 1)
		{
			cin >> input;
			min = input;
			dp[1] = 0;
		}
		else
		{
			cin >> input;
			dp[i] = max(dp[i - 1], input - min);
			if (input < min)
				min = input;
		}
	}
	for (int i = 1; i <= N; i++)
		cout << dp[i] << " ";
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