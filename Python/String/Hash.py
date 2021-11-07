def solve(s):
    n = len(s)

    p = 33
    m = 10**9+9
    h = [0]*(n+1)
    pow_p = [0]*n
    pow_p[0] = 1
    for i in range(1, n):
        pow_p[i] = (pow_p[i-1]*p)%m

    for i in range(n):
        h[i] = (h[i-1] + (ord(s[i])-ord('a')+1)*pow_p[i])%m

    vis = set()
    for j in range(n):
        for i in range(j+1):
            curr_h = (h[j]-h[i-1])%m
            vis.add((curr_h*pow_p[n-i-1])%m)

    return len(vis)
