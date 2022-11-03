#include <iostream>
#include <cstring>
using namespace std;
int CountWords(string str)
{
  int count = 1;
  if(str[0]==' '&&str[str.length()]==' ')
  {
    for (int i = 1; i < str.length()-1; i++)
    {
      if(str[i]==' ')
        count++;
    }
  }
  else if (str[0]==' '){
    for (int i = 1; i < str.length(); i++)
    {
      if(str[i]==' ')
        count++;
    }
  }
  else if(str[str.length()-1]==' '){
    for (int i = 0; i < str.length()-1; i++)
    {
      if(str[i]==' ')
        count++;
    }
  }
  else
    for (int i = 0; i < str.length(); i++)
    {
      if(str[i]==' ')
        count++;
    }
  return count;
}
int main()
{
  string str;
  getline(cin, str);

  cout<<CountWords(str);

  return 0;
}