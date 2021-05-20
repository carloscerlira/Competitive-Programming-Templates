import math
# Time: 
# Construction: O(nlogn)
# Query: O(logn)
# Space: O(n)

class SegmentTree():
    def __init__(self, arr):
        n = len(arr)
        self.n = n 
        self.tree = [0]*2*n
        self.build(arr)   
    
    def build(self, arr):
        n = self.n
        for i in range(n): 
            self.tree[n+i] = arr[i]; 
        
        for i in range(n-1, 0, -1): 
            self.tree[i] = self.tree[i << 1] + self.tree[i << 1 | 1]

    def update(self, index, val) : 
        n = self.n
        self.tree[index + n] = val
        index = index + n;         
        i = index;
        
        while i > 1:
            self.tree[i >> 1] = self.tree[i] + self.tree[i^1]
            i >>= 1; 
    
    def query(self, l, r):
        n = self.n 
        res = 0
        l += n; r += n+1;

        while l < r:
            if (l & 1):
                res += self.tree[l]
                l += 1
            if (r & 1):
                r -= 1
                res += self.tree[r] 
            l >>= 1; r >>= 1
            
        return res; 

    # def build(self, arr):
    #     n = self.n
    #     for i in range(n): 
    #         self.tree[n+i] = arr[i]; 
        
    #     for i in range(n-1, 0, -1): 
    #         self.tree[i] = min(self.tree[i << 1], self.tree[i << 1 | 1])

    # def update(self, index, val): 
    #     n = self.n
    #     self.tree[index + n] = val
    #     index = index + n;         
    #     i = index;
        
    #     while i > 1:
    #         self.tree[i >> 1] = min(self.tree[i], self.tree[i^1])
    #         i >>= 1; 
    
    # def query(self, l, r):
    #     n = self.n 
    #     res = math.inf
    #     l += n; r += n+1;

    #     while l < r:
    #         if (l & 1):
    #             res = min(res, self.tree[l])
    #             l += 1
    #         if (r & 1):
    #             r -= 1
    #             res = min(res, self.tree[r]) 
    #         l >>= 1; r >>= 1
            
    #     return res; 
  
a = [1, 3, 5, 1]; 
st = SegmentTree(a)
print(st.query(0, 2))