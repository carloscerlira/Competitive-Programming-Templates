import math 

class SparseTable:
    def __init__(self, arr, f, base):
        self.f = f 
        self.base = base 
        self.build(arr)
    
    def build(self, arr):
        self.n = len(arr); 
        self.b = int(math.log2(self.n))+1
        n, b = self.n, self.b 

        self.st = [[0]*(b+1) for i in range(n+1)]

        for i in range(n):
            self.st[i][0] = arr[i]

        for j in range(1, b+1):
            for i in range(n):
                if i+(1 << j)-1 >= n: break 
                self.st[i][j] = self.f(self.st[i][j-1], self.st[i+(1 << (j-1))][j-1]) 

    def query(self, l, r):
        n, b = self.n, self.b
        res = self.base 
        for j in range(b+1, -1, -1):
            if ((1 << j) <= r-l+1):
                res = self.f(res, self.st[l][j])
                l += (1 << j)
        return res 
    
a = [1, 3, 5, 1, -1]; 
# st = SparseTable(a, f=lambda x, y: max(x, y), base=-math.inf)
# st = SparseTable(a, f=lambda x, y: min(x, y), base=math.inf)
# st = SparseTable(a, f=lambda x, y: x+y, base=0)
print(st.query(1, 4))

