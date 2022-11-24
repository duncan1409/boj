#include <iostream>
using namespace std;
// Fibonacci: Fn = Fn-1 + Fn-2
//재귀방식으로 풀면 BigO(2^n)임.
// DP로 풀자
long long int arr[10001] = {
    0,
};
long long int Fibonacci(int n)
{
  if (n == 0)
  {
    arr[n] = 0;
    return arr[n];
  }
  if (n == 1)
  {
    arr[n] = 1;
    return arr[n];
  }
  if (arr[n]!=0) return arr[n];
  /*
  DP
  이미 계산된 결과(작은 문제)는 별도의 메모리 영역에 저장하여 다시 계산하지 않도록 한다.

  (조건)

  - 큰 문제를 작은 문제로 나눌 수 있고 그 작은 문제의 답을 모에서 큰 문제를 해결할 수 있는 경우
  - 동일한 작은 문제를 반복적으로 해결해야하는 경우
  */
  arr[n]=Fibonacci(n-1)+Fibonacci(n-2);
  return arr[n];
}
int main()
{
  int n;
  cin >> n;

  cout << Fibonacci(n);

  return 0;
}