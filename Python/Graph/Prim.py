import heapq 

#Time O(ElogV) 
def get_min_cost(adj, s):
    n = len(adj)
    ans = 0
    vis = set()
    heap = [(0, s)]

    while len(vis) < n and heap:
        cost, u = heapq.heappop(heap)
        if u in vis: continue
        vis.add(u)
        ans += cost
        for v, w in adj[u]:
            if v in vis: continue 
            heapq.heappush(heap, (w, v))
    return ans