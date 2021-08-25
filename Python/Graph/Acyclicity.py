def solve(adj):
    n = len(adj)

    def dfs(u):
        nonlocal cycle 
        if col[u]:
            if col[u] == 1: cycle = True 
            return 
        col[u] = 1
        for v in adj[u]:
            dfs(v)
        col[u] = 2    

    cycle = False 
    col = [0]*n
    for u in range(n):
        if not col[u]: dfs(u)

    return cycle 