#include <iostream>
#include <cstring>
using namespace std;
void FindAlphabet(string word)
{
  string alphabet ="abcdefghijklmnopqrstuvwxyz";
  for(int i=0; i<alphabet.length();i++)
    cout<<(int)word.find(alphabet[i])<<" ";
}
int main()
{
  string word;
  cin>>word;

  FindAlphabet(word);
  return 0;
}