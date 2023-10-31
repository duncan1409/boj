#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

int N, M;
int arr[100010];

void Solution(int key)
{
	int start = 0;
	int end = N - 1;
	int mid;

	while (end >= start)
	{
		mid = (start + end) / 2;
		if (arr[mid] == key)
		{
			cout << 1 << "\n";
			return;
		}
		else if (arr[mid] > key)
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	cout << 0 << "\n";
	return;
}
int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력

	cin >> N;
	int temp;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		arr[i] = temp;
	}

	sort(arr, arr + N);

	cin >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> temp;
		Solution(temp);
	}
	return 0;
}