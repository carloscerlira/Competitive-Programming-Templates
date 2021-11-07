def get_z(s):
    n = len(s)
    z = [0]*n
    l, r = 0, 0
    for i in range(n):
        if i > r:
            l, r = i, i
            k = 0
            while r < n and s[k] == s[r]:
                r += 1
                k += 1
            z[i] = r-l
        else:
            l, r = i, min(i+z[i-l], r)
            k = r-l 
            while r < n and s[k] == s[r]:
                k += 1
                r += 1
            z[i] = r-l
    return z 

def search(text, pattern):
    concat = pattern + '#' + text
    n, m = len(concat), len(pattern)
    z = get_z(concat)
    for i in range(m, n):
        if z[i] == m:
            print("Pattern found at index", i-m-1)
  
text = "GEEKS FOR GEEKS"
pattern = "GEEK"
search(text, pattern)
