#include <iostream>
using namespace std;
int main()
{
  freopen("input.txt", "r", stdin);
  int A, B, tcase;
  cin >> tcase;
  for (int i = 0; i < tcase; i++)
  {
    cin >> A >> B;
    cout << A + B << "\n";
  }
  return 0;
}