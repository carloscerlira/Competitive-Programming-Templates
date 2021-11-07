#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;
const long long INF = 1e9;

vector<int> get_pf(){
    int n = 100;
    vector<int> prime(n+1, -1);
    for(int i=0; i<n; i++){
        prime[i] = i;
    }

    for (int i = 2; i * i <= n; i++) {
        if (prime[i] == i){
            for (int j = i * i; j <= n; j += i)
                prime[j] = i;
        }
    }

    int x = 6;
    vector<int> pf;
    while(x != 1){
        pf.push_back(prime[x]);
        x = x/prime[x];
    }

    return pf;
}