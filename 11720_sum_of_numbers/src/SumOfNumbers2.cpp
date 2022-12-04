#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
//좋은 수학 풀이이지만 overflow.
int SumNumbers(int N, int numbers)
{
  int result = 0;
  while (N--)
  {
    result += numbers / pow(10, N);
    numbers = numbers % (int)pow(10, N);
  }

  return result + numbers;
}
int main(int argc, const char *argv[])
{
  freopen("input.txt", "r", stdin);
  int N;
  int numbers;

  cin >> N >> numbers;
  cout << SumNumbers(N, numbers);

  return 0;
}
