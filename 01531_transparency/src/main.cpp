#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

int vis[101][101] = {
	0,
};

void Solution(int N, int M)
{
	int res = 0;

	for (int i = 0; i < N; i++)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int j = x1; j <= x2; j++)
		{
			for (int k = y1; k <= y2; k++)
			{
				vis[j][k]++;
			}
		}
	}
	for (int i = 1; i <= 100; i++)
	{
		for (int j = 1; j <= 100; j++)
		{
			if (vis[i][j] > M)
				res++;
		}
	}
	cout << res;
}
int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력
	int N, M;
	cin >> N >> M;

	Solution(N, M);
	return 0;
}