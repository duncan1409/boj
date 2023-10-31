#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

void Solution(string word)
{
	string result;
	result = "~";

	for (int i = 0; i < word.size() - 2; i++)
	{
		for (int j = i + 1; j < word.size() - 1; j++)
		{
			string temp;
			for (int u = i; u >= 0; u--)
				temp += word[u];

			for (int u = j; u > i; u--)
				temp += word[u];

			for (int u = word.size() - 1; u > j; u--)
				temp += word[u];

			if (result > temp)
				result = temp;
		}
	}
	cout << result << endl;
}
int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력
	string word;
	cin >> word;
	Solution(word);

	return 0;
}