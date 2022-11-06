import random

def BinarySearch(data, search):
  if len(data)==1 and search==data[0]:
    return True
  if len(data)==1 and search!=data[0]:
    return False
  if len(data)==0:
    return False
  medium=len(data)//2

  # recursive function part
  if search>data[medium]:
    return BinarySearch(data[medium:], search)
  else:
    return BinarySearch(data[:medium], search)

data_list=random.sample(range(100),10)
print(data_list)