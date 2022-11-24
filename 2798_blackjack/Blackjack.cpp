#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void Solution(int N, int M, vector<int> v)
{
  int max = 0;
  for (int i = 0; i < v.size() - 2; i++)
  {
    for (int j = i + 1; j < v.size() - 1; j++)
    {
      for (int k = j + 1; k < v.size(); k++)
      {
        int sum = v[i] + v[j] + v[k];
        if (max < sum && sum <= M)
          max = sum;
      }
    }
  }
  cout << max;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  freopen("input.txt", "r", stdin);
  int N, M;
  cin >> N >> M;
  vector<int> v(N);

  for (int i = 0; i < N; i++)
    cin >> v[i];
  sort(v.begin(), v.end()); //주소 begin~end.

  Solution(N, M, v);

  return 0;
}