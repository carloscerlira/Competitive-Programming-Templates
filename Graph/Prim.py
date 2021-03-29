import heapq 

def get_min_cost(adj)
    start, ans = 0, 0
    vis = set()
    min_heap = []
    for cost, v in adj[start]:
        heapq.heappush(min_heap, (cost, v))
    while len(vis) < len(points) + 1 and min_heap:
        cost, next_node = heapq.heappop(min_heap)
        if next_node not in vis:
            vis.add(next_node)
            res += cost
            for next_cost, v in adj[next_node]:
                if v not in vis:
                    heapq.heappush(min_heap, (next_cost, adj))
    return res