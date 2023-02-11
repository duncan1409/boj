#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

void Solution(int n)
{
	long result = n;
	for (long p = 2; p <= sqrt(n); p++)
	{
		if (n % p == 0)
		{
			result = result - result / p;
			while (n % p == 0)
			{
				n /= p;
			}
		}
	}
	if (n > 1)
	{
		result = result - result / n;
	}
	cout << result;
}
int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long n;
	cin >> n;
	Solution(n);

	return 0;
}