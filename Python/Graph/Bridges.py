def solve(n, edges):
    adj = [[] for i in range(n)]
    for u, v in edges:
        adj[u].append(v)
        adj[v].append(u)
    
    level = [0]*n
    low = [0]*n
    def dfs(u, par, l):
        if level[u]: return
        low[u] = level[u] = l

        for v in adj[u]:
            dfs(v, u, l+1)
        
        low[u] = min([l]+[low[v] for v in adj[u] if v != par])
        return 

    dfs(0, None, 1)
    ans = []
    for u, v in edges:
        if low[u] > level[v] or low[v] > level[u]:
            ans.append([u, v])
    return ans


n = 4; edges = [[0,1],[1,2],[2,0],[1,3]]
print(solve(n, edges))