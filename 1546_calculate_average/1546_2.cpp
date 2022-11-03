#include <iostream>
using namespace std;
// Output은 참조로 선언.
void FindMax(double *score, double &M)
{
  //최댓값을 찾는 과정
  for (int i = 0; i < 1000; i++)
  {
    if (M < score[i])
      M = score[i];
  }
}
void SejoonMethod(double *score, double *score_new, double &M)
{
  for (int i = 0; i < 1000; i++)
    score_new[i]=score[i]/M*100;
  
}
void FindAverage(double *score_new, double N)
{
  double sum = 0;
  for (int i=0; i<1000; i++)
    sum+=score_new[i];
  
  cout<<sum/N;
}
int main()
{
  freopen("input.txt", "r", stdin);
  double M=0;
  int N = 0;
  double score[1000] = {
      0,
  };
  double score_new[1000] = {
      0,
  };
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> score[i];
  }

  FindMax(score, M);
  SejoonMethod(score, score_new, M);
  FindAverage(score_new, N);

  return 0;
}