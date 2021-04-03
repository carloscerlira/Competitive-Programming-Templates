import math
def solve(n, s, edges):
    dist = [math.inf for i in range(n)]
    dist[s] = 0
    for _ in range(n):
        for u, v, w in edges:
            if dis[u] + w < dis[v]:
                dis[v] = dis[u] + w
    return dis