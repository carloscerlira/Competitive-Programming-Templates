#include <bits/stdc++.h>
using namespace std;

struct Hash{
    const int p = 31; 
    const long long m = 1e9 + 9;
    vector<long long> p_pow, h;
    int n;

    void init(string s){
        n = s.size();
        p_pow.resize(n, 0); 
        p_pow[0] = 1;
        for (int i = 1; i < n; i++) 
            p_pow[i] = (p_pow[i-1] * p) % m;

        h.resize(n+1, 0);
        for (int i = 0; i < n; i++)
            h[i+1] = (h[i] + (s[i] - 'a' + 1) * p_pow[i]) % m;
    
        return;
    }
    
    // hash[i...j] = h[j+1]-h[i]
    long long get(int i, int j){
        return ((h[j+1]-h[i]+m)%m*p_pow[n-1-i])%m;
    }
};

void main(){
    return;
}