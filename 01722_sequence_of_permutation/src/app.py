import math
import sys


def get_kth_permutation(n, k):
    numbers = list(range(1, n+1))
    permutation = []

    # factorial 계산을 위한 팩토리얼 테이블 생성
    factorial = [1] * (n+1)
    for i in range(2, n+1):
        factorial[i] = factorial[i-1] * i

    # k번째 순열 계산
    k -= 1
    for i in range(n, 0, -1):
        index = k // factorial[i]
        permutation.append(numbers[index])
        numbers.pop(index)
        k %= factorial[i]

    return permutation


def get_permutation_index(n, permutation):
    numbers = list(range(1, n+1))
    index = 0

    # factorial 계산을 위한 팩토리얼 테이블 생성
    factorial = [1] * (n+1)
    for i in range(2, n+1):
        factorial[i] = factorial[i-1] * i

    # 주어진 순열의 인덱스 계산
    for i in range(n):
        smaller_count = numbers.index(permutation[i])
        index += smaller_count * factorial[n-i-1]
        numbers.pop(smaller_count)

    return index + 1


N = int(sys.stdin.readline().rstrip())
problem, *values = map(int, sys.stdin.readline().split())

if problem == 1:
    k = values[0]
    permutation = get_kth_permutation(N, k)
    print(*permutation)
elif problem == 2:
    permutation = values
    index = get_permutation_index(N, permutation)
    print(index)
