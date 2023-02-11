#include <iostream>
#include <algorithm>
#define endl "\n"
using namespace std;

int dp[101][100001];
int W[100001], V[1001];

int Solution(int N, int K)
{
	if (N < 0)
		return 0;
	if (dp[N][K] != 0)
	{
		return dp[N][K];
	}
	if (W[N] > K)
	{
		return Solution(N - 1, K);
	}
	return dp[N][K] = max(Solution(N - 1, K - W[N]) + V[N], Solution(N - 1, K));
}

int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;
	cin >> N >> K;
	for (int i = 1; i <= N; i++)
		cin >> W[i] >> V[i];
	cout << Solution(N, K);

	return 0;
}