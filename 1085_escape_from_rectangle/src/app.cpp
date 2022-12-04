#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int Escape(int x, int y, int w, int h)
{
  //x, w-x, y, h-y
  int values[4]={x, w-x, y, h-y};
  sort(values, values+4);

  return values[0];
}
int main(int args, const char * argv[])
{
  int x, y, w, h;
  cin>>x>>y>>w>>h;

  cout<<Escape (x, y, w, h);

  return 0;
}