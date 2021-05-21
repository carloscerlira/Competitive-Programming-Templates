def bin_exp(a:int, b:int) -> int: 
    ans = 1
    while b > 0:
        if b%2 == 1: ans = ans*a
        a = a*a 
        b = b//2
    return ans 

print(bin_exp(5, 8))