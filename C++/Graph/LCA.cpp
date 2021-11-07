#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+1;
int LOG = 20;
vector<vector<int>> adj(N);
vector<vector<int>> up(N, vector<int>(LOG));
vector<int> depth(N);
vector<int> par(N);

void dfs(int u, int p){
    par[u] = p;
    for(auto& v : adj[u]){
        if(v == p){continue;}
        depth[v] = depth[u]+1;
        dfs(v, u);
    }
}

int get_lca(int a, int b){
    if (depth[a] < depth[b]){swap(a, b);}

    int k = depth[a]-depth[b];
    for(int i=0; i < LOG; i++){
        if (k & (1 << i)){
            a = up[a][i];
        }
    }

    if (a == b){return a;}
    for(int j=LOG-1; j >= 0; j--){
        if(up[a][j] != up[b][j]){
            a = up[a][j];
            b = up[b][j];
        }
    }
    return up[a][0];
}

void solve(){
    par[1] = 1;
    depth[1] = 0;
    dfs(1,1);
    for(int u=1; u < N; u++){
        up[u][0] = par[u];
    }
    for(int j=1; j < LOG; j++){
        for(int v=1; v < N; v++){
            up[v][j] = up[up[v][j-1]][j-1];
        }
    }
}
