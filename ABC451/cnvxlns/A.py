import sys
import math
import heapq
from collections import deque, defaultdict, Counter
from itertools import permutations, combinations, product
from bisect import bisect_left, bisect_right

sys.setrecursionlimit(int(1e6))
inf = math.inf
input = sys.stdin.readline

MOD = 1e9 + 7

drc = [(-1, 0), (0, 1), (1, 0), (0, -1)]

def init():

    return

def solve():
    s = input()
    print(len(s))
    if len(s) % 5 == 0:
        print("Yes")
    else:
        print("No")
    return 

if __name__ == "__main__":
    init()
    t = 1
    # t = int(input())
    while t:
        t -= 1
        solve()
        