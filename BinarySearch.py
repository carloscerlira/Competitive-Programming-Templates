def binary_search(l, r, eva):
    while l <= r:
        if eva(l):
            l += 1
        else:
            r -= 1
    return r 
    
