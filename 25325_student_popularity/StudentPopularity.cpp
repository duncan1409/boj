#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

/*void Count(int n,  vector<string>names, string *vote, int *result)
{//find ... index 배출
  for (int i=0; i<n; i++)
  {
    for ( int j=0; j<n; j++){
      if (vote[j].find(names[i]))
        result[i]++;
    }
  }

  for (int i=0; i<n; i++)
  {
    cout<<names[i]<<" "<<result[i]<<endl;
  }
}*/
int main(int args, const char *argv[])
{
  freopen("input.txt", "r", stdin);
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  vector<string> names;
  vector<string> votes;
  int result[n]={0,};

  cin >> n;
  for (int i=0; i<n; i++)
  {
    string name;
    cin >> name;
    names.push_back(name);
  }


  for (int i = 0; i < n; i++)
  {
    string vote;
    cin >> vote;
    votes.push_back(vote);
  }
  
  for (int i=0; i<4; i++)
    cout<<votes[i]<<endl;

  //Count(n, names, vote, result);
  return 0;
}