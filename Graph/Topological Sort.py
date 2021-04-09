from collections import defaultdict, deque

#Time O(V+E)
def solve(adj):
    n = len(adj)
    indegree = defaultdict(int)
    for u in range(n):
        for v in adj[u]:
            indegree[v] += 1

    queue = deque([])
    for u in range(n):
        if indegree[u] == 0:
            queue.append(u)
            
    while queue:
        u = queue.popleft()
        for v in adj[u]:
            indegree[v] -= 1
            if indegree[v] == 0:
                queue.append(v)
    
    for u in range(n):
        if indegree[u] != 0: return False 
    return True

