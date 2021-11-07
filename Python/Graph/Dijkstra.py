from heapq import heappop, heappush
import math 
from collections import defaultdict

#O(ElogV)
def solve(adj, s):
    dis = defaultdict(lambda : math.inf)
    dis[s] = 0
    pq = [(dis[s], s)]
    while pq:
        du, u = heappop(pq)
        if du != dis[u]: continue
        for v, w in adj[u]:
            dv = du+w
            if dv < dis[v]:
                dis[v] = dv
                heappush(pq, (dis[v], v))
    return dis