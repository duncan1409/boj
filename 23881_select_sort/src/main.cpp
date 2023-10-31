#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

void Solution(int *A, int N, int K)
{
}
int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력
	int N, K;

	cin >> N >> K;
	auto A = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	for (int i = N - 1; i; i--)
	{
		auto p = max_element(A, A + i + 1);
		if (p != A + i)
		{
			if (!--K)
			{
				cout << min(*p, A[i]) << " " << max(*p, A[i]);
				return 0;
			}
			swap(*p, A[i]);
		}
	}
	cout << -1;
}