import heapq 

def get_min_cost(adj)
    n = len(adj)
    start, ans = 0, 0
    vis = set()
    heap = []
    for u, w in adj[start]:
        heapq.heappush(heap, (w, v))

    while len(vis) < n and heap:
        _, u = heapq.heappop(heap)
        if u not in vis:
            vis.add(u)
            res += cost
            for w, v in adj[u]:
                if v not in vis:
                    heapq.heappush(heap, (w, v))
    return res