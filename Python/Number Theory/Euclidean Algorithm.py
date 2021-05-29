# Time: O(log(min(a, b)))
def gcd(a:int, b:int):
    if (b == 0):
        return a
    return gcd (b, a%b)

def gcd_ext(a:int, b:int): 
    if b == 0:
        return a, 1, 0
    g, x1, y1 = gcd_ext(b, a%b)
    x, y = y1, x1-y1*(a//b)
    return g, x, y 

def lcm(a:int, b:int):
    return a//gcd(a, b)*b
