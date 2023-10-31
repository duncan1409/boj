#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

int Solution(int A, int B)
{
	int k;
	while (A > 0)
	{
		int k = B;
		while (k > 0)
		{
			if (k == A)
			{
				return k * 10;
			}
			k = k / 2;
		}
		A = A / 2;
	}
	return k;
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
	for (int i = 0; i < T; i++)
	{
		int A, B;
		cin >> A >> B;
		cout << Solution(A, B) << endl;
	}
	return 0;
}