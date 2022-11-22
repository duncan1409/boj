#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
void NameCompatibility(string name1, string name2)
{
  string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int letterStroke[26] = {3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};
  vector<int> v;
  for (int i = 0; i < name1.length(); i++)
  {
    v.push_back(letterStroke[alphabet.find(name1[i])]);
    v.push_back(letterStroke[alphabet.find(name2[i])]);
  }
  int size = v.size();
  while (size > 2)
  {
    for (int i = 0; i < size; i++)
    {
      v[i] = v[i] + v[i + 1];
    }
    size--;
  }
}
int main(int args, const char *argvp[])
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  return 0;
}