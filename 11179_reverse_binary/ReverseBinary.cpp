#include <iostream>
#include <cstring>
#include <deque>
#include <cmath>

using namespace std;
void ChangeToBinary(long long int num, deque<int> list)
{
	while (num != 1)
	{
		list.push_front(num % 2);
		num /= 2;
	}
	list.push_front(1);
}
void ReverseBinary(deque<int>binary, deque<int>result)
{
	for (int i = 0; i < binary.size(); i++)
	{
		result[i] = binary[binary.size() - 1 - i];
	}
	
}
int ChangeToDecimal (deque<int>list)
{
	int sum = 0;
	int idx = 0;
	
	while (!list.empty())
	{
		int num = list[list.size() - 1];
		list.pop_back();
		sum += num * pow(2, idx);
		idx++;
	}

	return sum;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long int num;
	cin >> num;
	deque<int> list;
	ChangeToBinary(num, list);

	deque<int> new_list = list;
	ReverseBinary(list, new_list);

	cout << ChangeToDecimal << "\n";

	return 0;
}

/*
10진수가 2로 나누고
*/