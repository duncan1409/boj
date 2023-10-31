#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

int arr[101];
void Solution(int dasom, int len)
{
	int cnt = 0;
	while (true)
	{
		int max = 0;
		int idx = 0;

		for (int i = 0; i < len; i++)
		{
			if (max < arr[i])
			{
				max = arr[i];
				idx = i;
			}
		}
		if (dasom > max)
		{
			cout << cnt << endl;
			break;
		}
		dasom++;
		arr[idx]--;
		cnt++;
	}
}
int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력
	int N;
	int dasom;
	cin >> N;
	cin >> dasom;

	int len = N - 1;
	for (int i = 0; i < len; i++)
		cin >> arr[i];

	Solution(dasom, len);
	return 0;
}