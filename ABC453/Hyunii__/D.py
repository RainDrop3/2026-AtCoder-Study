import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)
from collections import deque
dxdy = [(-1, 0, "U"), (1, 0, "D"), (0, -1, "L"), (0, 1, "R")]

h, w = map(int, input().split())
graph = []
for _ in range(h):
    graph.append(list(input().rstrip()))

for i in range(h):
    for j in range(w):
        if graph[i][j] == "S":
            sx, sy = i, j
        elif graph[i][j] == "G":
            ex, ey = i, j
# print(sx, sy, ex, ey)

visited = set([(sx, sy, "")])
dq = deque([(sx, sy, "", "")])
while dq:
    x, y, prev, path = dq.popleft()

    if x == ex and y == ey:
        print("Yes")
        print(path)
        exit()

    for dx, dy, cur in dxdy:
        if graph[x][y] == 'o' and prev != cur:
            continue
        if graph[x][y] == 'x' and prev == cur:
            continue
        
        nx, ny = x + dx, y + dy

        if 0 <= nx < h and 0 <= ny < w and graph[nx][ny] != "#":
            if (nx, ny, cur) not in visited:
                visited.add((nx, ny, cur))
                dq.append((nx, ny, cur, path + cur))

print("No")

"""
o : prev == cur
x : prev != cur
# : #

x, y, prev, path(++)

"""