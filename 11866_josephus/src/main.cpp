#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <queue>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

void Solution(int K, queue<int> q)
{
	cout << "<";
	while (!q.empty())
	{
		for (int i = 0; i < K - 1; i++)
		{
			q.push(q.front());
			q.pop();
		}
		if (q.size() == 1)
		{
			cout << q.front() << ">";
			q.pop();
		}
		else
		{
			cout << q.front() << ", ";
			q.pop();
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
	int N, K;
	cin >> N >> K;

	queue<int> q;
	for (int i = 1; i <= N; i++)
		q.push(i);
	Solution(K, q);

	return 0;
}