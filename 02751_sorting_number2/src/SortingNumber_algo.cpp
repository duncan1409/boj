#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
  cin>>N;
  vector <int> numbers;
  int num;
  while (N--){
    cin>>num;
    numbers.push_back(num);
  }
  sort(numbers.begin(), numbers.end());

  for(auto loop: numbers)
   cout<<loop<<'\n';
  return 0;
}

/*
(1. 중복 제거- 필요없음)
2. 정렬
...
크기가 N인 배열의 경우.
sort(arr, arr+N);
벡터의 경우
sort(v.begin, v.end);


*/