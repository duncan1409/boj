#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

string Solution(int N, int K, int *A)
{
	int temp;
	int cnt = 0;
	string res = "-1";
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N - i - 1; j++)
		{
			if (A[j] > A[j + 1])
			{
				cnt++;
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;

				if (cnt == K)
				{
					string x = to_string(A[j]);
					string y = to_string(A[j + 1]);
					return x + " " + y;
				}
			}
		}
	}
	return "-1";
}
int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력
	int A[10001];
	int N, K;

	cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	cout << Solution(N, K, A);
	return 0;
}