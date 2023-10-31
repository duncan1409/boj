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
	// GCD
	int C;
	while (B != 0)
	{
		// 유클리드 호제법
		C = A % B;
		A = B;
		B = C;
	}
	return A;
}
int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력
	int A, B;
	cin >> A >> B;
	int G = Solution(A, B);
	cout << G << endl;
	cout << A * B / G;

	return 0;
}