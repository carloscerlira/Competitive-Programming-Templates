def solve(l, r, n, val):
    while r < n:
        if val(l, r):
            r += 1
        else:
            l += 1
    return 