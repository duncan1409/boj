#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <math.h>
#include <cstring>
using namespace std;

vector<long long int> d(100001, 100001); // dp테이블 초기화
void HereIsYourChange(int N)
{
	d[1] = -1;
	d[2] = 1;
	d[3] = -1;
	d[4] = 2;
	d[5] = 1;
	// Bottom-Up
	for (long long int i = 6; i <= N; i++)
	{
		d[i] = min(d[i - 2], d[i - 5]) + 1;
	}

	if (d[N] >= 100001) // 거슬러주지 못하는 경우 -1 출력
		cout << -1 << endl;
	else
		cout << d[N] << endl; // 답안 출력
}
int main()
{
	long long int N;
	cin >> N;

	HereIsYourChange(N);
	return 0;
}