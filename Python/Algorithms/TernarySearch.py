eps = 1e-5
def ternary_search(l, r, f):
    while (r-l) > eps:
        m1, m2 = l+(r-l)//3, r-(r-l)//3
        if f(m1) < f(m2):
            l = m1
        else:
            r = m2 
    return f(l)