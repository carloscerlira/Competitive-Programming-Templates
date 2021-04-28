import heapq 

def get_min_cost(adj):
    n = len(adj)
    start, ans = 0, 0
    vis = set()
    heap = []
    for u, w in adj[start]:
        heapq.heappush(heap, (w, u))

    while len(vis) < n and heap:
        cost, u = heapq.heappop(heap)
        if u not in vis:
            vis.add(u)
            ans += cost
            for v, w in adj[u]:
                if v not in vis:
                    heapq.heappush(heap, (w, v))
    return ans