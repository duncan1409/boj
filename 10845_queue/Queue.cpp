#include <iostream>

#include <cstring>

using namespace std;

class DataNode
{

private:
  int data;

  DataNode *next;

public:
// int 타입의 값을 받는 생성자 생성. 그리고 이니셜라이져로 value로 Data를 초기화하고 next의 값을 NULL로 초기화함.
  DataNode(int value) : data(value), next(NULL){};
  void SetNext(DataNode *value)
  {
    next = value;
  }
  int GetData()
  {
    return data;
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
  DataNode *rear;
public:
  Queue() : size(0), front(NULL), rear(NULL) {}
  void push(int Data)
  {
    DataNode *newNode = new DataNode(Data);
    if (front == NULL)
    {
      front = newNode;
      rear = newNode;
    }
    else
    {
      rear->SetNext(newNode);
      rear = newNode;
    }
    size++;
  }
  int pop()
  {
    if (!isEmpty())
    {
      DataNode *temp = front;
      int value = temp->GetData();
      if (temp->GetNext())
      { // front의 next가 존재하면
        front = temp->GetNext(); // front의 next를 front로 지정.
      }
      else
      { // front의 next가 존재하지 않으면 NULL로 돌아감
        front = NULL;
        rear = NULL;
      }
      size--;
      delete temp;
      return value;
    }
    return -1;
  }
  int getSize()
  {
    return size;
  }
  bool isEmpty()
  {
    if (front == NULL)
    {
      return true;
    }
    return false;
  }
  int GetFrontValue()
  {
    if (front != NULL)
    {
      return front->GetData();
    }
    return -1;
  }
  int GetRearValue()
  {
    if (rear != NULL)
    {
      return rear->GetData();
    }
    return -1;
  }
};