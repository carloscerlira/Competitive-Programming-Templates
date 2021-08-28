#include "Header.cpp"

int main(){
    int n = 100;
    vi prime(n+1, -1);
    FOR(i, 0, n){
        prime[i] = i;
    }

    for (int i = 2; i * i <= n; i++) {
        if (prime[i] == i){
            for (int j = i * i; j <= n; j += i)
                prime[j] = i;
        }
    }

    int x = 6;
    vi pf;
    while(x != 1){
        pf.pb(prime[x]);
        x = x/prime[x];
    }
    debug(pf);
}