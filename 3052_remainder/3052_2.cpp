#include <iostream>
#include <set>
using namespace std;
int main()
{
  /*
    set 이용
    set container는 중복 값을 받지 않기 때문에 나머지 중 같은 수는 제외되고 담김.
    set container의 size를 구하면 담긴 원소 개수를 알 수 있다.
  */
  freopen("input.txt","r",stdin);
  int numbers[10];
  int count =0;
  for(int i=0; i<10;i++)
    cin>>numbers[i];

  set<int>remainder;
  for(int i=0; i<10; i++)
    remainder.insert(numbers[i]%42);

  cout<< remainder.size();
  return 0;
}