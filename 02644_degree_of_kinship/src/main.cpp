#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

int n;
vector<vector<int>> family;
int visited[101];
int a1, a2;
int res = -1;

bool Solution(int a)
{
	// DFS
	res++;
	visited[a] = 1;
	if (a == a2)
	{
		return true;
	}
	for (int i = 0; i < family[a].size(); i++)
	{
		if (visited[family[a][i]] == 0)
		{
			if (Solution(family[a][i]) == true)
			{
				return true;
			}
			else
			{
				res--;
			}
		}
	}
	return false;
}
int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력
	cin >> n;
	family.assign(n + 1, vector<int>(0, 0));
	cin >> a1 >> a2;
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int x, y; // 부모, 자식
		cin >> x >> y;
		family[x].push_back(y);
		family[y].push_back(x);
	}
	if (Solution(a1) == false)
	{
		res = -1;
	}

	cout << res;
	return 0;
}