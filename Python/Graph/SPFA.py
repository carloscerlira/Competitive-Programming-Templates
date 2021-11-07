import math
from collections import deque, defaultdict

#Average O(E)
#Worst O(VE)
def solve(edges, s):
    dis = defaultdict(lambda : math.inf)
    dis[s] = 0
    
    adj = defaultdict(list)
    for u, v, w in edges:
        adj[u].append((v, w))

    dq = deque([s])
    indq = defaultdict(bool)
    indq[s] = True
    while dq:
        u = dq.popleft()
        indq[u] = False 
        for v, w in adj[u]:
            dv = dis[u]+w
            if dv < dis[v]:
                dis[v] = dv
                if indq[v]: continue 
                indq[v] = True 
                dq.append(v)
    return dis


