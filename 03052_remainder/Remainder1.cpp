#include <iostream>
using namespace std;
/*
  InsertionSort(삽입정렬)을 활용!
*/
void InsertionSort(int A_length, int *A)
{
  int i = 0;
  int j = 0;
  int key = 0;
  for (j = 1; j < A_length; j++)
  {
    key = A[j];
    i = j - 1;
    while (i >= 0 && A[i] > key)
    {
      A[i + 1] = A[i];
      i--;
    }
    A[i + 1] = key;
  }
}
int HowMuchVarious(int *remainders)
{
  int result = 1;
  for (int i = 0; i < 10; i++)
  {
    if (remainders[i] < remainders[i + 1])
      result++;
  }

  return result;
}
int main()
{
  //freopen("input.txt", "r", stdin);
  int numbers[10] = {
      0,
  };
  int remainders[10] = {
      0,
  };

  for (int i = 0; i < 10; i++)
  {
    cin >> numbers[i];
    remainders[i] = numbers[i] % 42;
  }
  InsertionSort(10, remainders);
  cout << HowMuchVarious(remainders);

  return 0;
}