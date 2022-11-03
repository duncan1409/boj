#include <iostream>
using namespace std;
int main()
{
  freopen("input.txt","r",stdin);
  int A, B=1;
  while (1)
  {
  cin>>A>>B;
  if (A==0&&B==0)
    break;
  else
    cout<<A+B<<endl;
  }
  return 0;
}