from collections import defaultdict
class DisjointSet:
    def __init__(self):
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
        if a not in self.parent: 
            self.parent[a] = a
        if self.parent[a] == a:
            return a    
        self.parent[a] = self.find(self.parent[a])
        return self.parent[a]