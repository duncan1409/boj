#include <iostream>
using namespace std;
int arr[31], studentsNum;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  freopen("input.txt", "r", stdin);

  for (int i = 1; i < 29; i++)
  {
    cin >> studentsNum;
    arr[studentsNum] = 1;
  }
  for (int i = 1; i < 31; i++)
  {
    if (arr[i] == 0)
      cout << i << endl;
  }
  return 0;
}