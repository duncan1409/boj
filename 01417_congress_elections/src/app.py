from collections import deque
import sys
sys.stdin = open('input.txt')


n = int(input())
elect = []
maxElectedIdx = 0
dasom = 0
answer = 0
for i in range(n):
    elect.append(int(input()))

dasom = elect[0]
elect = elect[1:]

elect.sort(reverse=True)

if n == 1:
    print(0)

else:
    maxElectedIdx = elect.index(max(elect))

    if dasom == elect[maxElectedIdx]:
        print(1)

    else:

        while dasom < elect[maxElectedIdx]:
            for k in range(n-1):
                if elect[k] > dasom:
                    elect[k] -= 1
                    dasom += 1
                    answer += 1
            maxElectedIdx = elect.index(max(elect))
        if dasom == elect[maxElectedIdx]:
            answer += 1
        print(answer)
