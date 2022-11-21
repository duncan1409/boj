#include <iostream>
using namespace std;
void CompareWith(long long int A, long long int B)
{
  if (A > B)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
int main()
{
  long long int A, B;
  while (1)
  {
    cin >> A >> B;
    if (A == 0 && B == 0)
      break;
    CompareWith(A, B);
  }
  return 0;
}