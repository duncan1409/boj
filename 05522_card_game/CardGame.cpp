#include <iostream>
using namespace std;
int main(int args, const char *argv[])
{
  freopen("input.txt", "r", stdin);
  int scores[5] = {
      0,
  };
  int sum = 0;
  for (int i = 0; i < 5; i++)
  {
    cin >> scores[i];
    sum += scores[i];
  }

  cout<<sum;

  return 0;
}