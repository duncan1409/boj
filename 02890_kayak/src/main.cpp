#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.first > b.first)
		return true;
	return false;
}
void Solution(vector<pair<int, int>> v, int *arr)
{
	sort(v.begin(), v.end(), cmp);
	int rank = 1;
	arr[v[0].second] = rank;
	int prev = v[0].first;
	for (int i = 1; i < v.size(); i++)
		if (prev == v[i].first)
			arr[v[i].second] = rank;
		else
		{
			arr[v[i].second] = ++rank;
			prev = v[i].first;
		}
	for (int i = 1; i <= 9; i++)
		cout << arr[i] << "\n";
}
int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력
	int R, C;
	string s[51];
	int arr[51];
	cin >> R >> C;
	vector<pair<int, int>> v; // 카약의 머리 위치, 카약 번호
	for (int i = 0; i < R; i++)
	{
		cin >> s[i];
		for (int j = s[i].length() - 1; j >= 0; j--)
			if (s[i][j] >= '1' && s[i][j] <= '9')
			{
				v.push_back({j, s[i][j] - '0'});
				break;
			}
	}

	Solution(v, arr);
	return 0;
}