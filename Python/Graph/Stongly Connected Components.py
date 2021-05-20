from collections import defaultdict, deque 

#Time O(V+E)
#Space O(V+E)
def solve(adj):
    on_stack = defaultdict(bool)
    idx = defaultdict(lambda : -1)
    low = defaultdict(lambda : -1)

    def dfs(u):
        nonlocal cnt, components
        stack.append(u)
        on_stack[u] = True
        idx[u] = low[u] = cnt
        cnt += 1

        for v in adj[u]:
            if idx[v] == -1: dfs(v)
            if on_stack[v]: low[u] = min(low[u], low[v])

        if idx[u] == low[u]:
            while stack:
                v = stack.pop()
                on_stack[v] = False
                low[v] = low[u]
                if v == u: break
            components += 1

    stack = deque([])
    components, cnt = 0, 0
    for u in adj:
        if idx[u] != -1: continue
        dfs(u)

    return components