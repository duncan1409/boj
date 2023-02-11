#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

void Solution(int N)
{
	int guest[101] = {
		0,
	};
	int cnt = 0;
	int temp;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		if (guest[temp] != 0)
			cnt++;
		else
			guest[temp]++;
	}
	cout << cnt;
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