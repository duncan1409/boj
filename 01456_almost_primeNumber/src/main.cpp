#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>
#define endl "\n"
#define LIMIT 1000001
using namespace std;

long long A[1000001];

void Solution(int input)
{
	for (int i = 2; i < LIMIT; i++)
	{
		A[i] = i;
	}
	for (int i = 2; i <= sqrt(LIMIT); i++)
	{
		if (A[i] == 0)
		{
			continue;
		}
		for (int j = i + i; j < LIMIT; j = j + 1)
		{
			A[j] = 0;
		}
	}
	int count = 0;
	for (int i = 2; i < LIMIT; i++)
	{
		if (A[i] != 0)
		{
			long long temp = A[i];
		}
	}
}

int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long min, MAX;
	cin >> min >> MAX;

	return 0;
}