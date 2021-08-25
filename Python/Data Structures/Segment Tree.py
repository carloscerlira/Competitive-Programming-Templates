import math
# Time: 
# Construction: O(nlogn)
# Query: O(logn)
# Space: O(n)

class SegmentTree():
    def __init__(self, arr, f, base):
        n = len(arr)
        self.n = n 
        self.tree = [0]*2*n
        self.f = f
        self.base = base
        self.build(arr)   
    
    def build(self, arr):
        n = self.n
        for i in range(n): 
            self.tree[n+i] = arr[i]; 
        
        for i in range(n-1, 0, -1): 
            self.tree[i] = self.f(self.tree[i << 1], self.tree[i << 1 | 1])

    def update(self, index, val): 
        n = self.n
        self.tree[index + n] = val
        index = index + n;         
        i = index
        
        while i > 1:
            self.tree[i >> 1] = self.f(self.tree[i], self.tree[i^1])
            i >>= 1; 
    
    def query(self, l, r):
        l += self.n; r += self.n+1
        res = self.base

        while l < r:
            if (l & 1):
                res = self.f(res, self.tree[l])
                l += 1
            if (r & 1):
                r -= 1
                res = self.f(res, self.tree[r])
            l >>= 1; r >>= 1
            
        return res; 

a = [1, 3, 5, 1, -1]; 
# st = SegmentTree(a, f=lambda x, y: max(x, y), base=-math.inf)
# st = SegmentTree(a, f=lambda x, y: min(x, y), base=math.inf)
st = SegmentTree(a, f=lambda x, y: x+y, base=0)
print(st.query(1, 4))