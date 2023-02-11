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

void Solution(int N)
{
	int cnt = 0;
	queue<int> q;
	for (int i = 1; i <= N; i++)
		q.push(i);
	while (!q.empty())
	{
		if (cnt % 2 == 0)
		{
			cout << q.front() << " ";
			q.pop();
		}
		else
		{
			q.push(q.front());
			q.pop();
		}
		cnt++;
	}
}
int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력
	int N;
	cin >> N;
	Solution(N);

	return 0;
}