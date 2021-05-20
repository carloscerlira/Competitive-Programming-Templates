def get_f(s):
    n = len(s)
    f = [0]*n 
    for i in range(1, n):
        j = f[i-1]
        while j > 0 and s[i] != s[j]:
            j = f[j-1]
        if s[i] == s[j]: j += 1
        f[i] = j
    return f 

def search(text, pattern):
    concat = pattern + text
    n, m = len(concat), len(pattern)
    f = get_f(concat)
    for i in range(m, n):
        if f[i] == m:
            print("Pattern found at index", i-m-m+1)
  
text = "GEEKS FOR GEEKS"
pattern = "GEEK"
search(text, pattern)