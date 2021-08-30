#include "Header.cpp"

void main(){
    int n, q;
    vi par(n+1);
    par[1] = 0;
    int LOG = 20;
    vector<vi> up(n+1, vi(LOG, 0));

    FOR(u, 1, n+1){
        up[u][0] = par[u];
    }
    FOR(j, 1, LOG){
        FOR(v, 1, n+1){
            up[v][j] = up[up[v][j-1]][j-1];
        }
    }

    int x, k;
    FOR(i, 0, LOG){
        if (k & (1 << i)){
            x = up[x][i];
        }
    }
    return;
}