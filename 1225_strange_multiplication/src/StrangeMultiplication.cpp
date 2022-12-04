#include <iostream>
#include <cstring>
using namespace std;
long long int sum;
void StrangeMultiplication(string A, string B)
{
  for (int i = 0; i < A.length(); i++)
  {
    for (int j = 0; j < B.length(); j++)
    {
      char _A = A[i];
      char _B = B[j];

      sum += ((_A - '0') * (_B - '0'));
    }
  }
}
int main()
{

  string A, B;
  cin >> A >> B;
  
  cout<<sum;
  return 0;
}