#include <iostream>
#include <algorithm>
using namespace std;

void Yutnori(int sum)
{
	if (sum == 4)
		cout << "E";
	else if (sum == 3)
		cout << "A";
	else if (sum == 2)
		cout << "B";
	else if (sum == 1)
		cout << "C";
	else if (sum == 0)
		cout << "D";
}

int main()
{
	freopen(".test/input.txt", "r", stdin);
	int n1, n2, n3, n4;
	for (int i = 0; i < 3; i++)
	{
		cin >> n1 >> n2 >> n3 >> n4;
		Yutnori(n1 + n2 + n3 + n4);
		cout<<"\n";
	}
	return 0;
}