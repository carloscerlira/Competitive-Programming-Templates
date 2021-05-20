import math
from collections import deque, defaultdict

#Average O(V)
#Worst O(VE)
def solve(edges, s):
    dis = defaultdict(lambda : math.inf)
    dis[s] = 0
    
    adj = defaultdict(list)
    for u, v, w in edges:
        adj[u].append((v, w))

    queue = deque([s])
    while queue:
        u = queue.popleft()
        for v, w in adj[u]:
            if dis[u] + w < dis[v]:
                dis[v] = dis[u] + w
                queue.append(v)
    return dis


