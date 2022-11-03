#include <iostream>
using namespace std;
int main()
{
  int N;
  cin >> N;
  N++;
  //while은 느리다. 큰 수 에서 약하다.
  while (N-- && N > 0)
  {
    cout << N << "\n"; //endl 사용 시, 시간초과난다.
  }
  return 0;
}