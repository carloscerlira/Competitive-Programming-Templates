import math
from collections import deque 

#Average O(V)
#Worst O(VE)

def solve(edges, s):
    dis = [math.inf for _ in range(n)]
    dis[s] = 0
    
    adj = collections.defaultdict(list)
    for u, v, w in times:
        weight[u].append((v, w))

    queue = deque([s])
    while queue:
        u = queue.popleft()
        for v, w in adj[u]:
            if dis[u] + w < dis[v]:
                dis[v] = dis[u] + w
                queue.append(v)
    return dis