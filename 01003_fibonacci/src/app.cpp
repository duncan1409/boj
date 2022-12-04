#include <iostream>
#include <vector>
using namespace std;

vector<int> fib0(41, -1);
vector<int> fib1(41, -1);

int Fibonacci_0(int n)
{
  if (n == 0)
    return 1;
  else if (n == 1)
    return 0;
  else if (fib0[n] != -1)
    return fib0[n];
  else
    return fib0[n] = Fibonacci_0(n - 1) + Fibonacci_0(n - 2);
}
int Fibonacci_1(int n)
{
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  else if (fib1[n] != -1)
    return fib1[n];
  else
    return fib1[n] = Fibonacci_1(n - 1) + Fibonacci_1(n - 2);
}
int main()
{
  //freopen("input.txt", "r", stdin);
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int T, N;
  cin>>T;
  while(T--)
  {
    cin>>N;
    cout<<Fibonacci_0(N)<<" "<<Fibonacci_1(N)<<endl;
  }
  return 0;
}