import sys
from heapq import *
input = sys.stdin.readline
T = []
for _ in range(int(input())):
    c, h = map(int, input().split())
    if c == 1:
        heappush(T, h)
    else:
        while T and T[0] <= h:
            heappop(T)
    print(len(T))
