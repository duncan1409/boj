#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

void Solution(string str)
{
	int cnt;
	for (int i = 0; i < str.length(); i++)
	{
		// str[i]의 형식은 char, const *char의 형식을 따른다.
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			cnt++;
	}

	cout << cnt << endl;
}
int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력

	string sentences;

	while (sentences == "#")
	{
		cin.ignore();
		getline(cin, sentences);
		Solution(sentences);
	}

	return 0;
}