#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	freopen("input.txt", "r", stdin);
	string input;
	cin >> input;
	int zero = 0, one = 0;

	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] != input[i + 1])
		{
			if (input[i] == '0')
				zero++;
			else
				one++;
		}
	}
	cout << min(zero, one);
}