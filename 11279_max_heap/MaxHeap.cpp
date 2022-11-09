#pragma once
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

template <typename T>
class Heap
{
private:
  vector<T> heap;
  // 주어진 인덱스의 부모 인덱스를 가져온다.
  int _parent(int idx)
  {
    return (idx - 1) / 2;
  }
  // 주어진 인덱스의 왼쪽 인덱스를 가져온다.
  int _left(int idx)
  {
    return (2 * idx + 1);
  }
  // 주어진 인덱스의 오른쪽 인덱스를 가져온다.
  int _right(int idx)
  {
    return (2 * idx + 2);
  }
  void _heapify(int idx)
  {
    int l = this->_left(idx);
    int r = this->_right(idx);

    int largest = idx;
    if (l < heap.size() && heap[l] > heap[idx])
    {
      largest = l;
    }
    if (r < heap.size() && heap[r] > heap[largest])
    {
      largest = r;
    }
    if (largest != idx)
    {
      swap(heap[idx], heap[largest]);
      this->_heapify(largest);
    }
  }

public:
  Heap() {}
  void insert(T data)
  {
    heap.push_back(data);
    int idx = heap.size() - 1;
    // 부모 인덱스가 자식 인덱스보다 작다면 교환한다.
    while (idx != 0 && heap[this->_parent(idx)] < heap[idx])
    {
      swap(heap[idx], heap[this->_parent(idx)]);
      idx = this->_parent(idx);
    }
  }
  void pop()
  {
    if (heap.size() <= 0)
    {
      cout << "힙에 요소가 없습니다." << endl;
      return;
    }
    // 루트 요소를 맨 뒤로 보내고 heapify를 수행한다.
    int root = heap[0];
    heap[0] = heap[heap.size() - 1];
    heap.pop_back();
    this->_heapify(0);

    return;
  }
  T top()
  {
    return heap[0];
  }
  ~Heap()
  {
    delete heap;
  }
};