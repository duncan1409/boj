#include <iostream>
#include <cmath>     //제곱
#include <algorithm> // 정렬
using namespace std;
void RightTriangle(int * angles)
{
  if (pow(angles[2],2)==pow(angles[0],2)+pow(angles[1],2))
    cout<<"right"<<endl;
  else
    cout<<"wrong"<<endl;

}
int main(int args, const char *argv[])
{
  int angles[3];
  while (1)
  {
    for (int i = 0; i < 3; i++)
      cin >> angles[i];
    sort(angles, angles + 3);

    if (angles[0] == 0 && angles[1] == 0 && angles[2] == 0)
      break;
    else
      RightTriangle(angles);
  }

  return 0;
}