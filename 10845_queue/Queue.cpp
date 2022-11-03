#include <iostream>
#include <cstring>
class DataNode
{
private:
  int number;
  DataNode *next;

public:
  // int 타입의 값을 받는 생성자를 생성하고 이니셜라이져로 value를 number로 초기화, next 값을 NULL로 초기화.
  DataNode(int value) : number(value), next(NULL){};
  void SetNumber(int value)
  {
    number = value;
  }
  void SetNext(DataNode *value)
  {
    next = value;
  }
  int GetNumber()
  {
    return number;
  }
  DataNode *GetNext()
  {
    return next;
  }
};
class Queue
{
private:
  int size;
  DataNode *front;
  DataNode *back;

public:
  Queue() : size(0), front(NULL), back(NULL) {}
  void Push(int number)
  {
    DataNode *newNode = new DataNode(number);
    if (front == NULL)
    {
      front = newNode;
      back = newNode;
    }
    else
    {
      back->SetNext(newNode);
      back = newNode;
    }
    size++;
  }
  int Pop()
  {
  }
  int GetSize()
  {
  }
  bool IsEmpty()
  {

  }
  int GetFrontValue()
  {

  }
  int GetBackValue()
  {

  }
};
int main(int argc, const char* argv[])
{
}