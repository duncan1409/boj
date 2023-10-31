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

vector<pair<int, int>> wait;
vector<int> A;
vector<int> B;
vector<int> C;

void Solution(int idx)
{
	int a, b;
	if (idx == 1)
	{
		cin >> a >> b;
		wait.push_back(pair<int, int>(a, b));
	}
	else
	{
		cin >> b;
		if (wait.front().second == b)
		{
			A.push_back(wait.front().first);
			wait.pop_back();
		}
		else
		{
			B.push_back(wait.front().first);
			wait.pop_back();
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
	int n;
	int idx, menu;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> idx;
		Solution(idx);
	}

	return 0;
}