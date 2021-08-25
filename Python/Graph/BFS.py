from collections import deque

def solve(mat, s):
    n, m = len(mat), len(mat[0])

    def in_bounds(i, j):
        return 0 <= i < n and 0 <= j < m 

    def get_neighs(i, j):
        for ni, nj in [(i-1, j), (i+1, j), (i, j-1), (i, j+1)]:
            if in_bounds(ni, nj) and mat[ni][nj] == 0: 
                mat[ni][nj] = 1
                yield ni, nj
    
    si, sj = s; mat[si][sj] = 1
    bfs = deque([s])
    d = 1
    while bfs:
        for _ in range(len(bfs)):
            i, j = bfs.popleft()
            bfs.extend(get_neighs(i, j))
            d += 1
    return -1

def solve(adj, s):
    bfs = deque([s])
    vis = set([s])
    d = 1
    while bfs:
        for _ in range(len(bfs)):
            u = bfs.popleft()
            for v in adj[u]:
                if v not in vis:
                    vis.add(v)
                    bfs.append(v)
        d += 1
    return -1