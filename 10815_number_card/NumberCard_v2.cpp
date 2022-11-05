//이분탐색
#include <iostream>
#include <cstring>
using namespace std;
void GuessCards (int N, int M, int *SangGeun, int *Guess)
{
  int result[M]={0, };
  for (int i=0; i<N; i++)
  {
    for(int j=0; j<M; j++)
    {
      if(SangGeun[i]==Guess[j])
        result[j]++;
    }
  }
  for (int i=0; i<M; i++)
    cout<<result[i]<<" ";
}
int main()
{
  freopen("input.txt", "r", stdin);
  int N=0, M=0;
  
  cin>>N;
  int SangGeun[N]={0, };
  for(int i=0; i<N;i++)
  {
    cin>>SangGeun[i];
  }
  
  cin>>M;
  int Guess[M]={0, };
  for (int i=0; i<M; i++)
  {
    cin>>Guess[i];
  }
  
  GuessCards(N, M, SangGeun, Guess);

  return 0;
}