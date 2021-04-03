from collections import deque
def solve(adj):
    def bfs(u):
        queue = deque([u])
        vis = set([u])
        d = 1
        while queue:
            for i in range(len(queue)):
                u = queue.popleft()
                for v in adj[u]:
                    if v not in vis:
                        vis.add(v)
                        queue.append(v)
            d += 1
    vis = set()
    return bfs(0)