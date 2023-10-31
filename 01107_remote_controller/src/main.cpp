#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

bool button[10];
int Solution(int n)
{
	if (n == 0)
	{
		if (button[n])
			return 0;
		else
			return 1;
	}
	int cnt = 0;
	while (n > 0)
	{
		if (button[n % 10])
			return 0;
		cnt += 1;
		n /= 10;
	}
	return cnt;
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
	if (M > 0)
	{
		for (int i = 0; i < M; i++)
		{
			int sel;
			cin >> sel;
			button[sel] = true;
		}
	}
	int res = abs(N - 100);
	for (int i = 0; i <= 1000000; i++)
	{
		int x = i;
		int cnt = Solution(x);
		if (cnt > 0)
		{
			int press = abs(x - N);
			if (res > N + press)
				res = N + press;
		}
	}
	cout << res;

	return 0;
}												c	f