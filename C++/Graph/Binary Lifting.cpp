#include <bits/stdc++.h>
using namespace std;

void main(){
    int n, q;
    vector<int> par(n+1);
    par[1] = 0;
    int LOG = 20;
    vector<vector<int>> up(n+1, vector<int>(LOG, 0));

    for(int u = 1; u <= n; u++){
        up[u][0] = par[u];
    }
    for(int j = 1; j <= LOG; j++){
        for(int v=1; v <= n; v++){
            up[v][j] = up[up[v][j-1]][j-1];
        }
    }

    int x, k;
    for(int i = 0; i < LOG; i++){
        if (k & (1 << i)){
            x = up[x][i];
        }
    }
    return;
}