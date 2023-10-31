#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

void Solution(int L)
{
	int min = 0;
	while (L != 0)
	{
		if (L >= 5)
		{
			min++;
			L -= 5;
		}
		else
		{
			min++;
			L = 0;
		}
	}
	cout << min;
}
int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력
	int L;
	cin >> L;
	Solution(L);
	return 0;
}