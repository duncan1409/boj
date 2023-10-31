#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <queue>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

void Solution(int n)
{
	queue<int> wait;

	int ctg;
	int max = 0;
	int back_min = 100001;
	for (int i = 0; i < n; i++)
	{
		cin >> ctg;
		if (ctg == 1)
		{
			int a;
			cin >> a;
			wait.push(a);
			if (max <= wait.size())
			{
				max = wait.size();
				if (back_min > wait.back())
					back_min = wait.back();
			}
		}
		else
		{
			wait.pop();
		}
	}
	cout << max << " " << back_min;
}
int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력
	int n;
	cin >> n;
	Solution(n);
	return 0;
}