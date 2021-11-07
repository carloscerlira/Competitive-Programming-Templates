#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;
const long long INF = 1e9;

const int N = 1e5+1;
vector<vector<int>> adj(N);
vector<bool> on_stack(N, false);
vector<int> idx(N, -1);
vector<int> low(N, -1);
deque<int> dq;
int components, cnt = 0;

void dfs(int u){
    dq.push_back(u);
    on_stack[u] = true;
    idx[u] = low[u] = cnt;
    cnt += 1;

    for(auto& v : adj[u]){
        if(idx[v] == -1){dfs(v);}
        if(on_stack[v]){low[u] = min(low[u], low[v]);}
    }

    if(idx[u] == low[u]){
        while(!dq.empty()){
            int v = dq.back();
            dq.pop_back();
            on_stack[v] = false;
            low[v] = low[u];
            if(v == u){break;}
        }
        components += 1;
    }
}