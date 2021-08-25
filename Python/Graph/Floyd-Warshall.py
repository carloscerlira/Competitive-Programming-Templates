import math
def solve(n, edges):
    dis = [[math.inf for _ in range(n)] for _ in range(n)]
    for u, v, w in edges:
        dis[u][v] = w

    for i in range(n):
        dis[i][i] = 0
    
    for k in range(n):
        for i in range(n):
            for j in range(n):
                dis[i][j] = min(dis[i][j], dis[i][k]+dis[k][j])
    
    return dis  