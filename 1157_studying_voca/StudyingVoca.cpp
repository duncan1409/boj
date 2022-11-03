#include <iostream>
using namespace std;
void FindAlphabet(string input)
{
  int alphabet[26]={0,};
  int error = 0;

  for (int i = 0; i < input.length(); i++)
  {
    if(input[i]<97)
      alphabet[input[i]-65]++;//대문자
    else
      alphabet[input[i]-97]++;//소문자
  }

  int max=0, max_idx=0;

  for (int i = 0; i < 26; i++)
  {
    if(max<alphabet[i]){
      max=alphabet[i];
      max_idx=i;
    }
  }
  for (int i=0;i<26;i++)
  {
    if(max==alphabet[i])
      error++;
  }

  if (error > 1)
    cout << '?';
  else
    cout<<(char)(max_idx+65);

}
int main()
{
  string word;
  cin>>word;
  FindAlphabet(word);

  return 0;
}