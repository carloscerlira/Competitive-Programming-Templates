def solve(A):
    n = len(A)
    def merge(start, mid, end):
        B = [] 
        s1, s2 = start, mid+1
        while s1 <= mid and s2 <= end:
            if A[s1] < A[s2]:
                B.append(A[s1])
                s1 += 1
            else:
                B.append(A[s2])
                s2 += 1
        B += A[s1:mid+1]+A[s2:end+1]
        A[start:end+1] = B 
        return  

    def merge_sort(start, end):
        if start >= end: return
        mid = start+(end-start)//2
        merge_sort(start, mid)
        merge_sort(mid+1, end)
        merge(start, mid, end)
        return 

    n = len(A)
    merge_sort(0, n-1)
    return 
