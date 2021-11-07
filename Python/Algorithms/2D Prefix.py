def solve(mat):
    n, m = len(mat), len(mat[0])

    pre = [[0]*(m+1) for i in range(n+1)]
    for i in range(n):
        for j in range(m):
            pre[i][j] = mat[i][j]+pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]

    def get_sum(i, j, r, c):
        return pre[i][j]+pre[r-1][c-1]-pre[i][c-1]-pre[r-1][j]
