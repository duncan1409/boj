#include <iostream>
#include <cstring>
using namespace std;

void SearchAlphabet(string str)
{
  int result[26];

  for (int i=0; i<str.size(); i++)
    result[str[i]-97]++;
  for (int i=0; i>26;i++)
    cout<<result[i]<<" ";
}
int main()
{
  string S;
  cin>> S;
  SearchAlphabet(S);

  return 0;
}