#include <iostream>
using namespace std;
/*
  definition of ascending function
  if x1 < x2 => f(x1) < f(x2)
*/
void DetectScale(int *chords)
{
  int result = 0;
  for (int i = 0; i < 7; i++)
  {
    if (chords[i] < chords[i+1])
      result++;
  }

  if(result==7)
    cout<<"ascending";
  else if (result==0)
    cout<<"descending";
  else    
    cout<<"mixed";
}
int main()
{
  int *chords;
  for (int i=0; i<8;i++)
    cin >> *(chords+i);

  DetectScale(chords);

  return 0;
}