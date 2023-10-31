#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

int d[300001];
vector<int> r[300001];

void Solution(int s)
{
	d[s] = 0;
	queue<int> q;
	q.push(s);
	while (!q.empty())
	{
		int cur = q.front();
		q.pop();
		for (int i = 0; i < r[cur].size(); i++)
		{
			int next = r[cur][i];
			if (d[next] > d[cur] + 1)
			{
				d[next] = d[cur] + 1;
				q.push(next);
			}
		}
	}
}
int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력
	int N, M, K, X;
	cin >> N >> M >> K >> X;
	for (int i = 1; i <= N; i++)
	{
		d[i] = 99999999;
	}
	for (int i = 0; i < M; i++)
	{
		int s, e;
		cin >> s >> e;
		r[s].push_back(e);
	}

	Solution(X);

	bool check = false;
	for (int i = 1; i <= N; i++)
	{
		if (d[i] == K)
		{
			check = true;
			cout << i << endl;
		}
	}
	if (!check)
		cout << "-1";

	return 0;
}
