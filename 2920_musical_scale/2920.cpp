#include <iostream>
<<<<<<< HEAD
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
=======
#include <cstring>
using namespace std;

string FindScale(int *scale)
{
  int count = 0;
  string result;
  for (int i = 0; i < 7; i++)
  {
    if (scale[i] < scale[i+1])
      count++;
  }
  if (count == 7)
    result = "ascending";
  else if (count == 0)
    result = "descending";
  else
    result = "mixed";

  return result;
}

int main(int argc, const char *argv[])
{
  int scale[8];
  for (int i = 0; i < 8; i++)
    cin >> scale[i];

  cout << FindScale(scale);
>>>>>>> 27401f16955752253aa33737693c0e319d5341c1

  return 0;
}