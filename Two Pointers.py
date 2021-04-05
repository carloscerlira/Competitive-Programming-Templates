def solve(l, r, n, condition):
    while r < n:
        while condition(l, r):
            r += 1
        
        while not condition(l, r):
            l += 1
    return 