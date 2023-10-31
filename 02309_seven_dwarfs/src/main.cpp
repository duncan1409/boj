#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

void Solution(vector<int> v)
{

	int cnt = 0;
	int sum = 0;
	vector<int> res;
	for (int i = 0; i < 9; i++)
		sum += v[i];

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{

			if ((sum - v[i] - v[j]) == 100)
			{
				for (int k = 0; k < 9; k++)
				{
					if (k != i && k != j)
					{
						res.push_back(v[k]);
					}
				}
			}
		}
	}

	sort(res.begin(), res.end());

	for (int i = 0; i < 7; i++)
	{
		cout << res[i] << endl;
	}
}
int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력
	int temp;

	vector<int> v;
	for (int i = 0; i < 9; i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	Solution(v);
	return 0;
}