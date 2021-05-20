import random 
def solve(A):
    def partition(A, start, end):
        i = start+1
        rnd = random.randint(start, end)
        A[start], A[rnd] = A[rnd], A[start]
        piv = A[start]
        for j in range(start+1, end+1):
            if A[j] < piv:
                A[j], A[i] = A[i], A[j]
                i += 1
        A[i-1], A[start] = piv, A[i-1] 
        return i-1

    def quick_sort(A, start, end):
        if (start < end):
            piv_idx = partition(A, start, end)
            quick_sort(A, start, piv_idx-1)
            quick_sort(A, piv_idx+1, end)
        return 

    n = len(A)
    quick_sort(A, 0, n-1)
    return 

