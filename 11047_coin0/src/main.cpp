#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	freopen("input.txt", "r", stdin);
	int count = 0;
	int N, K;
	int coin;
	vector<int> v;
	cin >> N >> K;

	for (int i = 0; i < K; i++)
	{
		cin >> coin;
		v.push_back(coin);
	}
	sort(v.begin(), v.end(), greater<int>());
	for (int i = i; i < v.size(); i++)
	{
		while (K - v[i] >= 0)
		{
			count++;
			K -= v[i];
		}
	}
	cout << count;

	return 0;
}