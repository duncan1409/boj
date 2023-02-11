#include <iostream>

using namespace std;

int main()
{

	freopen("input.txt", "r", stdin);
	int N, M, K;
	int chk = 1, count = 0;

	cin >> N >> M >> K;

	while (N / 2 && M)
	{
		N -= 2;
		M--;
		count++;
	}

	if (M > 0)
	{
		K -= M;
	}
	if (N > 0)
	{
		K -= N;
	}

	while (K > 0 && count != 0)
	{
		count--;
		K -= 3;
	}

	cout << count;

	return 0;
}
