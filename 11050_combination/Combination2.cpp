#include <iostream>
using namespace std;

//nCr = n-1 C r-1 + n-1 C r
int Combination(int N, int K)
{
  if (K==0 || K==N)
    return 1;
  else
    return Combination(N-1, K-1) + Combination(N-1, K);
}
int main()
{
  int n, k;
  cin>>n>>k;
  cout<<Combination(n, k);

  return 0;
}