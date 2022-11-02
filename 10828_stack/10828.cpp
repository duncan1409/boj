#include <iostream>
#include <cstring>

using namespace std;

template <class T>
class Stack
{
private:
  T *stack;
  int _top;
  int _capacity;

public:
  Stack(int stack_capacity = 10);
  ~Stack() { delete[] stack; }
  bool IsEmpty() const;
  T & Top() const;
  void Push(const T & item);
  void Pop();
};
template <class T>
Stack<T>::Stack(int stack_capacity)//접근자 함수
    : capacity(stack_capacity)
{
  if (capacity < 1)
    throw "Stack capacity must be > 0" stack = new T[capacity];
  top = -1;
}
// Stack
template <class T>//접근자 함수
inline bool Stack<T>::IsEmpty() const
{
  return top == -1
}
// Top
template <class T>//접근자 함수
inline T &Stack<T>::Top() const
{
  if (IsEmpty())
    throw "Stack is empty";
  return stack[top];
}
// Push
template <class T>
void Stack<T>::Push(const T &x)
{ // Add x to the stack.
  if (top == capacity - 1)
  {
    ChangeSize1D(stack, capacity, 2 * capacity);
    capacity *= 2;
  }
  // add at stack top
  stack[++top] = x;
}
template <class T>
void Stack<T>::Pop()
{
  if (IsEmpty())
    throw "Stack is empty. Cannot delete.";
  stack[top--].~T(); // destructor for T
}

int main()
{
  int n;
  cin >> n;
}