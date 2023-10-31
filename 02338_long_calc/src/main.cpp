#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std;

void Solution(int A, int B)
{
	cout << A + B << endl;
	cout << A - B << endl;
	cout << A * B << endl;
}
int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long a, b;
	cin >> a >> b;

	Solution(a, b);

	return 0;
}