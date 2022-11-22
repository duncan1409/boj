#include <iostream>
#include <vector>
#include <string>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  vector<string> fileNames(n);
  for (int i = 0; i < n; i++)
    cin >> fileNames[i];
  int len = fileNames[0].size();
  string answer;
  for (int i = 0; i < len; i++)
  {
    const char character = fileNames[0][i];

    for (auto f : fileNames)
      if (character != f[i])
      {
        answer += '?';
        break;
      }
    if (i == answer.size())
      answer += character;
  }

  cout << answer;
}
int main(int args, const char* argv[])
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  freopen("input.txt", "r", stdin);

  solve();
}