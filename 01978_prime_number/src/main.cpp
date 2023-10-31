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
	int prime = 0;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		int cnt = 0;
		for (int i = 1; i <= num; i++)
		{
			if (num % i == 0)
			{
				cnt++;
			}
		}
		if (cnt == 2)
		{
			prime++;
		}
	}
	cout << prime;
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