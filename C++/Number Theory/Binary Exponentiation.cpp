long long binpow(long long a, long long b, long long m){
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

template<typename T>
void multiply(vector<vector<T>>& A, vector<vector<T>>& B){
    int N = sz(A);
    vector<vector<T>> R(N, vector<T>(N));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            R[i][j] = 0;
            for(int k = 0; k < N; k++){
                R[i][j] = R[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            A[i][j] = R[i][j];
        }
    }
}
template<typename T>
void power_matrix(vector<vector<T>>& A, int n){
    int N = sz(A);
    vector<vector<T>> B(N, vector<T>(N));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            B[i][j] = A[i][j];
        }
    }
    
    n = n - 1;
    while (n > 0){
        if(n & 1){multiply (A, B);}        
        multiply (B, B);
        n = n >> 1;  
    }
}