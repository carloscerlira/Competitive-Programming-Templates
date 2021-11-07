def solve(mat, s):
    n, m = len(mat), len(mat[0])

    def in_bounds(i, j):
        return 0 <= i < n and 0 <= j < m 

    def get_neighs(i, j):
        for ni, nj in [(i-1, j), (i+1, j), (i, j-1), (i, j+1)]:
            if in_bounds(ni, nj): 
                yield ni, nj 
    
    def dfs(i, j):
        if mat[i][j] == 1: return 
        mat[i][j] = 0
        
        for ni, nj in get_neighs(i, j):
            dfs(ni, nj)

        return 

    dfs(s)
    return     

def solve(adj, s):
    def dfs(u):
        if u in vis: return 
        vis.add(u)
        
        for v in adj[u]:
            dfs(v)

        return 

    vis = set()
    return dfs(s)