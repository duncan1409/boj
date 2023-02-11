#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std;

void Solution(string numbers)
{
    int sum = 0;
    for (int i = 0; i < numbers.length(); i++)
    {
        sum += numbers[i] - '0';
    }
    cout << sum;
}
int main()
{
    freopen("input.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    string numbers;
    cin >> N >> numbers;

    Solution(numbers);

    return 0;
}