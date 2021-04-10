import math 
MAXN = 499
spf = [0 for i in range(MAXN)]
def sieve():
    spf[1] = 1
    for i in range(2, MAXN):
        spf[i] = i
  
    for i in range(4, MAXN, 2):
        spf[i] = 2
  
    for i in range(3, math.ceil(math.sqrt(MAXN))):
        if (spf[i] == i):
            for j in range(i * i, MAXN, i): 
                if (spf[j] == j):
                    spf[j] = i
sieve()
  
#O(logn)
def getFactorization(x):
    ret = list()
    while (x != 1):
        ret.append(spf[x])
        x = x // spf[x]
    return ret
  
