#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int greedyAlgorithm(int value)
{
	vector<int> v = {500, 100, 50, 10, 5, 1};
	int count = 0;
	for (int i = 0; i < v.size(); i++)
	{
		while (value - v[i] >= 0)
		{
			count++;
			value -= v[i];
		}
	}

	return count;
}

int main()
{
	freopen("input.txt", "r", stdin);
	int money;
	cin >> money;
	int change = 1000 - money;

	cout << greedyAlgorithm(change);
	return 0;
}