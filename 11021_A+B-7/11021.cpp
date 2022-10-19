#include <iostream>
#pragma warning(disable:4996)
using namespace std;
int main()
{
  freopen("./input.txt", "r", stdin);
  int A, B, T;
  scanf("%d", &T);
  for (int i; i<T; i++)
  {
    scanf("%d %d", &A, &B);
    printf("Case #%d: %d\n", i+1, A+B);
  }
  return 0;
}
