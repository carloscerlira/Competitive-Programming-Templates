def binary_search(l, r, val):
    while l <= r:
        mid = l+(r-l)//2
        if val(mid):
            l = mid+1
        else:
            r = mid-1
    return l
    
