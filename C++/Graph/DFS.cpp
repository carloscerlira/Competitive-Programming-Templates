#include <bits/stdc++.h>
using namespace std;
#define print(x) cout << x << endl;

vector<vector<int>> adj; // graph represented as an adjacency list
int n; // number of vertices
vector<bool> vis;

void dfs(int v){
    vis[v] = true;
    for (int u : adj[v]) {
        if (!vis[u])
            dfs(u);
    }
}

int main(){
    return 0;
}