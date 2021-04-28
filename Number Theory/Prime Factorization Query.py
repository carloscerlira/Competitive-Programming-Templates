import math 

#Time: O(nlogn)
def get_sieve(n):
    sieve = [i for i in range(n)]
    
    for i in range(4, n, 2):
        sieve[i] = 2
  
    for i in range(3, math.ceil(math.sqrt(n))):
        if sieve[i] != i: continue 
        for j in range(i * i, n, i): 
            if sieve[j] == j:
                sieve[j] = i
    return sieve 
sieve = get_sieve(n=100)
  
#Time: O(logn)
def get_factorization(x):
    ret = list()
    while (x != 1):
        ret.append(sieve[x])
        x = x // sieve[x]
    return ret
  
print(get_factorization(10))