#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

int Solution(int N, int K, int *A)
{
	int i, j;
	int key;
	int cnt = 0;

	for (i = 1; i < N; i++)
	{
		for (j = i - 1; j >= 0; j--)
		{
			if (A[j] > key)
			{
				cnt++;
				A[j + 1] = A[j];
				if (cnt == K)
					return key;
			}
			else
				break;
		}
		A[j + 1] = key;
	}
	return -1;
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