#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std;

void Solution(int N)
{
	vector<int> v(N, 0);
	int result = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	for (int k = 0; k < N; k++)
	{
		long long temp = v[k];
		int i = 0;
		int j = N - 1;

		while (i < j)
		{
			if (v[i] + v[j] == temp)
			{
				if (i != k && j != k)
				{
					result++;
					break;
				}
				else if (i == k)
					i++;

				else if (j == k)
					j++;
			}
			else if (v[i] + v[j] < temp)
				i++;
			else
				j++;
		}
	}
	cout << result;
}
int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	Solution(N);

	return 0;
}