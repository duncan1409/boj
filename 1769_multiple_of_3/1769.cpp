#include <iostream>
using namespace std;
int main()
{
  int X;
  int sum = 0;
  int count = 0;

  cin >> X;
  while (X > 10)
  {
    while (X)
    { //각자리 수 합을 구하는 코드
      sum += X % 10;
      X /= 10;
    }
    X = sum;
    count++;
  }

  cout<<count<<"\n";
  if (X % 3 == 0)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}