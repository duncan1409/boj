#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
void MatchBalance(string input)
{
  stack<char> stack;
  bool flag = 0;

/*
  Stack 멤버함수

               Pop
   Top   ∎     ⇕     
         ∎    Push
         ∎
         ∎
  Bottom ∎ 

*/
  for (int i = 0; i < input.length(); i++)
  {
    char bracket = input[i];

    if ((bracket == '(') || (bracket == '['))
      stack.push(bracket);
    else if (bracket == ')')
    {
      if (!stack.empty() && stack.top() == '(')
        stack.pop();

      else
      {
        flag = 1;
        break;
      }
    }
    else if (bracket == ']')
    {
      if (!stack.empty() && stack.top() == '[')
        stack.pop();
      else
      {
        flag = 1;
        break;
      }
    }
  }
  if (flag == 0 && stack.empty())
    cout << "yes" << endl;
  else
    cout << "no" << endl;
}

int main()
{
  freopen("input.txt", "r", stdin);
  while (1)
  {
    string input;
    getline(cin, input);
    if (input == ".")
      break;

    MatchBalance(input);
  }
  return 0;
}