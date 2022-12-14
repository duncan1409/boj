#include <iostream>
#include <algorithm>
using namespace std;

int dp[101][100001];
int w[101], v[101];
void KnapsackProblem(int N, int W)
{
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= W; j++)
		{//j는 도둑이 가져갈 무게의 총합. W까지 늘어남
			if (j >= w[i])
			{ // 도둑이 가져갈 무게의 총합보다 w_i 가 큰 경우
				dp[i][j] = max(dp[i - 1][j - w[i]] + v[i], dp[i - 1][j]);
			}
			else
			{ // 도둑이 가져갈 무게의 총합보다 w_i 가 작은 경우
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
	cout << dp[N][W];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, W;
	cin >> N >> W;
	for (int i = 1; i <= N; i++)
		cin >> w[i] >> v[i];
	KnapsackProblem(N, W);

	return 0;
}