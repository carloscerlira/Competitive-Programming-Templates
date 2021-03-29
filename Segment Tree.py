class SegmentTree():
    def __init__(self, arr):
        n = len(arr)
        self.n = n 
        self.tree = [0]*(2*n)
        self.build(arr) 
  
    def build(self, arr):
        n = self.n
        for i in range(n): 
            self.tree[n+i] = arr[i]; 
        
        for i in range(n-1, 0, -1): 
            self.tree[i] = self.tree[i << 1] + self.tree[i << 1 | 1]
    
    def update(self, p, value) : 
        n = self.n
        self.tree[p + n] = value
        p = p + n;         
        i = p;
        
        while i > 1 :
            self.tree[i >> 1] = self.tree[i] + self.tree[i^1]
            i >>= 1; 
    
    def query(self, l, r):
        n = self.n 
        res = 0
        l += n; r += n;

        while l < r:
            if (l & 1):
                res += self.tree[l]
                l += 1
            if (r & 1):
                r -= 1
                res += self.tree[r] 
            l >>= 1; r >>= 1
            
        return res; 
  
a = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]; 
st = SegmentTree(a)
print(st.query(0, 3))