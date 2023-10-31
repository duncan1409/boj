#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

char note[11][11];
void Solution()
{
}
int main()
{
	// freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력
	int N, H, W;
	// cin >> N >> H >> W;

	cout << "hey";

	for (int i = 0; i < 3; i++)
	{
		cout << "hey";

		string temp;
		temp = "abc";
		// cin >> temp;
		for (int j = 0; j < 6; j++)
		{
			note[i][j] = temp.front();
			temp.erase(temp.begin());
			cout << "done";
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << note[i][j];
		}
	}
	cout << "hey";

	Solution();
	return 0;
}