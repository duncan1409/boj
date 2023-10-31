import sys
sys.stdin = open("input.txt")


def Solution(N, M):
    print(N//M)
    print(N % M)


# input
money, people = map(int, input().split())

Solution(money, people)
