def solve(adj):
    def dfs(u):
        if u in vis: return 
        vis.add(u)
        
        for v in adj[u]:
            dfs(v)

        return 

    vis = set()
    return dfs(0)