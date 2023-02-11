#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

void Solution(int N, vector<int> v)
{
	for (int i = 1; i <= N; i++)
	{
		int temp;
		cin >> temp;
		v.insert(v.begin() + temp, i);
	}

	for (int i = N - 1; i >= 0; i--)
		cout << v[i] << " ";
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
	vector<int> v;

	Solution(N, v);
	return 0;
}