#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(void)
{

	int N, K;
	vector<int> v;
	vector<int> v2;
	cin >> N;
	cin >> K;

	if (K >= N)
	{
		cout << "0";
		return 0;
	}
	for (int i = 0; i < N; i++)
	{
		int n;
		cin >> n;
		v.push_back(n);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < N - 1; i++)
		v2.push_back(v[i + 1] - v[i]);

	sort(v2.begin(), v2.end());

	int result = 0;

	for (int i = 0; i < v2.size() - (K - 1); i++)
		result += v2[i];

	cout << result;
	return 0;
}