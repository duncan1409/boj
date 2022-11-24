#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool compareWith(string A, string B)
{
  if (A.length() == B.length())
    return A < B; //오름차순 정렬
  else
    return A.length() < B.length(); //길이의 오름차순 정렬
}
int main()
{
  int tcase;
  vector<string> vec;
  cin >> tcase;
  for (int i = 0; i < tcase; i++)
  {
    string str;
    cin>>str;
    if (find(vec.begin(), vec.end(), str)==vec.end())
    //begin end는 iterator의 멤버함수이므로 포인터로 생각.
    //vec.end면 vec의 마지막 값보다 +1이므로 중복을 제거할 수 있게됨. 
      vec.push_back(str);
    //Queue형식으로 삽입.
  }
  sort(vec.begin(), vec.end(), compareWith);//오름차순, 내림차순으로는 모두가능

  for(int i=0; i<vec.size(); i++)
    cout<<vec[i]<<'\n';
  return 0;
}

/*
[STL] Vector
# Declare
vector <TYPE> NAME;
vector <TYPE> NAME(SIZE);
vector <TYPE> NAME(SIZE, initNUM);
primary member functions
1. push_back
2. pop_back
3. front
vector Queue의 fornt 값
4. back
vector Queue의 rear(back) 값
5. clear
6. begin
vector의 첫번째 데이터 위치.
7. end
vector의 마지막 데이터 위치의 다음
8. rbegin
9. rend
10. reverse
*/