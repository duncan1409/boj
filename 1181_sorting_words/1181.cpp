#include <iostream>
#include <cstring>
using namespace std;
void InsertionSort(char *A, int A_length)
{
  int i, j, key;
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

int main()
{
  int N;
  cin>>N;
  char words[N];
  for(int i=0; i<N; i++)
  {
    cin>>words[i];
  }
  //Insertion Algorithms... But value is the number of characters.
  InsertionSort(words, words.length)
  {

  }
}