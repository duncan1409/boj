#include <iostream>
#include <cstring>
using namespace std;
void FindNumberOfNumber(int * array, int N, int V)
{
  int result = 0;
  for (int i = 0; i <N; i++)
  {
    if (array[i] == V)
      result++;
  }
  cout<< result;
}
int main()
{
  freopen("input.txt", "r", stdin);
  int N, V;
  int array[100];
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin>>array[i];
  }
  cin >> V;
  FindNumberOfNumber(array, N, V);
  return 0;
}