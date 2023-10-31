#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

void Solution(int N, int M, vector<int> v)
{
	for (int i = 0; i < M; i++)
	{
		int x, y;
		cin >> x >> y;

		int temp;
		temp = v[x];
		v[x] = v[y];
		v[y] = temp;
	}

	for (int i = 0; i < N; i++)
	{
		cout << v[i] << " ";
	}
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

	vector<int> v;

	for (int i = 0; i < N; i++)
	{
		v.push_back(i + 1);
	}

	Solution(N, M, v);
	return 0;
}