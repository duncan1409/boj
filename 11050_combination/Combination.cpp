#include <iostream>
using namespace std;
int Factorial(int n)
{
  if (n==1)
    return 1;
  else 
    return n * Factorial(n - 1);
}
int Combination(int N, int K)
{
  return Factorial(N)/(Factorial(K)*Factorial(N-K));
}

int main(int args, const char*argv[])
{
  int n, k;
  cin>>n>>k;
  cout<<Combination(n, k);
  return 0;
}
