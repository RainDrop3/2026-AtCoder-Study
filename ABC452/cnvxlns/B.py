import sys
import math
import heapq
from collections import deque, defaultdict, Counter
from itertools import permutations, combinations, product
from bisect import bisect_left, bisect_right

sys.setrecursionlimit(int(1e6))
inf = math.inf
input = lambda: sys.stdin.readline().rstrip("\n")

MOD = int(1e9 + 7)

drc = [(-1, 0), (0, 1), (1, 0), (0, -1)]

def init():

    return

def solve():
    H, W = map(int, input().split())

    for r in range(H):
        for c in range(W):
            if r == 0 or r == H - 1 or c == 0 or c == W - 1:
                print("#", end = '')
            else:
                print(".", end = '')
        print()
    return 

if __name__ == "__main__":
    init()
    t = 1
    # t = int(input())
    while t:
        t -= 1
        solve()
        