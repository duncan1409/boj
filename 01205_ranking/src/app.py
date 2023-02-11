import sys
# sys.stdin = open('input.txt')
input = sys.stdin.readline

n, new, p = map(int, input().split())

if n == 0:
    print(1)
else:
    rank = list(map(int, input().split()))

    if rank[-1] and n == p >= new:
        print(-1)
# 새로운 점수 리스트에 추가 및 정렬
    else:
        rank.append(new)
        rank.sort(reverse=True)
        ranking = rank.index(new)
        print(ranking+1)
