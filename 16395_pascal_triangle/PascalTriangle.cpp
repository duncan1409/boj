#include <iostream>
#include <algorithm>
using namespace std;

int comb[30][30];
int Combination(int n, int k)
{
  if(k==0||n==k)
    return comb[n][k];
  else if(comb[n][k]!=1)
    return comb[n][k];
  else
    return comb[n][k]=Combination(n-1,k-1)+Combination(n-1,k);
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, k;
  cin>>n>>k;
  fill(comb[0],comb[30],1);

  cout<<Combination(n-1, k-1);
  return 0;
}