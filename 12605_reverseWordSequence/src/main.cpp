#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include <vector>
#include <stack>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

void Solution()
{
	stack<string> stk;
	string str;
	string temp;
	getline(cin, str);
	stringstream sstream(str);

	while (getline(sstream, temp, ' '))
		stk.push(temp);

	cout << "Case #1: ";
	while (!stk.empty())
	{
		cout << stk.top() << " ";
		stk.pop();
	}

	cout << endl;
}
int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력

	int N;
	cin >> N;

	cin.ignore();
	for (int i = 0; i < N; i++)
		Solution();
	return 0;
}