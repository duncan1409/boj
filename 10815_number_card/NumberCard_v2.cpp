#include <iostream>
#include <algorithm>
using namespace std;
int BinarySearch (int lengthData, int *data, int search)
{
  //ascending rule에 따라 sorting 되어 있는 것을 전제로 구성.
  int medium = lengthData/2;
  int newData[50000];

  if (lengthData ==1 && data[0]==search)
    return true;
  else if (lengthData ==1 && data[0]!=search)
    return false;
  else if(lengthData==0)
    return false;
  //recursive functional part
  else if (data[medium]==search)
    return true;
  else if (data[medium]>search)
    
    for (int i=0; i<medium; i++)
      newData[i]=data[i];
    
    return BinarySearch(medium, newData, search);
  else if (data[medium]<search)
    
    for (int i=0; i<lengthData-medium+1; i++)
      newData[i]=data[medium + i];
    
    return BinarySearch(lengthData-medium+1, newData, search);
  
}
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