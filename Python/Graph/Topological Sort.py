from collections import defaultdict, deque

#Time O(V+E)
def solve(adj):
    n = len(adj)
    in_deg = defaultdict(int)
    for u in range(n):
        for v in adj[u]:
            in_deg[v] += 1

    queue = deque([u for u in range(n) if in_deg[u] == 0])
    while queue:
        u = queue.popleft()
        for v in adj[u]:
            in_deg[v] -= 1
            if in_deg[v] == 0:
                queue.append(v)
     
    return all((in_deg[u] == 0 for u in in_deg), default=True)

