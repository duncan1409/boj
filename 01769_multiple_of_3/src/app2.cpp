#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  string X;
  int sum = 0;
  int count = 0;

  cin >> X;
  for(int j=0; j<2; j++){//56이 11인데
  for(int i=0; i<X.length();i++)
  {
    sum+=X[i]-'0';
  }
  X=to_string(sum);
  cout<<sum<<endl;
  cout<<X<<endl;
  count++;
  }

  cout<<count<<"\n";
  if (stoi(X) % 3 == 0)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}