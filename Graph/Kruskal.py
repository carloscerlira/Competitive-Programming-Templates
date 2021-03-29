class DisjointSet:
    def __init__(self, n):
        self.parent = [i for i in range(n)]
        self.rank = [1 for _ in range(n)]
    
    def union(self, a, b):
        pa = self.find(a)
        pb = self.find(b)
        if pa == pb: return
        if self.rank[pa] > self.rank[pb]:
            self.parent[pb] = pa
            self.rank[pa] += self.rank[pb]
        else:
            self.parent[pa] = pb
            self.rank[pb] += self.rank[pa]
    
    def find(self, a):
        if self.parent[a] == a:
            return a    
        self.parent[a] = self.find(self.parent[a])
        return self.parent[a]

class Solution:
    def get_min_cost(self, edges) -> int:
        edges.sort()
        ans = 0
        ds = DisjointSet(n)
        for u, v, w in edges:
            if ds.find(u) != ds.find(v):
                ds.union(u, v)
                ans += w
        return ans