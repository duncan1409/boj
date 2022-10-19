#include <iostream>
using namespace std;
int main()
{
  freopen("./input.txt", "r", stdin);
  int X, N, a, b, result=0;
  cin >> X;
  cin >> N;
  while (N--)
  {
    cin >> a >> b;
    result+=a*b;
  }
  if (result==X)
    cout<<"Yes";
  else
    cout<<"No";

  return 0;
}