#include <iostream>
#include <vector>
#include <cstring>  
#include <algorithm> //reverse
using namespace std;
int main()
{
  freopen("input.txt", "r", stdin);
  int tcase;
  vector<string> vec;
  cin >> tcase;
  for (int i = 0; i < tcase; i++)
  {
    string sentence;
    cin>>sentence;
    int checkPoint = 0;
    for (int i = 0; i < sentence.length(); i++)
      if (sentence[i] != ' ')
      {
        vec.push_back(sentence.substr(checkPoint, i));
        checkPoint = i;
      }
  }
  for (int i = 0; i < vec.size(); i++)
  {
    vec[i]=reverse(vec[i].begin(), vec[i].end());
  }
  for (int i=0; i<vec.size(); i++)
    cout<<vec[i]<<" ";
  return 0;
}