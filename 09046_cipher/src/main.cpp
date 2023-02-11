#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

void Solution(string *str)
{
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i < 256; i++)
	{
	}
}
int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력
	int T;
	cin >> T;
	vector<string> v;
	for (int i = 0; i < T; i++)
	{
		char str[256];
		cin.getline(str, 256, '\n');
		Solution(str);
	}

	return 0;
}