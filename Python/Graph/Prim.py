import heapq 

#Time O(ElogV) 
def get_min_cost(adj):
    n = len(adj)
    start, ans = 0, 0
    vis = set()
    heap = []
    for u, w in adj[start]:
        heapq.heappush(heap, (w, u))

    while len(vis) < n and heap:
        cost, u = heapq.heappop(heap)
        if u in vis: continue 
        vis.add(u)
        ans += cost
        for v, w in adj[u]:
            if v in vis: continue 
            heapq.heappush(heap, (w, v))
    return ans