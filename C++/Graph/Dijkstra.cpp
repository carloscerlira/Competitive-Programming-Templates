#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;
const long long INF = 1e9;

const int N = 1e5+1;
vector<vector<pair<int, int>>> adj(N);

void dijkstra(int n, int s, vector<long long>& d, vector<vector<pair<int, int>>>& adj) {
    d.assign(n, INF);
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> q;
    d[s] = 0;
    q.push({d[s], s});
    while (!q.empty()) {
        long long du = q.top().first;
        int u = q.top().second;
        q.pop();
        if (du != d[u]){continue;}
        
        for(auto& edge : adj[u]){
            int v = edge.first;
            int w = edge.second;
            if (d[u] + w < d[v]) {
                d[v] = d[u] + w;
                q.push({d[v], v});
            }
        }
    }
}

void main(){
    return;
}