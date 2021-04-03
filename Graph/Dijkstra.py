from heapq import heappop, heappush
import math 
from collections import defaultdict

#O(E+VlogV)
def solve(adj, s):
    vis = defaultdict(bool)
    dis = defaultdict(lambda : math.inf)
    pq = []
    
    dis[s] = 0
    heappush(pq, (0, s))
    while len(pq) != 0:
        d, u = heappop(pq)
        vis[u] = True 
        for v, cost in adj[u]:
            if vis[v]: continue
            new_dis = dis[u]+cost
            if new_dis < dis[v]:
                dis[v] = new_dis
                heappush(pq, (dis[v], v))
    return dis
