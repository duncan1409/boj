import sys
sys.stdin = open("input.txt")


def Solution(A, B):
    print(A+B)
    print(A-B)
    print(A*B)


# input
A = int(input())
B = int(input())

Solution(A, B)
