from collections import defaultdict
class DisjointSet:
    def __init__(self, n):
        self.parent = defaultdict(lambda : None)
        self.rank = defaultdict(lambda : 1)
    
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
        if a not in parent: 
            parent[a] = a
        if self.parent[a] == a:
            return a    
        self.parent[a] = self.find(self.parent[a])
        return self.parent[a]

def get_min_cost(edges):
    edges.sort()
    ans = 0
    ds = DisjointSet()
    for u, v, w in edges:
        if ds.find(u) != ds.find(v):
            ds.union(u, v)
            ans += w
    return ans