#include <iostream>
using namespace std;
int main()
{
  int N;
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      cout.width(5);
      cout << right << "*";
    }
    cout << endl;
  }

  return 0;
}