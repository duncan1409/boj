#include <iostream>
using namespace std;

long long int Fibonacci4(int N)
{
  long long int n;
  long long int n1=0, n2=1;
  
  for(int i=0; i<N-1; i++)
  {
    n= n1+n2;
    n1= n2;
    n2 = n;
  }

  return n2;
}
int main()
{
  int N;
  cin>>N;
  cout<<Fibonacci4(N);

  return 0;
}