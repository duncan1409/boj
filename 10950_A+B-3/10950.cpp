#include <iostream>
using namespace std;
int main()
{
  freopen("./input.txt", "r", stdin);
  int tcase, A, B;

  scanf("%d", &tcase);
  while (tcase--)
  {
    scanf("%d %d", &A, &B);
    printf("%d\n", A + B);
  }
  return 0;
}