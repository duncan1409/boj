#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

void Solution(int N, int X, int *numbers)
{
	int result[10001];
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		if (numbers[i] < X)
		{
			result[count] = numbers[i];
			count++;
		}
	}
	for (int i = 0; i < count; i++)
		cout << result[i] << " ";
}

int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력

	int N, X;
	int numbers[10001];
	cin >> N >> X;
	for (int i = 0; i < N; i++)
		cin >> numbers[i];

	Solution(N, X, numbers);

	return 0;
}