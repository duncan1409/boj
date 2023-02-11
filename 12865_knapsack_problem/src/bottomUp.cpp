#include <iostream>
#include <algorithm>
#define endl "\n"
using namespace std;

int dp[101][100001];
int W[100001], V[1001];

void Solution(int N, int K)
{

	for (int i = 1; i <= N; i++)
		cin >> W[i] >> V[i];
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= K; j++)
		{ // j는 도둑이 가져갈 무게의 총합. W까지 늘어남
			if (j >= W[i])
			{ // 도둑이 가져갈 무게의 총합보다 w_i 가 큰 경우
				dp[i][j] = max(dp[i - 1][j - W[i]] + V[i], dp[i - 1][j]);
			}
			else
			{ // 도둑이 가져갈 무게의 총합보다 w_i 가 작은 경우
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
	cout << dp[N][K];
}

int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;
	cin >> N >> K;
	Solution(N, K);

	return 0;
}