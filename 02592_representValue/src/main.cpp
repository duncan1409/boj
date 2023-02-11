#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

void Solution(int *v)
{
	int sum = 0;
	int max = 0;

	for (int i = 0; i < 10; i++)
		sum += v[i];

	int res[100] = {
		0,
	};
	for (int i = 0; i < 10; i++)
	{
		res[v[i] / 10]++;
	}
	for (int i = 0; i < 100; i++)
	{
		if (max < res[i])
		{
			max = i;
		}
	}
	cout << sum / 10 << endl;
	cout << max * 10;
}
int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력

	int value[10];
	int temp;

	for (int i = 0; i < 10; i++)
	{
		cin >> temp;
		value[i] = temp;
	}
	Solution(value);
	return 0;
}